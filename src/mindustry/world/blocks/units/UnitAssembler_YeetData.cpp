#include "mindustry/world/blocks/units/UnitAssembler_YeetData.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/units/UnitAssembler.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/blocks/units/UnitAssembler_YeetData.h"

extern "C" {


void mark_mindustry_world_blocks_units_UnitAssembler$YeetData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_units_UnitAssembler$YeetData *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_item)->clazz)->markFunction)((jobject) self->F_item, mark, depth + 1);
}

void clinit_mindustry_world_blocks_units_UnitAssembler$YeetData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_units_UnitAssembler$YeetData_arc_math_geom_Vec2_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$YeetData:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitAssembler$YeetData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(301);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(302);
	((mindustry_world_blocks_units_UnitAssembler$YeetData *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(303);
	((mindustry_world_blocks_units_UnitAssembler$YeetData *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[2].o);
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_units_UnitAssembler$YeetData[] {
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
	{ "target", &class_arc_math_geom_Vec2, offsetof(mindustry_world_blocks_units_UnitAssembler$YeetData, F_target), "Larc/math/geom/Vec2;", 1 },
	{ "item", &class_mindustry_ctype_UnlockableContent, offsetof(mindustry_world_blocks_units_UnitAssembler$YeetData, F_item), "Lmindustry/ctype/UnlockableContent;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_UnitAssembler$YeetData_arc_math_geom_Vec2_mindustry_ctype_UnlockableContent, 0, "(Larc/math/geom/Vec2;Lmindustry/ctype/UnlockableContent;)V", 1 },
};

Class class_mindustry_world_blocks_units_UnitAssembler$YeetData{
		.nativeName = (intptr_t) "mindustry/world/blocks/units/UnitAssembler$YeetData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_units_UnitAssembler$YeetData),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_units_UnitAssembler$YeetData,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_units_UnitAssembler$YeetData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_units_UnitAssembler$YeetData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_units_UnitAssembler,
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
static bool registered_mindustry_world_blocks_units_UnitAssembler$YeetData = registerClass(&class_mindustry_world_blocks_units_UnitAssembler$YeetData);

}

