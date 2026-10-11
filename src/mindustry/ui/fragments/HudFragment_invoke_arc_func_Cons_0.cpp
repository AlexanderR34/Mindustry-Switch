#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_0.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_0.h"
#include "mindustry/ui/fragments/HudFragment.h"

extern "C" {


void mark_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0_get_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_0:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0 *) self;
	((func_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_lambda$addBlockSelection$1_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0[] {
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
	(void *) M_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0_get_java_lang_Object,
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
	{ "get", "(Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_arc_func_Cons, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_ui_fragments_HudFragment, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0, F_field0), "Lmindustry/ui/fragments/HudFragment;", 0 },
	{ "field1", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0, F_field1), "Larc/scene/ui/layout/Table;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0_get_java_lang_Object, VTABLE_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0_get_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
};

Class class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0{
		.nativeName = (intptr_t) "mindustry/ui/fragments/HudFragment_invoke_arc_func_Cons_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0 = registerClass(&class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Cons_0);

}
