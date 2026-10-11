#include "mindustry/ui/builder/UiBuilder_ContainerBuilder.h"
#include "java/lang/Object.h"
#include "mindustry/ui/builder/UiBuilder_Entry.h"
#include "java/lang/Boolean.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "mindustry/ui/builder/UiBuilder.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/builder/UiBuilder_ContainerBuilder.h"
#include "mindustry/ui/builder/UiKey.h"

extern "C" {


void mark_mindustry_ui_builder_UiBuilder$ContainerBuilder(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_builder_UiBuilder$NodeBuilder(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_builder_UiBuilder$ContainerBuilder *) object;
}

void clinit_mindustry_ui_builder_UiBuilder$ContainerBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx);
}

void init_mindustry_ui_builder_UiBuilder$ContainerBuilder_mindustry_ui_builder_UiKey(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$ContainerBuilder:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder$ContainerBuilder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(205);
	init_mindustry_ui_builder_UiBuilder$NodeBuilder_mindustry_ui_builder_UiKey(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$ContainerBuilder_self_R_mindustry_ui_builder_UiBuilder$ContainerBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$ContainerBuilder:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$ContainerBuilder_row_R_mindustry_ui_builder_UiBuilder$ContainerBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$ContainerBuilder:row", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_row;
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$ContainerBuilder_self_R_mindustry_ui_builder_UiBuilder$ContainerBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$ContainerBuilder_self_R_mindustry_ui_builder_UiBuilder$ContainerBuilder])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$ContainerBuilder_add_mindustry_ui_builder_UiBuilder$NodeBuilder_R_mindustry_ui_builder_UiBuilder$ContainerBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$ContainerBuilder:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	sp[2].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_type;
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiBuilder$ContainerBuilder_self_R_mindustry_ui_builder_UiBuilder$ContainerBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiBuilder$ContainerBuilder_self_R_mindustry_ui_builder_UiBuilder$ContainerBuilder])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiBuilder$ContainerBuilder[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_self_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_prop_mindustry_ui_builder_UiKey_boolean_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_id_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_condition_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_grow_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_growX_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_growY_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_fill_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_fillX_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_fillY_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_expand_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_expandX_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_expandY_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_width_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_height_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_size_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_minWidth_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_maxWidth_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_minHeight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_maxHeight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_pad_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padTop_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padLeft_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padBottom_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_padRight_float_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_align_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_colspan_int_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniform_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniformX_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_uniformY_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_color_arc_graphics_Color_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_color_java_lang_String_R_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_write_arc_util_io_Writes,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_R_java_lang_String,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_str_mindustry_ui_builder_UiKey_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_R_java_lang_Float,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_num_mindustry_ui_builder_UiKey_float_R_float,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_R_boolean,
	(void *) M_mindustry_ui_builder_UiBuilder$NodeBuilder_bool_mindustry_ui_builder_UiKey_boolean_R_boolean,
	(void *) M_mindustry_ui_builder_UiBuilder$ContainerBuilder_self_R_mindustry_ui_builder_UiBuilder$ContainerBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$ContainerBuilder_row_R_mindustry_ui_builder_UiBuilder$ContainerBuilder,
	(void *) M_mindustry_ui_builder_UiBuilder$ContainerBuilder_add_mindustry_ui_builder_UiBuilder$NodeBuilder_R_mindustry_ui_builder_UiBuilder$ContainerBuilder,
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
	{ "self", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "prop", "(Lmindustry/ui/builder/UiKey;Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "prop", "(Lmindustry/ui/builder/UiKey;F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "prop", "(Lmindustry/ui/builder/UiKey;Z)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "id", "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "condition", "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "grow", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "growX", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "growY", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "fill", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "fillX", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "fillY", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "expand", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "expandX", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "expandY", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "width", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "height", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "size", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "minWidth", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "maxWidth", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "minHeight", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "maxHeight", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "pad", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "padTop", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "padLeft", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "padBottom", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "padRight", "(F)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "align", "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "colspan", "(I)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "uniform", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "uniformX", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "uniformY", "()Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "color", "(Larc/graphics/Color;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "color", "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$NodeBuilder;" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "str", "(Lmindustry/ui/builder/UiKey;)Ljava/lang/String;" },
	{ "str", "(Lmindustry/ui/builder/UiKey;Ljava/lang/String;)Ljava/lang/String;" },
	{ "num", "(Lmindustry/ui/builder/UiKey;)Ljava/lang/Float;" },
	{ "num", "(Lmindustry/ui/builder/UiKey;F)F" },
	{ "bool", "(Lmindustry/ui/builder/UiKey;)Z" },
	{ "bool", "(Lmindustry/ui/builder/UiKey;Z)Z" },
	{ "self", "()Lmindustry/ui/builder/UiBuilder$ContainerBuilder;" },
	{ "row", "()Lmindustry/ui/builder/UiBuilder$ContainerBuilder;" },
	{ "add", "(Lmindustry/ui/builder/UiBuilder$NodeBuilder;)Lmindustry/ui/builder/UiBuilder$ContainerBuilder;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiBuilder$ContainerBuilder_mindustry_ui_builder_UiKey, 0, "(Lmindustry/ui/builder/UiKey;)V", 0 },
	{ "self", (intptr_t) M_mindustry_ui_builder_UiBuilder$ContainerBuilder_self_R_mindustry_ui_builder_UiBuilder$ContainerBuilder, VTABLE_mindustry_ui_builder_UiBuilder$ContainerBuilder_self_R_mindustry_ui_builder_UiBuilder$ContainerBuilder, "()Lmindustry/ui/builder/UiBuilder$ContainerBuilder;", 2 },
	{ "row", (intptr_t) M_mindustry_ui_builder_UiBuilder$ContainerBuilder_row_R_mindustry_ui_builder_UiBuilder$ContainerBuilder, VTABLE_mindustry_ui_builder_UiBuilder$ContainerBuilder_row_R_mindustry_ui_builder_UiBuilder$ContainerBuilder, "()Lmindustry/ui/builder/UiBuilder$ContainerBuilder;", 1 },
	{ "add", (intptr_t) M_mindustry_ui_builder_UiBuilder$ContainerBuilder_add_mindustry_ui_builder_UiBuilder$NodeBuilder_R_mindustry_ui_builder_UiBuilder$ContainerBuilder, VTABLE_mindustry_ui_builder_UiBuilder$ContainerBuilder_add_mindustry_ui_builder_UiBuilder$NodeBuilder_R_mindustry_ui_builder_UiBuilder$ContainerBuilder, "(Lmindustry/ui/builder/UiBuilder$NodeBuilder;)Lmindustry/ui/builder/UiBuilder$ContainerBuilder;", 1 },
};

Class class_mindustry_ui_builder_UiBuilder$ContainerBuilder{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiBuilder$ContainerBuilder",
		.parentClass = (intptr_t) &class_mindustry_ui_builder_UiBuilder$NodeBuilder,
		.size = sizeof(mindustry_ui_builder_UiBuilder$ContainerBuilder),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiBuilder$ContainerBuilder,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiBuilder$ContainerBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiBuilder$ContainerBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_builder_UiBuilder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 55,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiBuilder$ContainerBuilder = registerClass(&class_mindustry_ui_builder_UiBuilder$ContainerBuilder);

}

