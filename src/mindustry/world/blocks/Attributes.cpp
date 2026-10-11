#include "mindustry/world/blocks/Attributes.h"
#include "java/lang/Math.h"
#include "arc/util/serialization/Json_JsonSerializable.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/world/meta/Attribute.h"
#include "java/lang/Float.h"
#include "mindustry/world/blocks/Attributes.h"
#include "java/lang/System.h"

extern "C" {


void mark_mindustry_world_blocks_Attributes(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_Attributes *) object;
	if (self->F_arr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arr)->clazz)->markFunction)((jobject) self->F_arr, mark, depth + 1);
}

void clinit_mindustry_world_blocks_Attributes(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_Attributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Attributes:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_Attributes(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_all;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_blocks_Attributes *) NULL_CHECK(sp[0].o))->F_arr = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_Attributes_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Attributes:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Attributes:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	((func_mindustry_world_blocks_Attributes_check) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_Attributes_check])(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_world_meta_Attribute *) NULL_CHECK((frame[1].o)))->F_id)));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Attributes:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(22);
	((func_mindustry_world_blocks_Attributes_check) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_Attributes_check])(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_world_meta_Attribute *) NULL_CHECK((frame[1].o)))->F_id)) = (frame[2].f);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Attributes:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	((func_mindustry_world_blocks_Attributes_check) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_Attributes_check])(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((func_mindustry_world_blocks_Attributes_check) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_Attributes_check])(ctx, (frame[1].o));
	LINE_NUMBER(29);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp0 = frame[2].i;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0);
	sp[1].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[1].o)))->F_arr;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp3 + ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[2].i))));
	LINE_NUMBER(29);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Attributes:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(35);
	((func_mindustry_world_blocks_Attributes_check) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_Attributes_check])(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((func_mindustry_world_blocks_Attributes_check) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_Attributes_check])(ctx, (frame[1].o));
	LINE_NUMBER(37);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp0 = frame[3].i;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0);
	sp[1].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[1].o)))->F_arr;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp3 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))) * (frame[2].f)));
	LINE_NUMBER(37);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_Attributes_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Attributes:write", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	((func_mindustry_world_blocks_Attributes_check) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_Attributes_check])(ctx, (frame[0].o));
	LINE_NUMBER(45);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_world_meta_Attribute *) NULL_CHECK((frame[5].o)))->F_id))), (jfloat(0)), -1)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_meta_Attribute *) NULL_CHECK((frame[5].o)))->F_name;
	sp[2].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, ((jint)((mindustry_world_meta_Attribute *) NULL_CHECK((frame[5].o)))->F_id))));
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(45);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_Attributes_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Attributes:read", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(54);
	((func_mindustry_world_blocks_Attributes_check) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_Attributes_check])(ctx, (frame[0].o));
	LINE_NUMBER(55);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_all;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp0 = (jint)((mindustry_world_meta_Attribute *) NULL_CHECK((frame[6].o)))->F_id;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_world_meta_Attribute *) NULL_CHECK((frame[6].o)))->F_name;
	jfloat temp1 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, sp[1].o, sp[2].o, (jfloat(0)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(55);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_Attributes_check(jcontext ctx, jobject self) {
	if (!self) return;
	clinit_mindustry_world_meta_Attribute(ctx);
	auto allAttrs = (jarray) SF_mindustry_world_meta_Attribute_all;
	int targetLen = allAttrs ? allAttrs->length : 16;
	auto self_attr = (mindustry_world_blocks_Attributes *) self;
	if (!self_attr->F_arr) {
		self_attr->F_arr = (jref) createArray(ctx, &class_float, targetLen);
		return;
	}
	auto oldArr = (jarray) self_attr->F_arr;
	if (oldArr->length != targetLen) {
		auto newArr = (jarray) createArray(ctx, &class_float, targetLen);
		int copyLen = oldArr->length < targetLen ? oldArr->length : targetLen;
		memcpy(newArr->data, oldArr->data, copyLen * sizeof(jfloat));
		self_attr->F_arr = (jref) newArr;
	}
}

jobject M_mindustry_world_blocks_Attributes_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Attributes:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Attributes{"_j))));
	LINE_NUMBER(72);
	frame[2].i = (jint(0));
	LINE_NUMBER(73);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))), (jfloat(0)), -1)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_all;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((mindustry_world_blocks_Attributes *) NULL_CHECK((frame[0].o)))->F_arr;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(76);
	frame[2].i = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(73);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(79);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (temp0 - (jint(2))));
	}
label_10:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"}"_j))));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_Attributes[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_world_blocks_Attributes_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_world_blocks_Attributes_write_arc_util_serialization_Json,
	(void *) M_mindustry_world_blocks_Attributes_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_world_blocks_Attributes_clear,
	(void *) M_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float,
	(void *) M_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float,
	(void *) M_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes,
	(void *) M_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes_float,
	(void *) M_mindustry_world_blocks_Attributes_check,
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
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
	{ "clear", "()V" },
	{ "get", "(Lmindustry/world/meta/Attribute;)F" },
	{ "set", "(Lmindustry/world/meta/Attribute;F)V" },
	{ "add", "(Lmindustry/world/blocks/Attributes;)V" },
	{ "add", "(Lmindustry/world/blocks/Attributes;F)V" },
	{ "check", "()V" },
};

static jclass interfaces[] { &class_arc_util_serialization_Json$JsonSerializable, };

static FieldMetadata fields[] {
	{ "arr", getArrayClass(&class_float, 1), offsetof(mindustry_world_blocks_Attributes, F_arr), "[F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_Attributes, 0, "()V", 1 },
	{ "clear", (intptr_t) M_mindustry_world_blocks_Attributes_clear, VTABLE_mindustry_world_blocks_Attributes_clear, "()V", 1 },
	{ "get", (intptr_t) M_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float, VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float, "(Lmindustry/world/meta/Attribute;)F", 1 },
	{ "set", (intptr_t) M_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float, VTABLE_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float, "(Lmindustry/world/meta/Attribute;F)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes, VTABLE_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes, "(Lmindustry/world/blocks/Attributes;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes_float, VTABLE_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes_float, "(Lmindustry/world/blocks/Attributes;F)V", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_Attributes_write_arc_util_serialization_Json, VTABLE_mindustry_world_blocks_Attributes_write_arc_util_serialization_Json, "(Larc/util/serialization/Json;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_Attributes_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, VTABLE_mindustry_world_blocks_Attributes_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V", 1 },
	{ "check", (intptr_t) M_mindustry_world_blocks_Attributes_check, VTABLE_mindustry_world_blocks_Attributes_check, "()V", 2 },
	{ "toString", (intptr_t) M_mindustry_world_blocks_Attributes_toString_R_java_lang_String, VTABLE_mindustry_world_blocks_Attributes_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_world_blocks_Attributes{
		.nativeName = (intptr_t) "mindustry/world/blocks/Attributes",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_Attributes),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_Attributes,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_Attributes,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_Attributes,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_Attributes = registerClass(&class_mindustry_world_blocks_Attributes);

}
