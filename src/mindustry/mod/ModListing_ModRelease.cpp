#include "mindustry/mod/ModListing_ModRelease.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/mod/ModListing_ModRelease.h"
#include "mindustry/mod/ModListing.h"

extern "C" {


void mark_mindustry_mod_ModListing$ModRelease(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_ModListing$ModRelease *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_version)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_version)->clazz)->markFunction)((jobject) self->F_version, mark, depth + 1);
}

void clinit_mindustry_mod_ModListing$ModRelease(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_ModListing$ModRelease(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModListing$ModRelease:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ModListing$ModRelease(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((mindustry_mod_ModListing$ModRelease *) NULL_CHECK((frame[0].o)))->F_id = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(47);
	((mindustry_mod_ModListing$ModRelease *) NULL_CHECK((frame[0].o)))->F_version = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ModListing$ModRelease_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModListing$ModRelease:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_mod_ModListing$ModRelease *) NULL_CHECK((frame[0].o)))->F_id;
	sp[1].o = (jobject)((mindustry_mod_ModListing$ModRelease *) NULL_CHECK((frame[0].o)))->F_version;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"ModRelease{id='\u0001', version='\u0001'}"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_ModListing$ModRelease[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_mod_ModListing$ModRelease_toString_R_java_lang_String,
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
	{ "id", &class_java_lang_String, offsetof(mindustry_mod_ModListing$ModRelease, F_id), "Ljava/lang/String;", 1 },
	{ "version", &class_java_lang_String, offsetof(mindustry_mod_ModListing$ModRelease, F_version), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_ModListing$ModRelease, 0, "()V", 1 },
	{ "toString", (intptr_t) M_mindustry_mod_ModListing$ModRelease_toString_R_java_lang_String, VTABLE_mindustry_mod_ModListing$ModRelease_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_mod_ModListing$ModRelease{
		.nativeName = (intptr_t) "mindustry/mod/ModListing$ModRelease",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_ModListing$ModRelease),
		.classVtable = (intptr_t) vtable_mindustry_mod_ModListing$ModRelease,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ModListing$ModRelease,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_ModListing$ModRelease,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_mod_ModListing,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_ModListing$ModRelease = registerClass(&class_mindustry_mod_ModListing$ModRelease);

}

