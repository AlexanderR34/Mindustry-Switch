#include "mindustry/content/UnitTypes_43_1_5.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/content/UnitTypes_43_1.h"
#include "mindustry/content/UnitTypes_43_1_5.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/part/RegionPart.h"

extern "C" {


void mark_mindustry_content_UnitTypes$43$1$5(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_part_RegionPart(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$43$1$5 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$43$1$5(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_RegionPart(ctx);
}

void init_mindustry_content_UnitTypes$43$1$5_mindustry_content_UnitTypes$43$1_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$43$1$5:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$43$1$5(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3048);
	((mindustry_content_UnitTypes$43$1$5 *) NULL_CHECK((frame[0].o)))->F_val$fi = (frame[3].i);
	((mindustry_content_UnitTypes$43$1$5 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_part_RegionPart_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(3049);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	sp[1].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[1].o))(ctx, sp[1].o, ((jfloat(((jint(3)) - ((jint)((mindustry_content_UnitTypes$43$1$5 *) NULL_CHECK((frame[0].o)))->F_val$fi)))) * (jfloat(0.3f))));
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_reload;
	sp[1].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_blend_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_blend_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[1].o))(ctx, sp[1].o, sp[2].o, (jfloat(0.3f)));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(3050);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_heat;
	sp[1].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_add_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_add_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[1].o))(ctx, sp[1].o, (jfloat(0.3f)));
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	sp[1].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_min_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_min_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, sp[1].o))(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatProgress = (jref) sp[1].o;
	LINE_NUMBER(3051);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(0.1f)), (jfloat(0.1f)));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(3052);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(1));
	LINE_NUMBER(3053);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_under = (jint(1));
	LINE_NUMBER(3054);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveRot = ((jfloat(-40.0f)) * (jfloat(((jint)((mindustry_content_UnitTypes$43$1$5 *) NULL_CHECK((frame[0].o)))->F_val$fi))));
	LINE_NUMBER(3055);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveX = (jfloat(3.0f));
	LINE_NUMBER(3056);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(-2,000000e-03f));
	LINE_NUMBER(3058);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(2.75f));
	LINE_NUMBER(3048);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$43$1$5[] {
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
	(void *) M_mindustry_entities_part_RegionPart_draw_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_RegionPart_load_java_lang_String,
	(void *) M_mindustry_entities_part_RegionPart_getOutlines_arc_struct_Seq,
	(void *) M_mindustry_entities_part_RegionPart_rect_arc_graphics_g2d_TextureRegion_float_float_float,
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
	{ "rect", "(Larc/graphics/g2d/TextureRegion;FFF)V" },
};

static FieldMetadata fields[] {
	{ "val$fi", &class_int, offsetof(mindustry_content_UnitTypes$43$1$5, F_val$fi), "I", 4112 },
	{ "this$1", &class_mindustry_content_UnitTypes$43$1, offsetof(mindustry_content_UnitTypes$43$1$5, F_this$1), "Lmindustry/content/UnitTypes$43$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$43$1$5_mindustry_content_UnitTypes$43$1_java_lang_String_int, 0, "(Lmindustry/content/UnitTypes$43$1;Ljava/lang/String;I)V", 0 },
};

Class class_mindustry_content_UnitTypes$43$1$5{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$43$1$5",
		.parentClass = (intptr_t) &class_mindustry_entities_part_RegionPart,
		.size = sizeof(mindustry_content_UnitTypes$43$1$5),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$43$1$5,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$43$1$5,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$43$1$5,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$43$1$5 = registerClass(&class_mindustry_content_UnitTypes$43$1$5);

}

