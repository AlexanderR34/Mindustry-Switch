#include "mindustry/logic/Senseable.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/logic/LAccess.h"

extern "C" {

jobject SF_mindustry_logic_Senseable_noSensed;

void mark_mindustry_logic_Senseable(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_Senseable_noSensed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_Senseable_noSensed)->clazz)->markFunction)((jobject) SF_mindustry_logic_Senseable_noSensed, mark, depth + 1);
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
	auto self = (mindustry_logic_Senseable *) object;
}

jdouble M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/Senseable:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return (jdouble(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/Senseable:senseObject", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	clinit_mindustry_logic_Senseable(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_Senseable_noSensed;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_Senseable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/Senseable:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_Senseable(ctx);
	{
	LINE_NUMBER(6);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_mindustry_logic_Senseable(ctx);
	SF_mindustry_logic_Senseable_noSensed = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_Senseable[] {
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
	(void *) nullptr,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
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
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "noSensed", &class_java_lang_Object, (intptr_t) &SF_mindustry_logic_Senseable_noSensed, "Ljava/lang/Object;", 25 },
};

static MethodMetadata methods[] {
	{ "sense", 0, INDEX_mindustry_logic_Senseable_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1025 },
	{ "sense", (intptr_t) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double, INDEX_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object, INDEX_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_Senseable, 0, "()V", 8 },
};

Class class_mindustry_logic_Senseable{
		.nativeName = (intptr_t) "mindustry/logic/Senseable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_Senseable),
		.classVtable = (intptr_t) vtable_mindustry_logic_Senseable,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_Senseable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_Senseable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_Senseable = registerClass(&class_mindustry_logic_Senseable);

}
