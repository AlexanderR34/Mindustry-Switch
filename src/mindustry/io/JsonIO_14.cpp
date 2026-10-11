#include "mindustry/io/JsonIO_14.h"
#include "mindustry/io/JsonIO_14.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Json_Serializer.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/type/Item.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_io_JsonIO$14(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_JsonIO$14 *) object;
}

void clinit_mindustry_io_JsonIO$14(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_io_JsonIO$14(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$14:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO$14(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(250);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_JsonIO$14_write_arc_util_serialization_Json_mindustry_type_ItemStack_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$14:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(253);
	((func_arc_util_serialization_Json_writeObjectStart) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectStart])(ctx, (frame[1].o));
	LINE_NUMBER(254);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"item"_j));
	sp[2].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[2].o)))->F_item;
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(255);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"amount"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[2].o)))->F_amount));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(256);
	((func_arc_util_serialization_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_writeObjectEnd])(ctx, (frame[1].o));
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_JsonIO$14_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$14:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(261);
	clinit_mindustry_type_ItemStack(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	sp[1].o = (jobject)((func_arc_util_serialization_Json_getSerializer_java_lang_Class_R_arc_util_serialization_Json$Serializer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_getSerializer_java_lang_Class_R_arc_util_serialization_Json$Serializer])(ctx, (frame[1].o), (((jobject) &class_mindustry_type_Item)));
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"item"_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_util_serialization_Json$Serializer, INDEX_arc_util_serialization_Json$Serializer_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, sp[2].o, sp[3].o, (((jobject) &class_mindustry_type_Item)));
	sp[1].o = checkCast(ctx, &class_mindustry_type_Item, sp[1].o);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"amount"_j))));
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_JsonIO$14_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$14:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_mindustry_io_JsonIO$14_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_JsonIO$14_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_ItemStack])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_JsonIO$14_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$14:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(250);
	((func_mindustry_io_JsonIO$14_write_arc_util_serialization_Json_mindustry_type_ItemStack_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_JsonIO$14_write_arc_util_serialization_Json_mindustry_type_ItemStack_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (checkCast(ctx, &class_mindustry_type_ItemStack, (frame[2].o))), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_JsonIO$14[] {
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
	(void *) M_mindustry_io_JsonIO$14_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class,
	(void *) M_mindustry_io_JsonIO$14_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object,
	(void *) M_mindustry_io_JsonIO$14_write_arc_util_serialization_Json_mindustry_type_ItemStack_java_lang_Class,
	(void *) M_mindustry_io_JsonIO$14_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_ItemStack,
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
	{ "write", "(Larc/util/serialization/Json;Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "write", "(Larc/util/serialization/Json;Lmindustry/type/ItemStack;Ljava/lang/Class;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Lmindustry/type/ItemStack;" },
};

static jclass interfaces[] { &class_arc_util_serialization_Json$Serializer, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_JsonIO$14, 0, "()V", 0 },
	{ "write", (intptr_t) M_mindustry_io_JsonIO$14_write_arc_util_serialization_Json_mindustry_type_ItemStack_java_lang_Class, VTABLE_mindustry_io_JsonIO$14_write_arc_util_serialization_Json_mindustry_type_ItemStack_java_lang_Class, "(Larc/util/serialization/Json;Lmindustry/type/ItemStack;Ljava/lang/Class;)V", 1 },
	{ "read", (intptr_t) M_mindustry_io_JsonIO$14_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_ItemStack, VTABLE_mindustry_io_JsonIO$14_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_ItemStack, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Lmindustry/type/ItemStack;", 1 },
	{ "read", (intptr_t) M_mindustry_io_JsonIO$14_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_mindustry_io_JsonIO$14_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 4161 },
	{ "write", (intptr_t) M_mindustry_io_JsonIO$14_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class, VTABLE_mindustry_io_JsonIO$14_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class, "(Larc/util/serialization/Json;Ljava/lang/Object;Ljava/lang/Class;)V", 4161 },
};

Class class_mindustry_io_JsonIO$14{
		.nativeName = (intptr_t) "mindustry/io/JsonIO$14",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_JsonIO$14),
		.classVtable = (intptr_t) vtable_mindustry_io_JsonIO$14,
		.staticInitializer = (intptr_t) clinit_mindustry_io_JsonIO$14,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_JsonIO$14,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_io_JsonIO$14 = registerClass(&class_mindustry_io_JsonIO$14);

}

