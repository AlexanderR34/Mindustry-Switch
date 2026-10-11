#include "java/lang/Class.h"
#include "java/lang/ClassCastException.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/NoSuchFieldException.h"
#include "java/util/ArrayList.h"
#include "java/lang/reflect/Type.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/PrintStream.h"
#include "java/io/InputStream.h"
#include "java/util/Collection.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/NoSuchMethodException.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Modifier.h"
#include "java/lang/reflect/Field.h"
#include "java/net/URL.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/Package.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_java_lang_Class(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_Class *) object;
	if (self->F_parentClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parentClass)->clazz)->markFunction)((jobject) self->F_parentClass, mark, depth + 1);
	if (self->F_componentClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_componentClass)->clazz)->markFunction)((jobject) self->F_componentClass, mark, depth + 1);
	if (self->F_outerClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outerClass)->clazz)->markFunction)((jobject) self->F_outerClass, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_interfaces)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interfaces)->clazz)->markFunction)((jobject) self->F_interfaces, mark, depth + 1);
	if (self->F_fields)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fields)->clazz)->markFunction)((jobject) self->F_fields, mark, depth + 1);
	if (self->F_methods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_methods)->clazz)->markFunction)((jobject) self->F_methods, mark, depth + 1);
	if (self->F_constructors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_constructors)->clazz)->markFunction)((jobject) self->F_constructors, mark, depth + 1);
	if (self->F_annotations)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_annotations)->clazz)->markFunction)((jobject) self->F_annotations, mark, depth + 1);
	if (self->F_innerClasses)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_innerClasses)->clazz)->markFunction)((jobject) self->F_innerClasses, mark, depth + 1);
}

