#include "mindustry/editor/MapObjectivesDialog_TypeInfo.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/reflect/ParameterizedType.h"
#include "java/lang/reflect/GenericArrayType.h"
#include "mindustry/editor/MapObjectivesDialog.h"
#include "java/lang/reflect/Type.h"
#include "java/lang/reflect/TypeVariable.h"
#include "arc/util/Reflect.h"
#include "java/lang/Object.h"
#include "mindustry/editor/MapObjectivesDialog_TypeInfo.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/GenericDeclaration.h"
#include "java/lang/Class.h"
#include "arc/struct/ObjectMap.h"

extern "C" {


void mark_mindustry_editor_MapObjectivesDialog$TypeInfo(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapObjectivesDialog$TypeInfo *) object;
	if (self->F_raw)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_raw)->clazz)->markFunction)((jobject) self->F_raw, mark, depth + 1);
	if (self->F_element)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_element)->clazz)->markFunction)((jobject) self->F_element, mark, depth + 1);
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
}

void clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog$TypeInfo:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(787);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_getGenericType_R_java_lang_reflect_Type])(ctx, (frame[1].o));
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_java_lang_reflect_Type(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(788);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog$TypeInfo:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(791);
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_java_lang_reflect_Type(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	LINE_NUMBER(792);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_mindustry_editor_MapObjectivesDialog$TypeInfo(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog$TypeInfo:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(795);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(796);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class(ctx, (frame[1].o));
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[0].o))->F_raw = (jref) sp[1].o;
	LINE_NUMBER(797);
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[0].o)))->F_element = (jref) (frame[2].o);
	LINE_NUMBER(798);
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[0].o)))->F_key = (jref) (jobject(nullptr));
	LINE_NUMBER(799);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_java_lang_reflect_Type(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog$TypeInfo:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(801);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(802);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog_unbox_java_lang_Class_R_java_lang_Class(ctx, (frame[1].o));
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[0].o))->F_raw = (jref) sp[1].o;
	LINE_NUMBER(803);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(804);
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[0].o)))->F_key = (jref) (jobject(nullptr));
	LINE_NUMBER(805);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	sp[2].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[1].o));
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_reflect_GenericArrayType)) == 0) goto label_7;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_lang_reflect_GenericArrayType, (frame[2].o)));
	sp[0].o = (jobject)((func_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_GenericArrayType, INDEX_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type, (frame[3].o)))(ctx, (frame[3].o));
	sp += 1;
	goto label_9;
	}
label_7:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_9:;
	{
	sp -= 5;
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_java_lang_reflect_Type(ctx, sp[1].o, sp[3].o, sp[4].o);
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[0].o))->F_element = (jref) sp[1].o;
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(806);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_arc_struct_Seq)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_arc_struct_Seq)), (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(807);
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK((frame[0].o)))->F_key = (jref) (jobject(nullptr));
	LINE_NUMBER(808);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog$TypeInfo_getParam_java_lang_reflect_Type_int_R_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx, (frame[2].o), (jint(0)));
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[0].o))->F_element = (jref) sp[1].o;
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(809);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_arc_struct_ObjectMap)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_arc_struct_ObjectMap)), (frame[1].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(810);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog$TypeInfo_getParam_java_lang_reflect_Type_int_R_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx, (frame[2].o), (jint(0)));
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(811);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog$TypeInfo_getParam_java_lang_reflect_Type_int_R_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx, (frame[2].o), (jint(1)));
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[0].o))->F_element = (jref) sp[1].o;
	goto label_10;
	}
