#include "regexodus/LAEntry.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "regexodus/LAEntry.h"
#include "java/lang/String.h"
#include "regexodus/SearchEntry.h"
#include "java/lang/Class.h"

extern "C" {

jlong SF_regexodus_LAEntry_serialVersionUID;

void mark_regexodus_LAEntry(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_LAEntry *) object;
	if (self->F_top)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_top)->clazz)->markFunction)((jobject) self->F_top, mark, depth + 1);
	if (self->F_actual)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actual)->clazz)->markFunction)((jobject) self->F_actual, mark, depth + 1);
}

void clinit_regexodus_LAEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_LAEntry_serialVersionUID = jlong(-3628346657932720807ll);
}

void init_regexodus_LAEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/LAEntry:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_LAEntry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2778);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_LAEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/LAEntry:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2785);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2786);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(2788);
	frame[2].o = (checkCast(ctx, &class_regexodus_LAEntry, (frame[1].o)));
	LINE_NUMBER(2790);
	if (((jint)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_index) != ((jint)((regexodus_LAEntry *) NULL_CHECK((frame[2].o)))->F_index)) goto label_5;
	}
	{
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_top;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_top;
	sp[1].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[2].o)))->F_top;
	jint temp0 = (jint)((func_regexodus_SearchEntry_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[2].o)))->F_top;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_actual;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_actual;
	sp[1].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[2].o)))->F_actual;
	jint temp0 = (jint)((func_regexodus_SearchEntry_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	goto label_7;
label_8:;
	{
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[2].o)))->F_actual;
	if (sp[0].o != nullptr) goto label_5;
	}
label_7:;
	INST_ICONST(1);
	goto label_9;
label_5:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_LAEntry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/LAEntry:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2796);
	frame[1].i = ((jint)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_index);
	LINE_NUMBER(2797);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_top;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_top;
	jint temp0 = (jint)((func_regexodus_SearchEntry_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2798);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_actual;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_actual;
	jint temp0 = (jint)((func_regexodus_SearchEntry_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2799);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_LAEntry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/LAEntry:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2804);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LAEntry{index="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_index));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", top="_j))));
	sp[1].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_top;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", actual="_j))));
	sp[1].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[0].o)))->F_actual;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_LAEntry[] {
	(void *) M_regexodus_LAEntry_hashCode_R_int,
	(void *) M_regexodus_LAEntry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_LAEntry_toString_R_java_lang_String,
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

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_LAEntry_serialVersionUID, "J", 26 },
	{ "index", &class_int, offsetof(regexodus_LAEntry, F_index), "I", 0 },
	{ "top", &class_regexodus_SearchEntry, offsetof(regexodus_LAEntry, F_top), "Lregexodus/SearchEntry;", 0 },
	{ "actual", &class_regexodus_SearchEntry, offsetof(regexodus_LAEntry, F_actual), "Lregexodus/SearchEntry;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_LAEntry, 0, "()V", 0 },
	{ "equals", (intptr_t) M_regexodus_LAEntry_equals_java_lang_Object_R_boolean, VTABLE_regexodus_LAEntry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_LAEntry_hashCode_R_int, VTABLE_regexodus_LAEntry_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_regexodus_LAEntry_toString_R_java_lang_String, VTABLE_regexodus_LAEntry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_regexodus_LAEntry{
		.nativeName = (intptr_t) "regexodus/LAEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_LAEntry),
		.classVtable = (intptr_t) vtable_regexodus_LAEntry,
		.staticInitializer = (intptr_t) clinit_regexodus_LAEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_LAEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_LAEntry = registerClass(&class_regexodus_LAEntry);

}
