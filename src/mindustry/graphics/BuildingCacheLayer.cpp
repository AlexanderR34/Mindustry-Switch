#include "mindustry/graphics/BuildingCacheLayer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "mindustry/graphics/BuildingCacheLayer.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_graphics_BuildingCacheLayer_under;
jobject SF_mindustry_graphics_BuildingCacheLayer_normal;
jobject SF_mindustry_graphics_BuildingCacheLayer_all;
jint SF_mindustry_graphics_BuildingCacheLayer_amount;
jobject SF_mindustry_graphics_BuildingCacheLayer_layers;
jobject SF_mindustry_graphics_BuildingCacheLayer_$VALUES;

void mark_mindustry_graphics_BuildingCacheLayer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_BuildingCacheLayer_under)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_BuildingCacheLayer_under)->clazz)->markFunction)((jobject) SF_mindustry_graphics_BuildingCacheLayer_under, mark, depth + 1);
		if (SF_mindustry_graphics_BuildingCacheLayer_normal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_BuildingCacheLayer_normal)->clazz)->markFunction)((jobject) SF_mindustry_graphics_BuildingCacheLayer_normal, mark, depth + 1);
		if (SF_mindustry_graphics_BuildingCacheLayer_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_BuildingCacheLayer_all)->clazz)->markFunction)((jobject) SF_mindustry_graphics_BuildingCacheLayer_all, mark, depth + 1);
		if (SF_mindustry_graphics_BuildingCacheLayer_layers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_BuildingCacheLayer_layers)->clazz)->markFunction)((jobject) SF_mindustry_graphics_BuildingCacheLayer_layers, mark, depth + 1);
		if (SF_mindustry_graphics_BuildingCacheLayer_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_BuildingCacheLayer_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_graphics_BuildingCacheLayer_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_graphics_BuildingCacheLayer *) object;
}

jobject SM_mindustry_graphics_BuildingCacheLayer_values_R_Array1_mindustry_graphics_BuildingCacheLayer(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BuildingCacheLayer:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	{
	LINE_NUMBER(3);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_graphics_BuildingCacheLayer, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_BuildingCacheLayer_valueOf_java_lang_String_R_mindustry_graphics_BuildingCacheLayer(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BuildingCacheLayer:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_graphics_BuildingCacheLayer)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_graphics_BuildingCacheLayer, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_BuildingCacheLayer_java_lang_String_int_float(jcontext ctx, jobject self, jobject param0, jint param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BuildingCacheLayer:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(19);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(20);
	((mindustry_graphics_BuildingCacheLayer *) NULL_CHECK((frame[0].o)))->F_layer = (frame[3].f);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_BuildingCacheLayer_$values_R_Array1_mindustry_graphics_BuildingCacheLayer(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BuildingCacheLayer:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_BuildingCacheLayer, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_under;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_normal;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_BuildingCacheLayer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/BuildingCacheLayer:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_BuildingCacheLayer);
	init_mindustry_graphics_BuildingCacheLayer_java_lang_String_int_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"under"_j))), (jint(0)), (jfloat(29.5f)));
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	SF_mindustry_graphics_BuildingCacheLayer_under = sp[0].o;
	LINE_NUMBER(5);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_BuildingCacheLayer);
	init_mindustry_graphics_BuildingCacheLayer_java_lang_String_int_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"normal"_j))), (jint(1)), (jfloat(30.0f)));
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	SF_mindustry_graphics_BuildingCacheLayer_normal = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_mindustry_graphics_BuildingCacheLayer_$values_R_Array1_mindustry_graphics_BuildingCacheLayer(ctx);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	SF_mindustry_graphics_BuildingCacheLayer_$VALUES = sp[0].o;
	LINE_NUMBER(9);
	sp[0].o = (jobject)SM_mindustry_graphics_BuildingCacheLayer_values_R_Array1_mindustry_graphics_BuildingCacheLayer(ctx);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	SF_mindustry_graphics_BuildingCacheLayer_all = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_all;
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	SF_mindustry_graphics_BuildingCacheLayer_amount = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(11);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_all;
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	SF_mindustry_graphics_BuildingCacheLayer_layers = sp[0].o;
	LINE_NUMBER(14);
	frame[0].i = (jint(0));
	}
label_7:;
	{
	if ((frame[0].i) >= (clinit_mindustry_graphics_BuildingCacheLayer(ctx), (jint)SF_mindustry_graphics_BuildingCacheLayer_amount)) goto label_8;
	}
	{
	LINE_NUMBER(15);
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_layers;
	jint temp0 = frame[0].i;
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_all;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)((mindustry_graphics_BuildingCacheLayer *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[0].i)))))->F_layer);
	LINE_NUMBER(14);
	INST_IINC(0, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(17);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_BuildingCacheLayer[] {
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
};

static FieldMetadata fields[] {
	{ "under", &class_mindustry_graphics_BuildingCacheLayer, (intptr_t) &SF_mindustry_graphics_BuildingCacheLayer_under, "Lmindustry/graphics/BuildingCacheLayer;", 16409 },
	{ "normal", &class_mindustry_graphics_BuildingCacheLayer, (intptr_t) &SF_mindustry_graphics_BuildingCacheLayer_normal, "Lmindustry/graphics/BuildingCacheLayer;", 16409 },
	{ "layer", &class_float, offsetof(mindustry_graphics_BuildingCacheLayer, F_layer), "F", 17 },
	{ "all", getArrayClass(&class_mindustry_graphics_BuildingCacheLayer, 1), (intptr_t) &SF_mindustry_graphics_BuildingCacheLayer_all, "[Lmindustry/graphics/BuildingCacheLayer;", 25 },
	{ "amount", &class_int, (intptr_t) &SF_mindustry_graphics_BuildingCacheLayer_amount, "I", 25 },
	{ "layers", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_graphics_BuildingCacheLayer_layers, "[F", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_graphics_BuildingCacheLayer, 1), (intptr_t) &SF_mindustry_graphics_BuildingCacheLayer_$VALUES, "[Lmindustry/graphics/BuildingCacheLayer;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_graphics_BuildingCacheLayer_values_R_Array1_mindustry_graphics_BuildingCacheLayer, 0, "()[Lmindustry/graphics/BuildingCacheLayer;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_graphics_BuildingCacheLayer_valueOf_java_lang_String_R_mindustry_graphics_BuildingCacheLayer, 0, "(Ljava/lang/String;)Lmindustry/graphics/BuildingCacheLayer;", 9 },
	{ "<init>", (intptr_t) init_mindustry_graphics_BuildingCacheLayer_java_lang_String_int_float, 0, "(Ljava/lang/String;IF)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_graphics_BuildingCacheLayer_$values_R_Array1_mindustry_graphics_BuildingCacheLayer, 0, "()[Lmindustry/graphics/BuildingCacheLayer;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_BuildingCacheLayer, 0, "()V", 8 },
};

Class class_mindustry_graphics_BuildingCacheLayer{
		.nativeName = (intptr_t) "mindustry/graphics/BuildingCacheLayer",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_graphics_BuildingCacheLayer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_BuildingCacheLayer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_BuildingCacheLayer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_BuildingCacheLayer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_BuildingCacheLayer = registerClass(&class_mindustry_graphics_BuildingCacheLayer);

}
