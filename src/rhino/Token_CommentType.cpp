#include "rhino/Token_CommentType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/Token.h"
#include "java/lang/Enum.h"
#include "rhino/Token_CommentType.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_rhino_Token$CommentType_LINE;
jobject SF_rhino_Token$CommentType_BLOCK_COMMENT;
jobject SF_rhino_Token$CommentType_JSDOC;
jobject SF_rhino_Token$CommentType_HTML;
jobject SF_rhino_Token$CommentType_$VALUES;

void mark_rhino_Token$CommentType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_Token$CommentType_LINE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Token$CommentType_LINE)->clazz)->markFunction)((jobject) SF_rhino_Token$CommentType_LINE, mark, depth + 1);
		if (SF_rhino_Token$CommentType_BLOCK_COMMENT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Token$CommentType_BLOCK_COMMENT)->clazz)->markFunction)((jobject) SF_rhino_Token$CommentType_BLOCK_COMMENT, mark, depth + 1);
		if (SF_rhino_Token$CommentType_JSDOC)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Token$CommentType_JSDOC)->clazz)->markFunction)((jobject) SF_rhino_Token$CommentType_JSDOC, mark, depth + 1);
		if (SF_rhino_Token$CommentType_HTML)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Token$CommentType_HTML)->clazz)->markFunction)((jobject) SF_rhino_Token$CommentType_HTML, mark, depth + 1);
		if (SF_rhino_Token$CommentType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Token$CommentType_$VALUES)->clazz)->markFunction)((jobject) SF_rhino_Token$CommentType_$VALUES, mark, depth + 1);
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
	auto self = (rhino_Token$CommentType *) object;
}

jobject SM_rhino_Token$CommentType_values_R_Array1_rhino_Token$CommentType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Token$CommentType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Token$CommentType(ctx);
	{
	LINE_NUMBER(14);
	clinit_rhino_Token$CommentType(ctx);
	sp[0].o = (jobject)SF_rhino_Token$CommentType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_rhino_Token$CommentType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Token$CommentType_valueOf_java_lang_String_R_rhino_Token$CommentType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Token$CommentType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Token$CommentType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_rhino_Token$CommentType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Token$CommentType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_rhino_Token$CommentType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Token$CommentType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Token$CommentType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(14);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_rhino_Token$CommentType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Token$CommentType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Token$CommentType(ctx);
	{
	LINE_NUMBER(15);
	clinit_rhino_Token$CommentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Token$CommentType);
	init_rhino_Token$CommentType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LINE"_j))), (jint(0)));
	clinit_rhino_Token$CommentType(ctx);
	SF_rhino_Token$CommentType_LINE = sp[0].o;
	clinit_rhino_Token$CommentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Token$CommentType);
	init_rhino_Token$CommentType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BLOCK_COMMENT"_j))), (jint(1)));
	clinit_rhino_Token$CommentType(ctx);
	SF_rhino_Token$CommentType_BLOCK_COMMENT = sp[0].o;
	clinit_rhino_Token$CommentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Token$CommentType);
	init_rhino_Token$CommentType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"JSDOC"_j))), (jint(2)));
	clinit_rhino_Token$CommentType(ctx);
	SF_rhino_Token$CommentType_JSDOC = sp[0].o;
	clinit_rhino_Token$CommentType(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Token$CommentType);
	init_rhino_Token$CommentType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HTML"_j))), (jint(3)));
	clinit_rhino_Token$CommentType(ctx);
	SF_rhino_Token$CommentType_HTML = sp[0].o;
	LINE_NUMBER(14);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_Token$CommentType, (jint(4)));
	jint temp0 = jint(0);
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_LINE;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_BLOCK_COMMENT;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_JSDOC;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_HTML;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	clinit_rhino_Token$CommentType(ctx);
	SF_rhino_Token$CommentType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Token$CommentType[] {
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
	{ "LINE", &class_rhino_Token$CommentType, (intptr_t) &SF_rhino_Token$CommentType_LINE, "Lrhino/Token$CommentType;", 16409 },
	{ "BLOCK_COMMENT", &class_rhino_Token$CommentType, (intptr_t) &SF_rhino_Token$CommentType_BLOCK_COMMENT, "Lrhino/Token$CommentType;", 16409 },
	{ "JSDOC", &class_rhino_Token$CommentType, (intptr_t) &SF_rhino_Token$CommentType_JSDOC, "Lrhino/Token$CommentType;", 16409 },
	{ "HTML", &class_rhino_Token$CommentType, (intptr_t) &SF_rhino_Token$CommentType_HTML, "Lrhino/Token$CommentType;", 16409 },
	{ "$VALUES", getArrayClass(&class_rhino_Token$CommentType, 1), (intptr_t) &SF_rhino_Token$CommentType_$VALUES, "[Lrhino/Token$CommentType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_rhino_Token$CommentType_values_R_Array1_rhino_Token$CommentType, 0, "()[Lrhino/Token$CommentType;", 9 },
	{ "valueOf", (intptr_t) SM_rhino_Token$CommentType_valueOf_java_lang_String_R_rhino_Token$CommentType, 0, "(Ljava/lang/String;)Lrhino/Token$CommentType;", 9 },
	{ "<init>", (intptr_t) init_rhino_Token$CommentType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_Token$CommentType, 0, "()V", 8 },
};

Class class_rhino_Token$CommentType{
		.nativeName = (intptr_t) "rhino/Token$CommentType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(rhino_Token$CommentType),
		.classVtable = (intptr_t) vtable_rhino_Token$CommentType,
		.staticInitializer = (intptr_t) clinit_rhino_Token$CommentType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Token$CommentType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Token,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Token$CommentType = registerClass(&class_rhino_Token$CommentType);

}

