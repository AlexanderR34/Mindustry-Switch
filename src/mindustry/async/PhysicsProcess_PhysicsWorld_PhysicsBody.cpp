#include "mindustry/async/PhysicsProcess_PhysicsWorld_PhysicsBody.h"
#include "mindustry/async/PhysicsProcess_PhysicsWorld.h"
#include "java/lang/Object.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/async/PhysicsProcess_PhysicsWorld_PhysicsBody.h"
#include "arc/math/geom/Rect.h"

extern "C" {


void mark_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) object;
}

void clinit_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess$PhysicsWorld$PhysicsBody:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(253);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(255);
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[0].o)))->F_collided = (jint(0));
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[0].o)))->F_local = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess$PhysicsWorld$PhysicsBody:hitbox", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[0].o)))->F_radius) * (jfloat(2))), (((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[0].o)))->F_radius) * (jfloat(2))));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody[] {
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
	(void *) M_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_hitbox_arc_math_geom_Rect,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
};

static jclass interfaces[] { &class_arc_math_geom_QuadTree$QuadTreeObject, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, F_y), "F", 1 },
	{ "radius", &class_float, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, F_radius), "F", 1 },
	{ "mass", &class_float, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, F_mass), "F", 1 },
	{ "collided", &class_boolean, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, F_collided), "Z", 1 },
	{ "local", &class_boolean, offsetof(mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, F_local), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, 0, "()V", 1 },
	{ "hitbox", (intptr_t) M_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_hitbox_arc_math_geom_Rect, VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_hitbox_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
};

Class class_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody{
		.nativeName = (intptr_t) "mindustry/async/PhysicsProcess$PhysicsWorld$PhysicsBody",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody),
		.classVtable = (intptr_t) vtable_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody,
		.staticInitializer = (intptr_t) clinit_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_async_PhysicsProcess$PhysicsWorld,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody = registerClass(&class_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody);

}

