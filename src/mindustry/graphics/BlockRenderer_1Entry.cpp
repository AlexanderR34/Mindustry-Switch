#include "mindustry/graphics/BlockRenderer_1Entry.h"
#include "arc/util/Strings.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/BlockRenderer_1Entry.h"
#include "mindustry/world/Block.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "arc/struct/ObjectIntMap.h"

extern "C" {


void mark_mindustry_graphics_BlockRenderer$1Entry(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_graphics_BlockRenderer$1Entry *) object;
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_graphics_BlockRenderer$1Entry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_BlockRenderer$1Entry_mindustry_graphics_BlockRenderer_mindustry_world_Block_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer$1Entry:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BlockRenderer$1Entry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(775);
	((mindustry_graphics_BlockRenderer$1Entry *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(776);
	((mindustry_graphics_BlockRenderer$1Entry *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[2].o);
	LINE_NUMBER(777);
	((mindustry_graphics_BlockRenderer$1Entry *) NULL_CHECK((frame[0].o)))->F_amount = (frame[3].i);
	LINE_NUMBER(778);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_BlockRenderer$1Entry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer$1Entry:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(782);
	sp[0].o = (jobject)((mindustry_graphics_BlockRenderer$1Entry *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	jint temp0 = (jint)((mindustry_graphics_BlockRenderer$1Entry *) NULL_CHECK((frame[0].o)))->F_amount;
	jfloat temp1 = jfloat(((jint)((mindustry_graphics_BlockRenderer$1Entry *) NULL_CHECK((frame[0].o)))->F_amount));
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer$1Entry *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_graphics_BlockRenderer *) NULL_CHECK(sp[1].o))->F_blockDrawTotal;
	sp[2].o = (jobject)((mindustry_graphics_BlockRenderer$1Entry *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp2 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (temp1 / (jfloat(temp2))), (jint(1)));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001: \u0001 (average: \u0001)"_j.string, 3, sp[0].o, boxInteger(ctx, temp0), sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_graphics_BlockRenderer$1Entry_compareTo_mindustry_graphics_BlockRenderer$1Entry_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer$1Entry:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(787);
	jint temp0 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, ((jint)((mindustry_graphics_BlockRenderer$1Entry *) NULL_CHECK((frame[0].o)))->F_amount), ((jint)((mindustry_graphics_BlockRenderer$1Entry *) NULL_CHECK((frame[1].o)))->F_amount));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_graphics_BlockRenderer$1Entry_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BlockRenderer$1Entry:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(771);
	jint temp0 = (jint)((func_mindustry_graphics_BlockRenderer$1Entry_compareTo_mindustry_graphics_BlockRenderer$1Entry_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_BlockRenderer$1Entry_compareTo_mindustry_graphics_BlockRenderer$1Entry_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_graphics_BlockRenderer$1Entry, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_BlockRenderer$1Entry[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_graphics_BlockRenderer$1Entry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_graphics_BlockRenderer$1Entry_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_graphics_BlockRenderer$1Entry_compareTo_mindustry_graphics_BlockRenderer$1Entry_R_int,
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
	{ "compareTo", "(Lmindustry/graphics/BlockRenderer$1Entry;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_graphics_BlockRenderer$1Entry, F_block), "Lmindustry/world/Block;", 0 },
	{ "amount", &class_int, offsetof(mindustry_graphics_BlockRenderer$1Entry, F_amount), "I", 0 },
	{ "this$0", &class_mindustry_graphics_BlockRenderer, offsetof(mindustry_graphics_BlockRenderer$1Entry, F_this$0), "Lmindustry/graphics/BlockRenderer;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_BlockRenderer$1Entry_mindustry_graphics_BlockRenderer_mindustry_world_Block_int, 0, "(Lmindustry/graphics/BlockRenderer;Lmindustry/world/Block;I)V", 1 },
	{ "toString", (intptr_t) M_mindustry_graphics_BlockRenderer$1Entry_toString_R_java_lang_String, VTABLE_mindustry_graphics_BlockRenderer$1Entry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_graphics_BlockRenderer$1Entry_compareTo_mindustry_graphics_BlockRenderer$1Entry_R_int, VTABLE_mindustry_graphics_BlockRenderer$1Entry_compareTo_mindustry_graphics_BlockRenderer$1Entry_R_int, "(Lmindustry/graphics/BlockRenderer$1Entry;)I", 1 },
	{ "compareTo", (intptr_t) M_mindustry_graphics_BlockRenderer$1Entry_compareTo_java_lang_Object_R_int, VTABLE_mindustry_graphics_BlockRenderer$1Entry_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_mindustry_graphics_BlockRenderer$1Entry{
		.nativeName = (intptr_t) "mindustry/graphics/BlockRenderer$1Entry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_BlockRenderer$1Entry),
		.classVtable = (intptr_t) vtable_mindustry_graphics_BlockRenderer$1Entry,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_BlockRenderer$1Entry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_BlockRenderer$1Entry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_BlockRenderer$1Entry = registerClass(&class_mindustry_graphics_BlockRenderer$1Entry);

}

