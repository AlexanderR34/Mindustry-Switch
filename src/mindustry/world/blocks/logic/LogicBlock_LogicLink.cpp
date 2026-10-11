#include "mindustry/world/blocks/logic/LogicBlock_LogicLink.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "mindustry/logic/LVar.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicLink.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Nullable.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/world/blocks/logic/LogicBlock.h"
#include "mindustry/gen/Building.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_world_blocks_logic_LogicBlock$LogicLink(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_logic_LogicBlock$LogicLink *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_lastBuild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastBuild)->clazz)->markFunction)((jobject) self->F_lastBuild, mark, depth + 1);
	if (self->F_logicVar)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_logicVar)->clazz)->markFunction)((jobject) self->F_logicVar, mark, depth + 1);
}

void clinit_mindustry_world_blocks_logic_LogicBlock$LogicLink(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_logic_LogicBlock$LogicLink_int_int_java_lang_String_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicLink:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicBlock$LogicLink(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(233);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(234);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(235);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(236);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[3].o);
	LINE_NUMBER(237);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_valid = (frame[4].i);
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicLink:trySet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_logicVar;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_logicVar;
	((func_mindustry_logic_LVar_setlink_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setlink_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK(sp[0].o))->F_logicVar = (jref) sp[1].o;
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_logicVar;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_logicVar;
	((func_mindustry_logic_LVar_setlink_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setlink_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	}
label_3:;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_LogicBlock$LogicLink_copy_R_mindustry_world_blocks_logic_LogicBlock$LogicLink(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicBlock$LogicLink:copy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	clinit_mindustry_world_blocks_logic_LogicBlock$LogicLink(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicBlock$LogicLink);
	jint temp0 = (jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_name;
	init_mindustry_world_blocks_logic_LogicBlock$LogicLink_int_int_java_lang_String_boolean(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((mindustry_world_blocks_logic_LogicBlock$LogicLink *) NULL_CHECK((frame[0].o)))->F_valid));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_logic_LogicBlock$LogicLink;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field logicVar
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_logic_LogicBlock$LogicLink[] {
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
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object,
	(void *) M_mindustry_world_blocks_logic_LogicBlock$LogicLink_copy_R_mindustry_world_blocks_logic_LogicBlock$LogicLink,
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
	{ "trySet", "(Lmindustry/logic/LExecutor;Ljava/lang/Object;)V" },
	{ "copy", "()Lmindustry/world/blocks/logic/LogicBlock$LogicLink;" },
};

static FieldMetadata fields[] {
	{ "valid", &class_boolean, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicLink, F_valid), "Z", 1 },
	{ "x", &class_int, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicLink, F_x), "I", 1 },
	{ "y", &class_int, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicLink, F_y), "I", 1 },
	{ "name", &class_java_lang_String, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicLink, F_name), "Ljava/lang/String;", 1 },
	{ "lastBuild", &class_mindustry_gen_Building, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicLink, F_lastBuild), "Lmindustry/gen/Building;", 1 },
	{ "logicVar", &class_mindustry_logic_LVar, offsetof(mindustry_world_blocks_logic_LogicBlock$LogicLink, F_logicVar), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_LogicBlock$LogicLink_int_int_java_lang_String_boolean, 0, "(IILjava/lang/String;Z)V", 1 },
	{ "trySet", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_trySet_mindustry_logic_LExecutor_java_lang_Object, "(Lmindustry/logic/LExecutor;Ljava/lang/Object;)V", 1 },
	{ "copy", (intptr_t) M_mindustry_world_blocks_logic_LogicBlock$LogicLink_copy_R_mindustry_world_blocks_logic_LogicBlock$LogicLink, VTABLE_mindustry_world_blocks_logic_LogicBlock$LogicLink_copy_R_mindustry_world_blocks_logic_LogicBlock$LogicLink, "()Lmindustry/world/blocks/logic/LogicBlock$LogicLink;", 1 },
};

Class class_mindustry_world_blocks_logic_LogicBlock$LogicLink{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/LogicBlock$LogicLink",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_logic_LogicBlock$LogicLink),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_LogicBlock$LogicLink,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_LogicBlock$LogicLink,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_LogicBlock$LogicLink,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_logic_LogicBlock,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_LogicBlock$LogicLink = registerClass(&class_mindustry_world_blocks_logic_LogicBlock$LogicLink);

}

