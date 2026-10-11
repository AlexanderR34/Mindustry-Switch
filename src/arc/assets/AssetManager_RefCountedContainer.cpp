#include "arc/assets/AssetManager_RefCountedContainer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/assets/AssetManager_RefCountedContainer.h"
#include "arc/assets/AssetManager.h"

extern "C" {


void mark_arc_assets_AssetManager$RefCountedContainer(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_AssetManager$RefCountedContainer *) object;
	if (self->F_object)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_object)->clazz)->markFunction)((jobject) self->F_object, mark, depth + 1);
}

void clinit_arc_assets_AssetManager$RefCountedContainer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_assets_AssetManager$RefCountedContainer_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetManager$RefCountedContainer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetManager$RefCountedContainer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(872);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(870);
	((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[0].o)))->F_count = (jint(1));
	LINE_NUMBER(873);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Object must not be null"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(874);
	((arc_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[0].o)))->F_object = (jref) (frame[1].o);
	LINE_NUMBER(875);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_AssetManager$RefCountedContainer[] {
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
	{ "object", &class_java_lang_Object, offsetof(arc_assets_AssetManager$RefCountedContainer, F_object), "Ljava/lang/Object;", 0 },
	{ "count", &class_int, offsetof(arc_assets_AssetManager$RefCountedContainer, F_count), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_AssetManager$RefCountedContainer_java_lang_Object, 0, "(Ljava/lang/Object;)V", 1 },
};

Class class_arc_assets_AssetManager$RefCountedContainer{
		.nativeName = (intptr_t) "arc/assets/AssetManager$RefCountedContainer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_assets_AssetManager$RefCountedContainer),
		.classVtable = (intptr_t) vtable_arc_assets_AssetManager$RefCountedContainer,
		.staticInitializer = (intptr_t) clinit_arc_assets_AssetManager$RefCountedContainer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_AssetManager$RefCountedContainer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_assets_AssetManager,
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
static bool registered_arc_assets_AssetManager$RefCountedContainer = registerClass(&class_arc_assets_AssetManager$RefCountedContainer);

}

