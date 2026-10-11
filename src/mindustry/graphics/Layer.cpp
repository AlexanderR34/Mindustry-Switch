#include "mindustry/graphics/Layer.h"
#include "java/lang/Object.h"

extern "C" {

jfloat SF_mindustry_graphics_Layer_min;
jfloat SF_mindustry_graphics_Layer_background;
jfloat SF_mindustry_graphics_Layer_floor;
jfloat SF_mindustry_graphics_Layer_scorch;
jfloat SF_mindustry_graphics_Layer_debris;
jfloat SF_mindustry_graphics_Layer_blockUnder;
jfloat SF_mindustry_graphics_Layer_block;
jfloat SF_mindustry_graphics_Layer_blockCracks;
jfloat SF_mindustry_graphics_Layer_blockAfterCracks;
jfloat SF_mindustry_graphics_Layer_blockAdditive;
jfloat SF_mindustry_graphics_Layer_blockProp;
jfloat SF_mindustry_graphics_Layer_blockOver;
jfloat SF_mindustry_graphics_Layer_blockBuilding;
jfloat SF_mindustry_graphics_Layer_turret;
jfloat SF_mindustry_graphics_Layer_turretHeat;
jfloat SF_mindustry_graphics_Layer_groundUnit;
jfloat SF_mindustry_graphics_Layer_power;
jfloat SF_mindustry_graphics_Layer_legUnit;
jfloat SF_mindustry_graphics_Layer_darkness;
jfloat SF_mindustry_graphics_Layer_plans;
jfloat SF_mindustry_graphics_Layer_flyingUnitLow;
jfloat SF_mindustry_graphics_Layer_bullet;
jfloat SF_mindustry_graphics_Layer_effect;
jfloat SF_mindustry_graphics_Layer_flyingUnit;
jfloat SF_mindustry_graphics_Layer_overlayUI;
jfloat SF_mindustry_graphics_Layer_buildBeam;
jfloat SF_mindustry_graphics_Layer_shields;
jfloat SF_mindustry_graphics_Layer_weather;
jfloat SF_mindustry_graphics_Layer_light;
jfloat SF_mindustry_graphics_Layer_playerName;
jfloat SF_mindustry_graphics_Layer_fogOfWar;
jfloat SF_mindustry_graphics_Layer_space;
jfloat SF_mindustry_graphics_Layer_end;
jfloat SF_mindustry_graphics_Layer_endPixeled;
jfloat SF_mindustry_graphics_Layer_max;

void mark_mindustry_graphics_Layer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Layer *) object;
}

