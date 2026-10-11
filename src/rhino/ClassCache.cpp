#include "rhino/ClassCache.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/ClassCache.h"
#include "java/util/concurrent/ConcurrentHashMap.h"
#include "rhino/ScriptableObject.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/Scriptable.h"
#include "java/lang/RuntimeException.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_rhino_ClassCache_AKEY;

void mark_rhino_ClassCache(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ClassCache_AKEY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ClassCache_AKEY)->clazz)->markFunction)((jobject) SF_rhino_ClassCache_AKEY, mark, depth + 1);
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
	auto self = (rhino_ClassCache *) object;
	if (self->F_classTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classTable)->clazz)->markFunction)((jobject) self->F_classTable, mark, depth + 1);
	if (self->F_classAdapterCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classAdapterCache)->clazz)->markFunction)((jobject) self->F_classAdapterCache, mark, depth + 1);
	if (self->F_interfaceAdapterCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interfaceAdapterCache)->clazz)->markFunction)((jobject) self->F_interfaceAdapterCache, mark, depth + 1);
	if (self->F_associatedScope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_associatedScope)->clazz)->markFunction)((jobject) self->F_associatedScope, mark, depth + 1);
}

void init_rhino_ClassCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ClassCache(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_cachingIsEnabled = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ClassCache_get_rhino_Scriptable_R_rhino_ClassCache(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ClassCache(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_rhino_ClassCache(ctx);
	sp[1].o = (jobject)SF_rhino_ClassCache_AKEY;
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopScopeValue_rhino_Scriptable_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_rhino_ClassCache, sp[0].o));
	LINE_NUMBER(35);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(36);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't find top level scope for ClassCache.get"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_ClassCache_associate_rhino_ScriptableObject_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:associate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(54);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_ClassCache(ctx);
	sp[2].o = (jobject)SF_rhino_ClassCache_AKEY;
	sp[1].o = (jobject)((func_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(57);
	((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_associatedScope = (jref) (frame[1].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_ClassCache_clearCaches(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:clearCaches", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_classTable = (jref) (jobject(nullptr));
	LINE_NUMBER(68);
	((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_classAdapterCache = (jref) (jobject(nullptr));
	LINE_NUMBER(69);
	((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_interfaceAdapterCache = (jref) (jobject(nullptr));
	LINE_NUMBER(70);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ClassCache_isCachingEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:isCachingEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return ((jint)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_cachingIsEnabled);
	}

	popStackFrame(ctx);
}

void M_rhino_ClassCache_setCachingEnabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:setCachingEnabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(97);
	if ((frame[1].i) != ((jint)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_cachingIsEnabled)) goto label_1;
	}
	LINE_NUMBER(98);
	popStackFrame(ctx, self);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(99);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(100);
	((func_rhino_ClassCache_clearCaches) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ClassCache_clearCaches])(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(101);
	((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_cachingIsEnabled = (frame[1].i);
	LINE_NUMBER(102);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ClassCache_getClassCacheMap_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:getClassCacheMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_classTable;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ConcurrentHashMap);
	init_java_util_concurrent_ConcurrentHashMap_int_float_int(ctx, sp[1].o, (16), (jfloat(0.75f)), (jint(1)));
	((rhino_ClassCache *) NULL_CHECK(sp[0].o))->F_classTable = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_classTable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ClassCache_getInterfaceAdapterCacheMap_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:getInterfaceAdapterCacheMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_classAdapterCache;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ConcurrentHashMap);
	init_java_util_concurrent_ConcurrentHashMap_int_float_int(ctx, sp[1].o, (16), (jfloat(0.75f)), (jint(1)));
	((rhino_ClassCache *) NULL_CHECK(sp[0].o))->F_classAdapterCache = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_classAdapterCache;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_ClassCache_newClassSerialNumber_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:newClassSerialNumber", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((rhino_ClassCache *) NULL_CHECK(sp[0].o))->F_generatedClassSerial) + (jint(1));
	((rhino_ClassCache *) NULL_CHECK(sp[0].o))->F_generatedClassSerial = temp0;
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ClassCache_getInterfaceAdapter_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:getInterfaceAdapter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_interfaceAdapterCache;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_interfaceAdapterCache;
	sp[1].o = frame[1].o;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_2:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_rhino_ClassCache_cacheInterfaceAdapter_java_lang_Class_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:cacheInterfaceAdapter", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(138);
	if (((jint)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_cachingIsEnabled) == 0) goto label_1;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_interfaceAdapterCache;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ConcurrentHashMap);
	init_java_util_concurrent_ConcurrentHashMap_int_float_int(ctx, sp[1].o, (16), (jfloat(0.75f)), (jint(1)));
	((rhino_ClassCache *) NULL_CHECK(sp[0].o))->F_interfaceAdapterCache = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_interfaceAdapterCache;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(144);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ClassCache_getAssociatedScope_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:getAssociatedScope", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((rhino_ClassCache *) NULL_CHECK((frame[0].o)))->F_associatedScope;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_ClassCache(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ClassCache:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ClassCache(ctx);
	{
	LINE_NUMBER(13);
	clinit_rhino_ClassCache(ctx);
	SF_rhino_ClassCache_AKEY = (((jobject) createStringLiteral(ctx, u8"ClassCache"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ClassCache[] {
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
	(void *) M_rhino_ClassCache_associate_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ClassCache_clearCaches,
	(void *) M_rhino_ClassCache_isCachingEnabled_R_boolean,
	(void *) M_rhino_ClassCache_setCachingEnabled_boolean,
	(void *) M_rhino_ClassCache_getClassCacheMap_R_java_util_Map,
	(void *) M_rhino_ClassCache_getInterfaceAdapterCacheMap_R_java_util_Map,
	(void *) M_rhino_ClassCache_newClassSerialNumber_R_int,
	(void *) M_rhino_ClassCache_getInterfaceAdapter_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_ClassCache_cacheInterfaceAdapter_java_lang_Class_java_lang_Object,
	(void *) M_rhino_ClassCache_getAssociatedScope_R_rhino_Scriptable,
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
	{ "associate", "(Lrhino/ScriptableObject;)Z" },
	{ "clearCaches", "()V" },
	{ "isCachingEnabled", "()Z" },
	{ "setCachingEnabled", "(Z)V" },
	{ "getClassCacheMap", "()Ljava/util/Map;" },
	{ "getInterfaceAdapterCacheMap", "()Ljava/util/Map;" },
	{ "newClassSerialNumber", "()I" },
	{ "getInterfaceAdapter", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "cacheInterfaceAdapter", "(Ljava/lang/Class;Ljava/lang/Object;)V" },
	{ "getAssociatedScope", "()Lrhino/Scriptable;" },
};

static FieldMetadata fields[] {
	{ "AKEY", &class_java_lang_Object, (intptr_t) &SF_rhino_ClassCache_AKEY, "Ljava/lang/Object;", 26 },
	{ "cachingIsEnabled", &class_boolean, offsetof(rhino_ClassCache, F_cachingIsEnabled), "Z", 66 },
	{ "classTable", &class_java_util_Map, offsetof(rhino_ClassCache, F_classTable), "Ljava/util/Map;", 130 },
	{ "classAdapterCache", &class_java_util_Map, offsetof(rhino_ClassCache, F_classAdapterCache), "Ljava/util/Map;", 130 },
	{ "interfaceAdapterCache", &class_java_util_Map, offsetof(rhino_ClassCache, F_interfaceAdapterCache), "Ljava/util/Map;", 130 },
	{ "generatedClassSerial", &class_int, offsetof(rhino_ClassCache, F_generatedClassSerial), "I", 2 },
	{ "associatedScope", &class_rhino_Scriptable, offsetof(rhino_ClassCache, F_associatedScope), "Lrhino/Scriptable;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ClassCache, 0, "()V", 1 },
	{ "get", (intptr_t) SM_rhino_ClassCache_get_rhino_Scriptable_R_rhino_ClassCache, 0, "(Lrhino/Scriptable;)Lrhino/ClassCache;", 9 },
	{ "associate", (intptr_t) M_rhino_ClassCache_associate_rhino_ScriptableObject_R_boolean, VTABLE_rhino_ClassCache_associate_rhino_ScriptableObject_R_boolean, "(Lrhino/ScriptableObject;)Z", 1 },
	{ "clearCaches", (intptr_t) M_rhino_ClassCache_clearCaches, VTABLE_rhino_ClassCache_clearCaches, "()V", 33 },
	{ "isCachingEnabled", (intptr_t) M_rhino_ClassCache_isCachingEnabled_R_boolean, VTABLE_rhino_ClassCache_isCachingEnabled_R_boolean, "()Z", 17 },
	{ "setCachingEnabled", (intptr_t) M_rhino_ClassCache_setCachingEnabled_boolean, VTABLE_rhino_ClassCache_setCachingEnabled_boolean, "(Z)V", 33 },
	{ "getClassCacheMap", (intptr_t) M_rhino_ClassCache_getClassCacheMap_R_java_util_Map, VTABLE_rhino_ClassCache_getClassCacheMap_R_java_util_Map, "()Ljava/util/Map;", 0 },
	{ "getInterfaceAdapterCacheMap", (intptr_t) M_rhino_ClassCache_getInterfaceAdapterCacheMap_R_java_util_Map, VTABLE_rhino_ClassCache_getInterfaceAdapterCacheMap_R_java_util_Map, "()Ljava/util/Map;", 0 },
	{ "newClassSerialNumber", (intptr_t) M_rhino_ClassCache_newClassSerialNumber_R_int, VTABLE_rhino_ClassCache_newClassSerialNumber_R_int, "()I", 49 },
	{ "getInterfaceAdapter", (intptr_t) M_rhino_ClassCache_getInterfaceAdapter_java_lang_Class_R_java_lang_Object, VTABLE_rhino_ClassCache_getInterfaceAdapter_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 0 },
	{ "cacheInterfaceAdapter", (intptr_t) M_rhino_ClassCache_cacheInterfaceAdapter_java_lang_Class_java_lang_Object, VTABLE_rhino_ClassCache_cacheInterfaceAdapter_java_lang_Class_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Object;)V", 32 },
	{ "getAssociatedScope", (intptr_t) M_rhino_ClassCache_getAssociatedScope_R_rhino_Scriptable, VTABLE_rhino_ClassCache_getAssociatedScope_R_rhino_Scriptable, "()Lrhino/Scriptable;", 0 },
	{ "<clinit>", (intptr_t) clinit_rhino_ClassCache, 0, "()V", 8 },
};

Class class_rhino_ClassCache{
		.nativeName = (intptr_t) "rhino/ClassCache",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ClassCache),
		.classVtable = (intptr_t) vtable_rhino_ClassCache,
		.staticInitializer = (intptr_t) clinit_rhino_ClassCache,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ClassCache,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ClassCache = registerClass(&class_rhino_ClassCache);

}
