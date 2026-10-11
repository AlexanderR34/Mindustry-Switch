#include "regexodus/ConditionalExpr.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "regexodus/Group.h"
#include "regexodus/ConditionalExpr.h"
#include "regexodus/Lookbehind.h"
#include "java/lang/Class.h"
#include "regexodus/Term.h"
#include "regexodus/PatternSyntaxException.h"
#include "regexodus/Lookahead.h"

extern "C" {

jlong SF_regexodus_ConditionalExpr_serialVersionUID;

void mark_regexodus_ConditionalExpr(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_regexodus_Group(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (regexodus_ConditionalExpr *) object;
	if (self->F_node)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_node)->clazz)->markFunction)((jobject) self->F_node, mark, depth + 1);
}

void clinit_regexodus_ConditionalExpr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_regexodus_Group(ctx);
	SF_regexodus_ConditionalExpr_serialVersionUID = jlong(2528136757932720807ll);
}

void init_regexodus_ConditionalExpr_regexodus_Lookahead(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ConditionalExpr:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ConditionalExpr(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2099);
	init_regexodus_Group_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(2095);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_newBranchStarted = (jint(0));
	LINE_NUMBER(2096);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch = (jint(1));
	LINE_NUMBER(2106);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = (56);
	LINE_NUMBER(2107);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = (57);
	LINE_NUMBER(2108);
	if (((jint)((regexodus_Lookahead *) NULL_CHECK((frame[1].o)))->F_isPositive) == 0) goto label_6;
	}
	{
	LINE_NUMBER(2109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_ConditionalExpr *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(2110);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch = (jint(1));
	LINE_NUMBER(2113);
	sp[0].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_failNext = (jref) sp[1].o;
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(2115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_ConditionalExpr *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(2116);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch = (jint(0));
	LINE_NUMBER(2119);
	sp[0].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(2125);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	LINE_NUMBER(2126);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(2128);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(2130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_ConditionalExpr_regexodus_Lookbehind(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ConditionalExpr:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ConditionalExpr(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2133);
	init_regexodus_Group_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(2095);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_newBranchStarted = (jint(0));
	LINE_NUMBER(2096);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch = (jint(1));
	LINE_NUMBER(2140);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = (58);
	LINE_NUMBER(2141);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = (59);
	LINE_NUMBER(2142);
	if (((jint)((regexodus_Lookbehind *) NULL_CHECK((frame[1].o)))->F_isPositive) == 0) goto label_6;
	}
	{
	LINE_NUMBER(2143);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_in;
	((regexodus_ConditionalExpr *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(2144);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch = (jint(1));
	LINE_NUMBER(2147);
	sp[0].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_failNext = (jref) sp[1].o;
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(2149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out;
	((regexodus_ConditionalExpr *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[1].o;
	LINE_NUMBER(2150);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch = (jint(0));
	LINE_NUMBER(2153);
	sp[0].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(2156);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	LINE_NUMBER(2157);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(2159);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(2161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_ConditionalExpr_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ConditionalExpr:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_ConditionalExpr(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2164);
	init_regexodus_Group_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(2095);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_newBranchStarted = (jint(0));
	LINE_NUMBER(2096);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch = (jint(1));
	LINE_NUMBER(2165);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (55));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2166);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_memreg = (frame[1].i);
	LINE_NUMBER(2167);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out = (jref) (frame[2].o);
	LINE_NUMBER(2168);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(2169);
	((regexodus_Term *) NULL_CHECK((frame[2].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(2172);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_failNext = (jref) sp[1].o;
	LINE_NUMBER(2174);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	((regexodus_Term *) NULL_CHECK(sp[1].o))->F_current = (jref) sp[2].o;
	((regexodus_ConditionalExpr *) NULL_CHECK(sp[0].o))->F_node = (jref) sp[2].o;
	LINE_NUMBER(2175);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch = (jint(1));
	LINE_NUMBER(2177);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	LINE_NUMBER(2178);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(2180);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[2].o);
	LINE_NUMBER(2181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_ConditionalExpr_startNewBranch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ConditionalExpr:startNewBranch", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2184);
	if (((jint)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_newBranchStarted) == 0) goto label_1;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"attempt to set a 3'd choice in a conditional expr."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2185);
	sp[0].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_node;
	frame[1].o = sp[0].o;
	LINE_NUMBER(2186);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out1 = (jref) (jobject(nullptr));
	LINE_NUMBER(2187);
	if (((jint)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2188);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out = (jref) (jobject(nullptr));
	LINE_NUMBER(2189);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_branchOut = (jref) (frame[1].o);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(2191);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_out = (jref) (frame[1].o);
	LINE_NUMBER(2192);
	((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_branchOut = (jref) (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(2194);
	((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_newBranchStarted = (jint(1));
	LINE_NUMBER(2195);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(2196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_ConditionalExpr_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ConditionalExpr:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2200);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2201);
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
	LINE_NUMBER(2202);
	jint temp0 = (jint)M_regexodus_Term_equals_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(2204);
	frame[2].o = (checkCast(ctx, &class_regexodus_ConditionalExpr, (frame[1].o)));
	LINE_NUMBER(2206);
	if (((jint)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_newBranchStarted) != ((jint)((regexodus_ConditionalExpr *) NULL_CHECK((frame[2].o)))->F_newBranchStarted)) goto label_6;
	}
	{
	if (((jint)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch) != ((jint)((regexodus_ConditionalExpr *) NULL_CHECK((frame[2].o)))->F_linkAsBranch)) goto label_6;
	}
	{
	sp[0].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_node;
	sp[1].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[2].o)))->F_node;
	jint temp0 = (jint)((func_regexodus_Term_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	goto label_8;
label_7:;
	{
	sp[0].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[2].o)))->F_node;
	if (sp[0].o != nullptr) goto label_6;
	}
label_8:;
	INST_ICONST(1);
	goto label_9;
label_6:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_ConditionalExpr_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/ConditionalExpr:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2212);
	jint temp0 = (jint)M_regexodus_Term_hashCode_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(2213);
	jint temp1 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_node;
	jobject temp2 = sp[0].o;
	sp[0].i = temp1;
	sp += 1;
	if (temp2 == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_node;
	jint temp0 = (jint)((func_regexodus_Term_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2214);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_newBranchStarted) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2215);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_ConditionalExpr *) NULL_CHECK((frame[0].o)))->F_linkAsBranch) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2216);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_ConditionalExpr[] {
	(void *) M_regexodus_ConditionalExpr_hashCode_R_int,
	(void *) M_regexodus_ConditionalExpr_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_Term_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap,
	(void *) M_regexodus_Term_append_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Term_newBranch,
	(void *) M_regexodus_Term_close,
	(void *) M_regexodus_ConditionalExpr_startNewBranch,
	(void *) M_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int,
	(void *) M_regexodus_Term_toStringAll_R_java_lang_String,
	(void *) M_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String,
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
	{ "append", "(II[C[I[ILjava/util/ArrayList;Ljava/util/HashMap;)V" },
	{ "append", "(Lregexodus/Term;)Lregexodus/Term;" },
	{ "replaceCurrent", "(Lregexodus/Term;)Lregexodus/Term;" },
	{ "newBranch", "()V" },
	{ "close", "()V" },
	{ "startNewBranch", "()V" },
	{ "parseTerm", "([CIILregexodus/Term;I)I" },
	{ "toStringAll", "()Ljava/lang/String;" },
	{ "toStringAll", "(Ljava/util/ArrayList;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_ConditionalExpr_serialVersionUID, "J", 26 },
	{ "node", &class_regexodus_Term, offsetof(regexodus_ConditionalExpr, F_node), "Lregexodus/Term;", 2 },
	{ "newBranchStarted", &class_boolean, offsetof(regexodus_ConditionalExpr, F_newBranchStarted), "Z", 2 },
	{ "linkAsBranch", &class_boolean, offsetof(regexodus_ConditionalExpr, F_linkAsBranch), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_ConditionalExpr_regexodus_Lookahead, 0, "(Lregexodus/Lookahead;)V", 0 },
	{ "<init>", (intptr_t) init_regexodus_ConditionalExpr_regexodus_Lookbehind, 0, "(Lregexodus/Lookbehind;)V", 0 },
	{ "<init>", (intptr_t) init_regexodus_ConditionalExpr_int, 0, "(I)V", 0 },
	{ "startNewBranch", (intptr_t) M_regexodus_ConditionalExpr_startNewBranch, VTABLE_regexodus_ConditionalExpr_startNewBranch, "()V", 4 },
	{ "equals", (intptr_t) M_regexodus_ConditionalExpr_equals_java_lang_Object_R_boolean, VTABLE_regexodus_ConditionalExpr_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_ConditionalExpr_hashCode_R_int, VTABLE_regexodus_ConditionalExpr_hashCode_R_int, "()I", 1 },
};

Class class_regexodus_ConditionalExpr{
		.nativeName = (intptr_t) "regexodus/ConditionalExpr",
		.parentClass = (intptr_t) &class_regexodus_Group,
		.size = sizeof(regexodus_ConditionalExpr),
		.classVtable = (intptr_t) vtable_regexodus_ConditionalExpr,
		.staticInitializer = (intptr_t) clinit_regexodus_ConditionalExpr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_ConditionalExpr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_ConditionalExpr = registerClass(&class_regexodus_ConditionalExpr);

}
