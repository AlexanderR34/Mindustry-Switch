#include "mindustry/ui/IntFormat.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/ui/IntFormat_invoke_arc_func_Func_2.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "mindustry/ui/IntFormat_invoke_arc_func_Func_3.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ui/IntFormat.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_mindustry_ui_IntFormat(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_IntFormat *) object;
	if (self->F_builder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_builder)->clazz)->markFunction)((jobject) self->F_builder, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_converter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_converter)->clazz)->markFunction)((jobject) self->F_converter, mark, depth + 1);
}

void clinit_mindustry_ui_IntFormat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_IntFormat_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/IntFormat:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_IntFormat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((mindustry_ui_IntFormat *) NULL_CHECK(sp[0].o))->F_builder = (jref) sp[1].o;
	LINE_NUMBER(13);
	((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_lastValue = (bit_cast<jint>(0x80000000));
	((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_lastValue2 = (bit_cast<jint>(0x80000000));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_IntFormat_invoke_arc_func_Func_2(ctx);
		auto proxy = (mindustry_ui_IntFormat_invoke_arc_func_Func_2 *) gcAlloc(ctx, &class_mindustry_ui_IntFormat_invoke_arc_func_Func_2);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_IntFormat *) NULL_CHECK(sp[0].o))->F_converter = (jref) sp[1].o;
	LINE_NUMBER(17);
	((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_IntFormat_java_lang_String_arc_func_Func(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/IntFormat:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_IntFormat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((mindustry_ui_IntFormat *) NULL_CHECK(sp[0].o))->F_builder = (jref) sp[1].o;
	LINE_NUMBER(13);
	((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_lastValue = (bit_cast<jint>(0x80000000));
	((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_lastValue2 = (bit_cast<jint>(0x80000000));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_IntFormat_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_ui_IntFormat_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_ui_IntFormat_invoke_arc_func_Func_3);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_IntFormat *) NULL_CHECK(sp[0].o))->F_converter = (jref) sp[1].o;
	LINE_NUMBER(21);
	((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(22);
	((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_converter = (jref) (frame[2].o);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/IntFormat:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(26);
	if (((jint)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_lastValue) == (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_builder;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_builder;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_text;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_converter;
	sp[5].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	sp[4].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[4].o))(ctx, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(30);
	((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_lastValue = (frame[1].i);
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_builder;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/IntFormat:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(35);
	if (((jint)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_lastValue) != (frame[1].i)) goto label_1;
	}
	{
	if (((jint)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_lastValue2) == (frame[2].i)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_builder;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_builder;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_text;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(39);
	((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_lastValue = (frame[1].i);
	LINE_NUMBER(40);
	((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_lastValue2 = (frame[2].i);
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_ui_IntFormat *) NULL_CHECK((frame[0].o)))->F_builder;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_IntFormat[] {
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
	(void *) M_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence,
	(void *) M_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence,
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
	{ "get", "(I)Ljava/lang/CharSequence;" },
	{ "get", "(II)Ljava/lang/CharSequence;" },
};

static FieldMetadata fields[] {
	{ "builder", &class_java_lang_StringBuilder, offsetof(mindustry_ui_IntFormat, F_builder), "Ljava/lang/StringBuilder;", 18 },
	{ "text", &class_java_lang_String, offsetof(mindustry_ui_IntFormat, F_text), "Ljava/lang/String;", 18 },
	{ "lastValue", &class_int, offsetof(mindustry_ui_IntFormat, F_lastValue), "I", 2 },
	{ "lastValue2", &class_int, offsetof(mindustry_ui_IntFormat, F_lastValue2), "I", 2 },
	{ "converter", &class_arc_func_Func, offsetof(mindustry_ui_IntFormat, F_converter), "Larc/func/Func;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_IntFormat_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_IntFormat_java_lang_String_arc_func_Func, 0, "(Ljava/lang/String;Larc/func/Func;)V", 1 },
	{ "get", (intptr_t) M_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence, VTABLE_mindustry_ui_IntFormat_get_int_R_java_lang_CharSequence, "(I)Ljava/lang/CharSequence;", 1 },
	{ "get", (intptr_t) M_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence, VTABLE_mindustry_ui_IntFormat_get_int_int_R_java_lang_CharSequence, "(II)Ljava/lang/CharSequence;", 1 },
};

Class class_mindustry_ui_IntFormat{
		.nativeName = (intptr_t) "mindustry/ui/IntFormat",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_IntFormat),
		.classVtable = (intptr_t) vtable_mindustry_ui_IntFormat,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_IntFormat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_IntFormat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_IntFormat = registerClass(&class_mindustry_ui_IntFormat);

}
