#include "mindustry/entities/comp/TimedComp.h"
#include "java/lang/Math.h"
#include "mindustry/entities/comp/TimedComp.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Time.h"
#include "arc/math/Scaled.h"

extern "C" {


void mark_mindustry_entities_comp_TimedComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_TimedComp *) object;
}

void clinit_mindustry_entities_comp_TimedComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_TimedComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/TimedComp:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_TimedComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_TimedComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/TimedComp:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_TimedComp *) NULL_CHECK((frame[0].o)))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((jfloat)((mindustry_entities_comp_TimedComp *) NULL_CHECK((frame[0].o)))->F_lifetime));
	((mindustry_entities_comp_TimedComp *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(18);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_TimedComp *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((mindustry_entities_comp_TimedComp *) NULL_CHECK((frame[0].o)))->F_lifetime), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(19);
	((func_mindustry_entities_comp_TimedComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_TimedComp_remove])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_TimedComp_fin_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/TimedComp:fin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_entities_comp_TimedComp *) NULL_CHECK((frame[0].o)))->F_time) / ((jfloat)((mindustry_entities_comp_TimedComp *) NULL_CHECK((frame[0].o)))->F_lifetime));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_TimedComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_TimedComp_update,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_TimedComp_fin_R_float,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "fin", "()F" },
	{ "fout", "()F" },
	{ "fout", "(Larc/math/Interp;)F" },
	{ "fout", "(F)F" },
	{ "fin", "(Larc/math/Interp;)F" },
	{ "finpow", "()F" },
	{ "foutpow", "()F" },
	{ "finpowdown", "()F" },
	{ "foutpowdown", "()F" },
	{ "fslope", "()F" },
};

static jclass interfaces[] { &class_mindustry_gen_Entityc, &class_arc_math_Scaled, };

static FieldMetadata fields[] {
	{ "time", &class_float, offsetof(mindustry_entities_comp_TimedComp, F_time), "F", 0 },
	{ "lifetime", &class_float, offsetof(mindustry_entities_comp_TimedComp, F_lifetime), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_TimedComp, 0, "()V", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_TimedComp_update, VTABLE_mindustry_entities_comp_TimedComp_update, "()V", 1 },
	{ "fin", (intptr_t) M_mindustry_entities_comp_TimedComp_fin_R_float, VTABLE_mindustry_entities_comp_TimedComp_fin_R_float, "()F", 1 },
};

Class class_mindustry_entities_comp_TimedComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/TimedComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_TimedComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_TimedComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_TimedComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_TimedComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_TimedComp = registerClass(&class_mindustry_entities_comp_TimedComp);

}