label_14:;
	{
	LINE_NUMBER(813);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[1].o))->F_element = (jref) sp[2].o;
	((mindustry_editor_MapObjectivesDialog$TypeInfo *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[2].o;
	}
label_10:;
	LINE_NUMBER(815);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog$TypeInfo_getParam_java_lang_reflect_Type_int_R_mindustry_editor_MapObjectivesDialog$TypeInfo(jcontext ctx, jobject param0, jint param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog$TypeInfo:getParam", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(819);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_reflect_ParameterizedType)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_java_lang_reflect_ParameterizedType, (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_reflect_ParameterizedType_getActualTypeArguments_R_Array1_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_ParameterizedType, INDEX_java_lang_reflect_ParameterizedType_getActualTypeArguments_R_Array1_java_lang_reflect_Type, (frame[4].o)))(ctx, (frame[4].o));
	sp += 1;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(820);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_reflect_GenericDeclaration)) == 0) goto label_4;
	}
	{
	frame[3].o = (checkCast(ctx, &class_java_lang_reflect_GenericDeclaration, (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_reflect_GenericDeclaration_getTypeParameters_R_Array1_java_lang_reflect_TypeVariable) resolveInterfaceMethod(ctx, &class_java_lang_reflect_GenericDeclaration, INDEX_java_lang_reflect_GenericDeclaration_getTypeParameters_R_Array1_java_lang_reflect_TypeVariable, (frame[3].o)))(ctx, (frame[3].o));
	sp += 1;
	goto label_3;
	}
label_4:;
	INST_ACONST_NULL();
label_3:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(822);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(823);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(824);
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	sp[1].o = (jobject)SM_mindustry_editor_MapObjectivesDialog$TypeInfo_raw_java_lang_reflect_Type_R_java_lang_Class(ctx, (frame[3].o));
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_java_lang_reflect_Type(ctx, sp[0].o, sp[1].o, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(827);
	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesDialog$TypeInfo);
	init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_java_lang_reflect_Type(ctx, sp[0].o, (((jobject) &class_java_lang_Object)), (((jobject) &class_java_lang_Object)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesDialog$TypeInfo_raw_java_lang_reflect_Type_R_java_lang_Class(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesDialog$TypeInfo:raw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesDialog$TypeInfo(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(831);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Class)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_java_lang_Class, (frame[0].o)));
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(832);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_reflect_ParameterizedType)) == 0) goto label_3;
	}
	{
	frame[1].o = (checkCast(ctx, &class_java_lang_reflect_ParameterizedType, (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_reflect_ParameterizedType_getRawType_R_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_ParameterizedType, INDEX_java_lang_reflect_ParameterizedType_getRawType_R_java_lang_reflect_Type, (frame[1].o)))(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	}
label_3:;
	{
	LINE_NUMBER(833);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_reflect_GenericArrayType)) == 0) goto label_5;
	}
	{
	frame[1].o = (checkCast(ctx, &class_java_lang_reflect_GenericArrayType, (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_GenericArrayType, INDEX_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog$TypeInfo_raw_java_lang_reflect_Type_R_java_lang_Class(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_util_Reflect_newArray_java_lang_Class_int_R_Array1_java_lang_Object(ctx, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(834);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_reflect_TypeVariable)) == 0) goto label_7;
	}
	{
	frame[1].o = (checkCast(ctx, &class_java_lang_reflect_TypeVariable, (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_reflect_TypeVariable_getBounds_R_Array1_java_lang_reflect_Type) resolveInterfaceMethod(ctx, &class_java_lang_reflect_TypeVariable, INDEX_java_lang_reflect_TypeVariable_getBounds_R_Array1_java_lang_reflect_Type, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_mindustry_editor_MapObjectivesDialog$TypeInfo_raw_java_lang_reflect_Type_R_java_lang_Class(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(835);
	popStackFrame(ctx);
	return (((jobject) &class_java_lang_Object));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapObjectivesDialog$TypeInfo[] {
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
	{ "raw", &class_java_lang_Class, offsetof(mindustry_editor_MapObjectivesDialog$TypeInfo, F_raw), "Ljava/lang/Class;", 17 },
	{ "element", &class_mindustry_editor_MapObjectivesDialog$TypeInfo, offsetof(mindustry_editor_MapObjectivesDialog$TypeInfo, F_element), "Lmindustry/editor/MapObjectivesDialog$TypeInfo;", 17 },
	{ "key", &class_mindustry_editor_MapObjectivesDialog$TypeInfo, offsetof(mindustry_editor_MapObjectivesDialog$TypeInfo, F_key), "Lmindustry/editor/MapObjectivesDialog$TypeInfo;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_reflect_Field, 0, "(Ljava/lang/reflect/Field;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class, 0, "(Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_mindustry_editor_MapObjectivesDialog$TypeInfo, 0, "(Ljava/lang/Class;Lmindustry/editor/MapObjectivesDialog$TypeInfo;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesDialog$TypeInfo_java_lang_Class_java_lang_reflect_Type, 0, "(Ljava/lang/Class;Ljava/lang/reflect/Type;)V", 1 },
	{ "getParam", (intptr_t) SM_mindustry_editor_MapObjectivesDialog$TypeInfo_getParam_java_lang_reflect_Type_int_R_mindustry_editor_MapObjectivesDialog$TypeInfo, 0, "(Ljava/lang/reflect/Type;I)Lmindustry/editor/MapObjectivesDialog$TypeInfo;", 9 },
	{ "raw", (intptr_t) SM_mindustry_editor_MapObjectivesDialog$TypeInfo_raw_java_lang_reflect_Type_R_java_lang_Class, 0, "(Ljava/lang/reflect/Type;)Ljava/lang/Class;", 9 },
};

Class class_mindustry_editor_MapObjectivesDialog$TypeInfo{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesDialog$TypeInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_MapObjectivesDialog$TypeInfo),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesDialog$TypeInfo,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesDialog$TypeInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesDialog$TypeInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_editor_MapObjectivesDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapObjectivesDialog$TypeInfo = registerClass(&class_mindustry_editor_MapObjectivesDialog$TypeInfo);

}

