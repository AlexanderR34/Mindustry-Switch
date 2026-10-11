#include "regexodus/Group.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "regexodus/Group.h"
#include "regexodus/Term.h"

extern "C" {

jlong SF_regexodus_Group_serialVersionUID;

void mark_regexodus_Group(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Group *) object;
}

void clinit_regexodus_Group(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_regexodus_Term(ctx);
	SF_regexodus_Group_serialVersionUID = jlong(2528136757932720807ll);
}

void init_regexodus_Group(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Group:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Group(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2073);
	init_regexodus_Group_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(2074);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Group_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Group:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Group(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2076);
	init_regexodus_Term(ctx, (frame[0].o));
	LINE_NUMBER(2077);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (15);
	LINE_NUMBER(2078);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg = (frame[1].i);
	LINE_NUMBER(2081);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current = (jref) (jobject(nullptr));
	LINE_NUMBER(2082);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in = (jref) (frame[0].o);
	LINE_NUMBER(2083);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_prev = (jref) (jobject(nullptr));
	LINE_NUMBER(2085);
	sp[0].o = frame[0].o;
	clinit_regexodus_Term(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term(ctx, sp[1].o);
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_out = (jref) sp[1].o;
	LINE_NUMBER(2086);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = (16);
	LINE_NUMBER(2087);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_memreg = (frame[1].i);
	LINE_NUMBER(2088);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Group[] {
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
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_Group_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Group, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_regexodus_Group_int, 0, "(I)V", 0 },
};

Class class_regexodus_Group{
		.nativeName = (intptr_t) "regexodus/Group",
		.parentClass = (intptr_t) &class_regexodus_Term,
		.size = sizeof(regexodus_Group),
		.classVtable = (intptr_t) vtable_regexodus_Group,
		.staticInitializer = (intptr_t) clinit_regexodus_Group,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Group,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Group = registerClass(&class_regexodus_Group);

}
