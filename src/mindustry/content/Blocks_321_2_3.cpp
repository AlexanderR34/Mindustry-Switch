#include "mindustry/content/Blocks_321_2_3.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/content/Blocks_321_2_3.h"
#include "mindustry/content/Blocks_321_2.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/entities/part/ShapePart.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_content_Blocks$321$2$3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$321$2$3 *) object;
	if (self->F_val$circleProgress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$circleProgress)->clazz)->markFunction)((jobject) self->F_val$circleProgress, mark, depth + 1);
	if (self->F_val$circleColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$circleColor)->clazz)->markFunction)((jobject) self->F_val$circleColor, mark, depth + 1);
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$321$2$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_ShapePart(ctx);
}

void init_mindustry_content_Blocks$321$2$3_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_float_arc_graphics_Color_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$321$2$3:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$321$2$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(6070);
	((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleProgress = (jref) (frame[2].o);
	((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleRotSpeed = (frame[3].f);
	((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleColor = (jref) (frame[4].o);
	((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleStroke = (frame[5].f);
	((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleRad = (frame[6].f);
	((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleY = (frame[7].f);
	((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_part_ShapePart(ctx, (frame[0].o));
	LINE_NUMBER(6071);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleProgress;
	((mindustry_entities_part_ShapePart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(6072);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (-((jfloat)((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleRotSpeed));
	LINE_NUMBER(6073);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleColor;
	((mindustry_entities_part_ShapePart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(6074);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(6075);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_hollow = (jint(1));
	LINE_NUMBER(6076);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(0));
	LINE_NUMBER(6077);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_strokeTo = ((jfloat)((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleStroke);
	LINE_NUMBER(6078);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_radius = (((jfloat)((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleRad) - (jfloat(1)));
	LINE_NUMBER(6079);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(110.0f));
	LINE_NUMBER(6080);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_content_Blocks$321$2$3 *) NULL_CHECK((frame[0].o)))->F_val$circleY);
	LINE_NUMBER(6070);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$321$2$3[] {
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
	{ "val$circleProgress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_content_Blocks$321$2$3, F_val$circleProgress), "Lmindustry/entities/part/DrawPart$PartProgress;", 4112 },
	{ "val$circleRotSpeed", &class_float, offsetof(mindustry_content_Blocks$321$2$3, F_val$circleRotSpeed), "F", 4112 },
	{ "val$circleColor", &class_arc_graphics_Color, offsetof(mindustry_content_Blocks$321$2$3, F_val$circleColor), "Larc/graphics/Color;", 4112 },
	{ "val$circleStroke", &class_float, offsetof(mindustry_content_Blocks$321$2$3, F_val$circleStroke), "F", 4112 },
	{ "val$circleRad", &class_float, offsetof(mindustry_content_Blocks$321$2$3, F_val$circleRad), "F", 4112 },
	{ "val$circleY", &class_float, offsetof(mindustry_content_Blocks$321$2$3, F_val$circleY), "F", 4112 },
	{ "this$1", &class_mindustry_content_Blocks$321$2, offsetof(mindustry_content_Blocks$321$2$3, F_this$1), "Lmindustry/content/Blocks$321$2;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$321$2$3_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_float_arc_graphics_Color_float_float_float, 0, "(Lmindustry/content/Blocks$321$2;Lmindustry/entities/part/DrawPart$PartProgress;FLarc/graphics/Color;FFF)V", 0 },
};

Class class_mindustry_content_Blocks$321$2$3{
		.nativeName = (intptr_t) "mindustry/content/Blocks$321$2$3",
		.parentClass = (intptr_t) &class_mindustry_entities_part_ShapePart,
		.size = sizeof(mindustry_content_Blocks$321$2$3),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$321$2$3,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$321$2$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$321$2$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$321$2$3 = registerClass(&class_mindustry_content_Blocks$321$2$3);

}

