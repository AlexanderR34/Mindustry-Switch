#include "arc/util/pooling/Pools_1.h"
#include "arc/func/Prov.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pools_1.h"
#include "arc/util/pooling/Pool.h"

extern "C" {


void mark_arc_util_pooling_Pools$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_util_pooling_Pool(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_pooling_Pools$1 *) object;
	if (self->F_val$supplier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$supplier)->clazz)->markFunction)((jobject) self->F_val$supplier, mark, depth + 1);
}

void clinit_arc_util_pooling_Pools$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_util_pooling_Pool(ctx);
}

void init_arc_util_pooling_Pools$1_int_int_arc_func_Prov(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools$1:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pools$1(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(25);
	((arc_util_pooling_Pools$1 *) NULL_CHECK((frame[0].o)))->F_val$supplier = (jref) (frame[3].o);
	init_arc_util_pooling_Pool_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_pooling_Pools$1_newObject_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pools$1:newObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_util_pooling_Pools$1 *) NULL_CHECK((frame[0].o)))->F_val$supplier;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_pooling_Pools$1[] {
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
	(void *) M_arc_util_pooling_Pools$1_newObject_R_java_lang_Object,
	(void *) M_arc_util_pooling_Pool_obtain_R_java_lang_Object,
	(void *) M_arc_util_pooling_Pool_free_java_lang_Object,
	(void *) M_arc_util_pooling_Pool_reset_java_lang_Object,
	(void *) M_arc_util_pooling_Pool_freeAll_arc_struct_Seq,
	(void *) M_arc_util_pooling_Pool_clear,
	(void *) M_arc_util_pooling_Pool_getFree_R_int,
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
	{ "newObject", "()Ljava/lang/Object;" },
	{ "obtain", "()Ljava/lang/Object;" },
	{ "free", "(Ljava/lang/Object;)V" },
	{ "reset", "(Ljava/lang/Object;)V" },
	{ "freeAll", "(Larc/struct/Seq;)V" },
	{ "clear", "()V" },
	{ "getFree", "()I" },
};

static FieldMetadata fields[] {
	{ "val$supplier", &class_arc_func_Prov, offsetof(arc_util_pooling_Pools$1, F_val$supplier), "Larc/func/Prov;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_pooling_Pools$1_int_int_arc_func_Prov, 0, "(IILarc/func/Prov;)V", 0 },
	{ "newObject", (intptr_t) M_arc_util_pooling_Pools$1_newObject_R_java_lang_Object, VTABLE_arc_util_pooling_Pools$1_newObject_R_java_lang_Object, "()Ljava/lang/Object;", 4 },
};

Class class_arc_util_pooling_Pools$1{
		.nativeName = (intptr_t) "arc/util/pooling/Pools$1",
		.parentClass = (intptr_t) &class_arc_util_pooling_Pool,
		.size = sizeof(arc_util_pooling_Pools$1),
		.classVtable = (intptr_t) vtable_arc_util_pooling_Pools$1,
		.staticInitializer = (intptr_t) clinit_arc_util_pooling_Pools$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_pooling_Pools$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_util_pooling_Pools$1 = registerClass(&class_arc_util_pooling_Pools$1);

}

