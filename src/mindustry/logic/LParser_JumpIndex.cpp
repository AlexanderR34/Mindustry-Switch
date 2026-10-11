#include "mindustry/logic/LParser_JumpIndex.h"
#include "mindustry/logic/LStatements_JumpStatement.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LParser.h"
#include "mindustry/logic/LParser_JumpIndex.h"

extern "C" {


void mark_mindustry_logic_LParser$JumpIndex(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LParser$JumpIndex *) object;
	if (self->F_jump)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_jump)->clazz)->markFunction)((jobject) self->F_jump, mark, depth + 1);
	if (self->F_location)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_location)->clazz)->markFunction)((jobject) self->F_location, mark, depth + 1);
}

void clinit_mindustry_logic_LParser$JumpIndex(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LParser$JumpIndex_mindustry_logic_LStatements$JumpStatement_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser$JumpIndex:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LParser$JumpIndex(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(247);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(248);
	((mindustry_logic_LParser$JumpIndex *) NULL_CHECK((frame[0].o)))->F_jump = (jref) (frame[1].o);
	LINE_NUMBER(249);
	((mindustry_logic_LParser$JumpIndex *) NULL_CHECK((frame[0].o)))->F_location = (jref) (frame[2].o);
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LParser$JumpIndex[] {
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
	{ "jump", &class_mindustry_logic_LStatements$JumpStatement, offsetof(mindustry_logic_LParser$JumpIndex, F_jump), "Lmindustry/logic/LStatements$JumpStatement;", 0 },
	{ "location", &class_java_lang_String, offsetof(mindustry_logic_LParser$JumpIndex, F_location), "Ljava/lang/String;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LParser$JumpIndex_mindustry_logic_LStatements$JumpStatement_java_lang_String, 0, "(Lmindustry/logic/LStatements$JumpStatement;Ljava/lang/String;)V", 1 },
};

Class class_mindustry_logic_LParser$JumpIndex{
		.nativeName = (intptr_t) "mindustry/logic/LParser$JumpIndex",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LParser$JumpIndex),
		.classVtable = (intptr_t) vtable_mindustry_logic_LParser$JumpIndex,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LParser$JumpIndex,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LParser$JumpIndex,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LParser,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LParser$JumpIndex = registerClass(&class_mindustry_logic_LParser$JumpIndex);

}

