#include "mindustry/io/JsonIO_4.h"
#include "java/lang/Integer.h"
#include "arc/util/serialization/Json_Serializer.h"
#include "mindustry/type/Sector.h"
#include "mindustry/io/JsonIO_4.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/type/Planet.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "java/lang/Class.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_io_JsonIO$4(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_JsonIO$4 *) object;
}

void clinit_mindustry_io_JsonIO$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_io_JsonIO$4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$4:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_JsonIO$4(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(116);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_JsonIO$4_write_arc_util_serialization_Json_mindustry_type_Sector_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$4:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, sp[1].o, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_id)));
	((func_arc_util_serialization_Json_writeValue_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_JsonIO$4_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$4:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(125);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[4].o), (45));
	frame[5].i = temp0;
	LINE_NUMBER(126);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[4].o), (jint(0)), (frame[5].i));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Planet, sp[0].o))))->F_sectors;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[4].o), ((frame[5].i) + (jint(1))));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_JsonIO$4_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$4:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_mindustry_io_JsonIO$4_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_JsonIO$4_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_Sector])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_JsonIO$4_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/JsonIO$4:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(116);
	((func_mindustry_io_JsonIO$4_write_arc_util_serialization_Json_mindustry_type_Sector_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_JsonIO$4_write_arc_util_serialization_Json_mindustry_type_Sector_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (checkCast(ctx, &class_mindustry_type_Sector, (frame[2].o))), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_JsonIO$4[] {
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
	(void *) M_mindustry_io_JsonIO$4_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class,
	(void *) M_mindustry_io_JsonIO$4_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object,
	(void *) M_mindustry_io_JsonIO$4_write_arc_util_serialization_Json_mindustry_type_Sector_java_lang_Class,
	(void *) M_mindustry_io_JsonIO$4_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_Sector,
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
	{ "write", "(Larc/util/serialization/Json;Lmindustry/type/Sector;Ljava/lang/Class;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Lmindustry/type/Sector;" },
};

static jclass interfaces[] { &class_arc_util_serialization_Json$Serializer, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_JsonIO$4, 0, "()V", 0 },
	{ "write", (intptr_t) M_mindustry_io_JsonIO$4_write_arc_util_serialization_Json_mindustry_type_Sector_java_lang_Class, VTABLE_mindustry_io_JsonIO$4_write_arc_util_serialization_Json_mindustry_type_Sector_java_lang_Class, "(Larc/util/serialization/Json;Lmindustry/type/Sector;Ljava/lang/Class;)V", 1 },
	{ "read", (intptr_t) M_mindustry_io_JsonIO$4_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_Sector, VTABLE_mindustry_io_JsonIO$4_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_mindustry_type_Sector, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Lmindustry/type/Sector;", 1 },
	{ "read", (intptr_t) M_mindustry_io_JsonIO$4_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_mindustry_io_JsonIO$4_read_arc_util_serialization_Json_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 4161 },
	{ "write", (intptr_t) M_mindustry_io_JsonIO$4_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class, VTABLE_mindustry_io_JsonIO$4_write_arc_util_serialization_Json_java_lang_Object_java_lang_Class, "(Larc/util/serialization/Json;Ljava/lang/Object;Ljava/lang/Class;)V", 4161 },
};

Class class_mindustry_io_JsonIO$4{
		.nativeName = (intptr_t) "mindustry/io/JsonIO$4",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_JsonIO$4),
		.classVtable = (intptr_t) vtable_mindustry_io_JsonIO$4,
		.staticInitializer = (intptr_t) clinit_mindustry_io_JsonIO$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_JsonIO$4,
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
static bool registered_mindustry_io_JsonIO$4 = registerClass(&class_mindustry_io_JsonIO$4);

}

