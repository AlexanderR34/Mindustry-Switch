#include "mindustry/content/Blocks_321_2_14.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/HaloPart.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/content/Blocks_321_2.h"
#include "mindustry/entities/part/DrawPart.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/Blocks_321_2_14.h"

extern "C" {


void mark_mindustry_content_Blocks$321$2$14(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_part_HaloPart(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_Blocks$321$2$14 *) object;
	if (self->F_val$haloProgress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$haloProgress)->clazz)->markFunction)((jobject) self->F_val$haloProgress, mark, depth + 1);
	if (self->F_val$haloColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$haloColor)->clazz)->markFunction)((jobject) self->F_val$haloColor, mark, depth + 1);
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$321$2$14(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_HaloPart(ctx);
}

void init_mindustry_content_Blocks$321$2$14_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$321$2$14:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$321$2$14(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(6189);
	((mindustry_content_Blocks$321$2$14 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress = (jref) (frame[2].o);
	((mindustry_content_Blocks$321$2$14 *) NULL_CHECK((frame[0].o)))->F_val$haloColor = (jref) (frame[3].o);
	((mindustry_content_Blocks$321$2$14 *) NULL_CHECK((frame[0].o)))->F_val$haloY = (frame[4].f);
	((mindustry_content_Blocks$321$2$14 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_part_HaloPart(ctx, (frame[0].o));
	LINE_NUMBER(6190);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_Blocks$321$2$14 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	((mindustry_entities_part_HaloPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(6191);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_Blocks$321$2$14 *) NULL_CHECK((frame[0].o)))->F_val$haloColor;
	((mindustry_entities_part_HaloPart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(6192);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_tri = (jint(1));
	LINE_NUMBER(6193);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_shapes = (jint(3));
	LINE_NUMBER(6194);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_triLength = (jfloat(0));
	LINE_NUMBER(6195);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_triLengthTo = (jfloat(10.0f));
	LINE_NUMBER(6196);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(6.0f));
	LINE_NUMBER(6197);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRadius = (jfloat(16.0f));
	LINE_NUMBER(6198);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_haloRotation = (jfloat(180.0f));
	LINE_NUMBER(6199);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(110.0f));
	LINE_NUMBER(6200);
	((mindustry_entities_part_HaloPart *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_content_Blocks$321$2$14 *) NULL_CHECK((frame[0].o)))->F_val$haloY);
	LINE_NUMBER(6189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$321$2$14[] {
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
	(void *) M_mindustry_entities_part_HaloPart_draw_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_HaloPart_load_java_lang_String,
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
	{ "val$haloProgress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_content_Blocks$321$2$14, F_val$haloProgress), "Lmindustry/entities/part/DrawPart$PartProgress;", 4112 },
	{ "val$haloColor", &class_arc_graphics_Color, offsetof(mindustry_content_Blocks$321$2$14, F_val$haloColor), "Larc/graphics/Color;", 4112 },
	{ "val$haloY", &class_float, offsetof(mindustry_content_Blocks$321$2$14, F_val$haloY), "F", 4112 },
	{ "this$1", &class_mindustry_content_Blocks$321$2, offsetof(mindustry_content_Blocks$321$2$14, F_this$1), "Lmindustry/content/Blocks$321$2;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$321$2$14_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float, 0, "(Lmindustry/content/Blocks$321$2;Lmindustry/entities/part/DrawPart$PartProgress;Larc/graphics/Color;F)V", 0 },
};

Class class_mindustry_content_Blocks$321$2$14{
		.nativeName = (intptr_t) "mindustry/content/Blocks$321$2$14",
		.parentClass = (intptr_t) &class_mindustry_entities_part_HaloPart,
		.size = sizeof(mindustry_content_Blocks$321$2$14),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$321$2$14,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$321$2$14,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$321$2$14,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$321$2$14 = registerClass(&class_mindustry_content_Blocks$321$2$14);

}

