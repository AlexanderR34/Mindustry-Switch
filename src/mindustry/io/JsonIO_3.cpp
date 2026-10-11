#include "mindustry/io/JsonIO_3.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Json_Serializer.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/graphics/Color.h"
#include "java/lang/Class.h"
#include "mindustry/io/JsonIO_3.h"

extern "C" {


void mark_mindustry_io_JsonIO$3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_JsonIO$3 *) object;
}

void clinit_mindustry_io_JsonIO$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_io_JsonIO$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$3:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO$3(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(99);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_JsonIO$3_write_arc_util_serialization_Json_arc_graphics_Color_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$3:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, (frame[2].o));
	((func_arc_util_serialization_Json_writeValue_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_JsonIO$3_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$3:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(107);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(110);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(111);
	((func_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[1].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_JsonIO$3_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$3:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_mindustry_io_JsonIO$3_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_JsonIO$3_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_JsonIO$3_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$3:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(99);
	((func_mindustry_io_JsonIO$3_write_arc_util_serialization_Json_arc_graphics_Color_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_JsonIO$3_write_arc_util_serialization_Json_arc_graphics_Color_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (checkCast(ctx, &class_arc_graphics_Color, (frame[2].o))), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_JsonIO$3[] {
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
	(void *) M_mindustry_io_JsonIO$3_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class,
	(void *) M_mindustry_io_JsonIO$3_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object,
	(void *) M_mindustry_io_JsonIO$3_write_arc_util_serialization_Json_arc_graphics_Color_java_lang_Class,
	(void *) M_mindustry_io_JsonIO$3_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_arc_graphics_Color,
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
	{ "write", "(Larc/util/serialization/Json;Larc/graphics/Color;Ljava/lang/Class;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Larc/graphics/Color;" },
};

static jclass interfaces[] { &class_arc_util_serialization_Json$Serializer, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_JsonIO$3, 0, "()V", 0 },
	{ "write", (intptr_t) M_mindustry_io_JsonIO$3_write_arc_util_serialization_Json_arc_graphics_Color_java_lang_Class, VTABLE_mindustry_io_JsonIO$3_write_arc_util_serialization_Json_arc_graphics_Color_java_lang_Class, "(Larc/util/serialization/Json;Larc/graphics/Color;Ljava/lang/Class;)V", 1 },
	{ "read", (intptr_t) M_mindustry_io_JsonIO$3_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_arc_graphics_Color, VTABLE_mindustry_io_JsonIO$3_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_arc_graphics_Color, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Larc/graphics/Color;", 1 },
	{ "read", (intptr_t) M_mindustry_io_JsonIO$3_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_mindustry_io_JsonIO$3_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 4161 },
	{ "write", (intptr_t) M_mindustry_io_JsonIO$3_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class, VTABLE_mindustry_io_JsonIO$3_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class, "(Larc/util/serialization/Json;Ljava/lang/Object;Ljava/lang/Class;)V", 4161 },
};

Class class_mindustry_io_JsonIO$3{
		.nativeName = (intptr_t) "mindustry/io/JsonIO$3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_JsonIO$3),
		.classVtable = (intptr_t) vtable_mindustry_io_JsonIO$3,
		.staticInitializer = (intptr_t) clinit_mindustry_io_JsonIO$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_JsonIO$3,
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
static bool registered_mindustry_io_JsonIO$3 = registerClass(&class_mindustry_io_JsonIO$3);

}

