#include "rhino/ResolvedOverload.h"
#include "java/lang/Object.h"
#include "java/util/Arrays.h"
#include "java/lang/Class.h"
#include "rhino/Wrapper.h"
#include "rhino/ResolvedOverload.h"

extern "C" {


void mark_rhino_ResolvedOverload(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ResolvedOverload *) object;
	if (self->F_types)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_types)->clazz)->markFunction)((jobject) self->F_types, mark, depth + 1);
}

void clinit_rhino_ResolvedOverload(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ResolvedOverload_Array1_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ResolvedOverload:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ResolvedOverload(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(532);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(533);
	((rhino_ResolvedOverload *) NULL_CHECK((frame[0].o)))->F_index = (frame[2].i);
	LINE_NUMBER(534);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((rhino_ResolvedOverload *) NULL_CHECK(sp[0].o))->F_types = (jref) sp[1].o;
	LINE_NUMBER(535);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(536);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(537);
	if ((isInstance(ctx, (frame[5].o), &class_rhino_Wrapper)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[5].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[5].o))));
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((rhino_ResolvedOverload *) NULL_CHECK((frame[0].o)))->F_types;
	jint temp0 = frame[3].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[5].o) != nullptr) goto label_11;
	}
	INST_ACONST_NULL();
	goto label_12;
label_11:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_12:;
	{
	sp -= 3;
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(535);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(541);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_ResolvedOverload_matches_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ResolvedOverload:matches", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(544);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[1].o)))->length;
	sp[0].o = (jobject)((rhino_ResolvedOverload *) NULL_CHECK((frame[0].o)))->F_types;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(547);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(548);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(549);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_Wrapper)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[4].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[4].o))));
	frame[4].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(551);
	if ((frame[4].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((rhino_ResolvedOverload *) NULL_CHECK((frame[0].o)))->F_types;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[4].o));
	sp[1].o = (jobject)((rhino_ResolvedOverload *) NULL_CHECK((frame[0].o)))->F_types;
	if (sp[0].o == ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))) goto label_12;
	}
	{
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(547);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_rhino_ResolvedOverload_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ResolvedOverload:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(562);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ResolvedOverload)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(565);
	frame[2].o = (checkCast(ctx, &class_rhino_ResolvedOverload, (frame[1].o)));
	LINE_NUMBER(566);
	sp[0].o = (jobject)((rhino_ResolvedOverload *) NULL_CHECK((frame[0].o)))->F_types;
	sp[1].o = (jobject)((rhino_ResolvedOverload *) NULL_CHECK((frame[2].o)))->F_types;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	if (((jint)((rhino_ResolvedOverload *) NULL_CHECK((frame[0].o)))->F_index) != ((jint)((rhino_ResolvedOverload *) NULL_CHECK((frame[2].o)))->F_index)) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_ResolvedOverload_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ResolvedOverload:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((rhino_ResolvedOverload *) NULL_CHECK((frame[0].o)))->F_types;
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ResolvedOverload[] {
	(void *) M_rhino_ResolvedOverload_hashCode_R_int,
	(void *) M_rhino_ResolvedOverload_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_ResolvedOverload_matches_Array1_java_lang_Object_R_boolean,
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
	{ "matches", "([Ljava/lang/Object;)Z" },
};

static FieldMetadata fields[] {
	{ "types", getArrayClass(&class_java_lang_Class, 1), offsetof(rhino_ResolvedOverload, F_types), "[Ljava/lang/Class;", 16 },
	{ "index", &class_int, offsetof(rhino_ResolvedOverload, F_index), "I", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ResolvedOverload_Array1_java_lang_Object_int, 0, "([Ljava/lang/Object;I)V", 0 },
	{ "matches", (intptr_t) M_rhino_ResolvedOverload_matches_Array1_java_lang_Object_R_boolean, VTABLE_rhino_ResolvedOverload_matches_Array1_java_lang_Object_R_boolean, "([Ljava/lang/Object;)Z", 0 },
	{ "equals", (intptr_t) M_rhino_ResolvedOverload_equals_java_lang_Object_R_boolean, VTABLE_rhino_ResolvedOverload_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_ResolvedOverload_hashCode_R_int, VTABLE_rhino_ResolvedOverload_hashCode_R_int, "()I", 1 },
};

Class class_rhino_ResolvedOverload{
		.nativeName = (intptr_t) "rhino/ResolvedOverload",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ResolvedOverload),
		.classVtable = (intptr_t) vtable_rhino_ResolvedOverload,
		.staticInitializer = (intptr_t) clinit_rhino_ResolvedOverload,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ResolvedOverload,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ResolvedOverload = registerClass(&class_rhino_ResolvedOverload);

}
