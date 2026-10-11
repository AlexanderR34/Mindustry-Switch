#include "mindustry/game/MapObjectives_TextureHolder.h"
#include "arc/util/serialization/Json_JsonSerializable.h"
#include "java/lang/Integer.h"
#include "mindustry/game/MapObjectives_TextureHolder.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_game_MapObjectives$TextureHolder(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapObjectives$TextureHolder *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$TextureHolder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_MapObjectives$TextureHolder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextureHolder:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$TextureHolder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1496);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1497);
	((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK((frame[0].o)))->F_value = (jref) (((jobject) createStringLiteral(ctx, u8"white"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$TextureHolder_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextureHolder:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1501);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_java_lang_String, (frame[5].o)));
	LINE_NUMBER(1502);
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"string"_j))), (frame[2].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1503);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_4;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[5].o)));
	LINE_NUMBER(1504);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"content"_j));
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[3].o)))->F_name;
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1505);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK((frame[0].o)))->F_value;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Building)) == 0) goto label_3;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[5].o)));
	LINE_NUMBER(1506);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"building"_j));
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[4].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	LINE_NUMBER(1508);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$TextureHolder_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextureHolder:read", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1512);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"string"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1513);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"string"_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, sp[1].o);
	((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1514);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"content"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1515);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"content"_j))));
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_byName_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_byName_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[1].o, sp[2].o);
	((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1516);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"building"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1517);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"building"_j))));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[1].o, temp0);
	((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(1519);
	((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK((frame[0].o)))->F_value = (jref) (((jobject) createStringLiteral(ctx, u8"white"_j)));
	}
label_3:;
	LINE_NUMBER(1521);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_game_MapObjectives$TextureHolder[] {
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
	(void *) M_mindustry_game_MapObjectives$TextureHolder_write_arc_util_serialization_Json,
	(void *) M_mindustry_game_MapObjectives$TextureHolder_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
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
};

static jclass interfaces[] { &class_arc_util_serialization_Json$JsonSerializable, };

static FieldMetadata fields[] {
	{ "value", &class_java_lang_Object, offsetof(mindustry_game_MapObjectives$TextureHolder, F_value), "Ljava/lang/Object;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$TextureHolder, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_game_MapObjectives$TextureHolder_write_arc_util_serialization_Json, VTABLE_mindustry_game_MapObjectives$TextureHolder_write_arc_util_serialization_Json, "(Larc/util/serialization/Json;)V", 1 },
	{ "read", (intptr_t) M_mindustry_game_MapObjectives$TextureHolder_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, VTABLE_mindustry_game_MapObjectives$TextureHolder_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V", 1 },
};

Class class_mindustry_game_MapObjectives$TextureHolder{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$TextureHolder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_MapObjectives$TextureHolder),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$TextureHolder,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$TextureHolder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$TextureHolder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$TextureHolder = registerClass(&class_mindustry_game_MapObjectives$TextureHolder);

}

