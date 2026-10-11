#include "mindustry/logic/LExecutor_SetWeatherI.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/type/Weather.h"
#include "arc/util/Tmp.h"
#include "mindustry/gen/WeatherState.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/gen/Call.h"
#include "mindustry/logic/LExecutor_SetWeatherI.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SetWeatherI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SetWeatherI *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_state)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_state)->clazz)->markFunction)((jobject) self->F_state, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SetWeatherI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SetWeatherI_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetWeatherI:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetWeatherI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1727);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1728);
	((mindustry_logic_LExecutor$SetWeatherI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(1729);
	((mindustry_logic_LExecutor$SetWeatherI *) NULL_CHECK((frame[0].o)))->F_state = (jref) (frame[2].o);
	LINE_NUMBER(1730);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SetWeatherI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetWeatherI:run", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1734);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetWeatherI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_type_Weather)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Weather, (frame[3].o)));
	LINE_NUMBER(1735);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetWeatherI *) NULL_CHECK((frame[0].o)))->F_state;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1736);
	jint temp0 = (jint)((func_mindustry_type_Weather_isActive_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Weather_isActive_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1737);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(1738);
	sp[0].o = frame[2].o;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = jfloat(240.0f);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_mindustry_gen_Call_createWeather_mindustry_type_Weather_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(1740);
	sp[0].o = (jobject)((func_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState])(ctx, (frame[2].o));
	((func_mindustry_gen_WeatherState_life_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_WeatherState_life_float])(ctx, sp[0].o, (jfloat(240.0f)));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(1743);
	jint temp0 = (jint)((func_mindustry_type_Weather_isActive_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Weather_isActive_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState])(ctx, (frame[2].o));
	if ((floatCompare(((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_life), (jfloat(240.0f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1744);
	sp[0].o = (jobject)((func_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState])(ctx, (frame[2].o));
	((func_mindustry_gen_WeatherState_life_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_WeatherState_life_float])(ctx, sp[0].o, (jfloat(240.0f)));
	}
label_1:;
	LINE_NUMBER(1748);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SetWeatherI[] {
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
	(void *) M_mindustry_logic_LExecutor$SetWeatherI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "type", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetWeatherI, F_type), "Lmindustry/logic/LVar;", 1 },
	{ "state", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetWeatherI, F_state), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetWeatherI_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SetWeatherI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SetWeatherI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SetWeatherI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SetWeatherI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SetWeatherI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SetWeatherI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SetWeatherI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SetWeatherI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$SetWeatherI = registerClass(&class_mindustry_logic_LExecutor$SetWeatherI);

}

