#include "mindustry/io/TypeIO_BuildingBox.h"
#include "mindustry/io/TypeIO_Boxed.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/io/TypeIO_BuildingBox.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_io_TypeIO$BuildingBox(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_TypeIO$BuildingBox *) object;
}

void clinit_mindustry_io_TypeIO$BuildingBox(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_io_TypeIO$BuildingBox_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO$BuildingBox:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_TypeIO$BuildingBox(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1432);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1433);
	((mindustry_io_TypeIO$BuildingBox *) NULL_CHECK((frame[0].o)))->F_pos = (frame[1].i);
	LINE_NUMBER(1434);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_TypeIO$BuildingBox_unbox_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO$BuildingBox:unbox", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1438);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_io_TypeIO$BuildingBox *) NULL_CHECK((frame[0].o)))->F_pos));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_TypeIO$BuildingBox_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO$BuildingBox:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1443);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"BuildingBox{pos=\u0001}"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_io_TypeIO$BuildingBox *) NULL_CHECK((frame[0].o)))->F_pos)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_TypeIO$BuildingBox_unbox_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/TypeIO$BuildingBox:unbox", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1429);
	sp[0].o = (jobject)((func_mindustry_io_TypeIO$BuildingBox_unbox_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_TypeIO$BuildingBox_unbox_R_mindustry_gen_Building])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_TypeIO$BuildingBox[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_io_TypeIO$BuildingBox_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_io_TypeIO$BuildingBox_unbox_R_java_lang_Object,
	(void *) M_mindustry_io_TypeIO$BuildingBox_unbox_R_mindustry_gen_Building,
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
	{ "unbox", "()Ljava/lang/Object;" },
	{ "unbox", "()Lmindustry/gen/Building;" },
};

static jclass interfaces[] { &class_mindustry_io_TypeIO$Boxed, };

static FieldMetadata fields[] {
	{ "pos", &class_int, offsetof(mindustry_io_TypeIO$BuildingBox, F_pos), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_TypeIO$BuildingBox_int, 0, "(I)V", 1 },
	{ "unbox", (intptr_t) M_mindustry_io_TypeIO$BuildingBox_unbox_R_mindustry_gen_Building, VTABLE_mindustry_io_TypeIO$BuildingBox_unbox_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "toString", (intptr_t) M_mindustry_io_TypeIO$BuildingBox_toString_R_java_lang_String, VTABLE_mindustry_io_TypeIO$BuildingBox_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "unbox", (intptr_t) M_mindustry_io_TypeIO$BuildingBox_unbox_R_java_lang_Object, VTABLE_mindustry_io_TypeIO$BuildingBox_unbox_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_mindustry_io_TypeIO$BuildingBox{
		.nativeName = (intptr_t) "mindustry/io/TypeIO$BuildingBox",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_TypeIO$BuildingBox),
		.classVtable = (intptr_t) vtable_mindustry_io_TypeIO$BuildingBox,
		.staticInitializer = (intptr_t) clinit_mindustry_io_TypeIO$BuildingBox,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_TypeIO$BuildingBox,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_io_TypeIO,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_TypeIO$BuildingBox = registerClass(&class_mindustry_io_TypeIO$BuildingBox);

}

