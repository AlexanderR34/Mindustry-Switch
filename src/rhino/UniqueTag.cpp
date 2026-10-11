#include "rhino/UniqueTag.h"
#include "java/lang/Object.h"
#include "rhino/Kit.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "rhino/UniqueTag.h"

extern "C" {

jint SF_rhino_UniqueTag_ID_NOT_FOUND;
jint SF_rhino_UniqueTag_ID_NULL_VALUE;
jint SF_rhino_UniqueTag_ID_DOUBLE_MARK;
jobject SF_rhino_UniqueTag_NOT_FOUND;
jobject SF_rhino_UniqueTag_NULL_VALUE;
jobject SF_rhino_UniqueTag_DOUBLE_MARK;

void mark_rhino_UniqueTag(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_UniqueTag_NOT_FOUND)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_UniqueTag_NOT_FOUND)->clazz)->markFunction)((jobject) SF_rhino_UniqueTag_NOT_FOUND, mark, depth + 1);
		if (SF_rhino_UniqueTag_NULL_VALUE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_UniqueTag_NULL_VALUE)->clazz)->markFunction)((jobject) SF_rhino_UniqueTag_NULL_VALUE, mark, depth + 1);
		if (SF_rhino_UniqueTag_DOUBLE_MARK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_UniqueTag_DOUBLE_MARK)->clazz)->markFunction)((jobject) SF_rhino_UniqueTag_DOUBLE_MARK, mark, depth + 1);
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
	auto self = (rhino_UniqueTag *) object;
}

void init_rhino_UniqueTag_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UniqueTag:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_UniqueTag(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((rhino_UniqueTag *) NULL_CHECK((frame[0].o)))->F_tagId = (frame[1].i);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_UniqueTag_readResolve_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UniqueTag:readResolve", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	switch(((jint)((rhino_UniqueTag *) NULL_CHECK((frame[0].o)))->F_tagId)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(40);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(42);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(44);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_DOUBLE_MARK;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(46);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((rhino_UniqueTag *) NULL_CHECK((frame[0].o)))->F_tagId));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_UniqueTag_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UniqueTag:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	switch(((jint)((rhino_UniqueTag *) NULL_CHECK((frame[0].o)))->F_tagId)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(55);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"NOT_FOUND"_j)));
	LINE_NUMBER(56);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(58);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"NULL_VALUE"_j)));
	LINE_NUMBER(59);
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(61);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"DOUBLE_MARK"_j)));
	LINE_NUMBER(62);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(66);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_UniqueTag(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_UniqueTag_ID_NOT_FOUND = jint(1);
	SF_rhino_UniqueTag_ID_NULL_VALUE = jint(2);
	SF_rhino_UniqueTag_ID_DOUBLE_MARK = jint(3);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/UniqueTag:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_UniqueTag(ctx);
	{
	LINE_NUMBER(16);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_UniqueTag);
	init_rhino_UniqueTag_int(ctx, sp[0].o, (jint(1)));
	clinit_rhino_UniqueTag(ctx);
	SF_rhino_UniqueTag_NOT_FOUND = sp[0].o;
	LINE_NUMBER(22);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_UniqueTag);
	init_rhino_UniqueTag_int(ctx, sp[0].o, (jint(2)));
	clinit_rhino_UniqueTag(ctx);
	SF_rhino_UniqueTag_NULL_VALUE = sp[0].o;
	LINE_NUMBER(29);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_UniqueTag);
	init_rhino_UniqueTag_int(ctx, sp[0].o, (jint(3)));
	clinit_rhino_UniqueTag(ctx);
	SF_rhino_UniqueTag_DOUBLE_MARK = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_UniqueTag[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_UniqueTag_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_UniqueTag_readResolve_R_java_lang_Object,
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
	{ "readResolve", "()Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "ID_NOT_FOUND", &class_int, (intptr_t) &SF_rhino_UniqueTag_ID_NOT_FOUND, "I", 26 },
	{ "ID_NULL_VALUE", &class_int, (intptr_t) &SF_rhino_UniqueTag_ID_NULL_VALUE, "I", 26 },
	{ "ID_DOUBLE_MARK", &class_int, (intptr_t) &SF_rhino_UniqueTag_ID_DOUBLE_MARK, "I", 26 },
	{ "NOT_FOUND", &class_rhino_UniqueTag, (intptr_t) &SF_rhino_UniqueTag_NOT_FOUND, "Lrhino/UniqueTag;", 25 },
	{ "NULL_VALUE", &class_rhino_UniqueTag, (intptr_t) &SF_rhino_UniqueTag_NULL_VALUE, "Lrhino/UniqueTag;", 25 },
	{ "DOUBLE_MARK", &class_rhino_UniqueTag, (intptr_t) &SF_rhino_UniqueTag_DOUBLE_MARK, "Lrhino/UniqueTag;", 25 },
	{ "tagId", &class_int, offsetof(rhino_UniqueTag, F_tagId), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_UniqueTag_int, 0, "(I)V", 2 },
	{ "readResolve", (intptr_t) M_rhino_UniqueTag_readResolve_R_java_lang_Object, VTABLE_rhino_UniqueTag_readResolve_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_rhino_UniqueTag_toString_R_java_lang_String, VTABLE_rhino_UniqueTag_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_UniqueTag, 0, "()V", 8 },
};

Class class_rhino_UniqueTag{
		.nativeName = (intptr_t) "rhino/UniqueTag",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_UniqueTag),
		.classVtable = (intptr_t) vtable_rhino_UniqueTag,
		.staticInitializer = (intptr_t) clinit_rhino_UniqueTag,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_UniqueTag,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_UniqueTag = registerClass(&class_rhino_UniqueTag);

}
