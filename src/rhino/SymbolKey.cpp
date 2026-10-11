#include "rhino/SymbolKey.h"
#include "java/lang/Object.h"
#include "rhino/Symbol.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "rhino/NativeSymbol.h"
#include "rhino/SymbolKey.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_rhino_SymbolKey_ITERATOR;
jobject SF_rhino_SymbolKey_TO_STRING_TAG;
jobject SF_rhino_SymbolKey_SPECIES;
jobject SF_rhino_SymbolKey_HAS_INSTANCE;
jobject SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE;
jobject SF_rhino_SymbolKey_IS_REGEXP;
jobject SF_rhino_SymbolKey_TO_PRIMITIVE;
jobject SF_rhino_SymbolKey_MATCH;
jobject SF_rhino_SymbolKey_REPLACE;
jobject SF_rhino_SymbolKey_SEARCH;
jobject SF_rhino_SymbolKey_SPLIT;
jobject SF_rhino_SymbolKey_UNSCOPABLES;

void mark_rhino_SymbolKey(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_SymbolKey_ITERATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_ITERATOR)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_ITERATOR, mark, depth + 1);
		if (SF_rhino_SymbolKey_TO_STRING_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_TO_STRING_TAG)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_TO_STRING_TAG, mark, depth + 1);
		if (SF_rhino_SymbolKey_SPECIES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_SPECIES)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_SPECIES, mark, depth + 1);
		if (SF_rhino_SymbolKey_HAS_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_HAS_INSTANCE)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_HAS_INSTANCE, mark, depth + 1);
		if (SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE, mark, depth + 1);
		if (SF_rhino_SymbolKey_IS_REGEXP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_IS_REGEXP)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_IS_REGEXP, mark, depth + 1);
		if (SF_rhino_SymbolKey_TO_PRIMITIVE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_TO_PRIMITIVE)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_TO_PRIMITIVE, mark, depth + 1);
		if (SF_rhino_SymbolKey_MATCH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_MATCH)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_MATCH, mark, depth + 1);
		if (SF_rhino_SymbolKey_REPLACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_REPLACE)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_REPLACE, mark, depth + 1);
		if (SF_rhino_SymbolKey_SEARCH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_SEARCH)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_SEARCH, mark, depth + 1);
		if (SF_rhino_SymbolKey_SPLIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_SPLIT)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_SPLIT, mark, depth + 1);
		if (SF_rhino_SymbolKey_UNSCOPABLES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_SymbolKey_UNSCOPABLES)->clazz)->markFunction)((jobject) SF_rhino_SymbolKey_UNSCOPABLES, mark, depth + 1);
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
	auto self = (rhino_SymbolKey *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void init_rhino_SymbolKey_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SymbolKey:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_SymbolKey(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((rhino_SymbolKey *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_SymbolKey_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SymbolKey:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((rhino_SymbolKey *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_SymbolKey_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SymbolKey:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)SM_java_lang_System_identityHashCode_java_lang_Object_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_SymbolKey_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SymbolKey:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_SymbolKey)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(45);
	if ((frame[1].o) != (frame[0].o)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(47);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeSymbol)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_rhino_NativeSymbol_getKey_R_rhino_SymbolKey) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[1].o))))->vtable)[VTABLE_rhino_NativeSymbol_getKey_R_rhino_SymbolKey])(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[1].o))));
	if (sp[0].o != (frame[0].o)) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_SymbolKey_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SymbolKey:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((rhino_SymbolKey *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Symbol()"_j)));
	}
label_1:;
	{
	LINE_NUMBER(58);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol("_j))));
	sp[1].o = (jobject)((rhino_SymbolKey *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (41));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_SymbolKey(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/SymbolKey:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_SymbolKey(ctx);
	{
	LINE_NUMBER(14);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.iterator"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_ITERATOR = sp[0].o;
	LINE_NUMBER(15);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.toStringTag"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_TO_STRING_TAG = sp[0].o;
	LINE_NUMBER(16);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.species"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_SPECIES = sp[0].o;
	LINE_NUMBER(17);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.hasInstance"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_HAS_INSTANCE = sp[0].o;
	LINE_NUMBER(18);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.isConcatSpreadable"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE = sp[0].o;
	LINE_NUMBER(19);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.isRegExp"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_IS_REGEXP = sp[0].o;
	LINE_NUMBER(20);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.toPrimitive"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_TO_PRIMITIVE = sp[0].o;
	LINE_NUMBER(21);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.match"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_MATCH = sp[0].o;
	LINE_NUMBER(22);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.replace"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_REPLACE = sp[0].o;
	LINE_NUMBER(23);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.search"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_SEARCH = sp[0].o;
	LINE_NUMBER(24);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.split"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_SPLIT = sp[0].o;
	LINE_NUMBER(25);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_SymbolKey);
	init_rhino_SymbolKey_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol.unscopables"_j))));
	clinit_rhino_SymbolKey(ctx);
	SF_rhino_SymbolKey_UNSCOPABLES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_SymbolKey[] {
	(void *) M_rhino_SymbolKey_hashCode_R_int,
	(void *) M_rhino_SymbolKey_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_SymbolKey_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_SymbolKey_getName_R_java_lang_String,
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
	{ "getName", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_rhino_Symbol, };

static FieldMetadata fields[] {
	{ "ITERATOR", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_ITERATOR, "Lrhino/SymbolKey;", 25 },
	{ "TO_STRING_TAG", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_TO_STRING_TAG, "Lrhino/SymbolKey;", 25 },
	{ "SPECIES", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_SPECIES, "Lrhino/SymbolKey;", 25 },
	{ "HAS_INSTANCE", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_HAS_INSTANCE, "Lrhino/SymbolKey;", 25 },
	{ "IS_CONCAT_SPREADABLE", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE, "Lrhino/SymbolKey;", 25 },
	{ "IS_REGEXP", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_IS_REGEXP, "Lrhino/SymbolKey;", 25 },
	{ "TO_PRIMITIVE", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_TO_PRIMITIVE, "Lrhino/SymbolKey;", 25 },
	{ "MATCH", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_MATCH, "Lrhino/SymbolKey;", 25 },
	{ "REPLACE", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_REPLACE, "Lrhino/SymbolKey;", 25 },
	{ "SEARCH", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_SEARCH, "Lrhino/SymbolKey;", 25 },
	{ "SPLIT", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_SPLIT, "Lrhino/SymbolKey;", 25 },
	{ "UNSCOPABLES", &class_rhino_SymbolKey, (intptr_t) &SF_rhino_SymbolKey_UNSCOPABLES, "Lrhino/SymbolKey;", 25 },
	{ "name", &class_java_lang_String, offsetof(rhino_SymbolKey, F_name), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_SymbolKey_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "getName", (intptr_t) M_rhino_SymbolKey_getName_R_java_lang_String, VTABLE_rhino_SymbolKey_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_rhino_SymbolKey_hashCode_R_int, VTABLE_rhino_SymbolKey_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_rhino_SymbolKey_equals_java_lang_Object_R_boolean, VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_rhino_SymbolKey_toString_R_java_lang_String, VTABLE_rhino_SymbolKey_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_SymbolKey, 0, "()V", 8 },
};

Class class_rhino_SymbolKey{
		.nativeName = (intptr_t) "rhino/SymbolKey",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_SymbolKey),
		.classVtable = (intptr_t) vtable_rhino_SymbolKey,
		.staticInitializer = (intptr_t) clinit_rhino_SymbolKey,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_SymbolKey,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_SymbolKey = registerClass(&class_rhino_SymbolKey);

}
