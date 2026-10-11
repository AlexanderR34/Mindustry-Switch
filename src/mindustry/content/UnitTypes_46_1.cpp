#include "mindustry/content/UnitTypes_46_1.h"
#include "arc/math/Mathf.h"
#include "mindustry/content/UnitTypes_46.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/content/UnitTypes_46_1_invoke_mindustry_entities_part_DrawPart_PartProgress_1.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "mindustry/content/UnitTypes_46_1.h"
#include "arc/util/Time.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/part/RegionPart.h"

extern "C" {


void mark_mindustry_content_UnitTypes$46$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_UnitTypes$46$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$46$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_RegionPart(ctx);
}

void init_mindustry_content_UnitTypes$46$1_mindustry_content_UnitTypes$46_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$46$1:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$46$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3382);
	((mindustry_content_UnitTypes$46$1 *) NULL_CHECK((frame[0].o)))->F_val$i = (frame[3].i);
	((mindustry_content_UnitTypes$46$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_part_RegionPart_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(3383);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(-1,000000e-02f));
	LINE_NUMBER(3384);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_heatLayerOffset = (jfloat(5,000000e-03f));
	LINE_NUMBER(3385);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(2));
	LINE_NUMBER(3386);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveX = ((jfloat(6.0f)) + ((jfloat(((jint)((mindustry_content_UnitTypes$46$1 *) NULL_CHECK((frame[0].o)))->F_val$i))) * (jfloat(1.9f))));
	LINE_NUMBER(3387);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveY = ((jfloat(8.0f)) + ((jfloat(-4.0f)) * (jfloat(((jint)((mindustry_content_UnitTypes$46$1 *) NULL_CHECK((frame[0].o)))->F_val$i)))));
	LINE_NUMBER(3388);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveRot = ((jfloat(40.0f)) - ((jfloat(((jint)((mindustry_content_UnitTypes$46$1 *) NULL_CHECK((frame[0].o)))->F_val$i))) * (jfloat(25.0f))));
	LINE_NUMBER(3389);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(1));
	LINE_NUMBER(3390);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	sp[1].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[1].o))(ctx, sp[1].o, ((jfloat(((jint)((mindustry_content_UnitTypes$46$1 *) NULL_CHECK((frame[0].o)))->F_val$i))) * (jfloat(0.2f))));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(3391);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_UnitTypes$46$1_invoke_mindustry_entities_part_DrawPart$PartProgress_1(ctx);
		auto proxy = (mindustry_content_UnitTypes$46$1_invoke_mindustry_entities_part_DrawPart$PartProgress_1 *) gcAlloc(ctx, &class_mindustry_content_UnitTypes$46$1_invoke_mindustry_entities_part_DrawPart$PartProgress_1);
		proxy->F_field0 = ((jint)((mindustry_content_UnitTypes$46$1 *) NULL_CHECK((frame[0].o)))->F_val$i);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatProgress = (jref) sp[1].o;
	LINE_NUMBER(3393);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_techBlue;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(3382);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_content_UnitTypes$46$1_lambda$new$0_int_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$46$1:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$46$1(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3391);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + ((jfloat((frame[0].i))) * (jfloat(14.0f)))), (jfloat(7.0f)), (jfloat(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$46$1[] {
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
	{ "val$i", &class_int, offsetof(mindustry_content_UnitTypes$46$1, F_val$i), "I", 4112 },
	{ "this$0", &class_mindustry_content_UnitTypes$46, offsetof(mindustry_content_UnitTypes$46$1, F_this$0), "Lmindustry/content/UnitTypes$46;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$46$1_mindustry_content_UnitTypes$46_java_lang_String_int, 0, "(Lmindustry/content/UnitTypes$46;Ljava/lang/String;I)V", 0 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_content_UnitTypes$46$1_lambda$new$0_int_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(ILmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
};

Class class_mindustry_content_UnitTypes$46$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$46$1",
		.parentClass = (intptr_t) &class_mindustry_entities_part_RegionPart,
		.size = sizeof(mindustry_content_UnitTypes$46$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$46$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$46$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$46$1,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$46$1 = registerClass(&class_mindustry_content_UnitTypes$46$1);

}

