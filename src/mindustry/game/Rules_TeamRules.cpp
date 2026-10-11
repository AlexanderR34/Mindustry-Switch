#include "mindustry/game/Rules_TeamRules.h"
#include "arc/util/serialization/Json_JsonSerializable.h"
#include "java/lang/Integer.h"
#include "java/util/Iterator.h"
#include "mindustry/game/Rules.h"
#include "arc/util/serialization/JsonValue_JsonIterator.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/game/Rules_TeamRules.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_mindustry_game_Rules$TeamRules(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Rules$TeamRules *) object;
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_mindustry_game_Rules$TeamRules(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Rules$TeamRules(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules$TeamRules:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Rules$TeamRules(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(419);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(420);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_all;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Rules$TeamRule, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_game_Rules$TeamRules *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	auto self_rules = (mindustry_game_Rules$TeamRules *) self;
	if (!self_rules->F_values) {
		clinit_mindustry_game_Team(ctx);
		auto allTeams = (jarray)SF_mindustry_game_Team_all;
		int len = allTeams ? allTeams->length : 256;
		self_rules->F_values = (jref) createArray(ctx, &class_mindustry_game_Rules$TeamRule, len);
	}
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules$TeamRules:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((mindustry_game_Rules$TeamRules *) NULL_CHECK((frame[0].o)))->F_values;
	int tid = param0 ? ((jint)((mindustry_game_Team *) param0)->F_id) : 0;
	if (tid < 0 || tid >= ((jarray)sp[0].o)->length) tid = 0;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, tid));
	LINE_NUMBER(424);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Rules$TeamRules *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id;
	clinit_mindustry_game_Rules$TeamRule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Rules$TeamRule);
	init_mindustry_game_Rules$TeamRule_mindustry_game_Team(ctx, sp[1].o, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Rules$TeamRules_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	auto self_rules = (mindustry_game_Rules$TeamRules *) self;
	if (!self_rules->F_values) {
		clinit_mindustry_game_Team(ctx);
		auto allTeams = (jarray)SF_mindustry_game_Team_all;
		int len = allTeams ? allTeams->length : 256;
		self_rules->F_values = (jref) createArray(ctx, &class_mindustry_game_Rules$TeamRule, len);
	}
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules$TeamRules:write", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(429);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_game_Rules$TeamRules *) NULL_CHECK((frame[0].o)))->F_values;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[5].o)))->F_id))) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(431);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[5].o)))->F_id)));
	sp[2].o = (jobject)((mindustry_game_Rules$TeamRules *) NULL_CHECK((frame[0].o)))->F_values;
	((func_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[5].o)))->F_id))), (((jobject) &class_mindustry_game_Rules$TeamRule)));
	}
label_4:;
	{
	LINE_NUMBER(429);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(434);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Rules$TeamRules_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	if (!self || !param0 || !param1) return;
	auto self_rules = (mindustry_game_Rules$TeamRules *) self;
	clinit_mindustry_game_Team(ctx);
	auto allTeams = (jarray)SF_mindustry_game_Team_all;
	int len = allTeams ? allTeams->length : 256;
	if (!self_rules->F_values) {
		self_rules->F_values = (jref) createArray(ctx, &class_mindustry_game_Rules$TeamRule, len);
	}

	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules$TeamRules:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;

	auto jsonVal = (arc_util_serialization_JsonValue *) param1;
	auto curChild = (arc_util_serialization_JsonValue *) jsonVal->F_child;
	int idx = 0;
	while (curChild) {
		int teamId = -1;
		if (curChild->F_name) {
			auto nameStr = (java_lang_String *) curChild->F_name;
			if (nameStr && nameStr->F_value) {
				auto chars = (jarray) nameStr->F_value;
				auto cdata = (jchar *) chars->data;
				std::string s;
				for (int i = 0; i < chars->length; i++) {
					s += (char) cdata[i];
				}
				try {
					teamId = std::stoi(s);
				} catch (...) {
					if (s == "derelict") teamId = 0;
					else if (s == "sharded") teamId = 1;
					else if (s == "crux") teamId = 2;
					else if (s == "malis") teamId = 3;
					else if (s == "green") teamId = 4;
					else if (s == "blue") teamId = 5;
					else if (s == "neoplastic") teamId = 6;
				}
			}
		} else {
			teamId = idx;
		}

		if (teamId >= 0 && teamId < len) {
			tryCatch(frameRef, [&]() {
				clinit_mindustry_game_Rules$TeamRule(ctx);
				auto ruleObj = ((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) 
					((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])
					(ctx, (frame[1].o), (((jobject) &class_mindustry_game_Rules$TeamRule)), (jobject)curChild);
				if (ruleObj && self_rules->F_values) {
					ARRAY_ACCESS(jobject, self_rules->F_values, teamId) = ruleObj;
				}
			}, &class_java_lang_Throwable, [&](jobject err) {
				// Ignorar entrada corrupta en regla de equipo
			});
		}
		curChild = (arc_util_serialization_JsonValue *) curChild->F_next;
		idx++;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Rules$TeamRules[] {
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
	(void *) M_mindustry_game_Rules$TeamRules_write_arc_util_serialization_Json,
	(void *) M_mindustry_game_Rules$TeamRules_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule,
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
	{ "get", "(Lmindustry/game/Team;)Lmindustry/game/Rules$TeamRule;" },
};

static jclass interfaces[] { &class_arc_util_serialization_Json$JsonSerializable, };

static FieldMetadata fields[] {
	{ "values", getArrayClass(&class_mindustry_game_Rules$TeamRule, 1), offsetof(mindustry_game_Rules$TeamRules, F_values), "[Lmindustry/game/Rules$TeamRule;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Rules$TeamRules, 0, "()V", 1 },
	{ "get", (intptr_t) M_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule, VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule, "(Lmindustry/game/Team;)Lmindustry/game/Rules$TeamRule;", 1 },
	{ "write", (intptr_t) M_mindustry_game_Rules$TeamRules_write_arc_util_serialization_Json, VTABLE_mindustry_game_Rules$TeamRules_write_arc_util_serialization_Json, "(Larc/util/serialization/Json;)V", 1 },
	{ "read", (intptr_t) M_mindustry_game_Rules$TeamRules_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, VTABLE_mindustry_game_Rules$TeamRules_read_arc_util_serialization_Json_arc_util_serialization_JsonValue, "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V", 1 },
};

Class class_mindustry_game_Rules$TeamRules{
		.nativeName = (intptr_t) "mindustry/game/Rules$TeamRules",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Rules$TeamRules),
		.classVtable = (intptr_t) vtable_mindustry_game_Rules$TeamRules,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Rules$TeamRules,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Rules$TeamRules,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_Rules,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Rules$TeamRules = registerClass(&class_mindustry_game_Rules$TeamRules);

}

