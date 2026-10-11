#include "mindustry/logic/LCategory.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Icon.h"
#include "java/lang/Comparable.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/graphics/Color.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/String.h"
#include "mindustry/logic/LCategory.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/reflect/Method.h"

extern "C" {

jobject SF_mindustry_logic_LCategory_all;
jobject SF_mindustry_logic_LCategory_unknown;
jobject SF_mindustry_logic_LCategory_io;
jobject SF_mindustry_logic_LCategory_block;
jobject SF_mindustry_logic_LCategory_operation;
jobject SF_mindustry_logic_LCategory_control;
jobject SF_mindustry_logic_LCategory_unit;
jobject SF_mindustry_logic_LCategory_world;

void mark_mindustry_logic_LCategory(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LCategory_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LCategory_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_LCategory_all, mark, depth + 1);
		if (SF_mindustry_logic_LCategory_unknown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LCategory_unknown)->clazz)->markFunction)((jobject) SF_mindustry_logic_LCategory_unknown, mark, depth + 1);
		if (SF_mindustry_logic_LCategory_io)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LCategory_io)->clazz)->markFunction)((jobject) SF_mindustry_logic_LCategory_io, mark, depth + 1);
		if (SF_mindustry_logic_LCategory_block)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LCategory_block)->clazz)->markFunction)((jobject) SF_mindustry_logic_LCategory_block, mark, depth + 1);
		if (SF_mindustry_logic_LCategory_operation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LCategory_operation)->clazz)->markFunction)((jobject) SF_mindustry_logic_LCategory_operation, mark, depth + 1);
		if (SF_mindustry_logic_LCategory_control)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LCategory_control)->clazz)->markFunction)((jobject) SF_mindustry_logic_LCategory_control, mark, depth + 1);
		if (SF_mindustry_logic_LCategory_unit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LCategory_unit)->clazz)->markFunction)((jobject) SF_mindustry_logic_LCategory_unit, mark, depth + 1);
		if (SF_mindustry_logic_LCategory_world)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LCategory_world)->clazz)->markFunction)((jobject) SF_mindustry_logic_LCategory_world, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_LCategory *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
}

