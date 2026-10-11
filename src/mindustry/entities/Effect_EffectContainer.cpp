#include "mindustry/entities/Effect_EffectContainer.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "java/lang/Object.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_entities_Effect$EffectContainer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_Effect$EffectContainer *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_innerContainer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_innerContainer)->clazz)->markFunction)((jobject) self->F_innerContainer, mark, depth + 1);
}

void clinit_mindustry_entities_Effect$EffectContainer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect$EffectContainer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Effect$EffectContainer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(291);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect$EffectContainer:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(299);
	((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x = (frame[6].f);
	LINE_NUMBER(300);
	((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y = (frame[7].f);
	LINE_NUMBER(301);
	((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[2].o);
	LINE_NUMBER(302);
	((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_time = (frame[3].f);
	LINE_NUMBER(303);
	((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_lifetime = (frame[4].f);
	LINE_NUMBER(304);
	((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(305);
	((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[5].f);
	LINE_NUMBER(306);
	((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[8].o);
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Effect$EffectContainer_data_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect$EffectContainer:data", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_Effect$EffectContainer_inner_R_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect$EffectContainer:inner", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_innerContainer;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect$EffectContainer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_Effect$EffectContainer);
	init_mindustry_entities_Effect$EffectContainer(ctx, sp[1].o);
	((mindustry_entities_Effect$EffectContainer *) NULL_CHECK(sp[0].o))->F_innerContainer = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_Effect$EffectContainer *) NULL_CHECK(sp[-1].o))->F_innerContainer;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect$EffectContainer:scaled", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_innerContainer;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect$EffectContainer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_Effect$EffectContainer);
	init_mindustry_entities_Effect$EffectContainer(ctx, sp[1].o);
	((mindustry_entities_Effect$EffectContainer *) NULL_CHECK(sp[0].o))->F_innerContainer = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(319);
	if ((floatCompare(((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_time), (frame[1].f), 1)) > 0) goto label_2;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_innerContainer;
	jint temp0 = (jint)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_id;
	sp[1].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp1 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_time;
	jfloat temp2 = frame[1].f;
	jfloat temp3 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp4 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_y;
	sp[2].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_data;
	((func_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2, temp3, temp4, temp5, sp[2].o);
	LINE_NUMBER(321);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_innerContainer;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(323);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_Effect$EffectContainer_fin_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Effect$EffectContainer:fin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_time) / ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[0].o)))->F_lifetime));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_Effect$EffectContainer[] {
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
	(void *) M_mindustry_entities_Effect$EffectContainer_fin_R_float,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) M_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object,
	(void *) M_mindustry_entities_Effect$EffectContainer_data_R_java_lang_Object,
	(void *) M_mindustry_entities_Effect$EffectContainer_inner_R_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons,
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
	{ "fin", "()F" },
	{ "fout", "()F" },
	{ "fout", "(Larc/math/Interp;)F" },
	{ "fout", "(F)F" },
	{ "fin", "(Larc/math/Interp;)F" },
	{ "finpow", "()F" },
	{ "foutpow", "()F" },
	{ "finpowdown", "()F" },
	{ "foutpowdown", "()F" },
	{ "fslope", "()F" },
	{ "set", "(ILarc/graphics/Color;FFFFFLjava/lang/Object;)V" },
	{ "data", "()Ljava/lang/Object;" },
	{ "inner", "()Lmindustry/entities/Effect$EffectContainer;" },
	{ "scaled", "(FLarc/func/Cons;)V" },
};

static jclass interfaces[] { &class_arc_math_Scaled, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_Effect$EffectContainer, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_Effect$EffectContainer, F_y), "F", 1 },
	{ "time", &class_float, offsetof(mindustry_entities_Effect$EffectContainer, F_time), "F", 1 },
	{ "lifetime", &class_float, offsetof(mindustry_entities_Effect$EffectContainer, F_lifetime), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_entities_Effect$EffectContainer, F_rotation), "F", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_Effect$EffectContainer, F_color), "Larc/graphics/Color;", 1 },
	{ "id", &class_int, offsetof(mindustry_entities_Effect$EffectContainer, F_id), "I", 1 },
	{ "data", &class_java_lang_Object, offsetof(mindustry_entities_Effect$EffectContainer, F_data), "Ljava/lang/Object;", 1 },
	{ "innerContainer", &class_mindustry_entities_Effect$EffectContainer, offsetof(mindustry_entities_Effect$EffectContainer, F_innerContainer), "Lmindustry/entities/Effect$EffectContainer;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_Effect$EffectContainer, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object, VTABLE_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object, "(ILarc/graphics/Color;FFFFFLjava/lang/Object;)V", 1 },
	{ "data", (intptr_t) M_mindustry_entities_Effect$EffectContainer_data_R_java_lang_Object, VTABLE_mindustry_entities_Effect$EffectContainer_data_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "inner", (intptr_t) M_mindustry_entities_Effect$EffectContainer_inner_R_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_entities_Effect$EffectContainer_inner_R_mindustry_entities_Effect$EffectContainer, "()Lmindustry/entities/Effect$EffectContainer;", 1 },
	{ "scaled", (intptr_t) M_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons, VTABLE_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons, "(FLarc/func/Cons;)V", 1 },
	{ "fin", (intptr_t) M_mindustry_entities_Effect$EffectContainer_fin_R_float, VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float, "()F", 1 },
};

Class class_mindustry_entities_Effect$EffectContainer{
		.nativeName = (intptr_t) "mindustry/entities/Effect$EffectContainer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Effect$EffectContainer),
		.classVtable = (intptr_t) vtable_mindustry_entities_Effect$EffectContainer,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Effect$EffectContainer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_Effect$EffectContainer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_entities_Effect,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Effect$EffectContainer = registerClass(&class_mindustry_entities_Effect$EffectContainer);

}

