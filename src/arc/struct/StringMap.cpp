#include "arc/struct/StringMap.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "arc/struct/StringMap.h"
#include "java/lang/String.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_arc_struct_StringMap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_StringMap *) object;
}

void clinit_arc_struct_StringMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectMap(ctx);
}

jobject SM_arc_struct_StringMap_of_Array1_java_lang_Object_R_arc_struct_StringMap(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/StringMap:of", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_StringMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(9);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(11);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(2)))) goto label_3;
	}
	{
	LINE_NUMBER(12);
	sp[0].o = frame[1].o;
	sp[1].o = checkCast(ctx, &class_java_lang_String, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[2].i) * (jint(2))))));
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (((frame[2].i) * (jint(2))) + (jint(1))))));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(11);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void init_arc_struct_StringMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/StringMap:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_StringMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_arc_struct_ObjectMap(ctx, (frame[0].o));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_StringMap_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/StringMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_StringMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	init_arc_struct_ObjectMap_arc_struct_ObjectMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_StringMap_getBool_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/StringMap:getBool", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_StringMap_getInt_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/StringMap:getInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	jint temp0 = (jint)((func_arc_struct_StringMap_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_StringMap_getInt_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_StringMap_getFloat_java_lang_String_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/StringMap:getFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	jfloat temp0 = (jfloat)((func_arc_struct_StringMap_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_StringMap_getFloat_java_lang_String_float_R_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_arc_struct_StringMap_getLong_java_lang_String_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/StringMap:getLong", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	jlong temp0 = (jlong)((func_arc_struct_StringMap_getLong_java_lang_String_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_StringMap_getLong_java_lang_String_long_R_long])(ctx, (frame[0].o), (frame[1].o), (jlong(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_struct_StringMap_getInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/StringMap:getInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_struct_StringMap_getFloat_java_lang_String_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/StringMap:getFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_arc_struct_StringMap_getLong_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/StringMap:getLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	jlong temp0 = (jlong)SM_arc_util_Strings_parseLong_java_lang_String_long_R_long(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[2].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_StringMap[] {
	(void *) M_arc_struct_ObjectMap_hashCode_R_int,
	(void *) M_arc_struct_ObjectMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ObjectMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ObjectMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectMap_place_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putAll_Array1_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_each_arc_func_Cons2,
	(void *) M_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_set_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_notEmpty_R_boolean,
	(void *) M_arc_struct_ObjectMap_isEmpty_R_boolean,
	(void *) M_arc_struct_ObjectMap_shrink_int,
	(void *) M_arc_struct_ObjectMap_clear_int,
	(void *) M_arc_struct_ObjectMap_clear,
	(void *) M_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_ensureCapacity_int,
	(void *) M_arc_struct_ObjectMap_resize_int,
	(void *) M_arc_struct_ObjectMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries,
	(void *) M_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries,
	(void *) M_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values,
	(void *) M_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys,
	(void *) M_arc_struct_StringMap_getBool_java_lang_String_R_boolean,
	(void *) M_arc_struct_StringMap_getInt_java_lang_String_R_int,
	(void *) M_arc_struct_StringMap_getFloat_java_lang_String_R_float,
	(void *) M_arc_struct_StringMap_getLong_java_lang_String_R_long,
	(void *) M_arc_struct_StringMap_getInt_java_lang_String_int_R_int,
	(void *) M_arc_struct_StringMap_getFloat_java_lang_String_float_R_float,
	(void *) M_arc_struct_StringMap_getLong_java_lang_String_long_R_long,
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
	{ "place", "(Ljava/lang/Object;)I" },
	{ "locateKey", "(Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putMissing", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "([Ljava/lang/Object;)V" },
	{ "putAll", "(Larc/struct/ObjectMap;)V" },
	{ "merge", "(Larc/struct/ObjectMap;)Larc/struct/ObjectMap;" },
	{ "each", "(Larc/func/Cons2;)V" },
	{ "copy", "()Larc/struct/ObjectMap;" },
	{ "set", "(Larc/struct/ObjectMap;)V" },
	{ "putResize", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "getThrow", "(Ljava/lang/Object;Larc/func/Prov;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Larc/func/Prov;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "findKey", "(Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "iterator", "()Larc/struct/ObjectMap$Entries;" },
	{ "entries", "()Larc/struct/ObjectMap$Entries;" },
	{ "values", "()Larc/struct/ObjectMap$Values;" },
	{ "keys", "()Larc/struct/ObjectMap$Keys;" },
	{ "getBool", "(Ljava/lang/String;)Z" },
	{ "getInt", "(Ljava/lang/String;)I" },
	{ "getFloat", "(Ljava/lang/String;)F" },
	{ "getLong", "(Ljava/lang/String;)J" },
	{ "getInt", "(Ljava/lang/String;I)I" },
	{ "getFloat", "(Ljava/lang/String;F)F" },
	{ "getLong", "(Ljava/lang/String;J)J" },
};

static MethodMetadata methods[] {
	{ "of", (intptr_t) SM_arc_struct_StringMap_of_Array1_java_lang_Object_R_arc_struct_StringMap, 0, "([Ljava/lang/Object;)Larc/struct/StringMap;", 137 },
	{ "<init>", (intptr_t) init_arc_struct_StringMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_struct_StringMap_arc_struct_ObjectMap, 0, "(Larc/struct/ObjectMap;)V", 1 },
	{ "getBool", (intptr_t) M_arc_struct_StringMap_getBool_java_lang_String_R_boolean, VTABLE_arc_struct_StringMap_getBool_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getInt", (intptr_t) M_arc_struct_StringMap_getInt_java_lang_String_R_int, VTABLE_arc_struct_StringMap_getInt_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getFloat", (intptr_t) M_arc_struct_StringMap_getFloat_java_lang_String_R_float, VTABLE_arc_struct_StringMap_getFloat_java_lang_String_R_float, "(Ljava/lang/String;)F", 1 },
	{ "getLong", (intptr_t) M_arc_struct_StringMap_getLong_java_lang_String_R_long, VTABLE_arc_struct_StringMap_getLong_java_lang_String_R_long, "(Ljava/lang/String;)J", 1 },
	{ "getInt", (intptr_t) M_arc_struct_StringMap_getInt_java_lang_String_int_R_int, VTABLE_arc_struct_StringMap_getInt_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "getFloat", (intptr_t) M_arc_struct_StringMap_getFloat_java_lang_String_float_R_float, VTABLE_arc_struct_StringMap_getFloat_java_lang_String_float_R_float, "(Ljava/lang/String;F)F", 1 },
	{ "getLong", (intptr_t) M_arc_struct_StringMap_getLong_java_lang_String_long_R_long, VTABLE_arc_struct_StringMap_getLong_java_lang_String_long_R_long, "(Ljava/lang/String;J)J", 1 },
};

Class class_arc_struct_StringMap{
		.nativeName = (intptr_t) "arc/struct/StringMap",
		.parentClass = (intptr_t) &class_arc_struct_ObjectMap,
		.size = sizeof(arc_struct_StringMap),
		.classVtable = (intptr_t) vtable_arc_struct_StringMap,
		.staticInitializer = (intptr_t) clinit_arc_struct_StringMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_StringMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 53,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_StringMap = registerClass(&class_arc_struct_StringMap);

}
