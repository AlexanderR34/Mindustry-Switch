#include "mindustry/type/Weather_WeatherEntry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/type/Weather.h"
#include "mindustry/content/Weathers.h"
#include "arc/util/serialization/AllowSerialization.h"

extern "C" {

static jclass interfaces[] { &class_arc_util_serialization_AllowSerialization, };


void mark_mindustry_type_Weather$WeatherEntry(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_Weather$WeatherEntry *) object;
	if (self->F_weather)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weather)->clazz)->markFunction)((jobject) self->F_weather, mark, depth + 1);
}

void clinit_mindustry_type_Weather$WeatherEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather$WeatherEntry:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather$WeatherEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(276);
	init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[1].o)))->F_duration) * (jfloat(2))), (((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[1].o)))->F_duration) * (jfloat(6.0f))), (((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[1].o)))->F_duration) / (jfloat(2))), (((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[1].o)))->F_duration) * (jfloat(1.5f))));
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather$WeatherEntry:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather$WeatherEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(279);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Weathers(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Weathers_rain;
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK(sp[0].o))->F_weather = (jref) sp[1].o;
	LINE_NUMBER(270);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	LINE_NUMBER(272);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_always = (jint(0));
	LINE_NUMBER(280);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_weather = (jref) (frame[1].o);
	LINE_NUMBER(281);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_minFrequency = (frame[2].f);
	LINE_NUMBER(282);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_maxFrequency = (frame[3].f);
	LINE_NUMBER(283);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_minDuration = (frame[4].f);
	LINE_NUMBER(284);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_maxDuration = (frame[5].f);
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (frame[2].f), (frame[3].f));
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK(sp[0].o))->F_cooldown = temp0;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_Weather$WeatherEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather$WeatherEntry:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather$WeatherEntry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(290);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Weathers(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Weathers_rain;
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK(sp[0].o))->F_weather = (jref) sp[1].o;
	LINE_NUMBER(270);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	LINE_NUMBER(272);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_always = (jint(0));
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_Weather$WeatherEntry[] {
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
};

static FieldMetadata fields[] {
	{ "weather", &class_mindustry_type_Weather, offsetof(mindustry_type_Weather$WeatherEntry, F_weather), "Lmindustry/type/Weather;", 1 },
	{ "minFrequency", &class_float, offsetof(mindustry_type_Weather$WeatherEntry, F_minFrequency), "F", 1 },
	{ "maxFrequency", &class_float, offsetof(mindustry_type_Weather$WeatherEntry, F_maxFrequency), "F", 1 },
	{ "minDuration", &class_float, offsetof(mindustry_type_Weather$WeatherEntry, F_minDuration), "F", 1 },
	{ "maxDuration", &class_float, offsetof(mindustry_type_Weather$WeatherEntry, F_maxDuration), "F", 1 },
	{ "cooldown", &class_float, offsetof(mindustry_type_Weather$WeatherEntry, F_cooldown), "F", 1 },
	{ "intensity", &class_float, offsetof(mindustry_type_Weather$WeatherEntry, F_intensity), "F", 1 },
	{ "always", &class_boolean, offsetof(mindustry_type_Weather$WeatherEntry, F_always), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather, 0, "(Lmindustry/type/Weather;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather_float_float_float_float, 0, "(Lmindustry/type/Weather;FFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_Weather$WeatherEntry, 0, "()V", 1 },
};

Class class_mindustry_type_Weather$WeatherEntry{
		.nativeName = (intptr_t) "mindustry/type/Weather$WeatherEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_Weather$WeatherEntry),
		.classVtable = (intptr_t) vtable_mindustry_type_Weather$WeatherEntry,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Weather$WeatherEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_Weather$WeatherEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_type_Weather,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Weather$WeatherEntry = registerClass(&class_mindustry_type_Weather$WeatherEntry);

}

