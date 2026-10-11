#include "arc/util/Select.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/util/Comparator.h"
#include "arc/util/QuickSelect.h"
#include "arc/util/Select.h"

extern "C" {

jobject SF_arc_util_Select_instance;

void mark_arc_util_Select(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Select_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Select_instance)->clazz)->markFunction)((jobject) SF_arc_util_Select_instance, mark, depth + 1);
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
	auto self = (arc_util_Select *) object;
	if (self->F_quickSelect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_quickSelect)->clazz)->markFunction)((jobject) self->F_quickSelect, mark, depth + 1);
}

void clinit_arc_util_Select(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Select(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Select:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Select(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Select_instance_R_arc_util_Select(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Select:instance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Select(ctx);
	{
	LINE_NUMBER(25);
	clinit_arc_util_Select(ctx);
	sp[0].o = (jobject)SF_arc_util_Select_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_arc_util_Select(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Select);
	init_arc_util_Select(ctx, sp[0].o);
	clinit_arc_util_Select(ctx);
	SF_arc_util_Select_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(26);
	clinit_arc_util_Select(ctx);
	sp[0].o = (jobject)SF_arc_util_Select_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Select:select", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)));
	}

	popStackFrame(ctx);
}

jint M_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Select:selectIndex", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(36);
	if ((frame[4].i) >= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(37);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cannot select from empty array (size < 1)"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(38);
	if ((frame[3].i) <= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(39);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Kth rank is larger than size. k: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(43);
	if ((frame[3].i) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)M_arc_util_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].i));
	frame[5].i = temp0;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(46);
	if ((frame[3].i) != (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(48);
	jint temp0 = (jint)M_arc_util_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].i));
	frame[5].i = temp0;
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_util_Select *) NULL_CHECK((frame[0].o)))->F_quickSelect;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_util_QuickSelect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_QuickSelect);
	init_arc_util_QuickSelect(ctx, sp[1].o);
	((arc_util_Select *) NULL_CHECK(sp[0].o))->F_quickSelect = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_util_Select *) NULL_CHECK((frame[0].o)))->F_quickSelect;
	jint temp0 = (jint)((func_arc_util_QuickSelect_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_QuickSelect_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	frame[5].i = temp0;
	}
label_8:;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint M_arc_util_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Select:fastMin", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(59);
	frame[4].i = (jint(0));
	LINE_NUMBER(60);
	frame[5].i = (jint(1));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[2].o)))(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	frame[6].i = temp0;
	LINE_NUMBER(62);
	if ((frame[6].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(63);
	frame[4].i = (frame[5].i);
	}
label_6:;
	{
	LINE_NUMBER(60);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint M_arc_util_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Select:fastMax", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(71);
	frame[4].i = (jint(0));
	LINE_NUMBER(72);
	frame[5].i = (jint(1));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[2].o)))(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	frame[6].i = temp0;
	LINE_NUMBER(74);
	if ((frame[6].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(75);
	frame[4].i = (frame[5].i);
	}
label_6:;
	{
	LINE_NUMBER(72);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Select[] {
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
	(void *) M_arc_util_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object,
	(void *) M_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int,
	(void *) M_arc_util_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int,
	(void *) M_arc_util_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int,
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
	{ "select", "([Ljava/lang/Object;Ljava/util/Comparator;II)Ljava/lang/Object;" },
	{ "selectIndex", "([Ljava/lang/Object;Ljava/util/Comparator;II)I" },
	{ "fastMin", "([Ljava/lang/Object;Ljava/util/Comparator;I)I" },
	{ "fastMax", "([Ljava/lang/Object;Ljava/util/Comparator;I)I" },
};

static FieldMetadata fields[] {
	{ "instance", &class_arc_util_Select, (intptr_t) &SF_arc_util_Select_instance, "Larc/util/Select;", 10 },
	{ "quickSelect", &class_arc_util_QuickSelect, offsetof(arc_util_Select, F_quickSelect), "Larc/util/QuickSelect;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Select, 0, "()V", 1 },
	{ "instance", (intptr_t) SM_arc_util_Select_instance_R_arc_util_Select, 0, "()Larc/util/Select;", 9 },
	{ "select", (intptr_t) M_arc_util_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object, VTABLE_arc_util_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object, "([Ljava/lang/Object;Ljava/util/Comparator;II)Ljava/lang/Object;", 1 },
	{ "selectIndex", (intptr_t) M_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int, VTABLE_arc_util_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int, "([Ljava/lang/Object;Ljava/util/Comparator;II)I", 1 },
	{ "fastMin", (intptr_t) M_arc_util_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int, VTABLE_arc_util_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int, "([Ljava/lang/Object;Ljava/util/Comparator;I)I", 2 },
	{ "fastMax", (intptr_t) M_arc_util_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int, VTABLE_arc_util_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int, "([Ljava/lang/Object;Ljava/util/Comparator;I)I", 2 },
};

Class class_arc_util_Select{
		.nativeName = (intptr_t) "arc/util/Select",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Select),
		.classVtable = (intptr_t) vtable_arc_util_Select,
		.staticInitializer = (intptr_t) clinit_arc_util_Select,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Select,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Select = registerClass(&class_arc_util_Select);

}
