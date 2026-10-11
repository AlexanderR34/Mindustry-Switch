#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy_Node.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy_Node.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy.h"

extern "C" {


void mark_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) object;
	if (self->F_rect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rect)->clazz)->markFunction)((jobject) self->F_rect, mark, depth + 1);
	if (self->F_leftChild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_leftChild)->clazz)->markFunction)((jobject) self->F_leftChild, mark, depth + 1);
	if (self->F_rightChild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rightChild)->clazz)->markFunction)((jobject) self->F_rightChild, mark, depth + 1);
}

void clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$GuillotineStrategy$Node:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(775);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(776);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node[] {
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
	{ "rect", &class_arc_math_geom_Rect, offsetof(arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, F_rect), "Larc/math/geom/Rect;", 17 },
	{ "leftChild", &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, offsetof(arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, F_leftChild), "Larc/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;", 1 },
	{ "rightChild", &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, offsetof(arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, F_rightChild), "Larc/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;", 1 },
	{ "full", &class_boolean, offsetof(arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, F_full), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, 0, "()V", 0 },
};

Class class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node{
		.nativeName = (intptr_t) "arc/graphics/g2d/PixmapPacker$GuillotineStrategy$Node",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node = registerClass(&class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node);

}

