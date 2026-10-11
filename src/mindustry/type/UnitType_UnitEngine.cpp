#include "mindustry/type/UnitType_UnitEngine.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/type/UnitType_UnitEngine.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/Angles.h"
#include "java/lang/Cloneable.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/graphics/Color.h"
#include "java/lang/CloneNotSupportedException.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/game/Team.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_mindustry_type_UnitType$UnitEngine(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_UnitType$UnitEngine *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_type_UnitType$UnitEngine(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_type_UnitType$UnitEngine_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType$UnitEngine:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType$UnitEngine(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(2008);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2009);
	((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(2010);
	((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(2011);
	((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_radius = (frame[3].f);
	LINE_NUMBER(2012);
	((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[4].f);
	LINE_NUMBER(2013);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_UnitType$UnitEngine(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType$UnitEngine:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType$UnitEngine(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2015);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2016);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType$UnitEngine_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType$UnitEngine:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2019);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2020);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[2].o)))->F_useEngineElevation) == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_elevation;
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FCONST(1);
label_3:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(2022);
	if ((floatCompare((frame[3].f), (jfloat(1,000000e-04f)), 1)) > 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(2024);
	frame[4].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f)));
	LINE_NUMBER(2025);
	sp[0].o = (jobject)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_color;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[2].o)))->F_engineColor;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	goto label_8;
	}
label_9:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((mindustry_type_UnitType *) NULL_CHECK(sp[-1].o))->F_engineColor;
label_8:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2027);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[4].f));
	LINE_NUMBER(2028);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[6].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(2029);
	jfloat temp0 = (jfloat)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_radius;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(2)), (((jfloat)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_radius) / (jfloat(4.0f))));
	frame[8].f = ((temp0 + temp1) * (frame[3].f));
	LINE_NUMBER(2042);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[5].o));
	LINE_NUMBER(2043);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x) + (frame[6].f)), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y) + (frame[7].f)), (frame[8].f));
	LINE_NUMBER(2048);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[2].o)))->F_engineColorInner;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(2049);
	jfloat temp2 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x) + (frame[6].f);
	jfloat temp3 = (frame[4].f) + ((jfloat)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_rotation);
	jfloat temp4 = (frame[8].f) / (jfloat(4.0f));
	LINE_NUMBER(2050);
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp3, temp4);
	jfloat temp6 = temp2 - temp5;
	jfloat temp7 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y) + (frame[7].f);
	jfloat temp8 = (frame[4].f) + ((jfloat)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[0].o)))->F_rotation);
	jfloat temp9 = (frame[8].f) / (jfloat(4.0f));
	LINE_NUMBER(2051);
	jfloat temp10 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp8, temp9);
	jfloat temp11 = temp7 - temp10;
	jfloat temp12 = (frame[8].f) / (jfloat(2));
	LINE_NUMBER(2049);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp6, temp11, temp12);
	LINE_NUMBER(2054);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType$UnitEngine_copy_R_mindustry_type_UnitType$UnitEngine(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType$UnitEngine:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2058);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = checkCast(ctx, &class_mindustry_type_UnitType$UnitEngine, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2059);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2060);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fantastic"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_UnitType$UnitEngine;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field color
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_type_UnitType$UnitEngine[] {
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
	(void *) M_mindustry_type_UnitType$UnitEngine_draw_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType$UnitEngine_copy_R_mindustry_type_UnitType$UnitEngine,
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
	{ "draw", "(Lmindustry/gen/Unit;)V" },
	{ "copy", "()Lmindustry/type/UnitType$UnitEngine;" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_type_UnitType$UnitEngine, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_type_UnitType$UnitEngine, F_y), "F", 1 },
	{ "radius", &class_float, offsetof(mindustry_type_UnitType$UnitEngine, F_radius), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_type_UnitType$UnitEngine, F_rotation), "F", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_type_UnitType$UnitEngine, F_color), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_UnitType$UnitEngine_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_UnitType$UnitEngine, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_type_UnitType$UnitEngine_draw_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType$UnitEngine_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "copy", (intptr_t) M_mindustry_type_UnitType$UnitEngine_copy_R_mindustry_type_UnitType$UnitEngine, VTABLE_mindustry_type_UnitType$UnitEngine_copy_R_mindustry_type_UnitType$UnitEngine, "()Lmindustry/type/UnitType$UnitEngine;", 1 },
};

Class class_mindustry_type_UnitType$UnitEngine{
		.nativeName = (intptr_t) "mindustry/type/UnitType$UnitEngine",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_UnitType$UnitEngine),
		.classVtable = (intptr_t) vtable_mindustry_type_UnitType$UnitEngine,
		.staticInitializer = (intptr_t) clinit_mindustry_type_UnitType$UnitEngine,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_UnitType$UnitEngine,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_type_UnitType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_UnitType$UnitEngine = registerClass(&class_mindustry_type_UnitType$UnitEngine);

}

