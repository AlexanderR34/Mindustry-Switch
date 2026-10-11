#include "mindustry/entities/comp/EntityComp.h"
#include "mindustry/entities/comp/EntityComp.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/Vars.h"
#include "arc/util/io/Writes.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/entities/units/UnitController.h"

extern "C" {


void mark_mindustry_entities_comp_EntityComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_EntityComp *) object;
}

void clinit_mindustry_entities_comp_EntityComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_EntityComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_EntityComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_entities_comp_EntityComp *) NULL_CHECK(sp[0].o))->F_id = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_EntityComp_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return ((jint)((mindustry_entities_comp_EntityComp *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_EntityComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:update", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(20);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_EntityComp_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	((mindustry_entities_comp_EntityComp *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_EntityComp_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:add", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	((mindustry_entities_comp_EntityComp *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_EntityComp_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController, (frame[1].o)))(ctx, (frame[1].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_EntityComp_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_EntityComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_EntityComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_EntityComp_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Entityc, (frame[0].o)));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_EntityComp_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_EntityComp_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:read", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	((func_mindustry_entities_comp_EntityComp_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_EntityComp_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_EntityComp_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_EntityComp_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_EntityComp_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_EntityComp_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/EntityComp:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_EntityComp[] {
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
	(void *) M_mindustry_entities_comp_EntityComp_isAdded_R_boolean,
	(void *) M_mindustry_entities_comp_EntityComp_update,
	(void *) M_mindustry_entities_comp_EntityComp_remove,
	(void *) M_mindustry_entities_comp_EntityComp_add,
	(void *) M_mindustry_entities_comp_EntityComp_isLocal_R_boolean,
	(void *) M_mindustry_entities_comp_EntityComp_isRemote_R_boolean,
	(void *) M_mindustry_entities_comp_EntityComp_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_entities_comp_EntityComp_as_R_java_lang_Object,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_EntityComp_read_arc_util_io_Reads,
	(void *) M_mindustry_entities_comp_EntityComp_write_arc_util_io_Writes,
	(void *) M_mindustry_entities_comp_EntityComp_beforeWrite,
	(void *) M_mindustry_entities_comp_EntityComp_afterRead,
	(void *) M_mindustry_entities_comp_EntityComp_afterReadAll,
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
	{ "isAdded", "()Z" },
	{ "update", "()V" },
	{ "remove", "()V" },
	{ "add", "()V" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "classId", "()I" },
	{ "serialize", "()Z" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "beforeWrite", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
};

static FieldMetadata fields[] {
	{ "added", &class_boolean, offsetof(mindustry_entities_comp_EntityComp, F_added), "Z", 130 },
	{ "id", &class_int, offsetof(mindustry_entities_comp_EntityComp, F_id), "I", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_EntityComp, 0, "()V", 0 },
	{ "isAdded", (intptr_t) M_mindustry_entities_comp_EntityComp_isAdded_R_boolean, VTABLE_mindustry_entities_comp_EntityComp_isAdded_R_boolean, "()Z", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_EntityComp_update, VTABLE_mindustry_entities_comp_EntityComp_update, "()V", 0 },
	{ "remove", (intptr_t) M_mindustry_entities_comp_EntityComp_remove, VTABLE_mindustry_entities_comp_EntityComp_remove, "()V", 0 },
	{ "add", (intptr_t) M_mindustry_entities_comp_EntityComp_add, VTABLE_mindustry_entities_comp_EntityComp_add, "()V", 0 },
	{ "isLocal", (intptr_t) M_mindustry_entities_comp_EntityComp_isLocal_R_boolean, VTABLE_mindustry_entities_comp_EntityComp_isLocal_R_boolean, "()Z", 0 },
	{ "isRemote", (intptr_t) M_mindustry_entities_comp_EntityComp_isRemote_R_boolean, VTABLE_mindustry_entities_comp_EntityComp_isRemote_R_boolean, "()Z", 0 },
	{ "self", (intptr_t) M_mindustry_entities_comp_EntityComp_self_R_mindustry_gen_Entityc, VTABLE_mindustry_entities_comp_EntityComp_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 0 },
	{ "as", (intptr_t) M_mindustry_entities_comp_EntityComp_as_R_java_lang_Object, VTABLE_mindustry_entities_comp_EntityComp_as_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
	{ "classId", 0, VTABLE_mindustry_entities_comp_EntityComp_classId_R_int, "()I", 1024 },
	{ "serialize", 0, VTABLE_mindustry_entities_comp_EntityComp_serialize_R_boolean, "()Z", 1024 },
	{ "read", (intptr_t) M_mindustry_entities_comp_EntityComp_read_arc_util_io_Reads, VTABLE_mindustry_entities_comp_EntityComp_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 0 },
	{ "write", (intptr_t) M_mindustry_entities_comp_EntityComp_write_arc_util_io_Writes, VTABLE_mindustry_entities_comp_EntityComp_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 0 },
	{ "beforeWrite", (intptr_t) M_mindustry_entities_comp_EntityComp_beforeWrite, VTABLE_mindustry_entities_comp_EntityComp_beforeWrite, "()V", 0 },
	{ "afterRead", (intptr_t) M_mindustry_entities_comp_EntityComp_afterRead, VTABLE_mindustry_entities_comp_EntityComp_afterRead, "()V", 0 },
	{ "afterReadAll", (intptr_t) M_mindustry_entities_comp_EntityComp_afterReadAll, VTABLE_mindustry_entities_comp_EntityComp_afterReadAll, "()V", 0 },
};

Class class_mindustry_entities_comp_EntityComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/EntityComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_EntityComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_EntityComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_EntityComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_EntityComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_EntityComp = registerClass(&class_mindustry_entities_comp_EntityComp);

}
