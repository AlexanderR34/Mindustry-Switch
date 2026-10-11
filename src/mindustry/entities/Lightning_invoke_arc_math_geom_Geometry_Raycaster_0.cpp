#include "mindustry/entities/Lightning_invoke_arc_math_geom_Geometry_Raycaster_0.h"
#include "mindustry/entities/Lightning_invoke_arc_math_geom_Geometry_Raycaster_0.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Geometry_Raycaster.h"
#include "mindustry/entities/Lightning.h"
#include "arc/struct/Seq.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0_accept_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/entities/Lightning_invoke_arc_math_geom_Geometry$Raycaster_0:accept", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0 *) self;
	auto object = SM_mindustry_entities_Lightning_lambda$createLightningInternal$0_mindustry_game_Team_arc_struct_Seq_int_int_R_boolean(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0[] {
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
	(void *) M_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0_accept_int_int_R_boolean,
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
	{ "accept", "(II)Z" },
};

static jclass interfaces[] { &class_arc_math_geom_Geometry$Raycaster, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_game_Team, offsetof(mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0, F_field0), "Lmindustry/game/Team;", 0 },
	{ "field1", &class_arc_struct_Seq, offsetof(mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0, F_field1), "Larc/struct/Seq;", 0 },
};

static MethodMetadata methods[] {
	{ "accept", (intptr_t) M_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0_accept_int_int_R_boolean, VTABLE_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0_accept_int_int_R_boolean, "(II)Z", 0 },
};

Class class_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0{
		.nativeName = (intptr_t) "mindustry/entities/Lightning_invoke_arc_math_geom_Geometry$Raycaster_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0),
		.classVtable = (intptr_t) vtable_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0 = registerClass(&class_mindustry_entities_Lightning_invoke_arc_math_geom_Geometry$Raycaster_0);

}

