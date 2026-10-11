#include "mindustry/graphics/g3d/PlanetParams.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/content/Planets.h"
#include "mindustry/type/Planet.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/graphics/g3d/PlanetRenderer_PlanetInterfaceRenderer.h"
#include "arc/util/Nullable.h"
#include "arc/math/geom/Vec3.h"
#include "mindustry/graphics/g3d/PlanetParams.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_graphics_g3d_PlanetParams(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_PlanetParams *) object;
	if (self->F_camPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camPos)->clazz)->markFunction)((jobject) self->F_camPos, mark, depth + 1);
	if (self->F_otherCamPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_otherCamPos)->clazz)->markFunction)((jobject) self->F_otherCamPos, mark, depth + 1);
	if (self->F_camUp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camUp)->clazz)->markFunction)((jobject) self->F_camUp, mark, depth + 1);
	if (self->F_camDir)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camDir)->clazz)->markFunction)((jobject) self->F_camDir, mark, depth + 1);
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
	if (self->F_renderer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_renderer)->clazz)->markFunction)((jobject) self->F_renderer, mark, depth + 1);
}

void clinit_mindustry_graphics_g3d_PlanetParams(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetParams:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetParams(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(4.0f)));
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_camPos = (jref) sp[1].o;
	LINE_NUMBER(16);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[0].o)))->F_otherCamAlpha = (jfloat(0));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(1)), (jfloat(0)));
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_camUp = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(-1.0f)));
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_camDir = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(27);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[0].o)))->F_uiAlpha = (jfloat(1));
	LINE_NUMBER(29);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[0].o)))->F_drawUi = (jint(0));
	LINE_NUMBER(31);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[0].o)))->F_drawSkybox = (jint(1));
	LINE_NUMBER(36);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[0].o)))->F_viewW = (jint(-1));
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[0].o)))->F_viewH = (jint(-1));
	LINE_NUMBER(38);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[0].o)))->F_alwaysDrawAtmosphere = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_graphics_g3d_PlanetParams;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field otherCamPos
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field renderer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_graphics_g3d_PlanetParams[] {
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
	{ "camPos", &class_arc_math_geom_Vec3, offsetof(mindustry_graphics_g3d_PlanetParams, F_camPos), "Larc/math/geom/Vec3;", 1 },
	{ "otherCamPos", &class_arc_math_geom_Vec3, offsetof(mindustry_graphics_g3d_PlanetParams, F_otherCamPos), "Larc/math/geom/Vec3;", 1 },
	{ "otherCamAlpha", &class_float, offsetof(mindustry_graphics_g3d_PlanetParams, F_otherCamAlpha), "F", 1 },
	{ "camUp", &class_arc_math_geom_Vec3, offsetof(mindustry_graphics_g3d_PlanetParams, F_camUp), "Larc/math/geom/Vec3;", 1 },
	{ "camDir", &class_arc_math_geom_Vec3, offsetof(mindustry_graphics_g3d_PlanetParams, F_camDir), "Larc/math/geom/Vec3;", 1 },
	{ "planet", &class_mindustry_type_Planet, offsetof(mindustry_graphics_g3d_PlanetParams, F_planet), "Lmindustry/type/Planet;", 1 },
	{ "zoom", &class_float, offsetof(mindustry_graphics_g3d_PlanetParams, F_zoom), "F", 1 },
	{ "uiAlpha", &class_float, offsetof(mindustry_graphics_g3d_PlanetParams, F_uiAlpha), "F", 1 },
	{ "drawUi", &class_boolean, offsetof(mindustry_graphics_g3d_PlanetParams, F_drawUi), "Z", 1 },
	{ "drawSkybox", &class_boolean, offsetof(mindustry_graphics_g3d_PlanetParams, F_drawSkybox), "Z", 1 },
	{ "renderer", &class_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer, offsetof(mindustry_graphics_g3d_PlanetParams, F_renderer), "Lmindustry/graphics/g3d/PlanetRenderer$PlanetInterfaceRenderer;", 129 },
	{ "viewW", &class_int, offsetof(mindustry_graphics_g3d_PlanetParams, F_viewW), "I", 129 },
	{ "viewH", &class_int, offsetof(mindustry_graphics_g3d_PlanetParams, F_viewH), "I", 129 },
	{ "alwaysDrawAtmosphere", &class_boolean, offsetof(mindustry_graphics_g3d_PlanetParams, F_alwaysDrawAtmosphere), "Z", 129 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_PlanetParams, 0, "()V", 1 },
};

Class class_mindustry_graphics_g3d_PlanetParams{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/PlanetParams",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_PlanetParams),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_PlanetParams,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_PlanetParams,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_PlanetParams,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_PlanetParams = registerClass(&class_mindustry_graphics_g3d_PlanetParams);

}
