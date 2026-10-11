#include "mindustry/ai/ItemUnitStance.h"
#include "mindustry/ai/ItemUnitStance.h"
#include "mindustry/ai/UnitStance.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/ObjectMap.h"
#include "arc/input/KeyBind.h"

extern "C" {

jobject SF_mindustry_ai_ItemUnitStance_itemToStance;
jobject SF_mindustry_ai_ItemUnitStance_all;

void mark_mindustry_ai_ItemUnitStance(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_ItemUnitStance_itemToStance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ItemUnitStance_itemToStance)->clazz)->markFunction)((jobject) SF_mindustry_ai_ItemUnitStance_itemToStance, mark, depth + 1);
		if (SF_mindustry_ai_ItemUnitStance_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ItemUnitStance_all)->clazz)->markFunction)((jobject) SF_mindustry_ai_ItemUnitStance_all, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ai_UnitStance(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_ItemUnitStance *) object;
	if (self->F_item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_item)->clazz)->markFunction)((jobject) self->F_item, mark, depth + 1);
}

void init_mindustry_ai_ItemUnitStance_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ItemUnitStance:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ItemUnitStance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"item-\u0001"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"item-\u0001"_j.string, 1, sp[2].o);
	init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)));
	LINE_NUMBER(17);
	((mindustry_ai_ItemUnitStance *) NULL_CHECK((frame[0].o)))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_incompatibleStances;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_mineAuto;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_mineAuto;
	sp[1].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK(sp[1].o))->F_incompatibleStances;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(21);
	clinit_mindustry_ai_ItemUnitStance(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ItemUnitStance_itemToStance;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	LINE_NUMBER(22);
	clinit_mindustry_ai_ItemUnitStance(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ItemUnitStance_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_ItemUnitStance_getByItem_mindustry_type_Item_R_mindustry_ai_ItemUnitStance(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ItemUnitStance:getByItem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ItemUnitStance(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	clinit_mindustry_ai_ItemUnitStance(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ItemUnitStance_itemToStance;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = checkCast(ctx, &class_mindustry_ai_ItemUnitStance, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_ItemUnitStance_all_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ItemUnitStance:all", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ItemUnitStance(ctx);
	{
	LINE_NUMBER(30);
	clinit_mindustry_ai_ItemUnitStance(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ItemUnitStance_all;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ItemUnitStance_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ItemUnitStance:localized", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stance.mine"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_ai_ItemUnitStance *) NULL_CHECK((frame[0].o)))->F_item;
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[3].o))->F_localizedName;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ItemUnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ItemUnitStance:getIcon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[1].o = (jobject)((mindustry_ai_ItemUnitStance *) NULL_CHECK((frame[0].o)))->F_item;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ai_ItemUnitStance(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ai_UnitStance(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ItemUnitStance:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ItemUnitStance(ctx);
	{
	LINE_NUMBER(10);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_ai_ItemUnitStance(ctx);
	SF_mindustry_ai_ItemUnitStance_itemToStance = sp[0].o;
	LINE_NUMBER(11);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_ItemUnitStance(ctx);
	SF_mindustry_ai_ItemUnitStance_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_ItemUnitStance;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getByItem
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ai_ItemUnitStance[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ai_UnitStance_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_ai_UnitStance_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_ai_UnitStance_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_ctype_Content_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean,
	(void *) M_mindustry_ai_ItemUnitStance_localized_R_java_lang_String,
	(void *) M_mindustry_ai_ItemUnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable,
	(void *) M_mindustry_ai_UnitStance_getEmoji_R_char,
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
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isCompatible", "(Lmindustry/ai/UnitCommand;)Z" },
	{ "localized", "()Ljava/lang/String;" },
	{ "getIcon", "()Larc/scene/style/TextureRegionDrawable;" },
	{ "getEmoji", "()C" },
};

static FieldMetadata fields[] {
	{ "itemToStance", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_ai_ItemUnitStance_itemToStance, "Larc/struct/ObjectMap;", 10 },
	{ "all", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_ItemUnitStance_all, "Larc/struct/Seq;", 10 },
	{ "item", &class_mindustry_type_Item, offsetof(mindustry_ai_ItemUnitStance, F_item), "Lmindustry/type/Item;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_ItemUnitStance_mindustry_type_Item, 0, "(Lmindustry/type/Item;)V", 1 },
	{ "getByItem", (intptr_t) SM_mindustry_ai_ItemUnitStance_getByItem_mindustry_type_Item_R_mindustry_ai_ItemUnitStance, 0, "(Lmindustry/type/Item;)Lmindustry/ai/ItemUnitStance;", 9 },
	{ "all", (intptr_t) SM_mindustry_ai_ItemUnitStance_all_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 9 },
	{ "localized", (intptr_t) M_mindustry_ai_ItemUnitStance_localized_R_java_lang_String, VTABLE_mindustry_ai_ItemUnitStance_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getIcon", (intptr_t) M_mindustry_ai_ItemUnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable, VTABLE_mindustry_ai_ItemUnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable, "()Larc/scene/style/TextureRegionDrawable;", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_ItemUnitStance, 0, "()V", 8 },
};

Class class_mindustry_ai_ItemUnitStance{
		.nativeName = (intptr_t) "mindustry/ai/ItemUnitStance",
		.parentClass = (intptr_t) &class_mindustry_ai_UnitStance,
		.size = sizeof(mindustry_ai_ItemUnitStance),
		.classVtable = (intptr_t) vtable_mindustry_ai_ItemUnitStance,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_ItemUnitStance,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_ItemUnitStance,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_ItemUnitStance = registerClass(&class_mindustry_ai_ItemUnitStance);

}
