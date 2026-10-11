#include "mindustry/content/Blocks_303_6_1.h"
#include "mindustry/content/Blocks_303_6.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/content/Blocks_303_6_1.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/part/DrawPart_PartMove.h"
#include "mindustry/entities/part/RegionPart.h"

extern "C" {


void mark_mindustry_content_Blocks$303$6$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$303$6$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$303$6$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_part_RegionPart(ctx);
}

void init_mindustry_content_Blocks$303$6$1_mindustry_content_Blocks$303$6_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$303$6$1:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$303$6$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(3826);
	((mindustry_content_Blocks$303$6$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_entities_part_RegionPart_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(3827);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
	((mindustry_entities_part_RegionPart *) NULL_CHECK(sp[0].o))->F_progress = (jref) sp[1].o;
	LINE_NUMBER(3828);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveX = (jfloat(0.6f));
	LINE_NUMBER(3829);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moveRot = (jfloat(-15.0f));
	LINE_NUMBER(3830);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_mirror = (jint(1));
	LINE_NUMBER(3831);
	((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_layerOffset = (jfloat(1,000000e-03f));
	LINE_NUMBER(3832);
	sp[0].o = (jobject)((mindustry_entities_part_RegionPart *) NULL_CHECK((frame[0].o)))->F_moves;
	clinit_mindustry_entities_part_DrawPart$PartMove(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartMove);
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	sp[2].o = (jobject)SF_mindustry_entities_part_DrawPart$PartProgress_recoil;
	init_mindustry_entities_part_DrawPart$PartMove_mindustry_entities_part_DrawPart$PartProgress_float_float_float(ctx, sp[1].o, sp[2].o, (jfloat(0.5f)), (jfloat(-0.5f)), (jfloat(-8.0f)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3826);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$303$6$1[] {
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
	{ "this$1", &class_mindustry_content_Blocks$303$6, offsetof(mindustry_content_Blocks$303$6$1, F_this$1), "Lmindustry/content/Blocks$303$6;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$303$6$1_mindustry_content_Blocks$303$6_java_lang_String, 0, "(Lmindustry/content/Blocks$303$6;Ljava/lang/String;)V", 0 },
};

Class class_mindustry_content_Blocks$303$6$1{
		.nativeName = (intptr_t) "mindustry/content/Blocks$303$6$1",
		.parentClass = (intptr_t) &class_mindustry_entities_part_RegionPart,
		.size = sizeof(mindustry_content_Blocks$303$6$1),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$303$6$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$303$6$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$303$6$1,
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
static bool registered_mindustry_content_Blocks$303$6$1 = registerClass(&class_mindustry_content_Blocks$303$6$1);

}

