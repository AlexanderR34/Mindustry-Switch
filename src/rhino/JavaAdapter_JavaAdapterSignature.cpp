#include "rhino/JavaAdapter_JavaAdapterSignature.h"
#include "java/lang/Object.h"
#include "rhino/JavaAdapter.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "rhino/ObjToIntMap.h"
#include "rhino/JavaAdapter_JavaAdapterSignature.h"
#include "java/lang/Class.h"
#include "rhino/ObjToIntMap_Iterator.h"

extern "C" {


void mark_rhino_JavaAdapter$JavaAdapterSignature(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_JavaAdapter$JavaAdapterSignature *) object;
	if (self->F_superClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_superClass)->clazz)->markFunction)((jobject) self->F_superClass, mark, depth + 1);
	if (self->F_interfaces)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interfaces)->clazz)->markFunction)((jobject) self->F_interfaces, mark, depth + 1);
	if (self->F_names)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_names)->clazz)->markFunction)((jobject) self->F_names, mark, depth + 1);
}

void clinit_rhino_JavaAdapter$JavaAdapterSignature(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_JavaAdapter$JavaAdapterSignature_java_lang_Class_Array1_java_lang_Class_rhino_ObjToIntMap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter$JavaAdapterSignature:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaAdapter$JavaAdapterSignature(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_superClass = (jref) (frame[1].o);
	LINE_NUMBER(21);
	((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_interfaces = (jref) (frame[2].o);
	LINE_NUMBER(22);
	((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_names = (jref) (frame[3].o);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_JavaAdapter$JavaAdapterSignature_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter$JavaAdapterSignature:equals", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_JavaAdapter$JavaAdapterSignature)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(29);
	frame[2].o = (checkCast(ctx, &class_rhino_JavaAdapter$JavaAdapterSignature, (frame[1].o)));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_superClass;
	sp[1].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[2].o)))->F_superClass;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_interfaces;
	sp[1].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[2].o)))->F_interfaces;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_interfaces;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[2].o)))->F_interfaces;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(35);
	frame[3].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_interfaces;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_interfaces;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	sp[1].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[2].o)))->F_interfaces;
	if (sp[0].o == ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i)))) goto label_12;
	}
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(35);
	INST_IINC(3, 1);
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_names;
	jint temp0 = (jint)((func_rhino_ObjToIntMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_size_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[2].o)))->F_names;
	jint temp1 = (jint)((func_rhino_ObjToIntMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_size_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_14;
	}
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(41);
	clinit_rhino_ObjToIntMap$Iterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ObjToIntMap$Iterator);
	sp[1].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_names;
	init_rhino_ObjToIntMap$Iterator_rhino_ObjToIntMap(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(42);
	((func_rhino_ObjToIntMap$Iterator_start) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_start])(ctx, (frame[3].o));
	}
label_17:;
	{
	jint temp0 = (jint)((func_rhino_ObjToIntMap$Iterator_done_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_done_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object])(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(44);
	jint temp0 = (jint)((func_rhino_ObjToIntMap$Iterator_getValue_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_getValue_R_int])(ctx, (frame[3].o));
	frame[5].i = temp0;
	LINE_NUMBER(45);
	jint temp1 = frame[5].i;
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[2].o)))->F_names;
	jint temp2 = (jint)((func_rhino_ObjToIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[4].o), ((frame[5].i) + (jint(1))));
	if (temp1 == temp2) goto label_22;
	}
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (jint(0));
	}
label_22:;
	{
	LINE_NUMBER(42);
	((func_rhino_ObjToIntMap$Iterator_next) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_next])(ctx, (frame[3].o));
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_rhino_JavaAdapter$JavaAdapterSignature_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaAdapter$JavaAdapterSignature:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_superClass;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_interfaces;
	jint temp1 = (jint)SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(ctx, sp[0].o);
	jint temp2 = temp0 + temp1;
	sp[0].o = (jobject)((rhino_JavaAdapter$JavaAdapterSignature *) NULL_CHECK((frame[0].o)))->F_names;
	jint temp3 = (jint)((func_rhino_ObjToIntMap_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp2 ^ temp3);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_JavaAdapter$JavaAdapterSignature[] {
	(void *) M_rhino_JavaAdapter$JavaAdapterSignature_hashCode_R_int,
	(void *) M_rhino_JavaAdapter$JavaAdapterSignature_equals_java_lang_Object_R_boolean,
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
	{ "superClass", &class_java_lang_Class, offsetof(rhino_JavaAdapter$JavaAdapterSignature, F_superClass), "Ljava/lang/Class;", 0 },
	{ "interfaces", getArrayClass(&class_java_lang_Class, 1), offsetof(rhino_JavaAdapter$JavaAdapterSignature, F_interfaces), "[Ljava/lang/Class;", 0 },
	{ "names", &class_rhino_ObjToIntMap, offsetof(rhino_JavaAdapter$JavaAdapterSignature, F_names), "Lrhino/ObjToIntMap;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_JavaAdapter$JavaAdapterSignature_java_lang_Class_Array1_java_lang_Class_rhino_ObjToIntMap, 0, "(Ljava/lang/Class;[Ljava/lang/Class;Lrhino/ObjToIntMap;)V", 0 },
	{ "equals", (intptr_t) M_rhino_JavaAdapter$JavaAdapterSignature_equals_java_lang_Object_R_boolean, VTABLE_rhino_JavaAdapter$JavaAdapterSignature_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_JavaAdapter$JavaAdapterSignature_hashCode_R_int, VTABLE_rhino_JavaAdapter$JavaAdapterSignature_hashCode_R_int, "()I", 1 },
};

Class class_rhino_JavaAdapter$JavaAdapterSignature{
		.nativeName = (intptr_t) "rhino/JavaAdapter$JavaAdapterSignature",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_JavaAdapter$JavaAdapterSignature),
		.classVtable = (intptr_t) vtable_rhino_JavaAdapter$JavaAdapterSignature,
		.staticInitializer = (intptr_t) clinit_rhino_JavaAdapter$JavaAdapterSignature,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_JavaAdapter$JavaAdapterSignature,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_JavaAdapter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_JavaAdapter$JavaAdapterSignature = registerClass(&class_rhino_JavaAdapter$JavaAdapterSignature);

}

