#include "mindustry/content/Blocks_315_4_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/content/Blocks_315_4_1.h"
#include "arc/math/Interp.h"
#include "mindustry/content/Blocks_315_4.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/part/RegionPart.h"

extern "C" {


void mark_mindustry_content_Blocks$315$4$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$315$4$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$315$4$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_RegionPart(ctx);
}

void init_mindustry_content_Blocks$315$4$1_mindustry_content_Blocks$315$4_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$315$4$1:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$315$4$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(4844);
	((mindustry_content_Blocks$315$4$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_part_RegionPart_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(4845);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_recoil;
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow2In;
	sp[1].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress, sp[1].o))(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(4846);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveY = (jfloat(-6.6666665f));
	LINE_NUMBER(4847);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f03b0e"_j))));
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_heatColor = (jref) sp[1].o;
	LINE_NUMBER(4848);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(0));
	LINE_NUMBER(4844);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$315$4$1[] {
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
	{ "this$1", &class_mindustry_content_Blocks$315$4, offsetof(mindustry_content_Blocks$315$4$1, F_this$1), "Lmindustry/content/Blocks$315$4;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$315$4$1_mindustry_content_Blocks$315$4_java_lang_String, 0, "(Lmindustry/content/Blocks$315$4;Ljava/lang/String;)V", 0 },
};

Class class_mindustry_content_Blocks$315$4$1{
		.nativeName = (intptr_t) "mindustry/content/Blocks$315$4$1",
		.parentClass = (intptr_t) &class_mindustry_entities_part_RegionPart,
		.size = sizeof(mindustry_content_Blocks$315$4$1),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$315$4$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$315$4$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$315$4$1,
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
static bool registered_mindustry_content_Blocks$315$4$1 = registerClass(&class_mindustry_content_Blocks$315$4$1);

}

