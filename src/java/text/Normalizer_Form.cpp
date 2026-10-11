#include "java/text/Normalizer_Form.h"
#include "java/text/Normalizer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/text/Normalizer_Form.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_java_text_Normalizer$Form_NFD;
jobject SF_java_text_Normalizer$Form_NFC;
jobject SF_java_text_Normalizer$Form_NFKD;
jobject SF_java_text_Normalizer$Form_NFKC;
jobject SF_java_text_Normalizer$Form_$VALUES;

void mark_java_text_Normalizer$Form(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_text_Normalizer$Form_NFD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_Normalizer$Form_NFD)->clazz)->markFunction)((jobject) SF_java_text_Normalizer$Form_NFD, mark, depth + 1);
		if (SF_java_text_Normalizer$Form_NFC)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_Normalizer$Form_NFC)->clazz)->markFunction)((jobject) SF_java_text_Normalizer$Form_NFC, mark, depth + 1);
		if (SF_java_text_Normalizer$Form_NFKD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_Normalizer$Form_NFKD)->clazz)->markFunction)((jobject) SF_java_text_Normalizer$Form_NFKD, mark, depth + 1);
		if (SF_java_text_Normalizer$Form_NFKC)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_Normalizer$Form_NFKC)->clazz)->markFunction)((jobject) SF_java_text_Normalizer$Form_NFKC, mark, depth + 1);
		if (SF_java_text_Normalizer$Form_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_Normalizer$Form_$VALUES)->clazz)->markFunction)((jobject) SF_java_text_Normalizer$Form_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_text_Normalizer$Form *) object;
}

jobject SM_java_text_Normalizer$Form_values_R_Array1_java_text_Normalizer$Form(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Normalizer$Form:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_Normalizer$Form(ctx);
	{
	LINE_NUMBER(35);
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = (jobject)SF_java_text_Normalizer$Form_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_text_Normalizer$Form, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_text_Normalizer$Form_valueOf_java_lang_String_R_java_text_Normalizer$Form(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Normalizer$Form:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_Normalizer$Form(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_text_Normalizer$Form)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_text_Normalizer$Form, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_text_Normalizer$Form_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Normalizer$Form:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_Normalizer$Form(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(35);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_text_Normalizer$Form_$values_R_Array1_java_text_Normalizer$Form(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Normalizer$Form:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_Normalizer$Form(ctx);
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)createArray(ctx, &class_java_text_Normalizer$Form, (jint(4)));
	jint temp0 = jint(0);
	clinit_java_text_Normalizer$Form(ctx);
	sp[1].o = (jobject)SF_java_text_Normalizer$Form_NFD;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_text_Normalizer$Form(ctx);
	sp[1].o = (jobject)SF_java_text_Normalizer$Form_NFC;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_text_Normalizer$Form(ctx);
	sp[1].o = (jobject)SF_java_text_Normalizer$Form_NFKD;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_java_text_Normalizer$Form(ctx);
	sp[1].o = (jobject)SF_java_text_Normalizer$Form_NFKC;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_text_Normalizer$Form(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Normalizer$Form:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_Normalizer$Form(ctx);
	{
	LINE_NUMBER(39);
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_Normalizer$Form);
	init_java_text_Normalizer$Form_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NFD"_j))), (jint(0)));
	clinit_java_text_Normalizer$Form(ctx);
	SF_java_text_Normalizer$Form_NFD = sp[0].o;
	LINE_NUMBER(44);
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_Normalizer$Form);
	init_java_text_Normalizer$Form_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NFC"_j))), (jint(1)));
	clinit_java_text_Normalizer$Form(ctx);
	SF_java_text_Normalizer$Form_NFC = sp[0].o;
	LINE_NUMBER(49);
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_Normalizer$Form);
	init_java_text_Normalizer$Form_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NFKD"_j))), (jint(2)));
	clinit_java_text_Normalizer$Form(ctx);
	SF_java_text_Normalizer$Form_NFKD = sp[0].o;
	LINE_NUMBER(54);
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_Normalizer$Form);
	init_java_text_Normalizer$Form_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NFKC"_j))), (jint(3)));
	clinit_java_text_Normalizer$Form(ctx);
	SF_java_text_Normalizer$Form_NFKC = sp[0].o;
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_java_text_Normalizer$Form_$values_R_Array1_java_text_Normalizer$Form(ctx);
	clinit_java_text_Normalizer$Form(ctx);
	SF_java_text_Normalizer$Form_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_text_Normalizer$Form[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "NFD", &class_java_text_Normalizer$Form, (intptr_t) &SF_java_text_Normalizer$Form_NFD, "Ljava/text/Normalizer$Form;", 16409 },
	{ "NFC", &class_java_text_Normalizer$Form, (intptr_t) &SF_java_text_Normalizer$Form_NFC, "Ljava/text/Normalizer$Form;", 16409 },
	{ "NFKD", &class_java_text_Normalizer$Form, (intptr_t) &SF_java_text_Normalizer$Form_NFKD, "Ljava/text/Normalizer$Form;", 16409 },
	{ "NFKC", &class_java_text_Normalizer$Form, (intptr_t) &SF_java_text_Normalizer$Form_NFKC, "Ljava/text/Normalizer$Form;", 16409 },
	{ "$VALUES", getArrayClass(&class_java_text_Normalizer$Form, 1), (intptr_t) &SF_java_text_Normalizer$Form_$VALUES, "[Ljava/text/Normalizer$Form;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_text_Normalizer$Form_values_R_Array1_java_text_Normalizer$Form, 0, "()[Ljava/text/Normalizer$Form;", 9 },
	{ "valueOf", (intptr_t) SM_java_text_Normalizer$Form_valueOf_java_lang_String_R_java_text_Normalizer$Form, 0, "(Ljava/lang/String;)Ljava/text/Normalizer$Form;", 9 },
	{ "<init>", (intptr_t) init_java_text_Normalizer$Form_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_java_text_Normalizer$Form_$values_R_Array1_java_text_Normalizer$Form, 0, "()[Ljava/text/Normalizer$Form;", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_text_Normalizer$Form, 0, "()V", 8 },
};

Class class_java_text_Normalizer$Form{
		.nativeName = (intptr_t) "java/text/Normalizer$Form",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_text_Normalizer$Form),
		.classVtable = (intptr_t) vtable_java_text_Normalizer$Form,
		.staticInitializer = (intptr_t) clinit_java_text_Normalizer$Form,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_Normalizer$Form,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_text_Normalizer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_Normalizer$Form = registerClass(&class_java_text_Normalizer$Form);

}

