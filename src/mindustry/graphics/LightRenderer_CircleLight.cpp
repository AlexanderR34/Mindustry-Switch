#include "mindustry/graphics/LightRenderer_CircleLight.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/LightRenderer_CircleLight.h"
#include "mindustry/graphics/LightRenderer.h"

extern "C" {


void mark_mindustry_graphics_LightRenderer$CircleLight(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_LightRenderer$CircleLight *) object;
}

void clinit_mindustry_graphics_LightRenderer$CircleLight(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_LightRenderer$CircleLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer$CircleLight:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_LightRenderer$CircleLight(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(229);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_LightRenderer$CircleLight_set_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/LightRenderer$CircleLight:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(233);
	((mindustry_graphics_LightRenderer$CircleLight *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(234);
	((mindustry_graphics_LightRenderer$CircleLight *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(235);
	((mindustry_graphics_LightRenderer$CircleLight *) NULL_CHECK((frame[0].o)))->F_color = (frame[3].f);
	LINE_NUMBER(236);
	((mindustry_graphics_LightRenderer$CircleLight *) NULL_CHECK((frame[0].o)))->F_radius = (frame[4].f);
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_LightRenderer$CircleLight[] {
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
	(void *) M_mindustry_graphics_LightRenderer$CircleLight_set_float_float_float_float,
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
	{ "set", "(FFFF)V" },
};

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_graphics_LightRenderer$CircleLight, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_graphics_LightRenderer$CircleLight, F_y), "F", 0 },
	{ "color", &class_float, offsetof(mindustry_graphics_LightRenderer$CircleLight, F_color), "F", 0 },
	{ "radius", &class_float, offsetof(mindustry_graphics_LightRenderer$CircleLight, F_radius), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_LightRenderer$CircleLight, 0, "()V", 0 },
	{ "set", (intptr_t) M_mindustry_graphics_LightRenderer$CircleLight_set_float_float_float_float, VTABLE_mindustry_graphics_LightRenderer$CircleLight_set_float_float_float_float, "(FFFF)V", 1 },
};

Class class_mindustry_graphics_LightRenderer$CircleLight{
		.nativeName = (intptr_t) "mindustry/graphics/LightRenderer$CircleLight",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_LightRenderer$CircleLight),
		.classVtable = (intptr_t) vtable_mindustry_graphics_LightRenderer$CircleLight,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_LightRenderer$CircleLight,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_LightRenderer$CircleLight,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_LightRenderer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_LightRenderer$CircleLight = registerClass(&class_mindustry_graphics_LightRenderer$CircleLight);

}

