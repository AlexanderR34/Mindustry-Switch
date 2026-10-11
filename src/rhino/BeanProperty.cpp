#include "rhino/BeanProperty.h"
#include "java/lang/Object.h"
#include "rhino/NativeJavaMethod.h"
#include "rhino/BeanProperty.h"
#include "rhino/MemberBox.h"

extern "C" {


void mark_rhino_BeanProperty(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_BeanProperty *) object;
	if (self->F_getter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_getter)->clazz)->markFunction)((jobject) self->F_getter, mark, depth + 1);
	if (self->F_setter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_setter)->clazz)->markFunction)((jobject) self->F_setter, mark, depth + 1);
	if (self->F_setters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_setters)->clazz)->markFunction)((jobject) self->F_setters, mark, depth + 1);
}

void clinit_rhino_BeanProperty(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_BeanProperty_rhino_MemberBox_rhino_MemberBox_rhino_NativeJavaMethod(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/BeanProperty:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_BeanProperty(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(768);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(769);
	((rhino_BeanProperty *) NULL_CHECK((frame[0].o)))->F_getter = (jref) (frame[1].o);
	LINE_NUMBER(770);
	((rhino_BeanProperty *) NULL_CHECK((frame[0].o)))->F_setter = (jref) (frame[2].o);
	LINE_NUMBER(771);
	((rhino_BeanProperty *) NULL_CHECK((frame[0].o)))->F_setters = (jref) (frame[3].o);
	LINE_NUMBER(772);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_BeanProperty[] {
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
	{ "getter", &class_rhino_MemberBox, offsetof(rhino_BeanProperty, F_getter), "Lrhino/MemberBox;", 0 },
	{ "setter", &class_rhino_MemberBox, offsetof(rhino_BeanProperty, F_setter), "Lrhino/MemberBox;", 0 },
	{ "setters", &class_rhino_NativeJavaMethod, offsetof(rhino_BeanProperty, F_setters), "Lrhino/NativeJavaMethod;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_BeanProperty_rhino_MemberBox_rhino_MemberBox_rhino_NativeJavaMethod, 0, "(Lrhino/MemberBox;Lrhino/MemberBox;Lrhino/NativeJavaMethod;)V", 0 },
};

Class class_rhino_BeanProperty{
		.nativeName = (intptr_t) "rhino/BeanProperty",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_BeanProperty),
		.classVtable = (intptr_t) vtable_rhino_BeanProperty,
		.staticInitializer = (intptr_t) clinit_rhino_BeanProperty,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_BeanProperty,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_BeanProperty = registerClass(&class_rhino_BeanProperty);

}
