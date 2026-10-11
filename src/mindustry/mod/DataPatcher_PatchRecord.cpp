#include "mindustry/mod/DataPatcher_PatchRecord.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/mod/DataPatcher_PatchRecord.h"
#include "mindustry/mod/DataPatcher.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_mod_DataPatcher$PatchRecord(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_DataPatcher$PatchRecord *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_field)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field)->clazz)->markFunction)((jobject) self->F_field, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_mindustry_mod_DataPatcher$PatchRecord(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_DataPatcher$PatchRecord_java_lang_Object_java_lang_reflect_Field_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher$PatchRecord:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher$PatchRecord(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(898);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(899);
	((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(900);
	((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[0].o)))->F_field = (jref) (frame[2].o);
	LINE_NUMBER(901);
	((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[3].o);
	LINE_NUMBER(902);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_DataPatcher$PatchRecord_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher$PatchRecord:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(906);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(907);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(909);
	frame[2].o = (checkCast(ctx, &class_mindustry_mod_DataPatcher$PatchRecord, (frame[1].o)));
	LINE_NUMBER(910);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[2].o)))->F_target;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[0].o)))->F_field;
	sp[1].o = (jobject)((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[2].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_mod_DataPatcher$PatchRecord_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher$PatchRecord:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(915);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(916);
	jint temp1 = (31) * (frame[1].i);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$PatchRecord *) NULL_CHECK((frame[0].o)))->F_field;
	jint temp2 = (jint)((func_java_lang_reflect_Field_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_hashCode_R_int])(ctx, sp[0].o);
	frame[1].i = (temp1 + temp2);
	LINE_NUMBER(917);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_DataPatcher$PatchRecord[] {
	(void *) M_mindustry_mod_DataPatcher$PatchRecord_hashCode_R_int,
	(void *) M_mindustry_mod_DataPatcher$PatchRecord_equals_java_lang_Object_R_boolean,
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
	{ "target", &class_java_lang_Object, offsetof(mindustry_mod_DataPatcher$PatchRecord, F_target), "Ljava/lang/Object;", 0 },
	{ "field", &class_java_lang_reflect_Field, offsetof(mindustry_mod_DataPatcher$PatchRecord, F_field), "Ljava/lang/reflect/Field;", 0 },
	{ "value", &class_java_lang_Object, offsetof(mindustry_mod_DataPatcher$PatchRecord, F_value), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataPatcher$PatchRecord_java_lang_Object_java_lang_reflect_Field_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/reflect/Field;Ljava/lang/Object;)V", 0 },
	{ "equals", (intptr_t) M_mindustry_mod_DataPatcher$PatchRecord_equals_java_lang_Object_R_boolean, VTABLE_mindustry_mod_DataPatcher$PatchRecord_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_mindustry_mod_DataPatcher$PatchRecord_hashCode_R_int, VTABLE_mindustry_mod_DataPatcher$PatchRecord_hashCode_R_int, "()I", 1 },
};

Class class_mindustry_mod_DataPatcher$PatchRecord{
		.nativeName = (intptr_t) "mindustry/mod/DataPatcher$PatchRecord",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_DataPatcher$PatchRecord),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataPatcher$PatchRecord,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataPatcher$PatchRecord,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_DataPatcher$PatchRecord,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_mod_DataPatcher,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataPatcher$PatchRecord = registerClass(&class_mindustry_mod_DataPatcher$PatchRecord);

}

