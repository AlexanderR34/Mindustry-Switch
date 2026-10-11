#include "mindustry/ui/builder/UiBuilder_Entry.h"
#include "java/lang/Object.h"
#include "mindustry/ui/builder/UiBuilder_Entry.h"
#include "java/lang/String.h"
#include "mindustry/ui/builder/UiBuilder.h"
#include "mindustry/ui/builder/UiKey.h"

extern "C" {


void mark_mindustry_ui_builder_UiBuilder$Entry(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_builder_UiBuilder$Entry *) object;
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_mindustry_ui_builder_UiBuilder$Entry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$Entry:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(188);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(189);
	((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[1].o);
	LINE_NUMBER(190);
	((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiBuilder$Entry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$Entry:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[0].o)))->F_key;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Entry{key=\u0001, value=\u0001}"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiBuilder$Entry[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ui_builder_UiBuilder$Entry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
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
};

static FieldMetadata fields[] {
	{ "key", &class_mindustry_ui_builder_UiKey, offsetof(mindustry_ui_builder_UiBuilder$Entry, F_key), "Lmindustry/ui/builder/UiKey;", 16 },
	{ "value", &class_java_lang_Object, offsetof(mindustry_ui_builder_UiBuilder$Entry, F_value), "Ljava/lang/Object;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object, 0, "(Lmindustry/ui/builder/UiKey;Ljava/lang/Object;)V", 0 },
	{ "toString", (intptr_t) M_mindustry_ui_builder_UiBuilder$Entry_toString_R_java_lang_String, VTABLE_mindustry_ui_builder_UiBuilder$Entry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_ui_builder_UiBuilder$Entry{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiBuilder$Entry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiBuilder$Entry),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiBuilder$Entry,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiBuilder$Entry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiBuilder$Entry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_builder_UiBuilder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiBuilder$Entry = registerClass(&class_mindustry_ui_builder_UiBuilder$Entry);

}

