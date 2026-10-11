#include "mindustry/world/meta/StatCat.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/meta/StatCat.h"

extern "C" {

jobject SF_mindustry_world_meta_StatCat_all;
jobject SF_mindustry_world_meta_StatCat_general;
jobject SF_mindustry_world_meta_StatCat_power;
jobject SF_mindustry_world_meta_StatCat_liquids;
jobject SF_mindustry_world_meta_StatCat_items;
jobject SF_mindustry_world_meta_StatCat_crafting;
jobject SF_mindustry_world_meta_StatCat_function;
jobject SF_mindustry_world_meta_StatCat_optional;

void mark_mindustry_world_meta_StatCat(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_meta_StatCat_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatCat_all)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatCat_all, mark, depth + 1);
		if (SF_mindustry_world_meta_StatCat_general)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatCat_general)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatCat_general, mark, depth + 1);
		if (SF_mindustry_world_meta_StatCat_power)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatCat_power)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatCat_power, mark, depth + 1);
		if (SF_mindustry_world_meta_StatCat_liquids)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatCat_liquids)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatCat_liquids, mark, depth + 1);
		if (SF_mindustry_world_meta_StatCat_items)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatCat_items)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatCat_items, mark, depth + 1);
		if (SF_mindustry_world_meta_StatCat_crafting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatCat_crafting)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatCat_crafting, mark, depth + 1);
		if (SF_mindustry_world_meta_StatCat_function)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatCat_function)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatCat_function, mark, depth + 1);
		if (SF_mindustry_world_meta_StatCat_optional)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_StatCat_optional)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_StatCat_optional, mark, depth + 1);
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
	auto self = (mindustry_world_meta_StatCat *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void init_mindustry_world_meta_StatCat_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatCat:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatCat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((mindustry_world_meta_StatCat *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_StatCat_all;
	((mindustry_world_meta_StatCat *) NULL_CHECK(sp[0].o))->F_id = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size);
	LINE_NUMBER(26);
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_StatCat_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_meta_StatCat_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatCat:localized", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_world_meta_StatCat *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"category.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_meta_StatCat_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatCat:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_world_meta_StatCat *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_meta_StatCat_compareTo_mindustry_world_meta_StatCat_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatCat:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (((jint)((mindustry_world_meta_StatCat *) NULL_CHECK((frame[0].o)))->F_id) - ((jint)((mindustry_world_meta_StatCat *) NULL_CHECK((frame[1].o)))->F_id));
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_meta_StatCat_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatCat:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(7);
	jint temp0 = (jint)((func_mindustry_world_meta_StatCat_compareTo_mindustry_world_meta_StatCat_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_meta_StatCat_compareTo_mindustry_world_meta_StatCat_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_world_meta_StatCat, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_meta_StatCat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/StatCat:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_StatCat(ctx);
	{
	LINE_NUMBER(8);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_world_meta_StatCat(ctx);
	SF_mindustry_world_meta_StatCat_all = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatCat);
	init_mindustry_world_meta_StatCat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"general"_j))));
	clinit_mindustry_world_meta_StatCat(ctx);
	SF_mindustry_world_meta_StatCat_general = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatCat);
	init_mindustry_world_meta_StatCat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"power"_j))));
	clinit_mindustry_world_meta_StatCat(ctx);
	SF_mindustry_world_meta_StatCat_power = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatCat);
	init_mindustry_world_meta_StatCat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquids"_j))));
	clinit_mindustry_world_meta_StatCat(ctx);
	SF_mindustry_world_meta_StatCat_liquids = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatCat);
	init_mindustry_world_meta_StatCat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"items"_j))));
	clinit_mindustry_world_meta_StatCat(ctx);
	SF_mindustry_world_meta_StatCat_items = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatCat);
	init_mindustry_world_meta_StatCat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crafting"_j))));
	clinit_mindustry_world_meta_StatCat(ctx);
	SF_mindustry_world_meta_StatCat_crafting = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatCat);
	init_mindustry_world_meta_StatCat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"function"_j))));
	clinit_mindustry_world_meta_StatCat(ctx);
	SF_mindustry_world_meta_StatCat_function = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_StatCat);
	init_mindustry_world_meta_StatCat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"optional"_j))));
	clinit_mindustry_world_meta_StatCat(ctx);
	SF_mindustry_world_meta_StatCat_optional = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_meta_StatCat[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_world_meta_StatCat_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_world_meta_StatCat_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_meta_StatCat_localized_R_java_lang_String,
	(void *) M_mindustry_world_meta_StatCat_compareTo_mindustry_world_meta_StatCat_R_int,
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
	{ "compareTo", "(Lmindustry/world/meta/StatCat;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "all", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_world_meta_StatCat_all, "Larc/struct/Seq;", 25 },
	{ "general", &class_mindustry_world_meta_StatCat, (intptr_t) &SF_mindustry_world_meta_StatCat_general, "Lmindustry/world/meta/StatCat;", 25 },
	{ "power", &class_mindustry_world_meta_StatCat, (intptr_t) &SF_mindustry_world_meta_StatCat_power, "Lmindustry/world/meta/StatCat;", 25 },
	{ "liquids", &class_mindustry_world_meta_StatCat, (intptr_t) &SF_mindustry_world_meta_StatCat_liquids, "Lmindustry/world/meta/StatCat;", 25 },
	{ "items", &class_mindustry_world_meta_StatCat, (intptr_t) &SF_mindustry_world_meta_StatCat_items, "Lmindustry/world/meta/StatCat;", 25 },
	{ "crafting", &class_mindustry_world_meta_StatCat, (intptr_t) &SF_mindustry_world_meta_StatCat_crafting, "Lmindustry/world/meta/StatCat;", 25 },
	{ "function", &class_mindustry_world_meta_StatCat, (intptr_t) &SF_mindustry_world_meta_StatCat_function, "Lmindustry/world/meta/StatCat;", 25 },
	{ "optional", &class_mindustry_world_meta_StatCat, (intptr_t) &SF_mindustry_world_meta_StatCat_optional, "Lmindustry/world/meta/StatCat;", 25 },
	{ "name", &class_java_lang_String, offsetof(mindustry_world_meta_StatCat, F_name), "Ljava/lang/String;", 17 },
	{ "id", &class_int, offsetof(mindustry_world_meta_StatCat, F_id), "I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_meta_StatCat_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "localized", (intptr_t) M_mindustry_world_meta_StatCat_localized_R_java_lang_String, VTABLE_mindustry_world_meta_StatCat_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_mindustry_world_meta_StatCat_toString_R_java_lang_String, VTABLE_mindustry_world_meta_StatCat_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_world_meta_StatCat_compareTo_mindustry_world_meta_StatCat_R_int, VTABLE_mindustry_world_meta_StatCat_compareTo_mindustry_world_meta_StatCat_R_int, "(Lmindustry/world/meta/StatCat;)I", 1 },
	{ "compareTo", (intptr_t) M_mindustry_world_meta_StatCat_compareTo_java_lang_Object_R_int, VTABLE_mindustry_world_meta_StatCat_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_meta_StatCat, 0, "()V", 8 },
};

Class class_mindustry_world_meta_StatCat{
		.nativeName = (intptr_t) "mindustry/world/meta/StatCat",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_meta_StatCat),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_StatCat,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_StatCat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_meta_StatCat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_StatCat = registerClass(&class_mindustry_world_meta_StatCat);

}
