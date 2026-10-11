#include "arc/graphics/g2d/ForkJoinHolder.h"
#include "arc/graphics/g2d/ForkJoinHolder.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/SpriteBatch_PopulateTask.h"
#include "java/util/concurrent/ForkJoinPool.h"

extern "C" {


void mark_arc_graphics_g2d_ForkJoinHolder(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_ForkJoinHolder *) object;
	if (self->F_pool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pool)->clazz)->markFunction)((jobject) self->F_pool, mark, depth + 1);
	if (self->F_populateTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_populateTask)->clazz)->markFunction)((jobject) self->F_populateTask, mark, depth + 1);
}

void clinit_arc_graphics_g2d_ForkJoinHolder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_ForkJoinHolder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ForkJoinHolder:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ForkJoinHolder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_ForkJoinPool_commonPool_R_java_util_concurrent_ForkJoinPool(ctx);
	((arc_graphics_g2d_ForkJoinHolder *) NULL_CHECK(sp[0].o))->F_pool = (jref) sp[1].o;
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteBatch$PopulateTask);
	init_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx, sp[1].o);
	((arc_graphics_g2d_ForkJoinHolder *) NULL_CHECK(sp[0].o))->F_populateTask = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_ForkJoinHolder[] {
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
	{ "pool", &class_java_util_concurrent_ForkJoinPool, offsetof(arc_graphics_g2d_ForkJoinHolder, F_pool), "Ljava/util/concurrent/ForkJoinPool;", 17 },
	{ "populateTask", &class_arc_graphics_g2d_SpriteBatch$PopulateTask, offsetof(arc_graphics_g2d_ForkJoinHolder, F_populateTask), "Larc/graphics/g2d/SpriteBatch$PopulateTask;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_ForkJoinHolder, 0, "()V", 1 },
};

Class class_arc_graphics_g2d_ForkJoinHolder{
		.nativeName = (intptr_t) "arc/graphics/g2d/ForkJoinHolder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_ForkJoinHolder),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_ForkJoinHolder,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_ForkJoinHolder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_ForkJoinHolder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_ForkJoinHolder = registerClass(&class_arc_graphics_g2d_ForkJoinHolder);

}
