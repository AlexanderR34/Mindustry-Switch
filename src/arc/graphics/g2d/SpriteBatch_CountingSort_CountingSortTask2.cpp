#include "arc/graphics/g2d/SpriteBatch_CountingSort_CountingSortTask2.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/SpriteBatch_CountingSort_CountingSortTask2.h"
#include "arc/graphics/g2d/SpriteBatch_CountingSort.h"
#include "java/lang/Runnable.h"

extern "C" {

jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_src;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_dest;

void mark_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_src)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_src)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_src, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_dest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_dest)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_dest, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2 *) object;
}

void clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$CountingSort$CountingSortTask2:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(664);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_set_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$CountingSort$CountingSortTask2:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(669);
	((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2 *) NULL_CHECK((frame[0].o)))->F_start = (frame[1].i);
	LINE_NUMBER(670);
	((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2 *) NULL_CHECK((frame[0].o)))->F_end = (frame[2].i);
	LINE_NUMBER(671);
	((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2 *) NULL_CHECK((frame[0].o)))->F_id = (frame[3].i);
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$CountingSort$CountingSortTask2:run", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(676);
	frame[1].i = ((jint)((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2 *) NULL_CHECK((frame[0].o)))->F_start);
	frame[2].i = ((jint)((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2 *) NULL_CHECK((frame[0].o)))->F_end);
	LINE_NUMBER(677);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2 *) NULL_CHECK((frame[0].o)))->F_id)));
	LINE_NUMBER(678);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_src;
	frame[4].o = sp[0].o;
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_dest;
	frame[5].o = sp[0].o;
	LINE_NUMBER(679);
	frame[6].i = ((frame[2].i) - (jint(1)));
	frame[7].i = ((frame[6].i) * (jint(3)));
	}
label_7:;
	{
	if ((frame[6].i) < (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(680);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[7].i));
	jint temp3 = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp3;
	frame[8].i = (temp3 * (jint(3)));
	LINE_NUMBER(681);
	ARRAY_ACCESS(jint, (frame[5].o), (frame[8].i)) = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[7].i)));
	LINE_NUMBER(682);
	ARRAY_ACCESS(jint, (frame[5].o), ((frame[8].i) + (jint(1)))) = ((jint)ARRAY_ACCESS(jint, (frame[4].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(683);
	ARRAY_ACCESS(jint, (frame[5].o), ((frame[8].i) + (jint(2)))) = ((jint)ARRAY_ACCESS(jint, (frame[4].o), ((frame[7].i) + (jint(2)))));
	LINE_NUMBER(679);
	INST_IINC(6, -1);
	INST_IINC(7, -3);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(685);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2[] {
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
	(void *) M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_run,
	(void *) M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_set_int_int_int,
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
	{ "run", "()V" },
	{ "set", "(III)V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "src", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_src, "[I", 8 },
	{ "dest", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_dest, "[I", 8 },
	{ "start", &class_int, offsetof(arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2, F_start), "I", 0 },
	{ "end", &class_int, offsetof(arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2, F_end), "I", 0 },
	{ "id", &class_int, offsetof(arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2, F_id), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2, 0, "()V", 0 },
	{ "set", (intptr_t) M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_set_int_int_int, VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_set_int_int_int, "(III)V", 1 },
	{ "run", (intptr_t) M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_run, VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_run, "()V", 1 },
};

Class class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2{
		.nativeName = (intptr_t) "arc/graphics/g2d/SpriteBatch$CountingSort$CountingSortTask2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_SpriteBatch$CountingSort,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2 = registerClass(&class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2);

}

