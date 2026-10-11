#include "arc/struct/GridMap.h"
#include "arc/struct/GridMap.h"
#include "java/lang/Object.h"
#include "arc/struct/LongMap.h"
#include "arc/struct/LongMap_Values.h"
#include "arc/struct/LongMap_Keys.h"

extern "C" {


void mark_arc_struct_GridMap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_GridMap *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_arc_struct_GridMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_GridMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_GridMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongMap);
	init_arc_struct_LongMap(ctx, sp[1].o);
	((arc_struct_GridMap *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong SM_arc_struct_GridMap_getHash_int_int_R_long(jcontext ctx, jint param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:getHash", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_GridMap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return (((jlong((frame[0].i))) << (32)) | ((jlong((frame[1].i))) & (jlong(4294967295ll))));
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_GridMap_get_int_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)((arc_struct_GridMap *) NULL_CHECK((frame[0].o)))->F_map;
	jlong temp0 = (jlong)SM_arc_struct_GridMap_getHash_int_int_R_long(ctx, (frame[1].i), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_LongMap_get_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_get_long_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_GridMap_get_int_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(18);
	jlong temp0 = (jlong)SM_arc_struct_GridMap_getHash_int_int_R_long(ctx, (frame[1].i), (frame[2].i));
	frame[4].l = temp0;
	LINE_NUMBER(19);
	sp[0].o = (jobject)((arc_struct_GridMap *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp1 = (jint)((func_arc_struct_LongMap_containsKey_long_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_containsKey_long_R_boolean])(ctx, sp[0].o, (frame[4].l));
	if (temp1 != 0) goto label_2;
	}
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_struct_GridMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_LongMap_get_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_get_long_R_java_lang_Object])(ctx, sp[0].o, (frame[4].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_GridMap_containsKey_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:containsKey", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_struct_GridMap *) NULL_CHECK((frame[0].o)))->F_map;
	jlong temp0 = (jlong)SM_arc_struct_GridMap_getHash_int_int_R_long(ctx, (frame[1].i), (frame[2].i));
	jint temp1 = (jint)((func_arc_struct_LongMap_containsKey_long_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_containsKey_long_R_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_arc_struct_GridMap_put_int_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_struct_GridMap *) NULL_CHECK((frame[0].o)))->F_map;
	jlong temp0 = (jlong)SM_arc_struct_GridMap_getHash_int_int_R_long(ctx, (frame[1].i), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_LongMap_put_long_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_put_long_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, (frame[3].o));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_GridMap_remove_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_struct_GridMap *) NULL_CHECK((frame[0].o)))->F_map;
	jlong temp0 = (jlong)SM_arc_struct_GridMap_getHash_int_int_R_long(ctx, (frame[1].i), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_LongMap_remove_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_remove_long_R_java_lang_Object])(ctx, sp[0].o, temp0);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_GridMap_values_R_arc_struct_LongMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:values", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_struct_GridMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_LongMap_values_R_arc_struct_LongMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_values_R_arc_struct_LongMap$Values])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_GridMap_keys_R_arc_struct_LongMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:keys", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((arc_struct_GridMap *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_LongMap_keys_R_arc_struct_LongMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_keys_R_arc_struct_LongMap$Keys])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_struct_GridMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_struct_GridMap *) NULL_CHECK((frame[0].o)))->F_map;
	((func_arc_struct_LongMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_GridMap_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/GridMap:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_struct_GridMap *) NULL_CHECK((frame[0].o)))->F_map;
	popStackFrame(ctx);
	return ((jint)((arc_struct_LongMap *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_GridMap[] {
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
	(void *) M_arc_struct_GridMap_get_int_int_R_java_lang_Object,
	(void *) M_arc_struct_GridMap_get_int_int_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_GridMap_containsKey_int_int_R_boolean,
	(void *) M_arc_struct_GridMap_put_int_int_java_lang_Object,
	(void *) M_arc_struct_GridMap_remove_int_int,
	(void *) M_arc_struct_GridMap_values_R_arc_struct_LongMap$Values,
	(void *) M_arc_struct_GridMap_keys_R_arc_struct_LongMap$Keys,
	(void *) M_arc_struct_GridMap_clear,
	(void *) M_arc_struct_GridMap_size_R_int,
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
	{ "get", "(II)Ljava/lang/Object;" },
	{ "get", "(IILjava/lang/Object;)Ljava/lang/Object;" },
	{ "containsKey", "(II)Z" },
	{ "put", "(IILjava/lang/Object;)V" },
	{ "remove", "(II)V" },
	{ "values", "()Larc/struct/LongMap$Values;" },
	{ "keys", "()Larc/struct/LongMap$Keys;" },
	{ "clear", "()V" },
	{ "size", "()I" },
};

static FieldMetadata fields[] {
	{ "map", &class_arc_struct_LongMap, offsetof(arc_struct_GridMap, F_map), "Larc/struct/LongMap;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_GridMap, 0, "()V", 1 },
	{ "getHash", (intptr_t) SM_arc_struct_GridMap_getHash_int_int_R_long, 0, "(II)J", 10 },
	{ "get", (intptr_t) M_arc_struct_GridMap_get_int_int_R_java_lang_Object, VTABLE_arc_struct_GridMap_get_int_int_R_java_lang_Object, "(II)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_arc_struct_GridMap_get_int_int_java_lang_Object_R_java_lang_Object, VTABLE_arc_struct_GridMap_get_int_int_java_lang_Object_R_java_lang_Object, "(IILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "containsKey", (intptr_t) M_arc_struct_GridMap_containsKey_int_int_R_boolean, VTABLE_arc_struct_GridMap_containsKey_int_int_R_boolean, "(II)Z", 1 },
	{ "put", (intptr_t) M_arc_struct_GridMap_put_int_int_java_lang_Object, VTABLE_arc_struct_GridMap_put_int_int_java_lang_Object, "(IILjava/lang/Object;)V", 1 },
	{ "remove", (intptr_t) M_arc_struct_GridMap_remove_int_int, VTABLE_arc_struct_GridMap_remove_int_int, "(II)V", 1 },
	{ "values", (intptr_t) M_arc_struct_GridMap_values_R_arc_struct_LongMap$Values, VTABLE_arc_struct_GridMap_values_R_arc_struct_LongMap$Values, "()Larc/struct/LongMap$Values;", 1 },
	{ "keys", (intptr_t) M_arc_struct_GridMap_keys_R_arc_struct_LongMap$Keys, VTABLE_arc_struct_GridMap_keys_R_arc_struct_LongMap$Keys, "()Larc/struct/LongMap$Keys;", 1 },
	{ "clear", (intptr_t) M_arc_struct_GridMap_clear, VTABLE_arc_struct_GridMap_clear, "()V", 1 },
	{ "size", (intptr_t) M_arc_struct_GridMap_size_R_int, VTABLE_arc_struct_GridMap_size_R_int, "()I", 1 },
};

Class class_arc_struct_GridMap{
		.nativeName = (intptr_t) "arc/struct/GridMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_GridMap),
		.classVtable = (intptr_t) vtable_arc_struct_GridMap,
		.staticInitializer = (intptr_t) clinit_arc_struct_GridMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_GridMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_GridMap = registerClass(&class_arc_struct_GridMap);

}
