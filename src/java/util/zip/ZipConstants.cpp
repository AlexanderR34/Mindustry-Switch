#include "java/util/zip/ZipConstants.h"
#include "java/lang/Object.h"

extern "C" {

jlong SF_java_util_zip_ZipConstants_LOCSIG;
jlong SF_java_util_zip_ZipConstants_EXTSIG;
jlong SF_java_util_zip_ZipConstants_CENSIG;
jlong SF_java_util_zip_ZipConstants_ENDSIG;
jint SF_java_util_zip_ZipConstants_LOCHDR;
jint SF_java_util_zip_ZipConstants_EXTHDR;
jint SF_java_util_zip_ZipConstants_CENHDR;
jint SF_java_util_zip_ZipConstants_ENDHDR;
jint SF_java_util_zip_ZipConstants_LOCVER;
jint SF_java_util_zip_ZipConstants_LOCFLG;
jint SF_java_util_zip_ZipConstants_LOCHOW;
jint SF_java_util_zip_ZipConstants_LOCTIM;
jint SF_java_util_zip_ZipConstants_LOCCRC;
jint SF_java_util_zip_ZipConstants_LOCSIZ;
jint SF_java_util_zip_ZipConstants_LOCLEN;
jint SF_java_util_zip_ZipConstants_LOCNAM;
jint SF_java_util_zip_ZipConstants_LOCEXT;
jint SF_java_util_zip_ZipConstants_EXTCRC;
jint SF_java_util_zip_ZipConstants_EXTSIZ;
jint SF_java_util_zip_ZipConstants_EXTLEN;
jint SF_java_util_zip_ZipConstants_CENVEM;
jint SF_java_util_zip_ZipConstants_CENVER;
jint SF_java_util_zip_ZipConstants_CENFLG;
jint SF_java_util_zip_ZipConstants_CENHOW;
jint SF_java_util_zip_ZipConstants_CENTIM;
jint SF_java_util_zip_ZipConstants_CENCRC;
jint SF_java_util_zip_ZipConstants_CENSIZ;
jint SF_java_util_zip_ZipConstants_CENLEN;
jint SF_java_util_zip_ZipConstants_CENNAM;
jint SF_java_util_zip_ZipConstants_CENEXT;
jint SF_java_util_zip_ZipConstants_CENCOM;
jint SF_java_util_zip_ZipConstants_CENDSK;
jint SF_java_util_zip_ZipConstants_CENATT;
jint SF_java_util_zip_ZipConstants_CENATX;
jint SF_java_util_zip_ZipConstants_CENOFF;
jint SF_java_util_zip_ZipConstants_ENDSUB;
jint SF_java_util_zip_ZipConstants_ENDTOT;
jint SF_java_util_zip_ZipConstants_ENDSIZ;
jint SF_java_util_zip_ZipConstants_ENDOFF;
jint SF_java_util_zip_ZipConstants_ENDCOM;

void mark_java_util_zip_ZipConstants(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_ZipConstants *) object;
}

void clinit_java_util_zip_ZipConstants(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_zip_ZipConstants_LOCSIG = jlong(67324752ll);
	SF_java_util_zip_ZipConstants_EXTSIG = jlong(134695760ll);
	SF_java_util_zip_ZipConstants_CENSIG = jlong(33639248ll);
	SF_java_util_zip_ZipConstants_ENDSIG = jlong(101010256ll);
	SF_java_util_zip_ZipConstants_LOCHDR = jint(30);
	SF_java_util_zip_ZipConstants_EXTHDR = jint(16);
	SF_java_util_zip_ZipConstants_CENHDR = jint(46);
	SF_java_util_zip_ZipConstants_ENDHDR = jint(22);
	SF_java_util_zip_ZipConstants_LOCVER = jint(4);
	SF_java_util_zip_ZipConstants_LOCFLG = jint(6);
	SF_java_util_zip_ZipConstants_LOCHOW = jint(8);
	SF_java_util_zip_ZipConstants_LOCTIM = jint(10);
	SF_java_util_zip_ZipConstants_LOCCRC = jint(14);
	SF_java_util_zip_ZipConstants_LOCSIZ = jint(18);
	SF_java_util_zip_ZipConstants_LOCLEN = jint(22);
	SF_java_util_zip_ZipConstants_LOCNAM = jint(26);
	SF_java_util_zip_ZipConstants_LOCEXT = jint(28);
	SF_java_util_zip_ZipConstants_EXTCRC = jint(4);
	SF_java_util_zip_ZipConstants_EXTSIZ = jint(8);
	SF_java_util_zip_ZipConstants_EXTLEN = jint(12);
	SF_java_util_zip_ZipConstants_CENVEM = jint(4);
	SF_java_util_zip_ZipConstants_CENVER = jint(6);
	SF_java_util_zip_ZipConstants_CENFLG = jint(8);
	SF_java_util_zip_ZipConstants_CENHOW = jint(10);
	SF_java_util_zip_ZipConstants_CENTIM = jint(12);
	SF_java_util_zip_ZipConstants_CENCRC = jint(16);
	SF_java_util_zip_ZipConstants_CENSIZ = jint(20);
	SF_java_util_zip_ZipConstants_CENLEN = jint(24);
	SF_java_util_zip_ZipConstants_CENNAM = jint(28);
	SF_java_util_zip_ZipConstants_CENEXT = jint(30);
	SF_java_util_zip_ZipConstants_CENCOM = jint(32);
	SF_java_util_zip_ZipConstants_CENDSK = jint(34);
	SF_java_util_zip_ZipConstants_CENATT = jint(36);
	SF_java_util_zip_ZipConstants_CENATX = jint(38);
	SF_java_util_zip_ZipConstants_CENOFF = jint(42);
	SF_java_util_zip_ZipConstants_ENDSUB = jint(8);
	SF_java_util_zip_ZipConstants_ENDTOT = jint(10);
	SF_java_util_zip_ZipConstants_ENDSIZ = jint(12);
	SF_java_util_zip_ZipConstants_ENDOFF = jint(16);
	SF_java_util_zip_ZipConstants_ENDCOM = jint(20);
}