void init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCategory:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCategory(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color_arc_scene_style_Drawable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCategory:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCategory(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((mindustry_logic_LCategory *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[3].o);
	LINE_NUMBER(37);
	((mindustry_logic_LCategory *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[2].o);
	LINE_NUMBER(38);
	((mindustry_logic_LCategory *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LCategory(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LCategory_all;
	((mindustry_logic_LCategory *) NULL_CHECK(sp[0].o))->F_id = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size);
	LINE_NUMBER(40);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LCategory_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCategory:localized", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_logic_LCategory *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"lcategory.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LCategory_description_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCategory:description", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_logic_LCategory *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"lcategory.\u0001.description"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_logic_LCategory_compareTo_mindustry_logic_LCategory_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCategory:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (((jint)((mindustry_logic_LCategory *) NULL_CHECK((frame[0].o)))->F_id) - ((jint)((mindustry_logic_LCategory *) NULL_CHECK((frame[1].o)))->F_id));
	}

	popStackFrame(ctx);
}

jint M_mindustry_logic_LCategory_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCategory:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	jint temp0 = (jint)((func_mindustry_logic_LCategory_compareTo_mindustry_logic_LCategory_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCategory_compareTo_mindustry_logic_LCategory_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_logic_LCategory, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LCategory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCategory:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCategory(ctx);
	{
	LINE_NUMBER(12);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_logic_LCategory(ctx);
	SF_mindustry_logic_LCategory_all = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LCategory);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unknown"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_darkishGray;
	init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_logic_LCategory(ctx);
	SF_mindustry_logic_LCategory_unknown = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LCategory);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"io"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_logicIo;
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_logicSmall;
	init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_logic_LCategory(ctx);
	SF_mindustry_logic_LCategory_io = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LCategory);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"block"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_logicBlocks;
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_effectSmall;
	init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_logic_LCategory(ctx);
	SF_mindustry_logic_LCategory_block = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LCategory);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"operation"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_logicOperations;
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_settingsSmall;
	init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_logic_LCategory(ctx);
	SF_mindustry_logic_LCategory_operation = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LCategory);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"control"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_logicControl;
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_rotateSmall;
	init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_logic_LCategory(ctx);
	SF_mindustry_logic_LCategory_control = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LCategory);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unit"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_logicUnits;
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_unitsSmall;
	init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_logic_LCategory(ctx);
	SF_mindustry_logic_LCategory_unit = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LCategory);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"world"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_logicWorld;
	clinit_mindustry_gen_Icon(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Icon_terrainSmall;
	init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color_arc_scene_style_Drawable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_logic_LCategory(ctx);
	SF_mindustry_logic_LCategory_world = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_LCategory;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field icon
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_logic_LCategory[] {
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
	(void *) M_mindustry_logic_LCategory_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_logic_LCategory_localized_R_java_lang_String,
	(void *) M_mindustry_logic_LCategory_description_R_java_lang_String,
	(void *) M_mindustry_logic_LCategory_compareTo_mindustry_logic_LCategory_R_int,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "localized", "()Ljava/lang/String;" },
	{ "description", "()Ljava/lang/String;" },
	{ "compareTo", "(Lmindustry/logic/LCategory;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "all", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_logic_LCategory_all, "Larc/struct/Seq;", 25 },
	{ "unknown", &class_mindustry_logic_LCategory, (intptr_t) &SF_mindustry_logic_LCategory_unknown, "Lmindustry/logic/LCategory;", 25 },
	{ "io", &class_mindustry_logic_LCategory, (intptr_t) &SF_mindustry_logic_LCategory_io, "Lmindustry/logic/LCategory;", 25 },
	{ "block", &class_mindustry_logic_LCategory, (intptr_t) &SF_mindustry_logic_LCategory_block, "Lmindustry/logic/LCategory;", 25 },
	{ "operation", &class_mindustry_logic_LCategory, (intptr_t) &SF_mindustry_logic_LCategory_operation, "Lmindustry/logic/LCategory;", 25 },
	{ "control", &class_mindustry_logic_LCategory, (intptr_t) &SF_mindustry_logic_LCategory_control, "Lmindustry/logic/LCategory;", 25 },
	{ "unit", &class_mindustry_logic_LCategory, (intptr_t) &SF_mindustry_logic_LCategory_unit, "Lmindustry/logic/LCategory;", 25 },
	{ "world", &class_mindustry_logic_LCategory, (intptr_t) &SF_mindustry_logic_LCategory_world, "Lmindustry/logic/LCategory;", 25 },
	{ "name", &class_java_lang_String, offsetof(mindustry_logic_LCategory, F_name), "Ljava/lang/String;", 17 },
	{ "id", &class_int, offsetof(mindustry_logic_LCategory, F_id), "I", 17 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_logic_LCategory, F_color), "Larc/graphics/Color;", 17 },
	{ "icon", &class_arc_scene_style_Drawable, offsetof(mindustry_logic_LCategory, F_icon), "Larc/scene/style/Drawable;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color, 0, "(Ljava/lang/String;Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color_arc_scene_style_Drawable, 0, "(Ljava/lang/String;Larc/graphics/Color;Larc/scene/style/Drawable;)V", 1 },
	{ "localized", (intptr_t) M_mindustry_logic_LCategory_localized_R_java_lang_String, VTABLE_mindustry_logic_LCategory_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "description", (intptr_t) M_mindustry_logic_LCategory_description_R_java_lang_String, VTABLE_mindustry_logic_LCategory_description_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_logic_LCategory_compareTo_mindustry_logic_LCategory_R_int, VTABLE_mindustry_logic_LCategory_compareTo_mindustry_logic_LCategory_R_int, "(Lmindustry/logic/LCategory;)I", 1 },
	{ "compareTo", (intptr_t) M_mindustry_logic_LCategory_compareTo_java_lang_Object_R_int, VTABLE_mindustry_logic_LCategory_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LCategory, 0, "()V", 8 },
};

Class class_mindustry_logic_LCategory{
		.nativeName = (intptr_t) "mindustry/logic/LCategory",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LCategory),
		.classVtable = (intptr_t) vtable_mindustry_logic_LCategory,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LCategory,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_LCategory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LCategory = registerClass(&class_mindustry_logic_LCategory);

}
