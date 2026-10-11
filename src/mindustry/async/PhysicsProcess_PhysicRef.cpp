#include "mindustry/async/PhysicsProcess_PhysicRef.h"
#include "mindustry/async/PhysicsProcess.h"
#include "mindustry/async/PhysicsProcess_PhysicRef.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/async/PhysicsProcess_PhysicsWorld_PhysicsBody.h"
#include "mindustry/gen/Unitc.h"

extern "C" {


void mark_mindustry_async_PhysicsProcess$PhysicRef(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_async_PhysicsProcess$PhysicRef *) object;
	if (self->F_entity)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entity)->clazz)->markFunction)((jobject) self->F_entity, mark, depth + 1);
	if (self->F_body)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_body)->clazz)->markFunction)((jobject) self->F_body, mark, depth + 1);
}

void clinit_mindustry_async_PhysicsProcess$PhysicRef(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_async_PhysicsProcess$PhysicRef_mindustry_gen_Unit_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess$PhysicRef:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_async_PhysicsProcess$PhysicRef(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(154);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(155);
	((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[0].o)))->F_entity = (jref) (frame[1].o);
	LINE_NUMBER(156);
	((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[0].o)))->F_body = (jref) (frame[2].o);
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Unit_collisionLayer_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_collisionLayer_R_int])(ctx, (frame[1].o));
	((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK(sp[0].o))->F_lastLayer = temp0;
	LINE_NUMBER(158);
	((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[0].o)))->F_startX = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(159);
	((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[0].o)))->F_startY = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_async_PhysicsProcess$PhysicRef[] {
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
	{ "entity", &class_mindustry_gen_Unit, offsetof(mindustry_async_PhysicsProcess$PhysicRef, F_entity), "Lmindustry/gen/Unit;", 1 },
	{ "body", &class_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, offsetof(mindustry_async_PhysicsProcess$PhysicRef, F_body), "Lmindustry/async/PhysicsProcess$PhysicsWorld$PhysicsBody;", 1 },
	{ "startX", &class_float, offsetof(mindustry_async_PhysicsProcess$PhysicRef, F_startX), "F", 1 },
	{ "startY", &class_float, offsetof(mindustry_async_PhysicsProcess$PhysicRef, F_startY), "F", 1 },
	{ "lastLayer", &class_int, offsetof(mindustry_async_PhysicsProcess$PhysicRef, F_lastLayer), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_async_PhysicsProcess$PhysicRef_mindustry_gen_Unit_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody, 0, "(Lmindustry/gen/Unit;Lmindustry/async/PhysicsProcess$PhysicsWorld$PhysicsBody;)V", 1 },
};

Class class_mindustry_async_PhysicsProcess$PhysicRef{
		.nativeName = (intptr_t) "mindustry/async/PhysicsProcess$PhysicRef",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_async_PhysicsProcess$PhysicRef),
		.classVtable = (intptr_t) vtable_mindustry_async_PhysicsProcess$PhysicRef,
		.staticInitializer = (intptr_t) clinit_mindustry_async_PhysicsProcess$PhysicRef,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_async_PhysicsProcess$PhysicRef,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_async_PhysicsProcess,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_async_PhysicsProcess$PhysicRef = registerClass(&class_mindustry_async_PhysicsProcess$PhysicRef);

}

