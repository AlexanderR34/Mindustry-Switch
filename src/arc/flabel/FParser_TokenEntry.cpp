#include "arc/flabel/FParser_TokenEntry.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "arc/flabel/FParser_TokenEntry.h"
#include "arc/flabel/FParser.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "arc/flabel/FParser_TokenCategory.h"
#include "arc/flabel/FEffect.h"

extern "C" {


void mark_arc_flabel_FParser$TokenEntry(jobject object, jint mark, jint depth) {
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
	auto self = (arc_flabel_FParser$TokenEntry *) object;
	if (self->F_token)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_token)->clazz)->markFunction)((jobject) self->F_token, mark, depth + 1);
	if (self->F_category)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_category)->clazz)->markFunction)((jobject) self->F_category, mark, depth + 1);
	if (self->F_stringValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stringValue)->clazz)->markFunction)((jobject) self->F_stringValue, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
}

void clinit_arc_flabel_FParser$TokenEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_flabel_FParser$TokenEntry_java_lang_String_arc_flabel_FParser$TokenCategory_int_float_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$TokenEntry:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$TokenEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(306);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(307);
	((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[0].o)))->F_token = (jref) (frame[1].o);
	LINE_NUMBER(308);
	((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[0].o)))->F_category = (jref) (frame[2].o);
	LINE_NUMBER(309);
	((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[0].o)))->F_index = (frame[3].i);
	LINE_NUMBER(310);
	((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[0].o)))->F_floatValue = (frame[4].f);
	LINE_NUMBER(311);
	((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[0].o)))->F_stringValue = (jref) (frame[5].o);
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_flabel_FParser$TokenEntry_compareTo_arc_flabel_FParser$TokenEntry_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$TokenEntry:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	jint temp0 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, ((jint)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[0].o)))->F_index), ((jint)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[1].o)))->F_index));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_flabel_FParser$TokenEntry_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$TokenEntry:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	jint temp0 = (jint)((func_arc_flabel_FParser$TokenEntry_compareTo_arc_flabel_FParser$TokenEntry_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FParser$TokenEntry_compareTo_arc_flabel_FParser$TokenEntry_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_flabel_FParser$TokenEntry, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_FParser$TokenEntry[] {
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
	(void *) M_arc_flabel_FParser$TokenEntry_compareTo_java_lang_Object_R_int,
	(void *) M_arc_flabel_FParser$TokenEntry_compareTo_arc_flabel_FParser$TokenEntry_R_int,
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
	{ "compareTo", "(Larc/flabel/FParser$TokenEntry;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "token", &class_java_lang_String, offsetof(arc_flabel_FParser$TokenEntry, F_token), "Ljava/lang/String;", 0 },
	{ "category", &class_arc_flabel_FParser$TokenCategory, offsetof(arc_flabel_FParser$TokenEntry, F_category), "Larc/flabel/FParser$TokenCategory;", 0 },
	{ "index", &class_int, offsetof(arc_flabel_FParser$TokenEntry, F_index), "I", 0 },
	{ "floatValue", &class_float, offsetof(arc_flabel_FParser$TokenEntry, F_floatValue), "F", 0 },
	{ "stringValue", &class_java_lang_String, offsetof(arc_flabel_FParser$TokenEntry, F_stringValue), "Ljava/lang/String;", 0 },
	{ "effect", &class_arc_flabel_FEffect, offsetof(arc_flabel_FParser$TokenEntry, F_effect), "Larc/flabel/FEffect;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_FParser$TokenEntry_java_lang_String_arc_flabel_FParser$TokenCategory_int_float_java_lang_String, 0, "(Ljava/lang/String;Larc/flabel/FParser$TokenCategory;IFLjava/lang/String;)V", 0 },
	{ "compareTo", (intptr_t) M_arc_flabel_FParser$TokenEntry_compareTo_arc_flabel_FParser$TokenEntry_R_int, VTABLE_arc_flabel_FParser$TokenEntry_compareTo_arc_flabel_FParser$TokenEntry_R_int, "(Larc/flabel/FParser$TokenEntry;)I", 1 },
	{ "compareTo", (intptr_t) M_arc_flabel_FParser$TokenEntry_compareTo_java_lang_Object_R_int, VTABLE_arc_flabel_FParser$TokenEntry_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_arc_flabel_FParser$TokenEntry{
		.nativeName = (intptr_t) "arc/flabel/FParser$TokenEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_flabel_FParser$TokenEntry),
		.classVtable = (intptr_t) vtable_arc_flabel_FParser$TokenEntry,
		.staticInitializer = (intptr_t) clinit_arc_flabel_FParser$TokenEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_FParser$TokenEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_flabel_FParser,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_FParser$TokenEntry = registerClass(&class_arc_flabel_FParser$TokenEntry);

}

