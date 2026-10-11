#include "mindustry/editor/data/MapImagesView_1Result.h"
#include "java/lang/Object.h"
#include "mindustry/editor/data/MapImagesView_1Result.h"
#include "mindustry/editor/data/MapImagesView.h"
#include "arc/files/Fi.h"

extern "C" {


void mark_mindustry_editor_data_MapImagesView$1Result(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_data_MapImagesView$1Result *) object;
	if (self->F_path)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_path)->clazz)->markFunction)((jobject) self->F_path, mark, depth + 1);
	if (self->F_hash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hash)->clazz)->markFunction)((jobject) self->F_hash, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_editor_data_MapImagesView$1Result(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_editor_data_MapImagesView$1Result_mindustry_editor_data_MapImagesView(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/data/MapImagesView$1Result:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_data_MapImagesView$1Result(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	((mindustry_editor_data_MapImagesView$1Result *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_data_MapImagesView$1Result[] {
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
	{ "width", &class_int, offsetof(mindustry_editor_data_MapImagesView$1Result, F_width), "I", 0 },
	{ "height", &class_int, offsetof(mindustry_editor_data_MapImagesView$1Result, F_height), "I", 0 },
	{ "path", &class_arc_files_Fi, offsetof(mindustry_editor_data_MapImagesView$1Result, F_path), "Larc/files/Fi;", 0 },
	{ "hash", getArrayClass(&class_byte, 1), offsetof(mindustry_editor_data_MapImagesView$1Result, F_hash), "[B", 0 },
	{ "this$0", &class_mindustry_editor_data_MapImagesView, offsetof(mindustry_editor_data_MapImagesView$1Result, F_this$0), "Lmindustry/editor/data/MapImagesView;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_data_MapImagesView$1Result_mindustry_editor_data_MapImagesView, 0, "(Lmindustry/editor/data/MapImagesView;)V", 0 },
};

Class class_mindustry_editor_data_MapImagesView$1Result{
		.nativeName = (intptr_t) "mindustry/editor/data/MapImagesView$1Result",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_data_MapImagesView$1Result),
		.classVtable = (intptr_t) vtable_mindustry_editor_data_MapImagesView$1Result,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_data_MapImagesView$1Result,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_data_MapImagesView$1Result,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_data_MapImagesView$1Result = registerClass(&class_mindustry_editor_data_MapImagesView$1Result);

}

