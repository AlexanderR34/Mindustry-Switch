#include "arc/util/CommandHandler_Command.h"
#include "java/lang/Object.h"
#include "arc/util/CommandHandler_Command.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/CommandHandler_CommandParam.h"
#include "arc/util/CommandHandler_CommandRunner.h"
#include "arc/util/CommandHandler.h"

extern "C" {


void mark_arc_util_CommandHandler$Command(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_CommandHandler$Command *) object;
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_paramText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_paramText)->clazz)->markFunction)((jobject) self->F_paramText, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
	if (self->F_params)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_params)->clazz)->markFunction)((jobject) self->F_params, mark, depth + 1);
	if (self->F_runner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runner)->clazz)->markFunction)((jobject) self->F_runner, mark, depth + 1);
}

void clinit_arc_util_CommandHandler$Command(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_CommandHandler$Command_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler$Command:<init>", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler$Command(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(147);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(148);
	((arc_util_CommandHandler$Command *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(149);
	((arc_util_CommandHandler$Command *) NULL_CHECK((frame[0].o)))->F_paramText = (jref) (frame[2].o);
	LINE_NUMBER(150);
	((arc_util_CommandHandler$Command *) NULL_CHECK((frame[0].o)))->F_runner = (jref) (frame[4].o);
	LINE_NUMBER(151);
	((arc_util_CommandHandler$Command *) NULL_CHECK((frame[0].o)))->F_description = (jref) (frame[3].o);
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(154);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_util_CommandHandler$CommandParam, (jint(0)));
	((arc_util_CommandHandler$Command *) NULL_CHECK(sp[0].o))->F_params = (jref) sp[1].o;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_util_CommandHandler$CommandParam, (((jarray) nullCheck(ctx, (frame[5].o)))->length));
	((arc_util_CommandHandler$Command *) NULL_CHECK(sp[0].o))->F_params = (jref) sp[1].o;
	LINE_NUMBER(159);
	frame[6].i = (jint(0));
	LINE_NUMBER(161);
	frame[7].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[0].o)))->F_params;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(162);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	if (temp0 > (jint(2))) goto label_15;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed param '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(166);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[8].o), (jint(0)));
	frame[9].i = temp0;
	sp[0].o = frame[8].o;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	jint temp2 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp1 - (jint(1))));
	frame[10].i = temp2;
	LINE_NUMBER(167);
	frame[12].i = (jint(0));
	LINE_NUMBER(169);
	if ((frame[9].i) != (60)) goto label_19;
	}
	{
	if ((frame[10].i) != (62)) goto label_19;
	}
	{
	LINE_NUMBER(170);
	if ((frame[6].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(171);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't have non-optional param after optional param!"_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(172);
	frame[11].i = (jint(0));
	goto label_24;
	}
label_19:;
	{
	LINE_NUMBER(173);
	if ((frame[9].i) != (91)) goto label_25;
	}
	{
	if ((frame[10].i) != (93)) goto label_25;
	}
	{
	LINE_NUMBER(174);
	frame[11].i = (jint(1));
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(176);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed param '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(179);
	if ((frame[11].i) == 0) goto label_28;
	}
	INST_ICONST(1);
	INST_ISTORE(6);
label_28:;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[8].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(182);
	jint temp2 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"..."_j))));
	if (temp2 == 0) goto label_30;
	}
	{
	LINE_NUMBER(183);
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[0].o)))->F_params;
	if (temp0 == ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_32;
	}
	{
	LINE_NUMBER(184);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"A variadic parameter should be the last parameter!"_j))));
	throwException(ctx, sp[0].o);	}
label_32:;
	{
	LINE_NUMBER(186);
	sp[0].o = frame[13].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[13].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(3))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(187);
	frame[12].i = (jint(1));
	}
label_30:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((arc_util_CommandHandler$Command *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp0 = frame[7].i;
	clinit_arc_util_CommandHandler$CommandParam(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_CommandHandler$CommandParam);
	init_arc_util_CommandHandler$CommandParam_java_lang_String_boolean_boolean(ctx, sp[1].o, (frame[13].o), (frame[11].i), (frame[12].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(161);
	INST_IINC(7, 1);
	goto label_12;
	}
label_9:;
	LINE_NUMBER(194);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_util_CommandHandler$Command[] {
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
	{ "text", &class_java_lang_String, offsetof(arc_util_CommandHandler$Command, F_text), "Ljava/lang/String;", 17 },
	{ "paramText", &class_java_lang_String, offsetof(arc_util_CommandHandler$Command, F_paramText), "Ljava/lang/String;", 17 },
	{ "description", &class_java_lang_String, offsetof(arc_util_CommandHandler$Command, F_description), "Ljava/lang/String;", 17 },
	{ "params", getArrayClass(&class_arc_util_CommandHandler$CommandParam, 1), offsetof(arc_util_CommandHandler$Command, F_params), "[Larc/util/CommandHandler$CommandParam;", 17 },
	{ "runner", &class_arc_util_CommandHandler$CommandRunner, offsetof(arc_util_CommandHandler$Command, F_runner), "Larc/util/CommandHandler$CommandRunner;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_CommandHandler$Command_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Larc/util/CommandHandler$CommandRunner;)V", 1 },
};

Class class_arc_util_CommandHandler$Command{
		.nativeName = (intptr_t) "arc/util/CommandHandler$Command",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_CommandHandler$Command),
		.classVtable = (intptr_t) vtable_arc_util_CommandHandler$Command,
		.staticInitializer = (intptr_t) clinit_arc_util_CommandHandler$Command,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_CommandHandler$Command,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_CommandHandler,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_CommandHandler$Command = registerClass(&class_arc_util_CommandHandler$Command);

}

