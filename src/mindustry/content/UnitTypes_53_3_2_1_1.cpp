#include "mindustry/content/UnitTypes_53_3_2_1_1.h"
#include "mindustry/content/UnitTypes_53_3_2_1.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_PowIn.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/entities/part/ShapePart.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/UnitTypes_53_3_2_1_1.h"

extern "C" {


void mark_mindustry_content_UnitTypes$53$3$2$1$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_part_ShapePart(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$53$3$2$1$1 *) object;
	if (self->F_this$3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$3)->clazz)->markFunction)((jobject) self->F_this$3, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$53$3$2$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_ShapePart(ctx);
}

void init_mindustry_content_UnitTypes$53$3$2$1$1_mindustry_content_UnitTypes$53$3$2$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$53$3$2$1$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$53$3$2$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4250);
	((mindustry_content_UnitTypes$53$3$2$1$1 *) NULL_CHECK((frame[0].o)))->F_this$3 = (jref) (frame[1].o);
	init_mindustry_entities_part_ShapePart(ctx, (frame[0].o));
	LINE_NUMBER(4251);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(110.0f));
	LINE_NUMBER(4252);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_circle = (jint(1));
	LINE_NUMBER(4253);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(-0.25f));
	LINE_NUMBER(4254);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(1.5f));
	LINE_NUMBER(4255);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_suppress;
	((mindustry_entities_part_ShapePart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(4256);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_part_ShapePart *) NULL_CHECK(sp[0].o))->F_colorTo = (jref) sp[1].o;
	LINE_NUMBER(4257);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_life;
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow5In;
	sp[1].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress, sp[1].o))(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_part_ShapePart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(4250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$53$3$2$1$1[] {
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
	(void *) M_mindustry_entities_part_ShapePart_draw_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_ShapePart_load_java_lang_String,
	(void *) M_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq,
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
	{ "draw", "(Lmindustry/entities/part/DrawPart$PartParams;)V" },
	{ "load", "(Ljava/lang/String;)V" },
	{ "getOutlines", "(Larc/struct/Seq;)V" },
};

static FieldMetadata fields[] {
	{ "this$3", &class_mindustry_content_UnitTypes$53$3$2$1, offsetof(mindustry_content_UnitTypes$53$3$2$1$1, F_this$3), "Lmindustry/content/UnitTypes$53$3$2$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$53$3$2$1$1_mindustry_content_UnitTypes$53$3$2$1, 0, "(Lmindustry/content/UnitTypes$53$3$2$1;)V", 0 },
};

Class class_mindustry_content_UnitTypes$53$3$2$1$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$53$3$2$1$1",
		.parentClass = (intptr_t) &class_mindustry_entities_part_ShapePart,
		.size = sizeof(mindustry_content_UnitTypes$53$3$2$1$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$53$3$2$1$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$53$3$2$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$53$3$2$1$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$53$3$2$1$1 = registerClass(&class_mindustry_content_UnitTypes$53$3$2$1$1);

}

