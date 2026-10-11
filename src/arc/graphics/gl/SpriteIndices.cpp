#include "arc/graphics/gl/SpriteIndices.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/IndexData.h"
#include "arc/graphics/gl/SpriteIndices.h"
#include "arc/graphics/gl/SpriteIndices_1.h"

extern "C" {

jint SF_arc_graphics_gl_SpriteIndices_maxIndices;
jobject SF_arc_graphics_gl_SpriteIndices_indexData;

void mark_arc_graphics_gl_SpriteIndices(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_gl_SpriteIndices_indexData)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_SpriteIndices_indexData)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_SpriteIndices_indexData, mark, depth + 1);
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
	auto self = (arc_graphics_gl_SpriteIndices *) object;
}

void clinit_arc_graphics_gl_SpriteIndices(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_gl_SpriteIndices_maxIndices = jint(16384);
}

void init_arc_graphics_gl_SpriteIndices(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/SpriteIndices:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_SpriteIndices(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_gl_SpriteIndices_get_R_arc_graphics_gl_IndexData(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/SpriteIndices:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_SpriteIndices(ctx);
	{
	LINE_NUMBER(9);
	clinit_arc_graphics_gl_SpriteIndices(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_SpriteIndices_indexData;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(10);
	frame[0].i = (jint(0));
	LINE_NUMBER(11);
	sp[0].o = (jobject) createArray(ctx, &class_short, (jint(98304)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(12);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(13);
	ARRAY_ACCESS(jshort, (frame[1].o), (frame[2].i)) = (jshort((frame[0].i)));
	LINE_NUMBER(14);
	ARRAY_ACCESS(jshort, (frame[1].o), ((frame[2].i) + (jint(1)))) = (jshort(((frame[0].i) + (jint(1)))));
	LINE_NUMBER(15);
	ARRAY_ACCESS(jshort, (frame[1].o), ((frame[2].i) + (jint(2)))) = (jshort(((frame[0].i) + (jint(2)))));
	LINE_NUMBER(16);
	ARRAY_ACCESS(jshort, (frame[1].o), ((frame[2].i) + (jint(3)))) = (jshort(((frame[0].i) + (jint(2)))));
	LINE_NUMBER(17);
	ARRAY_ACCESS(jshort, (frame[1].o), ((frame[2].i) + (jint(4)))) = (jshort(((frame[0].i) + (jint(3)))));
	LINE_NUMBER(18);
	ARRAY_ACCESS(jshort, (frame[1].o), ((frame[2].i) + (jint(5)))) = (jshort((frame[0].i)));
	LINE_NUMBER(12);
	INST_IINC(2, 6);
	INST_IINC(0, 4);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(21);
	clinit_arc_graphics_gl_SpriteIndices$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_SpriteIndices$1);
	init_arc_graphics_gl_SpriteIndices$1_boolean_int(ctx, sp[0].o, (jint(1)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	clinit_arc_graphics_gl_SpriteIndices(ctx);
	SF_arc_graphics_gl_SpriteIndices_indexData = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_graphics_gl_SpriteIndices(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_SpriteIndices_indexData;
	((func_arc_graphics_gl_IndexData_set_Array1_short_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_gl_IndexData, INDEX_arc_graphics_gl_IndexData_set_Array1_short_int_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	}
label_1:;
	{
	LINE_NUMBER(30);
	clinit_arc_graphics_gl_SpriteIndices(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_SpriteIndices_indexData;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_SpriteIndices[] {
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
	{ "maxIndices", &class_int, (intptr_t) &SF_arc_graphics_gl_SpriteIndices_maxIndices, "I", 26 },
	{ "indexData", &class_arc_graphics_gl_IndexData, (intptr_t) &SF_arc_graphics_gl_SpriteIndices_indexData, "Larc/graphics/gl/IndexData;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_SpriteIndices, 0, "()V", 1 },
	{ "get", (intptr_t) SM_arc_graphics_gl_SpriteIndices_get_R_arc_graphics_gl_IndexData, 0, "()Larc/graphics/gl/IndexData;", 9 },
};

Class class_arc_graphics_gl_SpriteIndices{
		.nativeName = (intptr_t) "arc/graphics/gl/SpriteIndices",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_SpriteIndices),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_SpriteIndices,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_SpriteIndices,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_SpriteIndices,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_SpriteIndices = registerClass(&class_arc_graphics_gl_SpriteIndices);

}
