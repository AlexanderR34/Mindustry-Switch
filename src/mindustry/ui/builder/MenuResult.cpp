#include "mindustry/ui/builder/MenuResult.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/lang/Boolean.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Structs.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Float.h"
#include "mindustry/ui/builder/MenuResult.h"
#include "arc/struct/ObjectMap.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {

jint SF_mindustry_ui_builder_MenuResult_maxResultLen;
jint SF_mindustry_ui_builder_MenuResult_maxValueLen;
jint SF_mindustry_ui_builder_MenuResult_maxTotalStringLen;
jint SF_mindustry_ui_builder_MenuResult_maxTotalValues;

void mark_mindustry_ui_builder_MenuResult(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_builder_MenuResult *) object;
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_mindustry_ui_builder_MenuResult(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ui_builder_MenuResult_maxResultLen = jint(500);
	SF_mindustry_ui_builder_MenuResult_maxValueLen = jint(1000);
	SF_mindustry_ui_builder_MenuResult_maxTotalStringLen = jint(6000);
	SF_mindustry_ui_builder_MenuResult_maxTotalValues = jint(500);
}

void init_mindustry_ui_builder_MenuResult(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_MenuResult(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_result = (jref) (jobject(nullptr));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ui_builder_MenuResult *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_builder_MenuResult_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_MenuResult(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_result = (jref) (jobject(nullptr));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ui_builder_MenuResult *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(28);
	((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_builder_MenuResult_wasCancelled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:wasCancelled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_1;
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

jbool M_mindustry_ui_builder_MenuResult_is_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:is", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_result;
	jint temp0 = (jint)SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_MenuResult_getString_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:getString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_lang_String, (frame[4].o)));
	sp[0].o = frame[3].o;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ALOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_MenuResult_getString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:getString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_java_lang_String, (frame[3].o)));
	sp[0].o = frame[2].o;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ACONST_NULL();
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:getFloat", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Float)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_lang_Float, (frame[4].o)));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (frame[3].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_FLOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:getFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	jfloat temp0 = (jfloat)((func_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_float_R_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_builder_MenuResult_getBool_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:getBool", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_values;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_Boolean)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_lang_Boolean, (frame[4].o)));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ILOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_builder_MenuResult_getBool_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:getBool", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	jint temp0 = (jint)((func_mindustry_ui_builder_MenuResult_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_MenuResult_getBool_java_lang_String_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_MenuResult_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuResult:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	jlong temp0 = (jlong)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_token;
	sp[0].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = (jobject)((mindustry_ui_builder_MenuResult *) NULL_CHECK((frame[0].o)))->F_values;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"MenuResult{token=\u0001, result='\u0001', values=\u0001}"_j.string, 3, boxLong(ctx, temp0), sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_builder_MenuResult;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field result
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getString
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_builder_MenuResult[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ui_builder_MenuResult_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ui_builder_MenuResult_wasCancelled_R_boolean,
	(void *) M_mindustry_ui_builder_MenuResult_is_java_lang_String_R_boolean,
	(void *) M_mindustry_ui_builder_MenuResult_getString_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_ui_builder_MenuResult_getString_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_float_R_float,
	(void *) M_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_R_float,
	(void *) M_mindustry_ui_builder_MenuResult_getBool_java_lang_String_boolean_R_boolean,
	(void *) M_mindustry_ui_builder_MenuResult_getBool_java_lang_String_R_boolean,
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
	{ "wasCancelled", "()Z" },
	{ "is", "(Ljava/lang/String;)Z" },
	{ "getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "getString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getFloat", "(Ljava/lang/String;F)F" },
	{ "getFloat", "(Ljava/lang/String;)F" },
	{ "getBool", "(Ljava/lang/String;Z)Z" },
	{ "getBool", "(Ljava/lang/String;)Z" },
};

static FieldMetadata fields[] {
	{ "maxResultLen", &class_int, (intptr_t) &SF_mindustry_ui_builder_MenuResult_maxResultLen, "I", 25 },
	{ "maxValueLen", &class_int, (intptr_t) &SF_mindustry_ui_builder_MenuResult_maxValueLen, "I", 25 },
	{ "maxTotalStringLen", &class_int, (intptr_t) &SF_mindustry_ui_builder_MenuResult_maxTotalStringLen, "I", 25 },
	{ "maxTotalValues", &class_int, (intptr_t) &SF_mindustry_ui_builder_MenuResult_maxTotalValues, "I", 25 },
	{ "token", &class_long, offsetof(mindustry_ui_builder_MenuResult, F_token), "J", 1 },
	{ "result", &class_java_lang_String, offsetof(mindustry_ui_builder_MenuResult, F_result), "Ljava/lang/String;", 1 },
	{ "values", &class_arc_struct_ObjectMap, offsetof(mindustry_ui_builder_MenuResult, F_values), "Larc/struct/ObjectMap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_MenuResult, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_builder_MenuResult_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "wasCancelled", (intptr_t) M_mindustry_ui_builder_MenuResult_wasCancelled_R_boolean, VTABLE_mindustry_ui_builder_MenuResult_wasCancelled_R_boolean, "()Z", 1 },
	{ "is", (intptr_t) M_mindustry_ui_builder_MenuResult_is_java_lang_String_R_boolean, VTABLE_mindustry_ui_builder_MenuResult_is_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getString", (intptr_t) M_mindustry_ui_builder_MenuResult_getString_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_mindustry_ui_builder_MenuResult_getString_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getString", (intptr_t) M_mindustry_ui_builder_MenuResult_getString_java_lang_String_R_java_lang_String, VTABLE_mindustry_ui_builder_MenuResult_getString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getFloat", (intptr_t) M_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_float_R_float, VTABLE_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_float_R_float, "(Ljava/lang/String;F)F", 1 },
	{ "getFloat", (intptr_t) M_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_R_float, VTABLE_mindustry_ui_builder_MenuResult_getFloat_java_lang_String_R_float, "(Ljava/lang/String;)F", 1 },
	{ "getBool", (intptr_t) M_mindustry_ui_builder_MenuResult_getBool_java_lang_String_boolean_R_boolean, VTABLE_mindustry_ui_builder_MenuResult_getBool_java_lang_String_boolean_R_boolean, "(Ljava/lang/String;Z)Z", 1 },
	{ "getBool", (intptr_t) M_mindustry_ui_builder_MenuResult_getBool_java_lang_String_R_boolean, VTABLE_mindustry_ui_builder_MenuResult_getBool_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "toString", (intptr_t) M_mindustry_ui_builder_MenuResult_toString_R_java_lang_String, VTABLE_mindustry_ui_builder_MenuResult_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_ui_builder_MenuResult{
		.nativeName = (intptr_t) "mindustry/ui/builder/MenuResult",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_MenuResult),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_MenuResult,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_MenuResult,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_MenuResult,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_MenuResult = registerClass(&class_mindustry_ui_builder_MenuResult);

}
