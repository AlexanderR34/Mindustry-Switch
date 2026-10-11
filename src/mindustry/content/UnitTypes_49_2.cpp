#include "mindustry/content/UnitTypes_49_2.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/UnitTypes_49.h"
#include "mindustry/entities/part/HoverPart.h"
#include "mindustry/entities/part/DrawPart.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/UnitTypes_49_2.h"

extern "C" {


void mark_mindustry_content_UnitTypes$49$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_part_HoverPart(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$49$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$49$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_HoverPart(ctx);
}

void init_mindustry_content_UnitTypes$49$2_mindustry_content_UnitTypes$49_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$49$2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$49$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(3817);
	((mindustry_content_UnitTypes$49$2 *) NULL_CHECK((frame[0].o)))->F_val$f = (frame[2].f);
	((mindustry_content_UnitTypes$49$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_part_HoverPart(ctx, (frame[0].o));
	LINE_NUMBER(3818);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(3.9f));
	LINE_NUMBER(3819);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_content_UnitTypes$49$2 *) NULL_CHECK((frame[0].o)))->F_val$f);
	LINE_NUMBER(3820);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(1));
	LINE_NUMBER(3821);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(6.0f));
	LINE_NUMBER(3822);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_phase = (jfloat(90.0f));
	LINE_NUMBER(3823);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(2));
	LINE_NUMBER(3824);
	((mindustry_entities_part_HoverPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(-1,000000e-03f));
	LINE_NUMBER(3825);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"bf92f9"_j))));
	((mindustry_entities_part_HoverPart *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(3817);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$49$2[] {
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
	(void *) M_mindustry_entities_part_HoverPart_draw_mindustry_entities_part_DrawPart$PartParams,
	(void *) M_mindustry_entities_part_HoverPart_load_java_lang_String,
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
	{ "val$f", &class_float, offsetof(mindustry_content_UnitTypes$49$2, F_val$f), "F", 4112 },
	{ "this$0", &class_mindustry_content_UnitTypes$49, offsetof(mindustry_content_UnitTypes$49$2, F_this$0), "Lmindustry/content/UnitTypes$49;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$49$2_mindustry_content_UnitTypes$49_float, 0, "(Lmindustry/content/UnitTypes$49;F)V", 0 },
};

Class class_mindustry_content_UnitTypes$49$2{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$49$2",
		.parentClass = (intptr_t) &class_mindustry_entities_part_HoverPart,
		.size = sizeof(mindustry_content_UnitTypes$49$2),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$49$2,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$49$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$49$2,
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
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$49$2 = registerClass(&class_mindustry_content_UnitTypes$49$2);

}

