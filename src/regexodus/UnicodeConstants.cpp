#include "regexodus/UnicodeConstants.h"
#include "java/lang/Object.h"

extern "C" {

jint SF_regexodus_UnicodeConstants_CATEGORY_COUNT;
jint SF_regexodus_UnicodeConstants_Cc;
jint SF_regexodus_UnicodeConstants_Cf;
jint SF_regexodus_UnicodeConstants_Co;
jint SF_regexodus_UnicodeConstants_Cn;
jint SF_regexodus_UnicodeConstants_Lu;
jint SF_regexodus_UnicodeConstants_Ll;
jint SF_regexodus_UnicodeConstants_Lt;
jint SF_regexodus_UnicodeConstants_Lm;
jint SF_regexodus_UnicodeConstants_Lo;
jint SF_regexodus_UnicodeConstants_Mn;
jint SF_regexodus_UnicodeConstants_Me;
jint SF_regexodus_UnicodeConstants_Mc;
jint SF_regexodus_UnicodeConstants_Nd;
jint SF_regexodus_UnicodeConstants_Nl;
jint SF_regexodus_UnicodeConstants_No;
jint SF_regexodus_UnicodeConstants_Zs;
jint SF_regexodus_UnicodeConstants_Zl;
jint SF_regexodus_UnicodeConstants_Zp;
jint SF_regexodus_UnicodeConstants_Cs;
jint SF_regexodus_UnicodeConstants_Pd;
jint SF_regexodus_UnicodeConstants_Ps;
jint SF_regexodus_UnicodeConstants_Pi;
jint SF_regexodus_UnicodeConstants_Pe;
jint SF_regexodus_UnicodeConstants_Pf;
jint SF_regexodus_UnicodeConstants_Pc;
jint SF_regexodus_UnicodeConstants_Po;
jint SF_regexodus_UnicodeConstants_Sm;
jint SF_regexodus_UnicodeConstants_Sc;
jint SF_regexodus_UnicodeConstants_Sk;
jint SF_regexodus_UnicodeConstants_So;
jint SF_regexodus_UnicodeConstants_BLOCK_COUNT;
jint SF_regexodus_UnicodeConstants_BLOCK_SIZE;
jint SF_regexodus_UnicodeConstants_MAX_WEIGHT;

void mark_regexodus_UnicodeConstants(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_UnicodeConstants *) object;
}

void clinit_regexodus_UnicodeConstants(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_UnicodeConstants_CATEGORY_COUNT = jint(32);
	SF_regexodus_UnicodeConstants_Cc = jint(15);
	SF_regexodus_UnicodeConstants_Cf = jint(16);
	SF_regexodus_UnicodeConstants_Co = jint(18);
	SF_regexodus_UnicodeConstants_Cn = jint(0);
	SF_regexodus_UnicodeConstants_Lu = jint(1);
	SF_regexodus_UnicodeConstants_Ll = jint(2);
	SF_regexodus_UnicodeConstants_Lt = jint(3);
	SF_regexodus_UnicodeConstants_Lm = jint(4);
	SF_regexodus_UnicodeConstants_Lo = jint(5);
	SF_regexodus_UnicodeConstants_Mn = jint(6);
	SF_regexodus_UnicodeConstants_Me = jint(7);
	SF_regexodus_UnicodeConstants_Mc = jint(8);
	SF_regexodus_UnicodeConstants_Nd = jint(9);
	SF_regexodus_UnicodeConstants_Nl = jint(10);
	SF_regexodus_UnicodeConstants_No = jint(11);
	SF_regexodus_UnicodeConstants_Zs = jint(12);
	SF_regexodus_UnicodeConstants_Zl = jint(13);
	SF_regexodus_UnicodeConstants_Zp = jint(14);
	SF_regexodus_UnicodeConstants_Cs = jint(19);
	SF_regexodus_UnicodeConstants_Pd = jint(20);
	SF_regexodus_UnicodeConstants_Ps = jint(21);
	SF_regexodus_UnicodeConstants_Pi = jint(29);
	SF_regexodus_UnicodeConstants_Pe = jint(22);
	SF_regexodus_UnicodeConstants_Pf = jint(30);
	SF_regexodus_UnicodeConstants_Pc = jint(23);
	SF_regexodus_UnicodeConstants_Po = jint(24);
	SF_regexodus_UnicodeConstants_Sm = jint(25);
	SF_regexodus_UnicodeConstants_Sc = jint(26);
	SF_regexodus_UnicodeConstants_Sk = jint(27);
	SF_regexodus_UnicodeConstants_So = jint(28);
	SF_regexodus_UnicodeConstants_BLOCK_COUNT = jint(256);
	SF_regexodus_UnicodeConstants_BLOCK_SIZE = jint(256);
	SF_regexodus_UnicodeConstants_MAX_WEIGHT = jint(65536);
}

void *vtable_regexodus_UnicodeConstants[] {
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
	{ "CATEGORY_COUNT", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_CATEGORY_COUNT, "I", 25 },
	{ "Cc", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Cc, "I", 25 },
	{ "Cf", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Cf, "I", 25 },
	{ "Co", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Co, "I", 25 },
	{ "Cn", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Cn, "I", 25 },
	{ "Lu", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Lu, "I", 25 },
	{ "Ll", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Ll, "I", 25 },
	{ "Lt", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Lt, "I", 25 },
	{ "Lm", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Lm, "I", 25 },
	{ "Lo", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Lo, "I", 25 },
	{ "Mn", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Mn, "I", 25 },
	{ "Me", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Me, "I", 25 },
	{ "Mc", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Mc, "I", 25 },
	{ "Nd", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Nd, "I", 25 },
	{ "Nl", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Nl, "I", 25 },
	{ "No", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_No, "I", 25 },
	{ "Zs", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Zs, "I", 25 },
	{ "Zl", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Zl, "I", 25 },
	{ "Zp", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Zp, "I", 25 },
	{ "Cs", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Cs, "I", 25 },
	{ "Pd", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Pd, "I", 25 },
	{ "Ps", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Ps, "I", 25 },
	{ "Pi", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Pi, "I", 25 },
	{ "Pe", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Pe, "I", 25 },
	{ "Pf", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Pf, "I", 25 },
	{ "Pc", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Pc, "I", 25 },
	{ "Po", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Po, "I", 25 },
	{ "Sm", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Sm, "I", 25 },
	{ "Sc", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Sc, "I", 25 },
	{ "Sk", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_Sk, "I", 25 },
	{ "So", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_So, "I", 25 },
	{ "BLOCK_COUNT", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_BLOCK_COUNT, "I", 25 },
	{ "BLOCK_SIZE", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_BLOCK_SIZE, "I", 25 },
	{ "MAX_WEIGHT", &class_int, (intptr_t) &SF_regexodus_UnicodeConstants_MAX_WEIGHT, "I", 25 },
};

Class class_regexodus_UnicodeConstants{
		.nativeName = (intptr_t) "regexodus/UnicodeConstants",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_UnicodeConstants),
		.classVtable = (intptr_t) vtable_regexodus_UnicodeConstants,
		.staticInitializer = (intptr_t) clinit_regexodus_UnicodeConstants,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_UnicodeConstants,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 34,
		.nativeFields = (intptr_t) fields,
		.methodCount = 0,
		.nativeMethods = (intptr_t) nullptr,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_UnicodeConstants = registerClass(&class_regexodus_UnicodeConstants);

}
