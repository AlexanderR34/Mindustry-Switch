#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/entities/part/DrawPart_PartFunc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "java/lang/String.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "mindustry/entities/part/DrawPart_CompatFix.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/part/DrawPart_PartMove.h"
#include "mindustry/entities/part/DrawPart.h"

extern "C" {

jobject SF_mindustry_entities_part_DrawPart_params;

void mark_mindustry_entities_part_DrawPart(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_part_DrawPart_params)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_part_DrawPart_params)->clazz)->markFunction)((jobject) SF_mindustry_entities_part_DrawPart_params, mark, depth + 1);
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
	auto self = (mindustry_entities_part_DrawPart *) object;
}

void init_mindustry_entities_part_DrawPart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_under = (jint(0));
	LINE_NUMBER(16);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_weaponIndex = (jint(0));
	LINE_NUMBER(18);
	((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_recoilIndex = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_part_DrawPart_load_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart:load", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart:getOutlines", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_entities_part_DrawPart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart(ctx);
	{
	LINE_NUMBER(9);
	clinit_mindustry_entities_part_DrawPart$PartParams(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartParams);
	init_mindustry_entities_part_DrawPart$PartParams(ctx, sp[0].o);
	clinit_mindustry_entities_part_DrawPart(ctx);
	SF_mindustry_entities_part_DrawPart_params = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_part_DrawPart[] {
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
	(void *) nullptr,
	(void *) M_mindustry_entities_part_DrawPart_load_java_lang_String,
	(void *) M_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq,
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
	{ "draw", "(Lmindustry/entities/part/DrawPart$PartParams;)V" },
	{ "load", "(Ljava/lang/String;)V" },
	{ "getOutlines", "(Larc/struct/Seq;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_entities_part_DrawPart$PartParams,
	&class_mindustry_entities_part_DrawPart$CompatFix,
	&class_mindustry_entities_part_DrawPart$PartFunc,
	&class_mindustry_entities_part_DrawPart$PartProgress,
	&class_mindustry_entities_part_DrawPart$PartMove,
};

static FieldMetadata fields[] {
	{ "params", &class_mindustry_entities_part_DrawPart$PartParams, (intptr_t) &SF_mindustry_entities_part_DrawPart_params, "Lmindustry/entities/part/DrawPart$PartParams;", 25 },
	{ "turretShading", &class_boolean, offsetof(mindustry_entities_part_DrawPart, F_turretShading), "Z", 1 },
	{ "under", &class_boolean, offsetof(mindustry_entities_part_DrawPart, F_under), "Z", 1 },
	{ "weaponIndex", &class_int, offsetof(mindustry_entities_part_DrawPart, F_weaponIndex), "I", 1 },
	{ "recoilIndex", &class_int, offsetof(mindustry_entities_part_DrawPart, F_recoilIndex), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_part_DrawPart, 0, "()V", 1 },
	{ "draw", 0, VTABLE_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams, "(Lmindustry/entities/part/DrawPart$PartParams;)V", 1025 },
	{ "load", (intptr_t) M_mindustry_entities_part_DrawPart_load_java_lang_String, VTABLE_mindustry_entities_part_DrawPart_load_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getOutlines", (intptr_t) M_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq, VTABLE_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_part_DrawPart, 0, "()V", 8 },
};

Class class_mindustry_entities_part_DrawPart{
		.nativeName = (intptr_t) "mindustry/entities/part/DrawPart",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_part_DrawPart),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_DrawPart,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_DrawPart,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_part_DrawPart,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_DrawPart = registerClass(&class_mindustry_entities_part_DrawPart);

}
