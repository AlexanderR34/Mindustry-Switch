#include "mindustry/type/Sector_SectorRect.h"
#include "java/lang/Object.h"
#include "mindustry/type/Sector_SectorRect.h"
#include "mindustry/type/Sector.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_mindustry_type_Sector$SectorRect(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_Sector$SectorRect *) object;
	if (self->F_center)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_center)->clazz)->markFunction)((jobject) self->F_center, mark, depth + 1);
	if (self->F_top)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_top)->clazz)->markFunction)((jobject) self->F_top, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
}

void clinit_mindustry_type_Sector$SectorRect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_type_Sector$SectorRect_float_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_float(jcontext ctx, jobject self, jfloat param0, jobject param1, jobject param2, jobject param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector$SectorRect:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Sector$SectorRect(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(289);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((mindustry_type_Sector$SectorRect *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(290);
	((mindustry_type_Sector$SectorRect *) NULL_CHECK((frame[0].o)))->F_center = (jref) (frame[2].o);
	LINE_NUMBER(291);
	((mindustry_type_Sector$SectorRect *) NULL_CHECK((frame[0].o)))->F_top = (jref) (frame[3].o);
	LINE_NUMBER(292);
	((mindustry_type_Sector$SectorRect *) NULL_CHECK((frame[0].o)))->F_right = (jref) (frame[4].o);
	LINE_NUMBER(293);
	((mindustry_type_Sector$SectorRect *) NULL_CHECK((frame[0].o)))->F_radius = (frame[1].f);
	LINE_NUMBER(294);
	((mindustry_type_Sector$SectorRect *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[5].f);
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Sector$SectorRect:project", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(300);
	frame[3].f = (((frame[1].f) - (jfloat(0.5f))) * (jfloat(2)));
	frame[4].f = (((frame[2].f) - (jfloat(0.5f))) * (jfloat(2)));
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_type_Sector$SectorRect *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = (jobject)((mindustry_type_Sector$SectorRect *) NULL_CHECK((frame[0].o)))->F_center;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Sector$SectorRect *) NULL_CHECK((frame[0].o)))->F_right;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (frame[3].f));
	sp[1].o = (jobject)((mindustry_type_Sector$SectorRect *) NULL_CHECK((frame[0].o)))->F_top;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_Sector$SectorRect[] {
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
	(void *) M_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3,
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
	{ "project", "(FF)Larc/math/geom/Vec3;" },
};

static FieldMetadata fields[] {
	{ "center", &class_arc_math_geom_Vec3, offsetof(mindustry_type_Sector$SectorRect, F_center), "Larc/math/geom/Vec3;", 17 },
	{ "top", &class_arc_math_geom_Vec3, offsetof(mindustry_type_Sector$SectorRect, F_top), "Larc/math/geom/Vec3;", 17 },
	{ "right", &class_arc_math_geom_Vec3, offsetof(mindustry_type_Sector$SectorRect, F_right), "Larc/math/geom/Vec3;", 17 },
	{ "result", &class_arc_math_geom_Vec3, offsetof(mindustry_type_Sector$SectorRect, F_result), "Larc/math/geom/Vec3;", 17 },
	{ "radius", &class_float, offsetof(mindustry_type_Sector$SectorRect, F_radius), "F", 17 },
	{ "rotation", &class_float, offsetof(mindustry_type_Sector$SectorRect, F_rotation), "F", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_Sector$SectorRect_float_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_float, 0, "(FLarc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;F)V", 1 },
	{ "project", (intptr_t) M_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3, VTABLE_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3, "(FF)Larc/math/geom/Vec3;", 1 },
};

Class class_mindustry_type_Sector$SectorRect{
		.nativeName = (intptr_t) "mindustry/type/Sector$SectorRect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_Sector$SectorRect),
		.classVtable = (intptr_t) vtable_mindustry_type_Sector$SectorRect,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Sector$SectorRect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_Sector$SectorRect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_type_Sector,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Sector$SectorRect = registerClass(&class_mindustry_type_Sector$SectorRect);

}

