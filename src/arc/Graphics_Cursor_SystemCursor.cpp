#include "arc/Graphics_Cursor_SystemCursor.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/Graphics_Cursor.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {

jobject SF_arc_Graphics$Cursor$SystemCursor_arrow;
jobject SF_arc_Graphics$Cursor$SystemCursor_ibeam;
jobject SF_arc_Graphics$Cursor$SystemCursor_crosshair;
jobject SF_arc_Graphics$Cursor$SystemCursor_hand;
jobject SF_arc_Graphics$Cursor$SystemCursor_horizontalResize;
jobject SF_arc_Graphics$Cursor$SystemCursor_verticalResize;
jobject SF_arc_Graphics$Cursor$SystemCursor_$VALUES;

void mark_arc_Graphics$Cursor$SystemCursor(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_Graphics$Cursor$SystemCursor_arrow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Graphics$Cursor$SystemCursor_arrow)->clazz)->markFunction)((jobject) SF_arc_Graphics$Cursor$SystemCursor_arrow, mark, depth + 1);
		if (SF_arc_Graphics$Cursor$SystemCursor_ibeam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Graphics$Cursor$SystemCursor_ibeam)->clazz)->markFunction)((jobject) SF_arc_Graphics$Cursor$SystemCursor_ibeam, mark, depth + 1);
		if (SF_arc_Graphics$Cursor$SystemCursor_crosshair)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Graphics$Cursor$SystemCursor_crosshair)->clazz)->markFunction)((jobject) SF_arc_Graphics$Cursor$SystemCursor_crosshair, mark, depth + 1);
		if (SF_arc_Graphics$Cursor$SystemCursor_hand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Graphics$Cursor$SystemCursor_hand)->clazz)->markFunction)((jobject) SF_arc_Graphics$Cursor$SystemCursor_hand, mark, depth + 1);
		if (SF_arc_Graphics$Cursor$SystemCursor_horizontalResize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Graphics$Cursor$SystemCursor_horizontalResize)->clazz)->markFunction)((jobject) SF_arc_Graphics$Cursor$SystemCursor_horizontalResize, mark, depth + 1);
		if (SF_arc_Graphics$Cursor$SystemCursor_verticalResize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Graphics$Cursor$SystemCursor_verticalResize)->clazz)->markFunction)((jobject) SF_arc_Graphics$Cursor$SystemCursor_verticalResize, mark, depth + 1);
		if (SF_arc_Graphics$Cursor$SystemCursor_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Graphics$Cursor$SystemCursor_$VALUES)->clazz)->markFunction)((jobject) SF_arc_Graphics$Cursor$SystemCursor_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_Graphics$Cursor$SystemCursor *) object;
	if (self->F_cursor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cursor)->clazz)->markFunction)((jobject) self->F_cursor, mark, depth + 1);
}

jobject SM_arc_Graphics$Cursor$SystemCursor_values_R_Array1_arc_Graphics$Cursor$SystemCursor(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics$Cursor$SystemCursor:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	{
	LINE_NUMBER(365);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[0].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_Graphics$Cursor$SystemCursor, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_Graphics$Cursor$SystemCursor_valueOf_java_lang_String_R_arc_Graphics$Cursor$SystemCursor(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics$Cursor$SystemCursor:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_Graphics$Cursor$SystemCursor)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_Graphics$Cursor$SystemCursor, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_Graphics$Cursor$SystemCursor_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics$Cursor$SystemCursor:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(365);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics$Cursor$SystemCursor:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(378);
	((arc_Graphics$Cursor$SystemCursor *) NULL_CHECK((frame[0].o)))->F_cursor = (jref) (frame[1].o);
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Graphics$Cursor$SystemCursor_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics$Cursor$SystemCursor:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((arc_Graphics$Cursor$SystemCursor *) NULL_CHECK((frame[0].o)))->F_cursor;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_Graphics$Cursor$SystemCursor *) NULL_CHECK((frame[0].o)))->F_cursor;
	if ((isInstance(ctx, sp[0].o, &class_arc_Graphics$Cursor$SystemCursor)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((arc_Graphics$Cursor$SystemCursor *) NULL_CHECK((frame[0].o)))->F_cursor;
	((func_arc_util_Disposable_dispose) resolveInterfaceMethod(ctx, &class_arc_util_Disposable, INDEX_arc_util_Disposable_dispose, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(385);
	((arc_Graphics$Cursor$SystemCursor *) NULL_CHECK((frame[0].o)))->F_cursor = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(387);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_Graphics$Cursor$SystemCursor_$values_R_Array1_arc_Graphics$Cursor$SystemCursor(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics$Cursor$SystemCursor:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)createArray(ctx, &class_arc_Graphics$Cursor$SystemCursor, (6));
	jint temp0 = jint(0);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_ibeam;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_crosshair;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_hand;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_horizontalResize;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_verticalResize;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_Graphics$Cursor$SystemCursor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics$Cursor$SystemCursor:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	{
	LINE_NUMBER(366);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Graphics$Cursor$SystemCursor);
	init_arc_Graphics$Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arrow"_j))), (jint(0)));
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	SF_arc_Graphics$Cursor$SystemCursor_arrow = sp[0].o;
	LINE_NUMBER(367);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Graphics$Cursor$SystemCursor);
	init_arc_Graphics$Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ibeam"_j))), (jint(1)));
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	SF_arc_Graphics$Cursor$SystemCursor_ibeam = sp[0].o;
	LINE_NUMBER(368);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Graphics$Cursor$SystemCursor);
	init_arc_Graphics$Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crosshair"_j))), (jint(2)));
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	SF_arc_Graphics$Cursor$SystemCursor_crosshair = sp[0].o;
	LINE_NUMBER(369);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Graphics$Cursor$SystemCursor);
	init_arc_Graphics$Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hand"_j))), (jint(3)));
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	SF_arc_Graphics$Cursor$SystemCursor_hand = sp[0].o;
	LINE_NUMBER(370);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Graphics$Cursor$SystemCursor);
	init_arc_Graphics$Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"horizontalResize"_j))), (jint(4)));
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	SF_arc_Graphics$Cursor$SystemCursor_horizontalResize = sp[0].o;
	LINE_NUMBER(371);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Graphics$Cursor$SystemCursor);
	init_arc_Graphics$Cursor$SystemCursor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"verticalResize"_j))), (jint(5)));
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	SF_arc_Graphics$Cursor$SystemCursor_verticalResize = sp[0].o;
	LINE_NUMBER(365);
	sp[0].o = (jobject)SM_arc_Graphics$Cursor$SystemCursor_$values_R_Array1_arc_Graphics$Cursor$SystemCursor(ctx);
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	SF_arc_Graphics$Cursor$SystemCursor_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_Graphics$Cursor$SystemCursor;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field cursor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_Graphics$Cursor$SystemCursor[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_arc_Graphics$Cursor$SystemCursor_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "set", "(Larc/Graphics$Cursor;)V" },
};

