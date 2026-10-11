#include "mindustry/graphics/Voronoi_Edge.h"
#include "mindustry/graphics/Voronoi.h"
#include "mindustry/graphics/Voronoi_Edge.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Voronoi_Site.h"

extern "C" {


void mark_mindustry_graphics_Voronoi$Edge(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Voronoi$Edge *) object;
	if (self->F_ep)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ep)->clazz)->markFunction)((jobject) self->F_ep, mark, depth + 1);
	if (self->F_reg)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reg)->clazz)->markFunction)((jobject) self->F_reg, mark, depth + 1);
}

void clinit_mindustry_graphics_Voronoi$Edge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_Voronoi$Edge(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi$Edge:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Voronoi$Edge(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(637);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(638);
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[0].o)))->F_a = (jfloat(0));
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[0].o)))->F_b = (jfloat(0));
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[0].o)))->F_c = (jfloat(0));
	LINE_NUMBER(639);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_Voronoi$Site, (jint(2)));
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_ep = (jref) sp[1].o;
	LINE_NUMBER(640);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_Voronoi$Site, (jint(2)));
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_reg = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Voronoi$Edge[] {
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
	{ "a", &class_float, offsetof(mindustry_graphics_Voronoi$Edge, F_a), "F", 0 },
	{ "b", &class_float, offsetof(mindustry_graphics_Voronoi$Edge, F_b), "F", 0 },
	{ "c", &class_float, offsetof(mindustry_graphics_Voronoi$Edge, F_c), "F", 0 },
	{ "ep", getArrayClass(&class_mindustry_graphics_Voronoi$Site, 1), offsetof(mindustry_graphics_Voronoi$Edge, F_ep), "[Lmindustry/graphics/Voronoi$Site;", 0 },
	{ "reg", getArrayClass(&class_mindustry_graphics_Voronoi$Site, 1), offsetof(mindustry_graphics_Voronoi$Edge, F_reg), "[Lmindustry/graphics/Voronoi$Site;", 0 },
	{ "edgenbr", &class_int, offsetof(mindustry_graphics_Voronoi$Edge, F_edgenbr), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Voronoi$Edge, 0, "()V", 0 },
};

Class class_mindustry_graphics_Voronoi$Edge{
		.nativeName = (intptr_t) "mindustry/graphics/Voronoi$Edge",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Voronoi$Edge),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Voronoi$Edge,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Voronoi$Edge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Voronoi$Edge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_Voronoi,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Voronoi$Edge = registerClass(&class_mindustry_graphics_Voronoi$Edge);

}

