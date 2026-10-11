#include "mindustry/entities/comp/DecalComp.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/entities/comp/DecalComp.h"
#include "mindustry/gen/Rotc.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Drawc.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_mindustry_entities_comp_DecalComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_DecalComp *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
}

void clinit_mindustry_entities_comp_DecalComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_DecalComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/DecalComp:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_DecalComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((mindustry_entities_comp_DecalComp *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_DecalComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/DecalComp:draw", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(10.0f)));
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_entities_comp_DecalComp *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((mindustry_entities_comp_DecalComp *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a));
	LINE_NUMBER(23);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_DecalComp_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_DecalComp_fin_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_curve_float_float_R_float(ctx, temp1, (jfloat(0.98f)));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 - temp2));
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_entities_comp_DecalComp *) NULL_CHECK((frame[0].o)))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_DecalComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_DecalComp *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_entities_comp_DecalComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(25);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_DecalComp_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/DecalComp:clipSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_entities_comp_DecalComp *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return (jfloat((((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width) * (jint(2)))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_DecalComp[] {
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
	(void *) M_mindustry_entities_comp_DecalComp_clipSize_R_float,
	(void *) M_mindustry_entities_comp_DecalComp_draw,
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
};

static jclass interfaces[] { &class_mindustry_gen_Drawc, &class_mindustry_gen_Timedc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Posc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_DecalComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_DecalComp, F_y), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_DecalComp, F_rotation), "F", 0 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_comp_DecalComp, F_color), "Larc/graphics/Color;", 0 },
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_comp_DecalComp, F_region), "Larc/graphics/g2d/TextureRegion;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_DecalComp, 0, "()V", 0 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_DecalComp_draw, VTABLE_mindustry_entities_comp_DecalComp_draw, "()V", 1 },
	{ "clipSize", (intptr_t) M_mindustry_entities_comp_DecalComp_clipSize_R_float, VTABLE_mindustry_entities_comp_DecalComp_clipSize_R_float, "()F", 1 },
};

Class class_mindustry_entities_comp_DecalComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/DecalComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_DecalComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_DecalComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_DecalComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_DecalComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 71,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_DecalComp = registerClass(&class_mindustry_entities_comp_DecalComp);

}
