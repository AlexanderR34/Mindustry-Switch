#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_26.h"
#include "java/lang/Object.h"
#include "arc/struct/Bits.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_26.h"
#include "mindustry/ui/fragments/PlacementFragment.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
	if (self->F_field4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field4)->clazz)->markFunction)((jobject) self->F_field4, mark, depth + 1);
	if (self->F_field5)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field5)->clazz)->markFunction)((jobject) self->F_field5, mark, depth + 1);
	if (self->F_field6)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field6)->clazz)->markFunction)((jobject) self->F_field6, mark, depth + 1);
	if (self->F_field7)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field7)->clazz)->markFunction)((jobject) self->F_field7, mark, depth + 1);
	if (self->F_field8)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field8)->clazz)->markFunction)((jobject) self->F_field8, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_26:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26 *) self;
	SM_mindustry_ui_fragments_PlacementFragment_lambda$build$25_Array2_int_arc_scene_ui_layout_Table_arc_struct_Bits_arc_struct_Bits_arc_struct_Seq_arc_struct_Seq_arc_struct_Seq_arc_struct_Bits_arc_struct_Bits(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3, (jobject) proxy->F_field4, (jobject) proxy->F_field5, (jobject) proxy->F_field6, (jobject) proxy->F_field7, (jobject) proxy->F_field8);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26[] {
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
	(void *) M_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26_run,
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
	{ "run", "()V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "field0", getArrayClass(&class_int, 2), offsetof(mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26, F_field0), "[[I", 0 },
	{ "field1", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26, F_field1), "Larc/scene/ui/layout/Table;", 0 },
	{ "field2", &class_arc_struct_Bits, offsetof(mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26, F_field2), "Larc/struct/Bits;", 0 },
	{ "field3", &class_arc_struct_Bits, offsetof(mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26, F_field3), "Larc/struct/Bits;", 0 },
	{ "field4", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26, F_field4), "Larc/struct/Seq;", 0 },
	{ "field5", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26, F_field5), "Larc/struct/Seq;", 0 },
	{ "field6", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26, F_field6), "Larc/struct/Seq;", 0 },
	{ "field7", &class_arc_struct_Bits, offsetof(mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26, F_field7), "Larc/struct/Bits;", 0 },
	{ "field8", &class_arc_struct_Bits, offsetof(mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26, F_field8), "Larc/struct/Bits;", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26_run, VTABLE_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26_run, "()V", 0 },
};

Class class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26{
		.nativeName = (intptr_t) "mindustry/ui/fragments/PlacementFragment_invoke_java_lang_Runnable_26",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26 = registerClass(&class_mindustry_ui_fragments_PlacementFragment_invoke_java_lang_Runnable_26);

}