static jclass interfaces[] { &class_arc_Graphics$Cursor, };

static FieldMetadata fields[] {
	{ "arrow", &class_arc_Graphics$Cursor$SystemCursor, (intptr_t) &SF_arc_Graphics$Cursor$SystemCursor_arrow, "Larc/Graphics$Cursor$SystemCursor;", 16409 },
	{ "ibeam", &class_arc_Graphics$Cursor$SystemCursor, (intptr_t) &SF_arc_Graphics$Cursor$SystemCursor_ibeam, "Larc/Graphics$Cursor$SystemCursor;", 16409 },
	{ "crosshair", &class_arc_Graphics$Cursor$SystemCursor, (intptr_t) &SF_arc_Graphics$Cursor$SystemCursor_crosshair, "Larc/Graphics$Cursor$SystemCursor;", 16409 },
	{ "hand", &class_arc_Graphics$Cursor$SystemCursor, (intptr_t) &SF_arc_Graphics$Cursor$SystemCursor_hand, "Larc/Graphics$Cursor$SystemCursor;", 16409 },
	{ "horizontalResize", &class_arc_Graphics$Cursor$SystemCursor, (intptr_t) &SF_arc_Graphics$Cursor$SystemCursor_horizontalResize, "Larc/Graphics$Cursor$SystemCursor;", 16409 },
	{ "verticalResize", &class_arc_Graphics$Cursor$SystemCursor, (intptr_t) &SF_arc_Graphics$Cursor$SystemCursor_verticalResize, "Larc/Graphics$Cursor$SystemCursor;", 16409 },
	{ "cursor", &class_arc_Graphics$Cursor, offsetof(arc_Graphics$Cursor$SystemCursor, F_cursor), "Larc/Graphics$Cursor;", 0 },
	{ "$VALUES", getArrayClass(&class_arc_Graphics$Cursor$SystemCursor, 1), (intptr_t) &SF_arc_Graphics$Cursor$SystemCursor_$VALUES, "[Larc/Graphics$Cursor$SystemCursor;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_Graphics$Cursor$SystemCursor_values_R_Array1_arc_Graphics$Cursor$SystemCursor, 0, "()[Larc/Graphics$Cursor$SystemCursor;", 9 },
	{ "valueOf", (intptr_t) SM_arc_Graphics$Cursor$SystemCursor_valueOf_java_lang_String_R_arc_Graphics$Cursor$SystemCursor, 0, "(Ljava/lang/String;)Larc/Graphics$Cursor$SystemCursor;", 9 },
	{ "<init>", (intptr_t) init_arc_Graphics$Cursor$SystemCursor_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "set", (intptr_t) M_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor, VTABLE_arc_Graphics$Cursor$SystemCursor_set_arc_Graphics$Cursor, "(Larc/Graphics$Cursor;)V", 1 },
	{ "dispose", (intptr_t) M_arc_Graphics$Cursor$SystemCursor_dispose, VTABLE_arc_Graphics$Cursor$SystemCursor_dispose, "()V", 1 },
	{ "$values", (intptr_t) SM_arc_Graphics$Cursor$SystemCursor_$values_R_Array1_arc_Graphics$Cursor$SystemCursor, 0, "()[Larc/Graphics$Cursor$SystemCursor;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_Graphics$Cursor$SystemCursor, 0, "()V", 8 },
};

Class class_arc_Graphics$Cursor$SystemCursor{
		.nativeName = (intptr_t) "arc/Graphics$Cursor$SystemCursor",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_Graphics$Cursor$SystemCursor),
		.classVtable = (intptr_t) vtable_arc_Graphics$Cursor$SystemCursor,
		.staticInitializer = (intptr_t) clinit_arc_Graphics$Cursor$SystemCursor,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_Graphics$Cursor$SystemCursor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_Graphics$Cursor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Graphics$Cursor$SystemCursor = registerClass(&class_arc_Graphics$Cursor$SystemCursor);

}

