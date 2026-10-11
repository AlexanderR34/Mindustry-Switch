#include "mindustry/ai/UnitGroup_invoke_arc_math_geom_IntQuadTree_IntQuadTreeProvider_0.h"
#include "java/lang/Object.h"
#include "arc/math/geom/IntQuadTree_IntQuadTreeProvider.h"
#include "mindustry/ai/UnitGroup_invoke_arc_math_geom_IntQuadTree_IntQuadTreeProvider_0.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ai/UnitGroup.h"

extern "C" {


void mark_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0_hitbox_int_arc_math_geom_Rect(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ai/UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0:hitbox", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0 *) self;
	((func_mindustry_ai_UnitGroup_lambda$calculateFormation$1_int_arc_math_geom_Rect) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_ai_UnitGroup_lambda$calculateFormation$1_int_arc_math_geom_Rect])(ctx, (jobject) proxy->F_field0, param0, param1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0[] {
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
	(void *) M_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0_hitbox_int_arc_math_geom_Rect,
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
	{ "hitbox", "(ILarc/math/geom/Rect;)V" },
};

static jclass interfaces[] { &class_arc_math_geom_IntQuadTree$IntQuadTreeProvider, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_ai_UnitGroup, offsetof(mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0, F_field0), "Lmindustry/ai/UnitGroup;", 0 },
};

static MethodMetadata methods[] {
	{ "hitbox", (intptr_t) M_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0_hitbox_int_arc_math_geom_Rect, VTABLE_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0_hitbox_int_arc_math_geom_Rect, "(ILarc/math/geom/Rect;)V", 0 },
};

Class class_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0{
		.nativeName = (intptr_t) "mindustry/ai/UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0),
		.classVtable = (intptr_t) vtable_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0 = registerClass(&class_mindustry_ai_UnitGroup_invoke_arc_math_geom_IntQuadTree$IntQuadTreeProvider_0);

}

