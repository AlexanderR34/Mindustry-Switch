#include "mindustry/world/meta/Attribute.h"
#include "arc/func/Prov.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/meta/Attribute.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/world/meta/Attribute_invoke_arc_func_Prov_1.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_mindustry_world_meta_Attribute_all;
jobject SF_mindustry_world_meta_Attribute_map;
jobject SF_mindustry_world_meta_Attribute_heat;
jobject SF_mindustry_world_meta_Attribute_spores;
jobject SF_mindustry_world_meta_Attribute_water;
jobject SF_mindustry_world_meta_Attribute_oil;
jobject SF_mindustry_world_meta_Attribute_light;
jobject SF_mindustry_world_meta_Attribute_sand;
jobject SF_mindustry_world_meta_Attribute_steam;

void mark_mindustry_world_meta_Attribute(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_meta_Attribute_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Attribute_all)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Attribute_all, mark, depth + 1);
		if (SF_mindustry_world_meta_Attribute_map)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Attribute_map)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Attribute_map, mark, depth + 1);
		if (SF_mindustry_world_meta_Attribute_heat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Attribute_heat)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Attribute_heat, mark, depth + 1);
		if (SF_mindustry_world_meta_Attribute_spores)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Attribute_spores)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Attribute_spores, mark, depth + 1);
		if (SF_mindustry_world_meta_Attribute_water)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Attribute_water)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Attribute_water, mark, depth + 1);
		if (SF_mindustry_world_meta_Attribute_oil)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Attribute_oil)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Attribute_oil, mark, depth + 1);
		if (SF_mindustry_world_meta_Attribute_light)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Attribute_light)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Attribute_light, mark, depth + 1);
		if (SF_mindustry_world_meta_Attribute_sand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Attribute_sand)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Attribute_sand, mark, depth + 1);
		if (SF_mindustry_world_meta_Attribute_steam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Attribute_steam)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Attribute_steam, mark, depth + 1);
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
	auto self = (mindustry_world_meta_Attribute *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

jfloat M_mindustry_world_meta_Attribute_env_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Attribute:env", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(33);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_envAttrs;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_meta_Attribute_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Attribute:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Attribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	((mindustry_world_meta_Attribute *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(38);
	((mindustry_world_meta_Attribute *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[2].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_meta_Attribute_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Attribute:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_world_meta_Attribute *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_Attribute_get_java_lang_String_R_mindustry_world_meta_Attribute(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Attribute:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Attribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(48);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_map;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_Attribute_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_world_meta_Attribute_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_world_meta_Attribute_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_meta_Attribute, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_Attribute_getOrNull_java_lang_String_R_mindustry_world_meta_Attribute(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Attribute:getOrNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Attribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(53);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_map;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_meta_Attribute, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_Attribute_exists_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Attribute:exists", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Attribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(58);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_map;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Attribute:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Attribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(63);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Attribute);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_all;
	init_mindustry_world_meta_Attribute_int_java_lang_String(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length), (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(64);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_all;
	frame[2].o = sp[0].o;
	LINE_NUMBER(65);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_all;
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_meta_Attribute, ((((jarray) nullCheck(ctx, sp[0].o))->length) + (jint(1))));
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_all = sp[0].o;
	LINE_NUMBER(66);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_all;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((mindustry_world_meta_Attribute *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(67);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_all;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_world_meta_Attribute *) NULL_CHECK((frame[1].o)))->F_id)) = (frame[1].o);
	LINE_NUMBER(68);
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Attribute_map;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_Attribute_lambda$get$0_java_lang_String_R_java_lang_RuntimeException(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Attribute:lambda$get$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Attribute(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(48);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown Attribute type: \u0001"_j.string, 1, (frame[0].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_meta_Attribute(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Attribute:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Attribute(ctx);
	{
	LINE_NUMBER(8);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_meta_Attribute, (jint(0)));
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_all = sp[0].o;
	LINE_NUMBER(9);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_map = sp[0].o;
	LINE_NUMBER(13);
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(ctx, (((jobject) createStringLiteral(ctx, u8"heat"_j))));
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_heat = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(ctx, (((jobject) createStringLiteral(ctx, u8"spores"_j))));
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_spores = sp[0].o;
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(ctx, (((jobject) createStringLiteral(ctx, u8"water"_j))));
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_water = sp[0].o;
	LINE_NUMBER(19);
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(ctx, (((jobject) createStringLiteral(ctx, u8"oil"_j))));
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_oil = sp[0].o;
	LINE_NUMBER(21);
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(ctx, (((jobject) createStringLiteral(ctx, u8"light"_j))));
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_light = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(ctx, (((jobject) createStringLiteral(ctx, u8"sand"_j))));
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_sand = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(ctx, (((jobject) createStringLiteral(ctx, u8"steam"_j))));
	clinit_mindustry_world_meta_Attribute(ctx);
	SF_mindustry_world_meta_Attribute_steam = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_meta_Attribute;
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

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getOrNull
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_meta_Attribute[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_world_meta_Attribute_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_world_meta_Attribute_env_R_float,
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
	{ "env", "()F" },
};

static FieldMetadata fields[] {
	{ "all", getArrayClass(&class_mindustry_world_meta_Attribute, 1), (intptr_t) &SF_mindustry_world_meta_Attribute_all, "[Lmindustry/world/meta/Attribute;", 9 },
	{ "map", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_world_meta_Attribute_map, "Larc/struct/ObjectMap;", 9 },
	{ "heat", &class_mindustry_world_meta_Attribute, (intptr_t) &SF_mindustry_world_meta_Attribute_heat, "Lmindustry/world/meta/Attribute;", 25 },
	{ "spores", &class_mindustry_world_meta_Attribute, (intptr_t) &SF_mindustry_world_meta_Attribute_spores, "Lmindustry/world/meta/Attribute;", 25 },
	{ "water", &class_mindustry_world_meta_Attribute, (intptr_t) &SF_mindustry_world_meta_Attribute_water, "Lmindustry/world/meta/Attribute;", 25 },
	{ "oil", &class_mindustry_world_meta_Attribute, (intptr_t) &SF_mindustry_world_meta_Attribute_oil, "Lmindustry/world/meta/Attribute;", 25 },
	{ "light", &class_mindustry_world_meta_Attribute, (intptr_t) &SF_mindustry_world_meta_Attribute_light, "Lmindustry/world/meta/Attribute;", 25 },
	{ "sand", &class_mindustry_world_meta_Attribute, (intptr_t) &SF_mindustry_world_meta_Attribute_sand, "Lmindustry/world/meta/Attribute;", 25 },
	{ "steam", &class_mindustry_world_meta_Attribute, (intptr_t) &SF_mindustry_world_meta_Attribute_steam, "Lmindustry/world/meta/Attribute;", 25 },
	{ "id", &class_int, offsetof(mindustry_world_meta_Attribute, F_id), "I", 17 },
	{ "name", &class_java_lang_String, offsetof(mindustry_world_meta_Attribute, F_name), "Ljava/lang/String;", 17 },
};

static MethodMetadata methods[] {
	{ "env", (intptr_t) M_mindustry_world_meta_Attribute_env_R_float, VTABLE_mindustry_world_meta_Attribute_env_R_float, "()F", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_meta_Attribute_int_java_lang_String, 0, "(ILjava/lang/String;)V", 0 },
	{ "toString", (intptr_t) M_mindustry_world_meta_Attribute_toString_R_java_lang_String, VTABLE_mindustry_world_meta_Attribute_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "get", (intptr_t) SM_mindustry_world_meta_Attribute_get_java_lang_String_R_mindustry_world_meta_Attribute, 0, "(Ljava/lang/String;)Lmindustry/world/meta/Attribute;", 9 },
	{ "getOrNull", (intptr_t) SM_mindustry_world_meta_Attribute_getOrNull_java_lang_String_R_mindustry_world_meta_Attribute, 0, "(Ljava/lang/String;)Lmindustry/world/meta/Attribute;", 9 },
	{ "exists", (intptr_t) SM_mindustry_world_meta_Attribute_exists_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "add", (intptr_t) SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute, 0, "(Ljava/lang/String;)Lmindustry/world/meta/Attribute;", 9 },
	{ "lambda$get$0", (intptr_t) SM_mindustry_world_meta_Attribute_lambda$get$0_java_lang_String_R_java_lang_RuntimeException, 0, "(Ljava/lang/String;)Ljava/lang/RuntimeException;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_meta_Attribute, 0, "()V", 8 },
};

Class class_mindustry_world_meta_Attribute{
		.nativeName = (intptr_t) "mindustry/world/meta/Attribute",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_meta_Attribute),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_Attribute,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_Attribute,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_meta_Attribute,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_Attribute = registerClass(&class_mindustry_world_meta_Attribute);

}
