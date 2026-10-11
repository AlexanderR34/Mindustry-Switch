#include "mindustry/content/Blocks_320_4_12.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/content/Blocks_320_4_12.h"
#include "mindustry/content/Blocks_320_4.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/part/RegionPart.h"

extern "C" {


void mark_mindustry_content_Blocks$320$4$12(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$320$4$12 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$320$4$12(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_RegionPart(ctx);
}

void init_mindustry_content_Blocks$320$4$12_mindustry_content_Blocks$320$4_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$320$4$12:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$320$4$12(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(5904);
	((mindustry_content_Blocks$320$4$12 *) NULL_CHECK((frame[0].o)))->F_val$fi = (frame[3].i);
	((mindustry_content_Blocks$320$4$12 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_part_RegionPart_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(5905);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(5906);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatProgress = (jref) sp[1].o;
	LINE_NUMBER(5907);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(1));
	LINE_NUMBER(5908);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_under = (jint(1));
	LINE_NUMBER(5909);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_outline = (jint(0));
	LINE_NUMBER(5910);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(-0.3f));
	LINE_NUMBER(5911);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_turretHeatLayer = (jfloat(49.8f));
	LINE_NUMBER(5912);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat(11.0f)) - (((jfloat(((jint)((mindustry_content_Blocks$320$4$12 *) NULL_CHECK((frame[0].o)))->F_val$fi))) * (jfloat(38.0f))) / (jfloat(4.0f))));
	LINE_NUMBER(5913);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveX = (jfloat(2));
	LINE_NUMBER(5915);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(5904);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$320$4$12[] {
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
	{ "val$fi", &class_int, offsetof(mindustry_content_Blocks$320$4$12, F_val$fi), "I", 4112 },
	{ "this$1", &class_mindustry_content_Blocks$320$4, offsetof(mindustry_content_Blocks$320$4$12, F_this$1), "Lmindustry/content/Blocks$320$4;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$320$4$12_mindustry_content_Blocks$320$4_java_lang_String_int, 0, "(Lmindustry/content/Blocks$320$4;Ljava/lang/String;I)V", 0 },
};

Class class_mindustry_content_Blocks$320$4$12{
		.nativeName = (intptr_t) "mindustry/content/Blocks$320$4$12",
		.parentClass = (intptr_t) &class_mindustry_entities_part_RegionPart,
		.size = sizeof(mindustry_content_Blocks$320$4$12),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$320$4$12,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$320$4$12,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$320$4$12,
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
static bool registered_mindustry_content_Blocks$320$4$12 = registerClass(&class_mindustry_content_Blocks$320$4$12);

}

