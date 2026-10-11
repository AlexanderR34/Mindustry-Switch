#include "mindustry/content/Blocks_321_2_18.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "mindustry/content/Blocks_321_2_18_invoke_mindustry_entities_part_DrawPart_PartProgress_1.h"
#include "arc/struct/Seq.h"
#include "mindustry/content/Blocks_321_2_18.h"
#include "mindustry/entities/part/DrawPart_PartMove.h"
#include "mindustry/content/Blocks_321_2.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/part/RegionPart.h"

extern "C" {


void mark_mindustry_content_Blocks$321$2$18(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$321$2$18 *) object;
	if (self->F_val$heatCol2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$heatCol2)->clazz)->markFunction)((jobject) self->F_val$heatCol2, mark, depth + 1);
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$321$2$18(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_RegionPart(ctx);
}

void init_mindustry_content_Blocks$321$2$18_mindustry_content_Blocks$321$2_java_lang_String_int_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$321$2$18:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$321$2$18(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(6254);
	((mindustry_content_Blocks$321$2$18 *) NULL_CHECK((frame[0].o)))->F_val$fi = (frame[3].i);
	((mindustry_content_Blocks$321$2$18 *) NULL_CHECK((frame[0].o)))->F_val$heatCol2 = (jref) (frame[4].o);
	((mindustry_content_Blocks$321$2$18 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_part_RegionPart_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(6255);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outline = (jint(0));
	LINE_NUMBER(6256);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	sp[1].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[1].o))(ctx, sp[1].o, ((jfloat(((jint)((mindustry_content_Blocks$321$2$18 *) NULL_CHECK((frame[0].o)))->F_val$fi))) / (jfloat(5.0f))));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(6257);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	{ /* InvokeDynamic */
		clinit_mindustry_content_Blocks$321$2$18_invoke_mindustry_entities_part_DrawPart$PartProgress_1(ctx);
		auto proxy = (mindustry_content_Blocks$321$2$18_invoke_mindustry_entities_part_DrawPart$PartProgress_1 *) gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$18_invoke_mindustry_entities_part_DrawPart$PartProgress_1);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_add_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_add_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, sp[1].o))(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatProgress = (jref) sp[1].o;
	LINE_NUMBER(6258);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(1));
	LINE_NUMBER(6259);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_under = (jint(1));
	LINE_NUMBER(6260);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(-0.3f));
	LINE_NUMBER(6261);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_turretHeatLayer = (jfloat(49.8f));
	LINE_NUMBER(6262);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveY = (jfloat(9.0f));
	LINE_NUMBER(6263);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveX = ((jfloat(1)) + ((jfloat(((jint)((mindustry_content_Blocks$321$2$18 *) NULL_CHECK((frame[0].o)))->F_val$fi))) * (jfloat(4.0f))));
	LINE_NUMBER(6264);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveRot = (((jfloat(((jint)((mindustry_content_Blocks$321$2$18 *) NULL_CHECK((frame[0].o)))->F_val$fi))) * (jfloat(60.0f))) - (jfloat(130.0f)));
	LINE_NUMBER(6266);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"bb68c3"_j))));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(6267);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_Blocks$321$2$18 *) NULL_CHECK((frame[0].o)))->F_val$heatCol2;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(6268);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moves;
	clinit_mindustry_entities_part_DrawPart$PartMove(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartMove);
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_recoil;
	sp[2].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[2].o))(ctx, sp[2].o, ((jfloat(((jint)((mindustry_content_Blocks$321$2$18 *) NULL_CHECK((frame[0].o)))->F_val$fi))) / (jfloat(5.0f))));
	init_mindustry_entities_part_DrawPart$PartMove_mindustry_entities_part_DrawPart$PartProgress_float_float_float(ctx, sp[1].o, sp[2].o, (jfloat(1)), (jfloat(0)), (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(6254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_content_Blocks$321$2$18_lambda$new$0_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$321$2$18:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$321$2$18(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(6257);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(3.0f)), (jfloat(0.2f)));
	popStackFrame(ctx);
	return ((temp0 - (jfloat(0.2f))) * ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_warmup));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$321$2$18[] {
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
	{ "val$fi", &class_int, offsetof(mindustry_content_Blocks$321$2$18, F_val$fi), "I", 4112 },
	{ "val$heatCol2", &class_arc_graphics_Color, offsetof(mindustry_content_Blocks$321$2$18, F_val$heatCol2), "Larc/graphics/Color;", 4112 },
	{ "this$1", &class_mindustry_content_Blocks$321$2, offsetof(mindustry_content_Blocks$321$2$18, F_this$1), "Lmindustry/content/Blocks$321$2;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$321$2$18_mindustry_content_Blocks$321$2_java_lang_String_int_arc_graphics_Color, 0, "(Lmindustry/content/Blocks$321$2;Ljava/lang/String;ILarc/graphics/Color;)V", 0 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_content_Blocks$321$2$18_lambda$new$0_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
};

Class class_mindustry_content_Blocks$321$2$18{
		.nativeName = (intptr_t) "mindustry/content/Blocks$321$2$18",
		.parentClass = (intptr_t) &class_mindustry_entities_part_RegionPart,
		.size = sizeof(mindustry_content_Blocks$321$2$18),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$321$2$18,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$321$2$18,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$321$2$18,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$321$2$18 = registerClass(&class_mindustry_content_Blocks$321$2$18);

}

