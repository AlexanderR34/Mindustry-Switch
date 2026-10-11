#include "mindustry/content/Weathers.h"
#include "java/lang/Object.h"
#include "mindustry/content/Weathers_2.h"
#include "mindustry/content/Weathers_1.h"
#include "java/lang/String.h"
#include "mindustry/content/Weathers.h"
#include "mindustry/type/Weather.h"
#include "mindustry/content/Weathers_4.h"
#include "mindustry/content/Weathers_3.h"
#include "mindustry/content/Weathers_6.h"
#include "mindustry/content/Weathers_5.h"

extern "C" {

jobject SF_mindustry_content_Weathers_rain;
jobject SF_mindustry_content_Weathers_snow;
jobject SF_mindustry_content_Weathers_sandstorm;
jobject SF_mindustry_content_Weathers_sporestorm;
jobject SF_mindustry_content_Weathers_fog;
jobject SF_mindustry_content_Weathers_suspendParticles;

void mark_mindustry_content_Weathers(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_Weathers_rain)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Weathers_rain)->clazz)->markFunction)((jobject) SF_mindustry_content_Weathers_rain, mark, depth + 1);
		if (SF_mindustry_content_Weathers_snow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Weathers_snow)->clazz)->markFunction)((jobject) SF_mindustry_content_Weathers_snow, mark, depth + 1);
		if (SF_mindustry_content_Weathers_sandstorm)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Weathers_sandstorm)->clazz)->markFunction)((jobject) SF_mindustry_content_Weathers_sandstorm, mark, depth + 1);
		if (SF_mindustry_content_Weathers_sporestorm)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Weathers_sporestorm)->clazz)->markFunction)((jobject) SF_mindustry_content_Weathers_sporestorm, mark, depth + 1);
		if (SF_mindustry_content_Weathers_fog)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Weathers_fog)->clazz)->markFunction)((jobject) SF_mindustry_content_Weathers_fog, mark, depth + 1);
		if (SF_mindustry_content_Weathers_suspendParticles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Weathers_suspendParticles)->clazz)->markFunction)((jobject) SF_mindustry_content_Weathers_suspendParticles, mark, depth + 1);
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
	auto self = (mindustry_content_Weathers *) object;
}

void clinit_mindustry_content_Weathers(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_content_Weathers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Weathers:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Weathers(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Weathers_load(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Weathers:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Weathers(ctx);
	{
	LINE_NUMBER(20);
	clinit_mindustry_content_Weathers$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Weathers$1);
	init_mindustry_content_Weathers$1_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"snowing"_j))));
	clinit_mindustry_content_Weathers(ctx);
	SF_mindustry_content_Weathers_snow = sp[0].o;
	LINE_NUMBER(34);
	clinit_mindustry_content_Weathers$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Weathers$2);
	init_mindustry_content_Weathers$2_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rain"_j))));
	clinit_mindustry_content_Weathers(ctx);
	SF_mindustry_content_Weathers_rain = sp[0].o;
	LINE_NUMBER(42);
	clinit_mindustry_content_Weathers$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Weathers$3);
	init_mindustry_content_Weathers$3_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sandstorm"_j))));
	clinit_mindustry_content_Weathers(ctx);
	SF_mindustry_content_Weathers_sandstorm = sp[0].o;
	LINE_NUMBER(62);
	clinit_mindustry_content_Weathers$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Weathers$4);
	init_mindustry_content_Weathers$4_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sporestorm"_j))));
	clinit_mindustry_content_Weathers(ctx);
	SF_mindustry_content_Weathers_sporestorm = sp[0].o;
	LINE_NUMBER(84);
	clinit_mindustry_content_Weathers$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Weathers$5);
	init_mindustry_content_Weathers$5_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fog"_j))));
	clinit_mindustry_content_Weathers(ctx);
	SF_mindustry_content_Weathers_fog = sp[0].o;
	LINE_NUMBER(105);
	clinit_mindustry_content_Weathers$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Weathers$6);
	init_mindustry_content_Weathers$6_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"suspend-particles"_j))));
	clinit_mindustry_content_Weathers(ctx);
	SF_mindustry_content_Weathers_suspendParticles = sp[0].o;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Weathers[] {
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
	{ "rain", &class_mindustry_type_Weather, (intptr_t) &SF_mindustry_content_Weathers_rain, "Lmindustry/type/Weather;", 9 },
	{ "snow", &class_mindustry_type_Weather, (intptr_t) &SF_mindustry_content_Weathers_snow, "Lmindustry/type/Weather;", 9 },
	{ "sandstorm", &class_mindustry_type_Weather, (intptr_t) &SF_mindustry_content_Weathers_sandstorm, "Lmindustry/type/Weather;", 9 },
	{ "sporestorm", &class_mindustry_type_Weather, (intptr_t) &SF_mindustry_content_Weathers_sporestorm, "Lmindustry/type/Weather;", 9 },
	{ "fog", &class_mindustry_type_Weather, (intptr_t) &SF_mindustry_content_Weathers_fog, "Lmindustry/type/Weather;", 9 },
	{ "suspendParticles", &class_mindustry_type_Weather, (intptr_t) &SF_mindustry_content_Weathers_suspendParticles, "Lmindustry/type/Weather;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Weathers, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_content_Weathers_load, 0, "()V", 9 },
};

Class class_mindustry_content_Weathers{
		.nativeName = (intptr_t) "mindustry/content/Weathers",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_Weathers),
		.classVtable = (intptr_t) vtable_mindustry_content_Weathers,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Weathers,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Weathers,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_Weathers = registerClass(&class_mindustry_content_Weathers);

}
