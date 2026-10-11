#include "mindustry/io/SaveMeta.h"
#include "mindustry/maps/Map.h"
#include "mindustry/game/Rules.h"
#include "mindustry/io/JsonIO.h"
#include "java/lang/Object.h"
#include "mindustry/maps/Maps.h"
#include "arc/struct/StringMap.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "mindustry/io/SaveMeta.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/io/SaveMeta_invoke_arc_func_Boolf_1.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_io_SaveMeta(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_SaveMeta *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
	if (self->F_rules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rules)->clazz)->markFunction)((jobject) self->F_rules, mark, depth + 1);
	if (self->F_tags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tags)->clazz)->markFunction)((jobject) self->F_tags, mark, depth + 1);
	if (self->F_mods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mods)->clazz)->markFunction)((jobject) self->F_mods, mark, depth + 1);
}

void clinit_mindustry_io_SaveMeta(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_io_SaveMeta_int_long_long_int_java_lang_String_int_mindustry_game_Rules_arc_struct_StringMap(jcontext ctx, jobject self, jint param0, jlong param1, jlong param2, jint param3, jobject param4, jint param5, jobject param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveMeta:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveMeta(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	frame[6].i = param3;
	frame[7].o = param4;
	frame[8].i = param5;
	frame[9].o = param6;
	frame[10].o = param7;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((mindustry_io_SaveMeta *) NULL_CHECK((frame[0].o)))->F_version = (frame[1].i);
	LINE_NUMBER(22);
	((mindustry_io_SaveMeta *) NULL_CHECK((frame[0].o)))->F_build = (frame[6].i);
	LINE_NUMBER(23);
	((mindustry_io_SaveMeta *) NULL_CHECK((frame[0].o)))->F_timestamp = (frame[2].l);
	LINE_NUMBER(24);
	((mindustry_io_SaveMeta *) NULL_CHECK((frame[0].o)))->F_timePlayed = (frame[4].l);
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_maps;
	sp += 1;
	if (sp[0].o != nullptr) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[0].o = (jobject)((func_mindustry_maps_Maps_all_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_all_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveMeta_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_io_SaveMeta_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_io_SaveMeta_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_mindustry_maps_Map, sp[0].o);
	sp += 1;
	}
label_7:;
	{
	sp -= 2;
	((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(26);
	((mindustry_io_SaveMeta *) NULL_CHECK((frame[0].o)))->F_wave = (frame[8].i);
	LINE_NUMBER(27);
	((mindustry_io_SaveMeta *) NULL_CHECK((frame[0].o)))->F_rules = (jref) (frame[9].o);
	LINE_NUMBER(28);
	((mindustry_io_SaveMeta *) NULL_CHECK((frame[0].o)))->F_tags = (jref) (frame[10].o);
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) getArrayClass(&class_java_lang_String, 1));
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[10].o), (((jobject) createStringLiteral(ctx, u8"mods"_j))), (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	((mindustry_io_SaveMeta *) NULL_CHECK(sp[0].o))->F_mods = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[1].o));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_io_SaveMeta_isMap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveMeta:isMap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_io_SaveMeta *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_io_SaveMeta_lambda$new$0_java_lang_String_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveMeta:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveMeta(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_SaveMeta[] {
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
	(void *) M_mindustry_io_SaveMeta_isMap_R_boolean,
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
	{ "isMap", "()Z" },
};

static FieldMetadata fields[] {
	{ "version", &class_int, offsetof(mindustry_io_SaveMeta, F_version), "I", 1 },
	{ "build", &class_int, offsetof(mindustry_io_SaveMeta, F_build), "I", 1 },
	{ "timestamp", &class_long, offsetof(mindustry_io_SaveMeta, F_timestamp), "J", 1 },
	{ "timePlayed", &class_long, offsetof(mindustry_io_SaveMeta, F_timePlayed), "J", 1 },
	{ "map", &class_mindustry_maps_Map, offsetof(mindustry_io_SaveMeta, F_map), "Lmindustry/maps/Map;", 1 },
	{ "wave", &class_int, offsetof(mindustry_io_SaveMeta, F_wave), "I", 1 },
	{ "rules", &class_mindustry_game_Rules, offsetof(mindustry_io_SaveMeta, F_rules), "Lmindustry/game/Rules;", 1 },
	{ "tags", &class_arc_struct_StringMap, offsetof(mindustry_io_SaveMeta, F_tags), "Larc/struct/StringMap;", 1 },
	{ "mods", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_io_SaveMeta, F_mods), "[Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_SaveMeta_int_long_long_int_java_lang_String_int_mindustry_game_Rules_arc_struct_StringMap, 0, "(IJJILjava/lang/String;ILmindustry/game/Rules;Larc/struct/StringMap;)V", 1 },
	{ "isMap", (intptr_t) M_mindustry_io_SaveMeta_isMap_R_boolean, VTABLE_mindustry_io_SaveMeta_isMap_R_boolean, "()Z", 1 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_io_SaveMeta_lambda$new$0_java_lang_String_mindustry_maps_Map_R_boolean, 0, "(Ljava/lang/String;Lmindustry/maps/Map;)Z", 4106 },
};

Class class_mindustry_io_SaveMeta{
		.nativeName = (intptr_t) "mindustry/io/SaveMeta",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_SaveMeta),
		.classVtable = (intptr_t) vtable_mindustry_io_SaveMeta,
		.staticInitializer = (intptr_t) clinit_mindustry_io_SaveMeta,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_SaveMeta,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_SaveMeta = registerClass(&class_mindustry_io_SaveMeta);

}
