#include "rhino/Parser_PerFunctionVariables.h"
#include "java/lang/Object.h"
#include "rhino/ast/ScriptNode.h"
#include "rhino/Parser.h"
#include "rhino/Parser_PerFunctionVariables.h"
#include "java/util/Map.h"
#include "rhino/ast/FunctionNode.h"
#include "java/util/List.h"
#include "rhino/ast/Scope.h"

extern "C" {


void mark_rhino_Parser$PerFunctionVariables(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Parser$PerFunctionVariables *) object;
	if (self->F_savedCurrentScriptOrFn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_savedCurrentScriptOrFn)->clazz)->markFunction)((jobject) self->F_savedCurrentScriptOrFn, mark, depth + 1);
	if (self->F_savedCurrentScope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_savedCurrentScope)->clazz)->markFunction)((jobject) self->F_savedCurrentScope, mark, depth + 1);
	if (self->F_savedLabelSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_savedLabelSet)->clazz)->markFunction)((jobject) self->F_savedLabelSet, mark, depth + 1);
	if (self->F_savedLoopSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_savedLoopSet)->clazz)->markFunction)((jobject) self->F_savedLoopSet, mark, depth + 1);
	if (self->F_savedLoopAndSwitchSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_savedLoopAndSwitchSet)->clazz)->markFunction)((jobject) self->F_savedLoopAndSwitchSet, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_rhino_Parser$PerFunctionVariables(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Parser$PerFunctionVariables_rhino_Parser_rhino_ast_FunctionNode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser$PerFunctionVariables:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser$PerFunctionVariables(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(3563);
	((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(3564);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[1].o)))->F_currentScriptOrFn;
	((rhino_Parser$PerFunctionVariables *) NULL_CHECK(sp[0].o))->F_savedCurrentScriptOrFn = (jref) sp[1].o;
	LINE_NUMBER(3565);
	((rhino_Parser *) NULL_CHECK((frame[1].o)))->F_currentScriptOrFn = (jref) (frame[2].o);
	LINE_NUMBER(3567);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK((frame[1].o)))->F_currentScope;
	((rhino_Parser$PerFunctionVariables *) NULL_CHECK(sp[0].o))->F_savedCurrentScope = (jref) sp[1].o;
	LINE_NUMBER(3568);
	((rhino_Parser *) NULL_CHECK((frame[1].o)))->F_currentScope = (jref) (frame[2].o);
	LINE_NUMBER(3570);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_Parser_access$200_rhino_Parser_R_java_util_Map(ctx, (frame[1].o));
	((rhino_Parser$PerFunctionVariables *) NULL_CHECK(sp[0].o))->F_savedLabelSet = (jref) sp[1].o;
	LINE_NUMBER(3571);
	sp[0].o = (jobject)SM_rhino_Parser_access$202_rhino_Parser_java_util_Map_R_java_util_Map(ctx, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(3573);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_Parser_access$300_rhino_Parser_R_java_util_List(ctx, (frame[1].o));
	((rhino_Parser$PerFunctionVariables *) NULL_CHECK(sp[0].o))->F_savedLoopSet = (jref) sp[1].o;
	LINE_NUMBER(3574);
	sp[0].o = (jobject)SM_rhino_Parser_access$302_rhino_Parser_java_util_List_R_java_util_List(ctx, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(3576);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_Parser_access$400_rhino_Parser_R_java_util_List(ctx, (frame[1].o));
	((rhino_Parser$PerFunctionVariables *) NULL_CHECK(sp[0].o))->F_savedLoopAndSwitchSet = (jref) sp[1].o;
	LINE_NUMBER(3577);
	sp[0].o = (jobject)SM_rhino_Parser_access$402_rhino_Parser_java_util_List_R_java_util_List(ctx, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(3579);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_rhino_Parser_access$500_rhino_Parser_R_int(ctx, (frame[1].o));
	((rhino_Parser$PerFunctionVariables *) NULL_CHECK(sp[0].o))->F_savedEndFlags = temp0;
	LINE_NUMBER(3580);
	jint temp1 = (jint)SM_rhino_Parser_access$502_rhino_Parser_int_R_int(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(3582);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_rhino_Parser_access$600_rhino_Parser_R_boolean(ctx, (frame[1].o));
	((rhino_Parser$PerFunctionVariables *) NULL_CHECK(sp[0].o))->F_savedInForInit = temp2;
	LINE_NUMBER(3583);
	jint temp3 = (jint)SM_rhino_Parser_access$602_rhino_Parser_boolean_R_boolean(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(3584);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Parser$PerFunctionVariables_restore(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser$PerFunctionVariables:restore", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3587);
	sp[0].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_savedCurrentScriptOrFn;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_currentScriptOrFn = (jref) sp[1].o;
	LINE_NUMBER(3588);
	sp[0].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_savedCurrentScope;
	((rhino_Parser *) NULL_CHECK(sp[0].o))->F_currentScope = (jref) sp[1].o;
	LINE_NUMBER(3589);
	sp[0].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_savedLabelSet;
	sp[0].o = (jobject)SM_rhino_Parser_access$202_rhino_Parser_java_util_Map_R_java_util_Map(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3590);
	sp[0].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_savedLoopSet;
	sp[0].o = (jobject)SM_rhino_Parser_access$302_rhino_Parser_java_util_List_R_java_util_List(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3591);
	sp[0].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_savedLoopAndSwitchSet;
	sp[0].o = (jobject)SM_rhino_Parser_access$402_rhino_Parser_java_util_List_R_java_util_List(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3592);
	sp[0].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_rhino_Parser_access$502_rhino_Parser_int_R_int(ctx, sp[0].o, ((jint)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_savedEndFlags));
	LINE_NUMBER(3593);
	sp[0].o = (jobject)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_rhino_Parser_access$602_rhino_Parser_boolean_R_boolean(ctx, sp[0].o, ((jint)((rhino_Parser$PerFunctionVariables *) NULL_CHECK((frame[0].o)))->F_savedInForInit));
	LINE_NUMBER(3594);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Parser$PerFunctionVariables[] {
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
	(void *) M_rhino_Parser$PerFunctionVariables_restore,
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
	{ "restore", "()V" },
};

static FieldMetadata fields[] {
	{ "savedCurrentScriptOrFn", &class_rhino_ast_ScriptNode, offsetof(rhino_Parser$PerFunctionVariables, F_savedCurrentScriptOrFn), "Lrhino/ast/ScriptNode;", 18 },
	{ "savedCurrentScope", &class_rhino_ast_Scope, offsetof(rhino_Parser$PerFunctionVariables, F_savedCurrentScope), "Lrhino/ast/Scope;", 18 },
	{ "savedEndFlags", &class_int, offsetof(rhino_Parser$PerFunctionVariables, F_savedEndFlags), "I", 18 },
	{ "savedInForInit", &class_boolean, offsetof(rhino_Parser$PerFunctionVariables, F_savedInForInit), "Z", 18 },
	{ "savedLabelSet", &class_java_util_Map, offsetof(rhino_Parser$PerFunctionVariables, F_savedLabelSet), "Ljava/util/Map;", 18 },
	{ "savedLoopSet", &class_java_util_List, offsetof(rhino_Parser$PerFunctionVariables, F_savedLoopSet), "Ljava/util/List;", 18 },
	{ "savedLoopAndSwitchSet", &class_java_util_List, offsetof(rhino_Parser$PerFunctionVariables, F_savedLoopAndSwitchSet), "Ljava/util/List;", 18 },
	{ "this$0", &class_rhino_Parser, offsetof(rhino_Parser$PerFunctionVariables, F_this$0), "Lrhino/Parser;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Parser$PerFunctionVariables_rhino_Parser_rhino_ast_FunctionNode, 0, "(Lrhino/Parser;Lrhino/ast/FunctionNode;)V", 0 },
	{ "restore", (intptr_t) M_rhino_Parser$PerFunctionVariables_restore, VTABLE_rhino_Parser$PerFunctionVariables_restore, "()V", 0 },
};

Class class_rhino_Parser$PerFunctionVariables{
		.nativeName = (intptr_t) "rhino/Parser$PerFunctionVariables",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Parser$PerFunctionVariables),
		.classVtable = (intptr_t) vtable_rhino_Parser$PerFunctionVariables,
		.staticInitializer = (intptr_t) clinit_rhino_Parser$PerFunctionVariables,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Parser$PerFunctionVariables,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Parser,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Parser$PerFunctionVariables = registerClass(&class_rhino_Parser$PerFunctionVariables);

}

