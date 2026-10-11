#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunnerLength_2.h"
#include "arc/util/io/Reads.h"
#include "arc/struct/IntSet.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "mindustry/io/SaveFileReader_IORunnerLength.h"
#include "mindustry/io/SaveVersion.h"
#include "arc/struct/Seq.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunnerLength_2.h"

extern "C" {


void mark_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
}

void clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2_accept_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2:accept", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2 *) self;
	SM_mindustry_io_SaveVersion_lambda$readWorldEntities$0_Array1_arc_func_Prov_arc_struct_IntSet_arc_struct_Seq_arc_util_io_Reads_int(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, param0, param1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2[] {
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
	(void *) M_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2_accept_java_lang_Object_int,
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
	{ "accept", "(Ljava/lang/Object;I)V" },
};

static jclass interfaces[] { &class_mindustry_io_SaveFileReader$IORunnerLength, };

static FieldMetadata fields[] {
	{ "field0", getArrayClass(&class_arc_func_Prov, 1), offsetof(mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2, F_field0), "[Larc/func/Prov;", 0 },
	{ "field1", &class_arc_struct_IntSet, offsetof(mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2, F_field1), "Larc/struct/IntSet;", 0 },
	{ "field2", &class_arc_struct_Seq, offsetof(mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2, F_field2), "Larc/struct/Seq;", 0 },
};

static MethodMetadata methods[] {
	{ "accept", (intptr_t) M_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2_accept_java_lang_Object_int, VTABLE_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2_accept_java_lang_Object_int, "(Ljava/lang/Object;I)V", 0 },
};

Class class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2{
		.nativeName = (intptr_t) "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2),
		.classVtable = (intptr_t) vtable_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2,
		.staticInitializer = (intptr_t) clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2 = registerClass(&class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_2);

}

