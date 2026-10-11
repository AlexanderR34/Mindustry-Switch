#include "mindustry/content/Blocks_198_3.h"
#include "java/lang/Object.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/content/Blocks_198_3.h"
#include "mindustry/world/draw/DrawShape.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/Blocks_198.h"

extern "C" {


void mark_mindustry_content_Blocks$198$3(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_draw_DrawShape(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_Blocks$198$3 *) object;
	if (self->F_val$col)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$col)->clazz)->markFunction)((jobject) self->F_val$col, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$198$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawShape(ctx);
}

void init_mindustry_content_Blocks$198$3_mindustry_content_Blocks$198_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$198$3:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$198$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2030);
	((mindustry_content_Blocks$198$3 *) NULL_CHECK((frame[0].o)))->F_val$col = (jref) (frame[2].o);
	((mindustry_content_Blocks$198$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_draw_DrawShape(ctx, (frame[0].o));
	LINE_NUMBER(2031);
	((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(110.0f));
	LINE_NUMBER(2032);
	((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(3.5f));
	LINE_NUMBER(2033);
	((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_useWarmupRadius = (jint(1));
	LINE_NUMBER(2034);
	((mindustry_world_draw_DrawShape *) NULL_CHECK((frame[0].o)))->F_timeScl = (jfloat(2));
	LINE_NUMBER(2035);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_Blocks$198$3 *) NULL_CHECK((frame[0].o)))->F_val$col;
	((mindustry_world_draw_DrawShape *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(2030);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$198$3[] {
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
	(void *) M_mindustry_world_draw_DrawBlock_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq,
	(void *) M_mindustry_world_draw_DrawShape_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawBlock_load_mindustry_world_Block,
	(void *) M_mindustry_world_draw_DrawBlock_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter,
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
	{ "getRegionsToOutline", "(Lmindustry/world/Block;Larc/struct/Seq;)V" },
	{ "draw", "(Lmindustry/gen/Building;)V" },
	{ "drawLight", "(Lmindustry/gen/Building;)V" },
	{ "drawPlan", "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "load", "(Lmindustry/world/Block;)V" },
	{ "icons", "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;" },
	{ "finalIcons", "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;" },
	{ "expectCrafter", "(Lmindustry/world/Block;)Lmindustry/world/blocks/production/GenericCrafter;" },
};

static FieldMetadata fields[] {
	{ "val$col", &class_arc_graphics_Color, offsetof(mindustry_content_Blocks$198$3, F_val$col), "Larc/graphics/Color;", 4112 },
	{ "this$0", &class_mindustry_content_Blocks$198, offsetof(mindustry_content_Blocks$198$3, F_this$0), "Lmindustry/content/Blocks$198;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$198$3_mindustry_content_Blocks$198_arc_graphics_Color, 0, "(Lmindustry/content/Blocks$198;Larc/graphics/Color;)V", 0 },
};

Class class_mindustry_content_Blocks$198$3{
		.nativeName = (intptr_t) "mindustry/content/Blocks$198$3",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawShape,
		.size = sizeof(mindustry_content_Blocks$198$3),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$198$3,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$198$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$198$3,
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
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$198$3 = registerClass(&class_mindustry_content_Blocks$198$3);

}

