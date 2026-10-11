#include "java/nio/ByteOrder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/ByteOrder.h"

extern "C" {

jobject SF_java_nio_ByteOrder_BIG_ENDIAN;
jobject SF_java_nio_ByteOrder_LITTLE_ENDIAN;

void mark_java_nio_ByteOrder(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_nio_ByteOrder_BIG_ENDIAN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_ByteOrder_BIG_ENDIAN)->clazz)->markFunction)((jobject) SF_java_nio_ByteOrder_BIG_ENDIAN, mark, depth + 1);
		if (SF_java_nio_ByteOrder_LITTLE_ENDIAN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_nio_ByteOrder_LITTLE_ENDIAN)->clazz)->markFunction)((jobject) SF_java_nio_ByteOrder_LITTLE_ENDIAN, mark, depth + 1);
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
	auto self = (java_nio_ByteOrder *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void init_java_nio_ByteOrder_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteOrder:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteOrder(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((java_nio_ByteOrder *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteOrder:nativeOrder", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteOrder(ctx);
	{
	LINE_NUMBER(65);
	jint temp0 = (jint)SM_java_nio_ByteOrder_isLittleEndian_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	clinit_java_nio_ByteOrder(ctx);
	(sp++)->o = SF_java_nio_ByteOrder_LITTLE_ENDIAN;
	goto label_2;
label_1:;
	clinit_java_nio_ByteOrder(ctx);
	(sp++)->o = SF_java_nio_ByteOrder_BIG_ENDIAN;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_nio_ByteOrder_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteOrder:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((java_nio_ByteOrder *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_nio_ByteOrder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteOrder:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteOrder(ctx);
	{
	LINE_NUMBER(42);
	clinit_java_nio_ByteOrder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteOrder);
	init_java_nio_ByteOrder_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BIG_ENDIAN"_j))));
	clinit_java_nio_ByteOrder(ctx);
	SF_java_nio_ByteOrder_BIG_ENDIAN = sp[0].o;
	LINE_NUMBER(50);
	clinit_java_nio_ByteOrder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteOrder);
	init_java_nio_ByteOrder_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LITTLE_ENDIAN"_j))));
	clinit_java_nio_ByteOrder(ctx);
	SF_java_nio_ByteOrder_LITTLE_ENDIAN = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_ByteOrder[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_nio_ByteOrder_toString_R_java_lang_String,
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
	{ "name", &class_java_lang_String, offsetof(java_nio_ByteOrder, F_name), "Ljava/lang/String;", 2 },
	{ "BIG_ENDIAN", &class_java_nio_ByteOrder, (intptr_t) &SF_java_nio_ByteOrder_BIG_ENDIAN, "Ljava/nio/ByteOrder;", 25 },
	{ "LITTLE_ENDIAN", &class_java_nio_ByteOrder, (intptr_t) &SF_java_nio_ByteOrder_LITTLE_ENDIAN, "Ljava/nio/ByteOrder;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_ByteOrder_java_lang_String, 0, "(Ljava/lang/String;)V", 2 },
	{ "nativeOrder", (intptr_t) SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder, 0, "()Ljava/nio/ByteOrder;", 9 },
	{ "isLittleEndian", (intptr_t) SM_java_nio_ByteOrder_isLittleEndian_R_boolean, 0, "()Z", 266 },
	{ "toString", (intptr_t) M_java_nio_ByteOrder_toString_R_java_lang_String, VTABLE_java_nio_ByteOrder_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_nio_ByteOrder, 0, "()V", 8 },
};

Class class_java_nio_ByteOrder{
		.nativeName = (intptr_t) "java/nio/ByteOrder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_ByteOrder),
		.classVtable = (intptr_t) vtable_java_nio_ByteOrder,
		.staticInitializer = (intptr_t) clinit_java_nio_ByteOrder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_ByteOrder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_ByteOrder = registerClass(&class_java_nio_ByteOrder);

}