void *vtable_java_util_zip_ZipConstants[] {
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
	{ "LOCSIG", &class_long, (intptr_t) &SF_java_util_zip_ZipConstants_LOCSIG, "J", 25 },
	{ "EXTSIG", &class_long, (intptr_t) &SF_java_util_zip_ZipConstants_EXTSIG, "J", 25 },
	{ "CENSIG", &class_long, (intptr_t) &SF_java_util_zip_ZipConstants_CENSIG, "J", 25 },
	{ "ENDSIG", &class_long, (intptr_t) &SF_java_util_zip_ZipConstants_ENDSIG, "J", 25 },
	{ "LOCHDR", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_LOCHDR, "I", 25 },
	{ "EXTHDR", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_EXTHDR, "I", 25 },
	{ "CENHDR", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENHDR, "I", 25 },
	{ "ENDHDR", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_ENDHDR, "I", 25 },
	{ "LOCVER", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_LOCVER, "I", 25 },
	{ "LOCFLG", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_LOCFLG, "I", 25 },
	{ "LOCHOW", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_LOCHOW, "I", 25 },
	{ "LOCTIM", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_LOCTIM, "I", 25 },
	{ "LOCCRC", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_LOCCRC, "I", 25 },
	{ "LOCSIZ", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_LOCSIZ, "I", 25 },
	{ "LOCLEN", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_LOCLEN, "I", 25 },
	{ "LOCNAM", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_LOCNAM, "I", 25 },
	{ "LOCEXT", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_LOCEXT, "I", 25 },
	{ "EXTCRC", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_EXTCRC, "I", 25 },
	{ "EXTSIZ", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_EXTSIZ, "I", 25 },
	{ "EXTLEN", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_EXTLEN, "I", 25 },
	{ "CENVEM", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENVEM, "I", 25 },
	{ "CENVER", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENVER, "I", 25 },
	{ "CENFLG", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENFLG, "I", 25 },
	{ "CENHOW", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENHOW, "I", 25 },
	{ "CENTIM", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENTIM, "I", 25 },
	{ "CENCRC", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENCRC, "I", 25 },
	{ "CENSIZ", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENSIZ, "I", 25 },
	{ "CENLEN", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENLEN, "I", 25 },
	{ "CENNAM", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENNAM, "I", 25 },
	{ "CENEXT", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENEXT, "I", 25 },
	{ "CENCOM", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENCOM, "I", 25 },
	{ "CENDSK", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENDSK, "I", 25 },
	{ "CENATT", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENATT, "I", 25 },
	{ "CENATX", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENATX, "I", 25 },
	{ "CENOFF", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_CENOFF, "I", 25 },
	{ "ENDSUB", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_ENDSUB, "I", 25 },
	{ "ENDTOT", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_ENDTOT, "I", 25 },
	{ "ENDSIZ", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_ENDSIZ, "I", 25 },
	{ "ENDOFF", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_ENDOFF, "I", 25 },
	{ "ENDCOM", &class_int, (intptr_t) &SF_java_util_zip_ZipConstants_ENDCOM, "I", 25 },
};

Class class_java_util_zip_ZipConstants{
		.nativeName = (intptr_t) "java/util/zip/ZipConstants",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_zip_ZipConstants),
		.classVtable = (intptr_t) vtable_java_util_zip_ZipConstants,
		.staticInitializer = (intptr_t) clinit_java_util_zip_ZipConstants,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_ZipConstants,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1536,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 40,
		.nativeFields = (intptr_t) fields,
		.methodCount = 0,
		.nativeMethods = (intptr_t) nullptr,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_ZipConstants = registerClass(&class_java_util_zip_ZipConstants);

}
