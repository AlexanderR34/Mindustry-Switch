#include "regexodus/BackReference.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "regexodus/Term.h"
#include "regexodus/BackReference.h"

extern "C" {

jlong SF_regexodus_BackReference_serialVersionUID;

void mark_regexodus_BackReference(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_regexodus_Term(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (regexodus_BackReference *) object;
}

void clinit_regexodus_BackReference(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_regexodus_Term(ctx);
	SF_regexodus_BackReference_serialVersionUID = jlong(2528136757932720807ll);
}

void init_regexodus_BackReference_int_boolean_boolean_boolean_boolean(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/BackReference:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_BackReference(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(2060);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_1;
	}
	INST_BIPUSH(7);
	goto label_2;
label_1:;
	INST_BIPUSH(6);
label_2:;
	{
	sp -= 2;
	init_regexodus_Term_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(2061);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_mode_reverse = (frame[3].i);
	LINE_NUMBER(2062);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_mode_bracket = (frame[4].i);
	LINE_NUMBER(2063);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_mode_insensitive = (frame[2].i);
	LINE_NUMBER(2064);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_mode_insensitive) != 0) goto label_7;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_7;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_mode_upper = sp[1].i;
	LINE_NUMBER(2065);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg = (frame[1].i);
	LINE_NUMBER(2066);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_BackReference[] {
	(void *) M_regexodus_Term_hashCode_R_int,
	(void *) M_regexodus_Term_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_Term_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap,
	(void *) M_regexodus_Term_append_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Term_newBranch,
	(void *) M_regexodus_Term_close,
	(void *) M_regexodus_Term_startNewBranch,
	(void *) M_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int,
	(void *) M_regexodus_Term_toStringAll_R_java_lang_String,
	(void *) M_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String,
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
	{ "append", "(II[C[I[ILjava/util/ArrayList;Ljava/util/HashMap;)V" },
	{ "append", "(Lregexodus/Term;)Lregexodus/Term;" },
	{ "replaceCurrent", "(Lregexodus/Term;)Lregexodus/Term;" },
	{ "newBranch", "()V" },
	{ "close", "()V" },
	{ "startNewBranch", "()V" },
	{ "parseTerm", "([CIILregexodus/Term;I)I" },
	{ "toStringAll", "()Ljava/lang/String;" },
	{ "toStringAll", "(Ljava/util/ArrayList;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_BackReference_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_BackReference_int_boolean_boolean_boolean_boolean, 0, "(IZZZZ)V", 0 },
};

Class class_regexodus_BackReference{
		.nativeName = (intptr_t) "regexodus/BackReference",
		.parentClass = (intptr_t) &class_regexodus_Term,
		.size = sizeof(regexodus_BackReference),
		.classVtable = (intptr_t) vtable_regexodus_BackReference,
		.staticInitializer = (intptr_t) clinit_regexodus_BackReference,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_BackReference,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_BackReference = registerClass(&class_regexodus_BackReference);

}
