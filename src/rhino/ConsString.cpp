#include "rhino/ConsString.h"
#include "rhino/ConsString.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/ArrayDeque.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_rhino_ConsString(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ConsString *) object;
	if (self->F_left)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_left)->clazz)->markFunction)((jobject) self->F_left, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
}

void clinit_rhino_ConsString(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ConsString_java_lang_CharSequence_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ConsString:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ConsString(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_left = (jref) (frame[1].o);
	LINE_NUMBER(29);
	((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_right = (jref) (frame[2].o);
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_left;
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_right;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[1].o))(ctx, sp[1].o);
	((rhino_ConsString *) NULL_CHECK(sp[0].o))->F_length = (temp0 + temp1);
	LINE_NUMBER(31);
	((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_isFlat = (jint(0));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ConsString_writeReplace_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ConsString:writeReplace", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_rhino_ConsString_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ConsString_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ConsString_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ConsString:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	if (((jint)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_isFlat) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_left;
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_rhino_ConsString_flatten_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ConsString_flatten_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ConsString:flatten", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	if (((jint)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_isFlat) != 0) goto label_1;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((jint)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(47);
	frame[2].i = ((jint)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_length);
	LINE_NUMBER(49);
	clinit_java_util_ArrayDeque(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayDeque);
	init_java_util_ArrayDeque(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_left;
	((func_java_util_ArrayDeque_addFirst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayDeque_addFirst_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_right;
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(54);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_ConsString)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(55);
	frame[5].o = (checkCast(ctx, &class_rhino_ConsString, (frame[4].o)));
	LINE_NUMBER(56);
	if (((jint)((rhino_ConsString *) NULL_CHECK((frame[5].o)))->F_isFlat) == 0) goto label_11;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[5].o)))->F_left;
	frame[4].o = sp[0].o;
	goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[5].o)))->F_left;
	((func_java_util_ArrayDeque_addFirst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayDeque_addFirst_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	sp[0].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[5].o)))->F_right;
	frame[4].o = sp[0].o;
	LINE_NUMBER(61);
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(65);
	frame[5].o = (checkCast(ctx, &class_java_lang_String, (frame[4].o)));
	LINE_NUMBER(66);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	frame[2].i = (temp0 - temp1);
	LINE_NUMBER(67);
	sp[0].o = frame[5].o;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp2, temp3, (frame[1].o), (frame[2].i));
	LINE_NUMBER(68);
	jint temp4 = (jint)((func_java_util_ArrayDeque_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_ArrayDeque_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp4 == 0) goto label_19;
	}
	INST_ACONST_NULL();
	goto label_20;
label_19:;
	{
	sp[0].o = (jobject)((func_java_util_ArrayDeque_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_ArrayDeque_removeFirst_R_java_lang_Object])(ctx, (frame[3].o));
	sp[0].o = checkCast(ctx, &class_java_lang_CharSequence, sp[0].o);
	sp += 1;
	}
label_20:;
	INST_ASTORE(4);
label_15:;
	{
	LINE_NUMBER(69);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[1].o, (frame[1].o));
	((rhino_ConsString *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(72);
	((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_right = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(73);
	((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_isFlat = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_left;
	popStackFrame(ctx, self);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

jint M_rhino_ConsString_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ConsString:length", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return ((jint)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_length);
	}

	popStackFrame(ctx);
}

jchar M_rhino_ConsString_charAt_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ConsString:charAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(85);
	if (((jint)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_isFlat) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_left;
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_rhino_ConsString_flatten_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ConsString_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ConsString:subSequence", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(91);
	if (((jint)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_isFlat) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ConsString *) NULL_CHECK((frame[0].o)))->F_left;
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_rhino_ConsString_flatten_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ConsString[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_ConsString_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_ConsString_length_R_int,
	(void *) M_rhino_ConsString_charAt_int_R_char,
	(void *) M_rhino_ConsString_subSequence_int_int_R_java_lang_CharSequence,
	(void *) M_rhino_ConsString_writeReplace_R_java_lang_Object,
	(void *) M_rhino_ConsString_flatten_R_java_lang_String,
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
	{ "length", "()I" },
	{ "charAt", "(I)C" },
	{ "subSequence", "(II)Ljava/lang/CharSequence;" },
	{ "writeReplace", "()Ljava/lang/Object;" },
	{ "flatten", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_lang_CharSequence, };

static FieldMetadata fields[] {
	{ "left", &class_java_lang_CharSequence, offsetof(rhino_ConsString, F_left), "Ljava/lang/CharSequence;", 2 },
	{ "right", &class_java_lang_CharSequence, offsetof(rhino_ConsString, F_right), "Ljava/lang/CharSequence;", 2 },
	{ "length", &class_int, offsetof(rhino_ConsString, F_length), "I", 18 },
	{ "isFlat", &class_boolean, offsetof(rhino_ConsString, F_isFlat), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ConsString_java_lang_CharSequence_java_lang_CharSequence, 0, "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V", 1 },
	{ "writeReplace", (intptr_t) M_rhino_ConsString_writeReplace_R_java_lang_Object, VTABLE_rhino_ConsString_writeReplace_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "toString", (intptr_t) M_rhino_ConsString_toString_R_java_lang_String, VTABLE_rhino_ConsString_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "flatten", (intptr_t) M_rhino_ConsString_flatten_R_java_lang_String, VTABLE_rhino_ConsString_flatten_R_java_lang_String, "()Ljava/lang/String;", 34 },
	{ "length", (intptr_t) M_rhino_ConsString_length_R_int, VTABLE_rhino_ConsString_length_R_int, "()I", 1 },
	{ "charAt", (intptr_t) M_rhino_ConsString_charAt_int_R_char, VTABLE_rhino_ConsString_charAt_int_R_char, "(I)C", 1 },
	{ "subSequence", (intptr_t) M_rhino_ConsString_subSequence_int_int_R_java_lang_CharSequence, VTABLE_rhino_ConsString_subSequence_int_int_R_java_lang_CharSequence, "(II)Ljava/lang/CharSequence;", 1 },
};

Class class_rhino_ConsString{
		.nativeName = (intptr_t) "rhino/ConsString",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ConsString),
		.classVtable = (intptr_t) vtable_rhino_ConsString,
		.staticInitializer = (intptr_t) clinit_rhino_ConsString,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ConsString,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ConsString = registerClass(&class_rhino_ConsString);

}