void clinit_mindustry_graphics_Layer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_Layer_min = jfloat(-11.0f);
	SF_mindustry_graphics_Layer_background = jfloat(-10.0f);
	SF_mindustry_graphics_Layer_floor = jfloat(0,000000e+00f);
	SF_mindustry_graphics_Layer_scorch = jfloat(10.0f);
	SF_mindustry_graphics_Layer_debris = jfloat(20.0f);
	SF_mindustry_graphics_Layer_blockUnder = jfloat(29.5f);
	SF_mindustry_graphics_Layer_block = jfloat(30.0f);
	SF_mindustry_graphics_Layer_blockCracks = jfloat(30.1f);
	SF_mindustry_graphics_Layer_blockAfterCracks = jfloat(30.2f);
	SF_mindustry_graphics_Layer_blockAdditive = jfloat(31.0f);
	SF_mindustry_graphics_Layer_blockProp = jfloat(32.0f);
	SF_mindustry_graphics_Layer_blockOver = jfloat(35.0f);
	SF_mindustry_graphics_Layer_blockBuilding = jfloat(40.0f);
	SF_mindustry_graphics_Layer_turret = jfloat(50.0f);
	SF_mindustry_graphics_Layer_turretHeat = jfloat(50.1f);
	SF_mindustry_graphics_Layer_groundUnit = jfloat(60.0f);
	SF_mindustry_graphics_Layer_power = jfloat(70.0f);
	SF_mindustry_graphics_Layer_legUnit = jfloat(75.0f);
	SF_mindustry_graphics_Layer_darkness = jfloat(80.0f);
	SF_mindustry_graphics_Layer_plans = jfloat(85.0f);
	SF_mindustry_graphics_Layer_flyingUnitLow = jfloat(90.0f);
	SF_mindustry_graphics_Layer_bullet = jfloat(100.0f);
	SF_mindustry_graphics_Layer_effect = jfloat(110.0f);
	SF_mindustry_graphics_Layer_flyingUnit = jfloat(115.0f);
	SF_mindustry_graphics_Layer_overlayUI = jfloat(120.0f);
	SF_mindustry_graphics_Layer_buildBeam = jfloat(122.0f);
	SF_mindustry_graphics_Layer_shields = jfloat(125.0f);
	SF_mindustry_graphics_Layer_weather = jfloat(130.0f);
	SF_mindustry_graphics_Layer_light = jfloat(140.0f);
	SF_mindustry_graphics_Layer_playerName = jfloat(150.0f);
	SF_mindustry_graphics_Layer_fogOfWar = jfloat(155.0f);
	SF_mindustry_graphics_Layer_space = jfloat(160.0f);
	SF_mindustry_graphics_Layer_end = jfloat(200.0f);
	SF_mindustry_graphics_Layer_endPixeled = jfloat(210.0f);
	SF_mindustry_graphics_Layer_max = jfloat(220.0f);
}

void init_mindustry_graphics_Layer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Layer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Layer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Layer[] {
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
	{ "min", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_min, "F", 25 },
	{ "background", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_background, "F", 25 },
	{ "floor", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_floor, "F", 25 },
	{ "scorch", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_scorch, "F", 25 },
	{ "debris", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_debris, "F", 25 },
	{ "blockUnder", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_blockUnder, "F", 25 },
	{ "block", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_block, "F", 25 },
	{ "blockCracks", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_blockCracks, "F", 25 },
	{ "blockAfterCracks", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_blockAfterCracks, "F", 25 },
	{ "blockAdditive", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_blockAdditive, "F", 25 },
	{ "blockProp", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_blockProp, "F", 25 },
	{ "blockOver", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_blockOver, "F", 25 },
	{ "blockBuilding", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_blockBuilding, "F", 25 },
	{ "turret", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_turret, "F", 25 },
	{ "turretHeat", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_turretHeat, "F", 25 },
	{ "groundUnit", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_groundUnit, "F", 25 },
	{ "power", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_power, "F", 25 },
	{ "legUnit", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_legUnit, "F", 25 },
	{ "darkness", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_darkness, "F", 25 },
	{ "plans", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_plans, "F", 25 },
	{ "flyingUnitLow", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_flyingUnitLow, "F", 25 },
	{ "bullet", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_bullet, "F", 25 },
	{ "effect", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_effect, "F", 25 },
	{ "flyingUnit", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_flyingUnit, "F", 25 },
	{ "overlayUI", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_overlayUI, "F", 25 },
	{ "buildBeam", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_buildBeam, "F", 25 },
	{ "shields", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_shields, "F", 25 },
	{ "weather", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_weather, "F", 25 },
	{ "light", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_light, "F", 25 },
	{ "playerName", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_playerName, "F", 25 },
	{ "fogOfWar", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_fogOfWar, "F", 25 },
	{ "space", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_space, "F", 25 },
	{ "end", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_end, "F", 25 },
	{ "endPixeled", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_endPixeled, "F", 25 },
	{ "max", &class_float, (intptr_t) &SF_mindustry_graphics_Layer_max, "F", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Layer, 0, "()V", 1 },
};

Class class_mindustry_graphics_Layer{
		.nativeName = (intptr_t) "mindustry/graphics/Layer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Layer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Layer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Layer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Layer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 35,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Layer = registerClass(&class_mindustry_graphics_Layer);

}
