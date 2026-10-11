#include "mindustry/content/Blocks_319_4_6.h"
#include "mindustry/content/Blocks_319_4.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "arc/math/Interp.h"
#include "mindustry/content/Blocks_319_4_6.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/part/DrawPart_PartMove.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/part/RegionPart.h"

extern "C" {


void mark_mindustry_content_Blocks$319$4$6(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$319$4$6 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$319$4$6(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_RegionPart(ctx);
}

void init_mindustry_content_Blocks$319$4$6_mindustry_content_Blocks$319$4_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$319$4$6:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$319$4$6(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(5643);
	((mindustry_content_Blocks$319$4$6 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_part_RegionPart_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(5644);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_reload;
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow2In;
	sp[1].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress, sp[1].o))(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(5646);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(0)));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_colorTo = (jref) sp[1].o;
	LINE_NUMBER(5647);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(5648);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_mixColorTo = (jref) sp[1].o;
	LINE_NUMBER(5649);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(0)));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_mixColor = (jref) sp[1].o;
	LINE_NUMBER(5650);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outline = (jint(0));
	LINE_NUMBER(5651);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_under = (jint(1));
	LINE_NUMBER(5652);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(-1,000000e-02f));
	LINE_NUMBER(5654);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moves;
	clinit_mindustry_entities_part_DrawPart$PartMove(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartMove);
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	sp[2].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_inv_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_inv_R_mindustry_entities_part_DrawPart$PartProgress, sp[2].o))(ctx, sp[2].o);
	init_mindustry_entities_part_DrawPart$PartMove_mindustry_entities_part_DrawPart$PartProgress_float_float_float(ctx, sp[1].o, sp[2].o, (jfloat(0)), (jfloat(-4.0f)), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(5643);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$319$4$6[] {
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
	{ "this$1", &class_mindustry_content_Blocks$319$4, offsetof(mindustry_content_Blocks$319$4$6, F_this$1), "Lmindustry/content/Blocks$319$4;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$319$4$6_mindustry_content_Blocks$319$4_java_lang_String, 0, "(Lmindustry/content/Blocks$319$4;Ljava/lang/String;)V", 0 },
};

Class class_mindustry_content_Blocks$319$4$6{
		.nativeName = (intptr_t) "mindustry/content/Blocks$319$4$6",
		.parentClass = (intptr_t) &class_mindustry_entities_part_RegionPart,
		.size = sizeof(mindustry_content_Blocks$319$4$6),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$319$4$6,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$319$4$6,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$319$4$6,
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
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$319$4$6 = registerClass(&class_mindustry_content_Blocks$319$4$6);

}

