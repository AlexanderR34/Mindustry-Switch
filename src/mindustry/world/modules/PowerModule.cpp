#include "mindustry/world/modules/PowerModule.h"
#include "arc/util/io/Reads.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "java/lang/Object.h"
#include "mindustry/world/modules/BlockModule.h"
#include "java/lang/Float.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/struct/IntSeq.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_modules_PowerModule(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_modules_BlockModule(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_modules_PowerModule *) object;
	if (self->F_graph)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_graph)->clazz)->markFunction)((jobject) self->F_graph, mark, depth + 1);
	if (self->F_links)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_links)->clazz)->markFunction)((jobject) self->F_links, mark, depth + 1);
}

void clinit_mindustry_world_modules_PowerModule(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_modules_BlockModule(ctx);
}

void init_mindustry_world_modules_PowerModule(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/PowerModule:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_modules_PowerModule(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_mindustry_world_modules_BlockModule(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[0].o)))->F_status = (jfloat(0));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[1].o);
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_PowerModule_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/PowerModule:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[0].o)))->F_links;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(21);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[0].o)))->F_links;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(22);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[0].o)))->F_links;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (frame[2].i));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(21);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(24);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[0].o)))->F_status));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_PowerModule_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/PowerModule:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[0].o)))->F_links;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(31);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[0].o)))->F_links;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(31);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = temp0;
	LINE_NUMBER(35);
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[0].o)))->F_status));
	if (temp1 != 0) goto label_8;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[0].o)))->F_status));
	if (temp0 == 0) goto label_9;
	}
label_8:;
	{
	((mindustry_world_modules_PowerModule *) NULL_CHECK((frame[0].o)))->F_status = (jfloat(0));
	}
label_9:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_modules_PowerModule[] {
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
	(void *) M_mindustry_world_modules_PowerModule_write_arc_util_io_Writes,
	(void *) M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads_boolean,
	(void *) M_mindustry_world_modules_PowerModule_read_arc_util_io_Reads,
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
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "read", "(Larc/util/io/Reads;Z)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
};

static FieldMetadata fields[] {
	{ "status", &class_float, offsetof(mindustry_world_modules_PowerModule, F_status), "F", 1 },
	{ "init", &class_boolean, offsetof(mindustry_world_modules_PowerModule, F_init), "Z", 1 },
	{ "graph", &class_mindustry_world_blocks_power_PowerGraph, offsetof(mindustry_world_modules_PowerModule, F_graph), "Lmindustry/world/blocks/power/PowerGraph;", 1 },
	{ "links", &class_arc_struct_IntSeq, offsetof(mindustry_world_modules_PowerModule, F_links), "Larc/struct/IntSeq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_modules_PowerModule, 0, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_world_modules_PowerModule_write_arc_util_io_Writes, VTABLE_mindustry_world_modules_PowerModule_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_modules_PowerModule_read_arc_util_io_Reads, VTABLE_mindustry_world_modules_PowerModule_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
};

Class class_mindustry_world_modules_PowerModule{
		.nativeName = (intptr_t) "mindustry/world/modules/PowerModule",
		.parentClass = (intptr_t) &class_mindustry_world_modules_BlockModule,
		.size = sizeof(mindustry_world_modules_PowerModule),
		.classVtable = (intptr_t) vtable_mindustry_world_modules_PowerModule,
		.staticInitializer = (intptr_t) clinit_mindustry_world_modules_PowerModule,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_modules_PowerModule,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_modules_PowerModule = registerClass(&class_mindustry_world_modules_PowerModule);

}
