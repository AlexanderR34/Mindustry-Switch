#include "mindustry/content/Blocks_319_2_1_1.h"
#include "mindustry/content/Blocks_319_2_1_1.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/entities/part/ShapePart.h"
#include "mindustry/content/Blocks_319_2_1.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_content_Blocks$319$2$1$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$319$2$1$1 *) object;
	if (self->F_this$2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$2)->clazz)->markFunction)((jobject) self->F_this$2, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$319$2$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_ShapePart(ctx);
}

void init_mindustry_content_Blocks$319$2$1$1_mindustry_content_Blocks$319$2$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$319$2$1$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$319$2$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5365);
	((mindustry_content_Blocks$319$2$1$1 *) NULL_CHECK((frame[0].o)))->F_this$2 = (jref) (frame[1].o);
	init_mindustry_entities_part_ShapePart(ctx, (frame[0].o));
	LINE_NUMBER(5366);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_entities_part_DrawPart$PartProgress_constant_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (jfloat(1)));
	((mindustry_entities_part_ShapePart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(5367);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_entities_part_ShapePart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(5368);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_sides = (6);
	LINE_NUMBER(5369);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(3.0f));
	LINE_NUMBER(5370);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(3.0f));
	LINE_NUMBER(5371);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_hollow = (jint(1));
	LINE_NUMBER(5372);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(110.0f));
	LINE_NUMBER(5373);
	((mindustry_entities_part_ShapePart *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(1.8f));
	LINE_NUMBER(5365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$319$2$1$1[] {
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
	{ "this$2", &class_mindustry_content_Blocks$319$2$1, offsetof(mindustry_content_Blocks$319$2$1$1, F_this$2), "Lmindustry/content/Blocks$319$2$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$319$2$1$1_mindustry_content_Blocks$319$2$1, 0, "(Lmindustry/content/Blocks$319$2$1;)V", 0 },
};

Class class_mindustry_content_Blocks$319$2$1$1{
		.nativeName = (intptr_t) "mindustry/content/Blocks$319$2$1$1",
		.parentClass = (intptr_t) &class_mindustry_entities_part_ShapePart,
		.size = sizeof(mindustry_content_Blocks$319$2$1$1),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$319$2$1$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$319$2$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$319$2$1$1,
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
static bool registered_mindustry_content_Blocks$319$2$1$1 = registerClass(&class_mindustry_content_Blocks$319$2$1$1);

}

