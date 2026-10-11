#include "mindustry/entities/comp/EffectStateComp.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Childc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/entities/comp/EffectStateComp.h"
#include "mindustry/gen/Rotc.h"
#include "arc/graphics/Color.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Scaled.h"

extern "C" {


void mark_mindustry_entities_comp_EffectStateComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_EffectStateComp *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_mindustry_entities_comp_EffectStateComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_EffectStateComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EffectStateComp:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_EffectStateComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_comp_EffectStateComp *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_EffectStateComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EffectStateComp:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_EffectStateComp *) NULL_CHECK((frame[0].o)))->F_effect;
	jint temp0 = (jint)((mindustry_entities_comp_EffectStateComp *) NULL_CHECK((frame[0].o)))->F_id;
	sp[2].o = (jobject)((mindustry_entities_comp_EffectStateComp *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_EffectStateComp *) NULL_CHECK((frame[0].o)))->F_time;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_EffectStateComp *) NULL_CHECK((frame[0].o)))->F_lifetime;
	jfloat temp3 = (jfloat)((mindustry_entities_comp_EffectStateComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp4 = (jfloat)((mindustry_entities_comp_EffectStateComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_entities_comp_EffectStateComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[3].o = (jobject)((mindustry_entities_comp_EffectStateComp *) NULL_CHECK((frame[0].o)))->F_data;
	jfloat temp6 = (jfloat)((func_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float])(ctx, sp[1].o, temp0, sp[2].o, temp1, temp2, temp3, temp4, temp5, sp[3].o);
	((mindustry_entities_comp_EffectStateComp *) NULL_CHECK(sp[0].o))->F_lifetime = temp6;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_EffectStateComp_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EffectStateComp:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_entities_comp_EffectStateComp *) NULL_CHECK((frame[0].o)))->F_effect;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_clip);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_EffectStateComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_EffectStateComp_clipSize_R_float,
	(void *) M_mindustry_entities_comp_EffectStateComp_draw,
	(void *) nullptr,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "clipSize", "()F" },
	{ "draw", "()V" },
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
	{ "lifetime", "()F" },
	{ "time", "()F" },
	{ "lifetime", "(F)V" },
	{ "time", "(F)V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "parent", "()Lmindustry/gen/Posc;" },
	{ "rotWithParent", "()Z" },
	{ "offsetPos", "()F" },
	{ "offsetRot", "()F" },
	{ "offsetX", "()F" },
	{ "offsetY", "()F" },
	{ "offsetPos", "(F)V" },
	{ "offsetRot", "(F)V" },
	{ "offsetX", "(F)V" },
	{ "offsetY", "(F)V" },
	{ "parent", "(Lmindustry/gen/Posc;)V" },
	{ "rotWithParent", "(Z)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Posc, &class_mindustry_gen_Drawc, &class_mindustry_gen_Timedc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Childc, };

static FieldMetadata fields[] {
	{ "time", &class_float, offsetof(mindustry_entities_comp_EffectStateComp, F_time), "F", 0 },
	{ "lifetime", &class_float, offsetof(mindustry_entities_comp_EffectStateComp, F_lifetime), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_EffectStateComp, F_rotation), "F", 0 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_EffectStateComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_EffectStateComp, F_y), "F", 0 },
	{ "id", &class_int, offsetof(mindustry_entities_comp_EffectStateComp, F_id), "I", 0 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_comp_EffectStateComp, F_color), "Larc/graphics/Color;", 0 },
	{ "effect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_comp_EffectStateComp, F_effect), "Lmindustry/entities/Effect;", 0 },
	{ "data", &class_java_lang_Object, offsetof(mindustry_entities_comp_EffectStateComp, F_data), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_EffectStateComp, 0, "()V", 0 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_EffectStateComp_draw, VTABLE_mindustry_entities_comp_EffectStateComp_draw, "()V", 1 },
	{ "clipSize", (intptr_t) M_mindustry_entities_comp_EffectStateComp_clipSize_R_float, VTABLE_mindustry_entities_comp_EffectStateComp_clipSize_R_float, "()F", 1 },
};

Class class_mindustry_entities_comp_EffectStateComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/EffectStateComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_EffectStateComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_EffectStateComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_EffectStateComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_EffectStateComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 5,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 83,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_EffectStateComp = registerClass(&class_mindustry_entities_comp_EffectStateComp);

}
