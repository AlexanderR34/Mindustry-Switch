#include "mindustry/logic/GlobalVars_VarEntry.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/GlobalVars_VarEntry.h"
#include "mindustry/logic/GlobalVars.h"

extern "C" {


void mark_mindustry_logic_GlobalVars$VarEntry(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_GlobalVars$VarEntry *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
}

void clinit_mindustry_logic_GlobalVars$VarEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_GlobalVars$VarEntry_java_lang_String_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars$VarEntry:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_GlobalVars$VarEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(337);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(338);
	((mindustry_logic_GlobalVars$VarEntry *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(339);
	((mindustry_logic_GlobalVars$VarEntry *) NULL_CHECK((frame[0].o)))->F_description = (jref) (frame[2].o);
	LINE_NUMBER(340);
	((mindustry_logic_GlobalVars$VarEntry *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[3].o);
	LINE_NUMBER(341);
	((mindustry_logic_GlobalVars$VarEntry *) NULL_CHECK((frame[0].o)))->F_privileged = (frame[4].i);
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_GlobalVars$VarEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars$VarEntry:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_GlobalVars$VarEntry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(344);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_GlobalVars$VarEntry[] {
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
	{ "name", &class_java_lang_String, offsetof(mindustry_logic_GlobalVars$VarEntry, F_name), "Ljava/lang/String;", 1 },
	{ "description", &class_java_lang_String, offsetof(mindustry_logic_GlobalVars$VarEntry, F_description), "Ljava/lang/String;", 1 },
	{ "icon", &class_java_lang_String, offsetof(mindustry_logic_GlobalVars$VarEntry, F_icon), "Ljava/lang/String;", 1 },
	{ "privileged", &class_boolean, offsetof(mindustry_logic_GlobalVars$VarEntry, F_privileged), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_GlobalVars$VarEntry_java_lang_String_java_lang_String_java_lang_String_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_GlobalVars$VarEntry, 0, "()V", 1 },
};

Class class_mindustry_logic_GlobalVars$VarEntry{
		.nativeName = (intptr_t) "mindustry/logic/GlobalVars$VarEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_GlobalVars$VarEntry),
		.classVtable = (intptr_t) vtable_mindustry_logic_GlobalVars$VarEntry,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_GlobalVars$VarEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_GlobalVars$VarEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_GlobalVars,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_GlobalVars$VarEntry = registerClass(&class_mindustry_logic_GlobalVars$VarEntry);

}