void clinit_java_lang_Class(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Class(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(79);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getClassLoader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Class_forName_java_lang_String_boolean_java_lang_ClassLoader_R_java_lang_Class(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:forName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Class(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(99);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(100);
	M_java_lang_Class_ensureInitialized(ctx, (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getResourceAsStream", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getResource_java_lang_String_R_java_net_URL(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getResource", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Class_isArray_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:isArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	if (((jint)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_arrayDimensions) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_lang_Class_isInterface_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:isInterface", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isInterface_int_R_boolean(ctx, ((jint)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_access));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_newInstance_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:newInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchMethodException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(255);
	frame[1].o = sp[0].o;
	LINE_NUMBER(256);
	clinit_java_lang_InstantiationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InstantiationException);
	init_java_lang_InstantiationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	if (((jint)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_primitive) == 0) goto label_1;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(271);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(272);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"interface "_j))));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(273);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"class "_j))));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Class_isAnnotation_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:isAnnotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(278);
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isAnnotation_int_R_boolean(ctx, ((jint)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_access));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getAnnotation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(287);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(288);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_annotations;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(289);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, (frame[5].o)))(ctx, (frame[5].o));
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_5:;
	{
	LINE_NUMBER(288);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getAnnotations", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(298);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	sp[1].o = (jobject)((func_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_java_util_Arrays_asList_Array1_java_lang_Object_R_java_util_List(ctx, sp[1].o);
	init_java_util_ArrayList_java_util_Collection(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_util_Arrays_asList_Array1_java_lang_Object_R_java_util_List(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_ArrayList_addAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_addAll_java_util_Collection_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_annotation_Annotation, (jint(0)));
	sp[0].o = (jobject)((func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_annotation_Annotation, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getDeclaredAnnotations", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(309);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_annotations;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:isAnnotationPresent", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(318);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, (frame[5].o)))(ctx, (frame[5].o));
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(317);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getDeclaredField", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(325);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_4:;
	{
	LINE_NUMBER(324);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(327);
	clinit_java_lang_NoSuchFieldException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NoSuchFieldException);
	init_java_lang_NoSuchFieldException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getField", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(332);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_4:;
	{
	LINE_NUMBER(331);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(334);
	clinit_java_lang_NoSuchFieldException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NoSuchFieldException);
	init_java_lang_NoSuchFieldException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_asSubclass_java_lang_Class_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:asSubclass", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(345);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(348);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	sp[1].o = (jobject)((func_java_lang_Class_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_toString_R_java_lang_String])(ctx, (frame[0].o));
	init_java_lang_ClassCastException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_cast_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:cast", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(363);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(367);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot cast "_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" to "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ClassCastException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Class_isEnum_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:isEnum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(378);
	jint temp0 = (jint)SM_java_lang_reflect_Modifier_isEnum_int_R_boolean(ctx, ((jint)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_access));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getEnumConstants", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"$VALUES"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(384);
	((func_java_lang_reflect_Field_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_setAccessible_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (jobject(nullptr)));
	sp[0].o = checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(386);
	frame[1].o = sp[0].o;
	LINE_NUMBER(387);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Class_isAnonymousClass_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:isAnonymousClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return ((jint)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_anonymous);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getDeclaredClasses_R_Array1_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getDeclaredClasses", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(398);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_innerClasses;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getDeclaringClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(403);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(404);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_outerClass;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getDeclaredFields", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(409);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_fields;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getFields", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(413);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(414);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(415);
	jint temp0 = (jint)((func_java_lang_reflect_Field_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Field_getModifiers_R_int])(ctx, (frame[5].o));
	if ((temp0 & (jint(1))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(416);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	}
label_5:;
	{
	LINE_NUMBER(414);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(418);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_util_Arrays_asList_Array1_java_lang_Object_R_java_util_List(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_ArrayList_addAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_addAll_java_util_Collection_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(419);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_reflect_Field, (jint(0)));
	sp[0].o = (jobject)((func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_reflect_Field, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getDeclaredConstructor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(424);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[5].o));
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_4:;
	{
	LINE_NUMBER(423);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(426);
	clinit_java_lang_NoSuchMethodException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NoSuchMethodException);
	init_java_lang_NoSuchMethodException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getConstructor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((func_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(431);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[5].o));
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_4:;
	{
	LINE_NUMBER(430);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(433);
	clinit_java_lang_NoSuchMethodException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NoSuchMethodException);
	init_java_lang_NoSuchMethodException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getDeclaredConstructors", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(437);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(438);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_constructors;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getConstructors", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(442);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(444);
	jint temp0 = (jint)((func_java_lang_reflect_Constructor_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Constructor_getModifiers_R_int])(ctx, (frame[5].o));
	if ((temp0 & (jint(1))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(445);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	}
label_5:;
	{
	LINE_NUMBER(443);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(447);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_util_Arrays_asList_Array1_java_lang_Object_R_java_util_List(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_ArrayList_addAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_addAll_java_util_Collection_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(448);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_reflect_Constructor, (jint(0)));
	sp[0].o = (jobject)((func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_reflect_Constructor, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getDeclaredMethod", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(453);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[6].o));
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_4:;
	{
	LINE_NUMBER(452);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(455);
	clinit_java_lang_NoSuchMethodException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NoSuchMethodException);
	init_java_lang_NoSuchMethodException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getMethod", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((func_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[6].o));
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_4:;
	{
	LINE_NUMBER(459);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(462);
	clinit_java_lang_NoSuchMethodException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NoSuchMethodException);
	init_java_lang_NoSuchMethodException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getDeclaredMethods", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(466);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(467);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_methods;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, (frame[4].o));
	LINE_NUMBER(467);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_methods;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getMethods", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(473);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(474);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(475);
	jint temp0 = (jint)((func_java_lang_reflect_Method_getModifiers_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Method_getModifiers_R_int])(ctx, (frame[5].o));
	if ((temp0 & (jint(1))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(476);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	}
label_5:;
	{
	LINE_NUMBER(474);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(478);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_util_Arrays_asList_Array1_java_lang_Object_R_java_util_List(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_ArrayList_addAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_addAll_java_util_Collection_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(479);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_reflect_Method, (jint(0)));
	sp[0].o = (jobject)((func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_reflect_Method, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getSuperclass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getSuperclass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_parentClass;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Class_getModifiers_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getModifiers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(487);
	popStackFrame(ctx);
	return ((jint)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_access);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Class_isMemberClass_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:isMemberClass", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(491);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(492);
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"$"_j))));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getSimpleName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getSimpleName", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(500);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(501);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(502);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (91));
	jint temp1 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (46));
	jint temp2 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (36));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, temp2);
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp3);
	frame[2].i = temp4;
	LINE_NUMBER(503);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(504);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_arrayDimensions)) goto label_6;
	}
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	LINE_NUMBER(504);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Class_isSynthetic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:isSynthetic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return ((jint)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_synthetic);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getCanonicalName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getCanonicalName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Class_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(522);
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Class_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(527);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_lang_Class_desiredAssertionStatus_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:desiredAssertionStatus", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getComponentType_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getComponentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_componentClass;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getInterfaces_R_Array1_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getInterfaces", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(539);
	M_java_lang_Class_ensureInitialized(ctx, (frame[0].o));
	LINE_NUMBER(540);
	sp[0].o = (jobject)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_interfaces;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getGenericInterfaces_R_Array1_java_lang_reflect_Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getGenericInterfaces", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(545);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Class.getGenericInterfaces() not supported on this platform"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_lang_Class_isPrimitive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:isPrimitive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return ((jint)((java_lang_Class *) NULL_CHECK((frame[0].o)))->F_primitive);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getEnclosingMethod_R_java_lang_reflect_Method(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getEnclosingMethod", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getEnclosingConstructor_R_java_lang_reflect_Constructor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getEnclosingConstructor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Class_isLocalClass_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:isLocalClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Class_getPackage_R_java_lang_Package(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:getPackage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_lang_Class_finalize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Class:finalize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(570);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_err;
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"A Class was disposed! This should never happen."_j))));
	LINE_NUMBER(571);
	SM_java_lang_System_exit_int(ctx, (jint(-1)));
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Class[] {
	(void *) M_java_lang_Class_hashCode_R_int,
	(void *) M_java_lang_Class_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Class_toString_R_java_lang_String,
	(void *) M_java_lang_Class_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Class_ensureInitialized,
	(void *) M_java_lang_Class_getClassLoader_R_java_lang_ClassLoader,
	(void *) M_java_lang_Class_getName_R_java_lang_String,
	(void *) M_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream,
	(void *) M_java_lang_Class_getResource_java_lang_String_R_java_net_URL,
	(void *) M_java_lang_Class_isArray_R_boolean,
	(void *) M_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean,
	(void *) M_java_lang_Class_isInstance_java_lang_Object_R_boolean,
	(void *) M_java_lang_Class_isInterface_R_boolean,
	(void *) M_java_lang_Class_newInstance_R_java_lang_Object,
	(void *) M_java_lang_Class_isAnnotation_R_boolean,
	(void *) M_java_lang_Class_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation,
	(void *) M_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation,
	(void *) M_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation,
	(void *) M_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean,
	(void *) M_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field,
	(void *) M_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field,
	(void *) M_java_lang_Class_asSubclass_java_lang_Class_R_java_lang_Class,
	(void *) M_java_lang_Class_cast_java_lang_Object_R_java_lang_Object,
	(void *) M_java_lang_Class_isEnum_R_boolean,
	(void *) M_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object,
	(void *) M_java_lang_Class_isAnonymousClass_R_boolean,
	(void *) M_java_lang_Class_getDeclaredClasses_R_Array1_java_lang_Class,
	(void *) M_java_lang_Class_getDeclaringClass_R_java_lang_Class,
	(void *) M_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field,
	(void *) M_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field,
	(void *) M_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor,
	(void *) M_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor,
	(void *) M_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor,
	(void *) M_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor,
	(void *) M_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method,
	(void *) M_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method,
	(void *) M_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method,
	(void *) M_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method,
	(void *) M_java_lang_Class_getSuperclass_R_java_lang_Class,
	(void *) M_java_lang_Class_getModifiers_R_int,
	(void *) M_java_lang_Class_isMemberClass_R_boolean,
	(void *) M_java_lang_Class_getSimpleName_R_java_lang_String,
	(void *) M_java_lang_Class_isSynthetic_R_boolean,
	(void *) M_java_lang_Class_getCanonicalName_R_java_lang_String,
	(void *) M_java_lang_Class_desiredAssertionStatus_R_boolean,
	(void *) M_java_lang_Class_getComponentType_R_java_lang_Class,
	(void *) M_java_lang_Class_getInterfaces_R_Array1_java_lang_Class,
	(void *) M_java_lang_Class_getGenericInterfaces_R_Array1_java_lang_reflect_Type,
	(void *) M_java_lang_Class_isPrimitive_R_boolean,
	(void *) M_java_lang_Class_getEnclosingMethod_R_java_lang_reflect_Method,
	(void *) M_java_lang_Class_getEnclosingConstructor_R_java_lang_reflect_Constructor,
	(void *) M_java_lang_Class_isLocalClass_R_boolean,
	(void *) M_java_lang_Class_getPackage_R_java_lang_Package,
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
	{ "ensureInitialized", "()V" },
	{ "getClassLoader", "()Ljava/lang/ClassLoader;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;" },
	{ "getResource", "(Ljava/lang/String;)Ljava/net/URL;" },
	{ "isArray", "()Z" },
	{ "isAssignableFrom", "(Ljava/lang/Class;)Z" },
	{ "isInstance", "(Ljava/lang/Object;)Z" },
	{ "isInterface", "()Z" },
	{ "newInstance", "()Ljava/lang/Object;" },
	{ "isAnnotation", "()Z" },
	{ "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;" },
	{ "getAnnotations", "()[Ljava/lang/annotation/Annotation;" },
	{ "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;" },
	{ "isAnnotationPresent", "(Ljava/lang/Class;)Z" },
	{ "getDeclaredField", "(Ljava/lang/String;)Ljava/lang/reflect/Field;" },
	{ "getField", "(Ljava/lang/String;)Ljava/lang/reflect/Field;" },
	{ "asSubclass", "(Ljava/lang/Class;)Ljava/lang/Class;" },
	{ "cast", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEnum", "()Z" },
	{ "getEnumConstants", "()[Ljava/lang/Object;" },
	{ "isAnonymousClass", "()Z" },
	{ "getDeclaredClasses", "()[Ljava/lang/Class;" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "getDeclaredFields", "()[Ljava/lang/reflect/Field;" },
	{ "getFields", "()[Ljava/lang/reflect/Field;" },
	{ "getDeclaredConstructor", "([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;" },
	{ "getConstructor", "([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;" },
	{ "getDeclaredConstructors", "()[Ljava/lang/reflect/Constructor;" },
	{ "getConstructors", "()[Ljava/lang/reflect/Constructor;" },
	{ "getDeclaredMethod", "(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;" },
	{ "getMethod", "(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;" },
	{ "getDeclaredMethods", "()[Ljava/lang/reflect/Method;" },
	{ "getMethods", "()[Ljava/lang/reflect/Method;" },
	{ "getSuperclass", "()Ljava/lang/Class;" },
	{ "getModifiers", "()I" },
	{ "isMemberClass", "()Z" },
	{ "getSimpleName", "()Ljava/lang/String;" },
	{ "isSynthetic", "()Z" },
	{ "getCanonicalName", "()Ljava/lang/String;" },
	{ "desiredAssertionStatus", "()Z" },
	{ "getComponentType", "()Ljava/lang/Class;" },
	{ "getInterfaces", "()[Ljava/lang/Class;" },
	{ "getGenericInterfaces", "()[Ljava/lang/reflect/Type;" },
	{ "isPrimitive", "()Z" },
	{ "getEnclosingMethod", "()Ljava/lang/reflect/Method;" },
	{ "getEnclosingConstructor", "()Ljava/lang/reflect/Constructor;" },
	{ "isLocalClass", "()Z" },
	{ "getPackage", "()Ljava/lang/Package;" },
};

static jclass interfaces[] { &class_java_lang_reflect_Type, };

static FieldMetadata fields[] {
	{ "nativeName", &class_long, offsetof(java_lang_Class, F_nativeName), "J", 2 },
	{ "parentClass", &class_java_lang_Class, offsetof(java_lang_Class, F_parentClass), "Ljava/lang/Class;", 2 },
	{ "size", &class_int, offsetof(java_lang_Class, F_size), "I", 2 },
	{ "classVtable", &class_long, offsetof(java_lang_Class, F_classVtable), "J", 2 },
	{ "staticInitializer", &class_long, offsetof(java_lang_Class, F_staticInitializer), "J", 2 },
	{ "annotationInitializer", &class_long, offsetof(java_lang_Class, F_annotationInitializer), "J", 2 },
	{ "markFunction", &class_long, offsetof(java_lang_Class, F_markFunction), "J", 2 },
	{ "primitive", &class_boolean, offsetof(java_lang_Class, F_primitive), "Z", 2 },
	{ "arrayDimensions", &class_int, offsetof(java_lang_Class, F_arrayDimensions), "I", 2 },
	{ "componentClass", &class_java_lang_Class, offsetof(java_lang_Class, F_componentClass), "Ljava/lang/Class;", 2 },
	{ "outerClass", &class_java_lang_Class, offsetof(java_lang_Class, F_outerClass), "Ljava/lang/Class;", 2 },
	{ "innerClassCount", &class_int, offsetof(java_lang_Class, F_innerClassCount), "I", 2 },
	{ "nativeInnerClasses", &class_long, offsetof(java_lang_Class, F_nativeInnerClasses), "J", 2 },
	{ "access", &class_int, offsetof(java_lang_Class, F_access), "I", 2 },
	{ "interfaceCount", &class_int, offsetof(java_lang_Class, F_interfaceCount), "I", 2 },
	{ "nativeInterfaces", &class_long, offsetof(java_lang_Class, F_nativeInterfaces), "J", 2 },
	{ "fieldCount", &class_int, offsetof(java_lang_Class, F_fieldCount), "I", 2 },
	{ "nativeFields", &class_long, offsetof(java_lang_Class, F_nativeFields), "J", 2 },
	{ "methodCount", &class_int, offsetof(java_lang_Class, F_methodCount), "I", 2 },
	{ "nativeMethods", &class_long, offsetof(java_lang_Class, F_nativeMethods), "J", 2 },
	{ "vtableSize", &class_int, offsetof(java_lang_Class, F_vtableSize), "I", 2 },
	{ "nativeVtableEntries", &class_long, offsetof(java_lang_Class, F_nativeVtableEntries), "J", 2 },
	{ "anonymous", &class_boolean, offsetof(java_lang_Class, F_anonymous), "Z", 2 },
	{ "synthetic", &class_boolean, offsetof(java_lang_Class, F_synthetic), "Z", 2 },
	{ "instanceOfCache", &class_long, offsetof(java_lang_Class, F_instanceOfCache), "J", 2 },
	{ "interfaceCache", &class_long, offsetof(java_lang_Class, F_interfaceCache), "J", 2 },
	{ "initialized", &class_boolean, offsetof(java_lang_Class, F_initialized), "Z", 2 },
	{ "name", &class_java_lang_String, offsetof(java_lang_Class, F_name), "Ljava/lang/String;", 2 },
	{ "interfaces", getArrayClass(&class_java_lang_Class, 1), offsetof(java_lang_Class, F_interfaces), "[Ljava/lang/Class;", 2 },
	{ "fields", getArrayClass(&class_java_lang_reflect_Field, 1), offsetof(java_lang_Class, F_fields), "[Ljava/lang/reflect/Field;", 2 },
	{ "methods", getArrayClass(&class_java_lang_reflect_Method, 1), offsetof(java_lang_Class, F_methods), "[Ljava/lang/reflect/Method;", 2 },
	{ "constructors", getArrayClass(&class_java_lang_reflect_Constructor, 1), offsetof(java_lang_Class, F_constructors), "[Ljava/lang/reflect/Constructor;", 2 },
	{ "annotations", getArrayClass(&class_java_lang_annotation_Annotation, 1), offsetof(java_lang_Class, F_annotations), "[Ljava/lang/annotation/Annotation;", 2 },
	{ "innerClasses", getArrayClass(&class_java_lang_Class, 1), offsetof(java_lang_Class, F_innerClasses), "[Ljava/lang/Class;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Class, 0, "()V", 2 },
	{ "ensureInitialized", (intptr_t) M_java_lang_Class_ensureInitialized, VTABLE_java_lang_Class_ensureInitialized, "()V", 258 },
	{ "getClassLoader", (intptr_t) M_java_lang_Class_getClassLoader_R_java_lang_ClassLoader, VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader, "()Ljava/lang/ClassLoader;", 1 },
	{ "forName", (intptr_t) SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class, 0, "(Ljava/lang/String;)Ljava/lang/Class;", 265 },
	{ "forName", (intptr_t) SM_java_lang_Class_forName_java_lang_String_boolean_java_lang_ClassLoader_R_java_lang_Class, 0, "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;", 9 },
	{ "getName", (intptr_t) M_java_lang_Class_getName_R_java_lang_String, VTABLE_java_lang_Class_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getResourceAsStream", (intptr_t) M_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream, VTABLE_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream, "(Ljava/lang/String;)Ljava/io/InputStream;", 1 },
	{ "getResource", (intptr_t) M_java_lang_Class_getResource_java_lang_String_R_java_net_URL, VTABLE_java_lang_Class_getResource_java_lang_String_R_java_net_URL, "(Ljava/lang/String;)Ljava/net/URL;", 1 },
	{ "isArray", (intptr_t) M_java_lang_Class_isArray_R_boolean, VTABLE_java_lang_Class_isArray_R_boolean, "()Z", 1 },
	{ "isAssignableFrom", (intptr_t) M_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean, VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean, "(Ljava/lang/Class;)Z", 257 },
	{ "isInstance", (intptr_t) M_java_lang_Class_isInstance_java_lang_Object_R_boolean, VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 257 },
	{ "isInterface", (intptr_t) M_java_lang_Class_isInterface_R_boolean, VTABLE_java_lang_Class_isInterface_R_boolean, "()Z", 1 },
	{ "newInstance", (intptr_t) M_java_lang_Class_newInstance_R_java_lang_Object, VTABLE_java_lang_Class_newInstance_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_java_lang_Class_toString_R_java_lang_String, VTABLE_java_lang_Class_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isAnnotation", (intptr_t) M_java_lang_Class_isAnnotation_R_boolean, VTABLE_java_lang_Class_isAnnotation_R_boolean, "()Z", 1 },
	{ "getAnnotation", (intptr_t) M_java_lang_Class_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, VTABLE_java_lang_Class_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", 1 },
	{ "getAnnotations", (intptr_t) M_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation, VTABLE_java_lang_Class_getAnnotations_R_Array1_java_lang_annotation_Annotation, "()[Ljava/lang/annotation/Annotation;", 1 },
	{ "getDeclaredAnnotations", (intptr_t) M_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, VTABLE_java_lang_Class_getDeclaredAnnotations_R_Array1_java_lang_annotation_Annotation, "()[Ljava/lang/annotation/Annotation;", 1 },
	{ "isAnnotationPresent", (intptr_t) M_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean, VTABLE_java_lang_Class_isAnnotationPresent_java_lang_Class_R_boolean, "(Ljava/lang/Class;)Z", 1 },
	{ "getDeclaredField", (intptr_t) M_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field, VTABLE_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field, "(Ljava/lang/String;)Ljava/lang/reflect/Field;", 1 },
	{ "getField", (intptr_t) M_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field, VTABLE_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field, "(Ljava/lang/String;)Ljava/lang/reflect/Field;", 1 },
	{ "asSubclass", (intptr_t) M_java_lang_Class_asSubclass_java_lang_Class_R_java_lang_Class, VTABLE_java_lang_Class_asSubclass_java_lang_Class_R_java_lang_Class, "(Ljava/lang/Class;)Ljava/lang/Class;", 1 },
	{ "cast", (intptr_t) M_java_lang_Class_cast_java_lang_Object_R_java_lang_Object, VTABLE_java_lang_Class_cast_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "isEnum", (intptr_t) M_java_lang_Class_isEnum_R_boolean, VTABLE_java_lang_Class_isEnum_R_boolean, "()Z", 1 },
	{ "getEnumConstants", (intptr_t) M_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object, VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "isAnonymousClass", (intptr_t) M_java_lang_Class_isAnonymousClass_R_boolean, VTABLE_java_lang_Class_isAnonymousClass_R_boolean, "()Z", 1 },
	{ "getDeclaredClasses", (intptr_t) M_java_lang_Class_getDeclaredClasses_R_Array1_java_lang_Class, VTABLE_java_lang_Class_getDeclaredClasses_R_Array1_java_lang_Class, "()[Ljava/lang/Class;", 1 },
	{ "getDeclaringClass", (intptr_t) M_java_lang_Class_getDeclaringClass_R_java_lang_Class, VTABLE_java_lang_Class_getDeclaringClass_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getDeclaredFields", (intptr_t) M_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field, VTABLE_java_lang_Class_getDeclaredFields_R_Array1_java_lang_reflect_Field, "()[Ljava/lang/reflect/Field;", 1 },
	{ "getFields", (intptr_t) M_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field, VTABLE_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field, "()[Ljava/lang/reflect/Field;", 1 },
	{ "getDeclaredConstructor", (intptr_t) M_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor, VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor, "([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;", 129 },
	{ "getConstructor", (intptr_t) M_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor, VTABLE_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor, "([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;", 129 },
	{ "getDeclaredConstructors", (intptr_t) M_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor, VTABLE_java_lang_Class_getDeclaredConstructors_R_Array1_java_lang_reflect_Constructor, "()[Ljava/lang/reflect/Constructor;", 1 },
	{ "getConstructors", (intptr_t) M_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor, VTABLE_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor, "()[Ljava/lang/reflect/Constructor;", 1 },
	{ "getDeclaredMethod", (intptr_t) M_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method, VTABLE_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method, "(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", 129 },
	{ "getMethod", (intptr_t) M_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method, VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method, "(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", 129 },
	{ "getDeclaredMethods", (intptr_t) M_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method, VTABLE_java_lang_Class_getDeclaredMethods_R_Array1_java_lang_reflect_Method, "()[Ljava/lang/reflect/Method;", 1 },
	{ "getMethods", (intptr_t) M_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method, VTABLE_java_lang_Class_getMethods_R_Array1_java_lang_reflect_Method, "()[Ljava/lang/reflect/Method;", 1 },
	{ "getSuperclass", (intptr_t) M_java_lang_Class_getSuperclass_R_java_lang_Class, VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getModifiers", (intptr_t) M_java_lang_Class_getModifiers_R_int, VTABLE_java_lang_Class_getModifiers_R_int, "()I", 1 },
	{ "isMemberClass", (intptr_t) M_java_lang_Class_isMemberClass_R_boolean, VTABLE_java_lang_Class_isMemberClass_R_boolean, "()Z", 1 },
	{ "getSimpleName", (intptr_t) M_java_lang_Class_getSimpleName_R_java_lang_String, VTABLE_java_lang_Class_getSimpleName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isSynthetic", (intptr_t) M_java_lang_Class_isSynthetic_R_boolean, VTABLE_java_lang_Class_isSynthetic_R_boolean, "()Z", 1 },
	{ "getCanonicalName", (intptr_t) M_java_lang_Class_getCanonicalName_R_java_lang_String, VTABLE_java_lang_Class_getCanonicalName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_java_lang_Class_hashCode_R_int, VTABLE_java_lang_Class_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_lang_Class_equals_java_lang_Object_R_boolean, VTABLE_java_lang_Class_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "desiredAssertionStatus", (intptr_t) M_java_lang_Class_desiredAssertionStatus_R_boolean, VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean, "()Z", 1 },
	{ "getComponentType", (intptr_t) M_java_lang_Class_getComponentType_R_java_lang_Class, VTABLE_java_lang_Class_getComponentType_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
	{ "getInterfaces", (intptr_t) M_java_lang_Class_getInterfaces_R_Array1_java_lang_Class, VTABLE_java_lang_Class_getInterfaces_R_Array1_java_lang_Class, "()[Ljava/lang/Class;", 1 },
	{ "getGenericInterfaces", (intptr_t) M_java_lang_Class_getGenericInterfaces_R_Array1_java_lang_reflect_Type, VTABLE_java_lang_Class_getGenericInterfaces_R_Array1_java_lang_reflect_Type, "()[Ljava/lang/reflect/Type;", 1 },
	{ "isPrimitive", (intptr_t) M_java_lang_Class_isPrimitive_R_boolean, VTABLE_java_lang_Class_isPrimitive_R_boolean, "()Z", 1 },
	{ "getEnclosingMethod", (intptr_t) M_java_lang_Class_getEnclosingMethod_R_java_lang_reflect_Method, VTABLE_java_lang_Class_getEnclosingMethod_R_java_lang_reflect_Method, "()Ljava/lang/reflect/Method;", 1 },
	{ "getEnclosingConstructor", (intptr_t) M_java_lang_Class_getEnclosingConstructor_R_java_lang_reflect_Constructor, VTABLE_java_lang_Class_getEnclosingConstructor_R_java_lang_reflect_Constructor, "()Ljava/lang/reflect/Constructor;", 1 },
	{ "isLocalClass", (intptr_t) M_java_lang_Class_isLocalClass_R_boolean, VTABLE_java_lang_Class_isLocalClass_R_boolean, "()Z", 1 },
	{ "getPackage", (intptr_t) M_java_lang_Class_getPackage_R_java_lang_Package, VTABLE_java_lang_Class_getPackage_R_java_lang_Package, "()Ljava/lang/Package;", 1 },
	{ "finalize", (intptr_t) M_java_lang_Class_finalize, VTABLE_java_lang_Class_finalize, "()V", 4 },
};

Class class_java_lang_Class{
		.nativeName = (intptr_t) "java/lang/Class",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Class),
		.classVtable = (intptr_t) vtable_java_lang_Class,
		.staticInitializer = (intptr_t) clinit_java_lang_Class,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Class,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 34,
		.nativeFields = (intptr_t) fields,
		.methodCount = 56,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 60,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Class = registerClass(&class_java_lang_Class);

}
