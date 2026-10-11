#include "regexodus/Matcher.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "regexodus/Matcher.h"
#include "regexodus/LAEntry.h"
#include "java/lang/Error.h"
#include "java/util/ArrayList.h"
#include "regexodus/Matcher_1.h"
#include "regexodus/Category.h"
#include "regexodus/Substitution.h"
#include "java/lang/String.h"
#include "regexodus/MatchIterator.h"
#include "java/util/Arrays.h"
#include "java/io/Reader.h"
#include "regexodus/MatchResult.h"
#include "java/lang/StringIndexOutOfBoundsException.h"
#include "regexodus/Pattern.h"
#include "regexodus/SearchEntry.h"
#include "java/lang/IllegalArgumentException.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/Replacer_StringBuilderBuffer.h"
#include "regexodus/Term.h"
#include "java/lang/CharSequence.h"
#include "regexodus/ds/IntBitSet.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "regexodus/PerlSubstitution.h"
#include "regexodus/MemReg.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "regexodus/Replacer.h"
#include "java/lang/System.h"

extern "C" {

jlong SF_regexodus_Matcher_serialVersionUID;
jint SF_regexodus_Matcher_ANCHOR_START;
jint SF_regexodus_Matcher_ANCHOR_LASTMATCH;
jint SF_regexodus_Matcher_ANCHOR_END;
jint SF_regexodus_Matcher_ACCEPT_INCOMPLETE;
jobject SF_regexodus_Matcher_startAnchor;
jobject SF_regexodus_Matcher_lastMatchAnchor;

void mark_regexodus_Matcher(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_regexodus_Matcher_startAnchor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Matcher_startAnchor)->clazz)->markFunction)((jobject) SF_regexodus_Matcher_startAnchor, mark, depth + 1);
		if (SF_regexodus_Matcher_lastMatchAnchor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_Matcher_lastMatchAnchor)->clazz)->markFunction)((jobject) SF_regexodus_Matcher_lastMatchAnchor, mark, depth + 1);
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
	auto self = (regexodus_Matcher *) object;
	if (self->F_re)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_re)->clazz)->markFunction)((jobject) self->F_re, mark, depth + 1);
	if (self->F_counters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_counters)->clazz)->markFunction)((jobject) self->F_counters, mark, depth + 1);
	if (self->F_memregs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_memregs)->clazz)->markFunction)((jobject) self->F_memregs, mark, depth + 1);
	if (self->F_lookaheads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lookaheads)->clazz)->markFunction)((jobject) self->F_lookaheads, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_top)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_top)->clazz)->markFunction)((jobject) self->F_top, mark, depth + 1);
	if (self->F_first)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_first)->clazz)->markFunction)((jobject) self->F_first, mark, depth + 1);
	if (self->F_defaultEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultEntry)->clazz)->markFunction)((jobject) self->F_defaultEntry, mark, depth + 1);
	if (self->F_cache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cache)->clazz)->markFunction)((jobject) self->F_cache, mark, depth + 1);
	if (self->F_prefixBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefixBounds)->clazz)->markFunction)((jobject) self->F_prefixBounds, mark, depth + 1);
	if (self->F_suffixBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suffixBounds)->clazz)->markFunction)((jobject) self->F_suffixBounds, mark, depth + 1);
	if (self->F_targetBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetBounds)->clazz)->markFunction)((jobject) self->F_targetBounds, mark, depth + 1);
}

jobject M_regexodus_Matcher_copy_R_regexodus_Matcher(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	clinit_regexodus_Matcher(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Matcher);
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	sp[2].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cache;
	init_regexodus_Matcher_regexodus_Pattern_java_lang_CharSequence(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(141);
	((regexodus_Matcher *) NULL_CHECK((frame[1].o)))->F_wEnd = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd);
	LINE_NUMBER(142);
	((regexodus_Matcher *) NULL_CHECK((frame[1].o)))->F_wOffset = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset);
	LINE_NUMBER(143);
	((regexodus_Matcher *) NULL_CHECK((frame[1].o)))->F_called = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called);
	LINE_NUMBER(144);
	((regexodus_Matcher *) NULL_CHECK((frame[1].o)))->F_offset = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(145);
	((regexodus_Matcher *) NULL_CHECK((frame[1].o)))->F_end = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void init_regexodus_Matcher(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(150);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Matcher_regexodus_Pattern(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(154);
	((func_regexodus_Matcher_setPattern_regexodus_Pattern) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setPattern_regexodus_Pattern])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Matcher_regexodus_Pattern_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(157);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(158);
	((func_regexodus_Matcher_setPattern_regexodus_Pattern) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setPattern_regexodus_Pattern])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(159);
	((func_regexodus_Matcher_setTarget_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_java_lang_CharSequence])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_setPattern_regexodus_Pattern(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:setPattern", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(168);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re = (jref) (frame[1].o);
	LINE_NUMBER(171);
	jint temp0 = (jint)((regexodus_Pattern *) NULL_CHECK((frame[1].o)))->F_memregs;
	frame[2].i = temp0;
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)createArray(ctx, &class_regexodus_MemReg, (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(173);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	clinit_regexodus_MemReg(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_MemReg);
	init_regexodus_MemReg_int(ctx, sp[1].o, (jint(-1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(173);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(176);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs = (jref) (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)((regexodus_Pattern *) NULL_CHECK((frame[1].o)))->F_counters;
	frame[3].i = temp0;
	if (temp0 <= 0) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_counters = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)((regexodus_Pattern *) NULL_CHECK((frame[1].o)))->F_lookaheads;
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_13;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)createArray(ctx, &class_regexodus_LAEntry, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(183);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_17;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	clinit_regexodus_LAEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_LAEntry);
	init_regexodus_LAEntry(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(183);
	INST_IINC(6, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(186);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_lookaheads = (jref) (frame[5].o);
	}
label_13:;
	{
	LINE_NUMBER(189);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregCount = (frame[2].i);
	LINE_NUMBER(190);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_counterCount = (frame[3].i);
	LINE_NUMBER(191);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_lookaheadCount = (frame[4].i);
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	clinit_regexodus_SearchEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[1].o);
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_first = (jref) sp[1].o;
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	clinit_regexodus_SearchEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[1].o);
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_defaultEntry = (jref) sp[1].o;
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[1].o)))->F_stringRepr;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_minQueueLength = (temp0 / (jint(2)));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_setTarget_regexodus_Matcher_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:setTarget", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(ctx, (frame[1].o), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(215);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"group #"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" is not assigned"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[1].o)))->F_data;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(217);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[3].o)))->F_in);
	LINE_NUMBER(218);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[3].o)))->F_out);
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[1].o)))->F_cache;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_cache = (jref) sp[1].o;
	LINE_NUMBER(220);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cacheLength = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[1].o)))->F_cacheLength);
	LINE_NUMBER(221);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cacheOffset = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[1].o)))->F_cacheOffset);
	LINE_NUMBER(222);
	if ((frame[1].o) == (frame[0].o)) goto label_9;
	}
	{
	LINE_NUMBER(223);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_shared = (jint(1));
	LINE_NUMBER(224);
	((regexodus_Matcher *) NULL_CHECK((frame[1].o)))->F_shared = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(226);
	M_regexodus_Matcher_init(ctx, (frame[0].o));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_setTarget_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:setTarget", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((func_regexodus_Matcher_setTarget_java_lang_CharSequence_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_setTarget_java_lang_CharSequence_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_setTarget_java_lang_CharSequence_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:setTarget", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	frame[4].o = sp[0].o;
	LINE_NUMBER(259);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_shared) != 0) goto label_2;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) >= (frame[3].i)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (jint(((jfloat(1.7f)) * (jfloat((frame[3].i)))))));
	frame[4].o = sp[1].o;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(261);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_shared = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(263);
	frame[5].i = (frame[2].i);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(264);
	sp[0].o = frame[4].o;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[5].i));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = temp1;
	LINE_NUMBER(263);
	INST_IINC(5, 1);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(267);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(268);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end = (frame[3].i);
	LINE_NUMBER(270);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cache = (jref) (frame[1].o);
	LINE_NUMBER(271);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cacheOffset = (-(frame[2].i));
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_cacheLength = temp0;
	LINE_NUMBER(274);
	M_regexodus_Matcher_init(ctx, (frame[0].o));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_setTarget_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:setTarget", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(290);
	((func_regexodus_Matcher_setTarget_Array1_char_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_Array1_char_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (jint(1)));
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_setTarget_Array1_char_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:setTarget", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(314);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cache = (jref) (jobject(nullptr));
	LINE_NUMBER(315);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(316);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset = (frame[2].i);
	LINE_NUMBER(317);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(318);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_shared = (frame[4].i);
	LINE_NUMBER(319);
	M_regexodus_Matcher_init(ctx, (frame[0].o));
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_setTarget_java_io_Reader_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:setTarget", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(336);
	if ((frame[2].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(337);
	((func_regexodus_Matcher_setAll_java_io_Reader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setAll_java_io_Reader])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	frame[3].o = sp[0].o;
	LINE_NUMBER(341);
	frame[4].i = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_shared);
	LINE_NUMBER(342);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_6;
	{
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) >= (frame[2].i)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(344);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(346);
	frame[5].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(348);
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, (frame[1].o), (frame[3].o), (frame[5].i), (frame[2].i));
	frame[6].i = temp0;
	if (temp0 < 0) goto label_11;
	}
	{
	LINE_NUMBER(349);
	frame[2].i = ((frame[2].i) - (frame[6].i));
	LINE_NUMBER(350);
	frame[5].i = ((frame[5].i) + (frame[6].i));
	LINE_NUMBER(351);
	if ((frame[2].i) != 0) goto label_9;
	}
	goto label_11;
label_11:;
	{
	LINE_NUMBER(353);
	((func_regexodus_Matcher_setTarget_Array1_char_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_Array1_char_int_int_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(0)), (frame[5].i), (frame[4].i));
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_setAll_java_io_Reader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:setAll", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	frame[2].o = sp[0].o;
	LINE_NUMBER(360);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_shared) == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(361);
	jint temp0 = 1024;
	frame[3].i = temp0;
	sp[0].o = (jobject) createArray(ctx, &class_char, temp0);
	frame[2].o = sp[0].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(362);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	LINE_NUMBER(363);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(365);
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, (frame[1].o), (frame[2].o), (frame[4].i), (frame[3].i));
	frame[5].i = temp0;
	if (temp0 < 0) goto label_8;
	}
	{
	LINE_NUMBER(366);
	frame[3].i = ((frame[3].i) - (frame[5].i));
	LINE_NUMBER(367);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(368);
	if ((frame[3].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(369);
	frame[6].i = ((frame[4].i) * (jint(3)));
	LINE_NUMBER(370);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(371);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[7].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(372);
	frame[2].o = (frame[7].o);
	LINE_NUMBER(373);
	frame[3].i = ((frame[6].i) - (frame[4].i));
	LINE_NUMBER(374);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(376);
	((func_regexodus_Matcher_setTarget_Array1_char_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_Array1_char_int_int_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(0)), (frame[4].i), (jint(0)));
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_getString_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:getString", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cache;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(385);
	frame[3].i = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cacheOffset);
	LINE_NUMBER(386);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, ((frame[1].i) - (frame[3].i)), ((frame[2].i) - (frame[3].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(389);
	frame[4].i = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset);
	frame[5].i = (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end) - (frame[4].i));
	LINE_NUMBER(390);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	frame[6].o = sp[0].o;
	LINE_NUMBER(391);
	if (((frame[2].i) - (frame[1].i)) < ((frame[5].i) / (jint(3)))) goto label_7;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[1].o, (frame[6].o));
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_cache = (jref) sp[1].o;
	LINE_NUMBER(394);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[6].o), (frame[4].i), (frame[5].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(395);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cacheOffset = (frame[4].i);
	LINE_NUMBER(396);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cacheLength = (frame[5].i);
	LINE_NUMBER(397);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(399);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[6].o), (frame[1].i), ((frame[2].i) - (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_matchesPrefix_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:matchesPrefix", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(427);
	((func_regexodus_Matcher_setPosition_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setPosition_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(428);
	jint temp0 = (jint)((func_regexodus_Matcher_search_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_search_int_R_boolean])(ctx, (frame[0].o), (13));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_isStart_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:isStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(438);
	jint temp0 = (jint)((func_regexodus_Matcher_matchesPrefix_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_matchesPrefix_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_matches_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:matches", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(459);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called) == 0) goto label_1;
	}
	{
	((func_regexodus_Matcher_setPosition_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setPosition_int])(ctx, (frame[0].o), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(460);
	jint temp0 = (jint)((func_regexodus_Matcher_search_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_search_int_R_boolean])(ctx, (frame[0].o), (jint(5)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_matches_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:matches", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(470);
	((func_regexodus_Matcher_setTarget_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_java_lang_CharSequence])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(471);
	jint temp0 = (jint)((func_regexodus_Matcher_search_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_search_int_R_boolean])(ctx, (frame[0].o), (jint(5)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_setPosition_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(482);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset = (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[1].i));
	LINE_NUMBER(483);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd = (jint(-1));
	LINE_NUMBER(484);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called = (jint(0));
	LINE_NUMBER(485);
	((func_regexodus_Matcher_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_flush])(ctx, (frame[0].o));
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_find_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:find", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(495);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_regexodus_Matcher_skip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_skip])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(496);
	jint temp0 = (jint)((func_regexodus_Matcher_search_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_search_int_R_boolean])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_find_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:find", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(507);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_regexodus_Matcher_skip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_skip])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(508);
	jint temp0 = (jint)((func_regexodus_Matcher_search_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_search_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_findAll_R_regexodus_MatchIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:findAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((func_regexodus_Matcher_findAll_int_R_regexodus_MatchIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_findAll_int_R_regexodus_MatchIterator])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_findAll_int_R_regexodus_MatchIterator(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:findAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(525);
	clinit_regexodus_Matcher$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Matcher$1);
	init_regexodus_Matcher$1_regexodus_Matcher_int(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_foundStrings_R_java_util_ArrayList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:foundStrings", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((func_regexodus_Matcher_findAll_R_regexodus_MatchIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_findAll_R_regexodus_MatchIterator])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_regexodus_MatchIterator_asList_R_java_util_ArrayList) resolveInterfaceMethod(ctx, &class_regexodus_MatchIterator, INDEX_regexodus_MatchIterator_asList_R_java_util_ArrayList, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_proceed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:proceed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(587);
	jint temp0 = (jint)((func_regexodus_Matcher_proceed_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_proceed_int_R_boolean])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_proceed_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:proceed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(627);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called) == 0) goto label_1;
	}
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(629);
	sp[0].o = frame[0].o;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_wOffset = (((jint)((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_wOffset) + (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(632);
	jint temp0 = (jint)((func_regexodus_Matcher_search_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_search_int_R_boolean])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_skip(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:skip", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(639);
	frame[1].i = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd);
	LINE_NUMBER(640);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset) != (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(643);
	sp[0].o = frame[0].o;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_wOffset = (((jint)((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_wOffset) + (jint(1)));
	LINE_NUMBER(644);
	((func_regexodus_Matcher_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_flush])(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(648);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(650);
	if ((frame[1].i) >= 0) goto label_7;
	}
	{
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset = (jint(0));
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(651);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset = (frame[1].i);
	}
label_8:;
	{
	LINE_NUMBER(654);
	((func_regexodus_Matcher_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_flush])(ctx, (frame[0].o));
	LINE_NUMBER(655);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(659);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(660);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd = (jint(-1));
	LINE_NUMBER(661);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called = (jint(0));
	LINE_NUMBER(662);
	((func_regexodus_Matcher_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_flush])(ctx, (frame[0].o));
	LINE_NUMBER(663);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:flush", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(669);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top = (jref) (jobject(nullptr));
	LINE_NUMBER(670);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_defaultEntry;
	((func_regexodus_SearchEntry_reset_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_reset_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(671);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_first;
	((func_regexodus_SearchEntry_reset_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_reset_int])(ctx, sp[0].o, ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_minQueueLength));
	LINE_NUMBER(673);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	frame[1].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_4:;
	INST_ILOAD(1);
	if ((--sp)->i <= 0) goto label_5;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(675);
	sp[0].o = frame[2].o;
	sp[1].o = frame[2].o;
	jint temp0 = jint(-1);
	((regexodus_MemReg *) NULL_CHECK(sp[1].o))->F_out = temp0;
	((regexodus_MemReg *) NULL_CHECK(sp[0].o))->F_in = temp0;
	LINE_NUMBER(673);
	INST_IINC(1, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(682);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called = (jint(0));
	LINE_NUMBER(683);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Matcher_rflush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:rflush", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top;
	frame[1].o = sp[0].o;
	LINE_NUMBER(690);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top = (jref) (jobject(nullptr));
	LINE_NUMBER(691);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	frame[2].o = sp[0].o;
	LINE_NUMBER(692);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_counters;
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(693);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(694);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[1].o)))->F_sub;
	frame[4].o = sp[0].o;
	LINE_NUMBER(695);
	SM_regexodus_SearchEntry_popState_regexodus_SearchEntry_Array1_regexodus_MemReg_Array1_int(ctx, (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(696);
	frame[1].o = (frame[4].o);
	LINE_NUMBER(697);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_defaultEntry;
	SM_regexodus_SearchEntry_popState_regexodus_SearchEntry_Array1_regexodus_MemReg_Array1_int(ctx, sp[0].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(699);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)M_regexodus_Matcher_toString_d_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_pattern_R_regexodus_Pattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:pattern", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(709);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_target_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:target", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)((func_regexodus_Matcher_getString_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getString_int_int_R_java_lang_String])(ctx, (frame[0].o), ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset), ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_targetChars_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:targetChars", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(719);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_shared = (jint(1));
	LINE_NUMBER(720);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_targetStart_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:targetStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(726);
	popStackFrame(ctx);
	return ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset);
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_targetEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:targetEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(732);
	popStackFrame(ctx);
	return ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end);
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_dataStart_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:dataStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_dataEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:dataEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

jchar M_regexodus_Matcher_charAt_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:charAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(748);
	frame[2].i = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset);
	LINE_NUMBER(749);
	frame[3].i = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd);
	LINE_NUMBER(750);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_4;
	}
label_3:;
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unassigned"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(751);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[2].i) + (frame[1].i))));
	}

	popStackFrame(ctx);
}

jchar M_regexodus_Matcher_charAt_int_int_R_char(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:charAt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(ctx, (frame[0].o), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(756);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"group #"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" is not assigned"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(757);
	frame[4].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[3].o)))->F_in);
	LINE_NUMBER(758);
	if ((frame[1].i) < 0) goto label_4;
	}
	{
	if ((frame[1].i) <= (((jint)((regexodus_MemReg *) NULL_CHECK((frame[3].o)))->F_out) - (frame[4].i))) goto label_5;
	}
label_4:;
	{
	clinit_java_lang_StringIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringIndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_StringIndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[4].i) + (frame[1].i))));
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:length", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(763);
	popStackFrame(ctx);
	return (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd) - ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset));
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_start_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:start", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset) - ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset));
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_end_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:end", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(779);
	popStackFrame(ctx);
	return (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd) - ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset));
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_prefix_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:prefix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(785);
	sp[0].o = (jobject)((func_regexodus_Matcher_getString_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getString_int_int_R_java_lang_String])(ctx, (frame[0].o), ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset), ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_suffix_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:suffix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((func_regexodus_Matcher_getString_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getString_int_int_R_java_lang_String])(ctx, (frame[0].o), ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd), ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_groupCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:groupCount", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(808);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	popStackFrame(ctx);
	return ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_group_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:group", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(839);
	sp[0].o = (jobject)M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(840);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(841);
	sp[0].o = (jobject)((func_regexodus_Matcher_getString_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getString_int_int_R_java_lang_String])(ctx, (frame[0].o), ((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_in), ((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_out));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_group_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:group", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(861);
	sp[0].o = (jobject)((func_regexodus_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_group_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_group_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:group", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	sp[0].o = (jobject)((func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(879);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"<"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"> isn't defined"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(880);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_regexodus_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:getGroup", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(884);
	jint temp0 = (jint)((func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:getGroup", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(887);
	sp[0].o = (jobject)M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(ctx, (frame[0].o), (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(888);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(889);
	frame[5].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[4].o)))->F_in);
	LINE_NUMBER(890);
	if ((frame[3].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(892);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	((func_regexodus_TextBuffer_append_Array1_char_int_int) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_Array1_char_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[5].i), (((jint)((regexodus_MemReg *) NULL_CHECK((frame[4].o)))->F_out) - (frame[5].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject) createArray(ctx, &class_char, (((jint)((regexodus_MemReg *) NULL_CHECK((frame[4].o)))->F_out) - (frame[5].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(898);
	if (((frame[3].i) & (jint(2))) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(900);
	frame[8].i = ((((jarray) nullCheck(ctx, (frame[6].o)))->length) - (jint(1)));
	frame[9].i = (frame[5].i);
	}
label_11:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_12;
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[9].i)));
	LINE_NUMBER(902);
	if (((frame[3].i) & (jint(1))) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(903);
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(904);
	if (((frame[3].i) & (8)) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(905);
	jint temp0 = (jint)SM_regexodus_Category_caseUp_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	}
label_17:;
	{
	LINE_NUMBER(906);
	if (((frame[3].i) & (jint(4))) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(907);
	jint temp0 = (jint)SM_regexodus_Category_matchBracket_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	}
label_19:;
	{
	LINE_NUMBER(908);
	ARRAY_ACCESS(jchar, (frame[6].o), (frame[8].i)) = (frame[7].i);
	LINE_NUMBER(900);
	INST_IINC(8, -1);
	INST_IINC(9, 1);
	goto label_11;
	}
label_12:;
	goto label_22;
label_8:;
	{
	LINE_NUMBER(913);
	frame[8].i = (jint(0));
	frame[9].i = (frame[5].i);
	}
label_24:;
	{
	if ((frame[8].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_22;
	}
	{
	LINE_NUMBER(914);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[9].i)));
	LINE_NUMBER(915);
	if (((frame[3].i) & (jint(1))) <= 0) goto label_27;
	}
	{
	LINE_NUMBER(916);
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(917);
	if (((frame[3].i) & (8)) <= 0) goto label_29;
	}
	{
	LINE_NUMBER(918);
	jint temp0 = (jint)SM_regexodus_Category_caseUp_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	}
label_29:;
	{
	LINE_NUMBER(919);
	if (((frame[3].i) & (jint(4))) <= 0) goto label_31;
	}
	{
	LINE_NUMBER(920);
	jint temp0 = (jint)SM_regexodus_Category_matchBracket_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	}
label_31:;
	{
	LINE_NUMBER(921);
	ARRAY_ACCESS(jchar, (frame[6].o), (frame[8].i)) = (frame[7].i);
	LINE_NUMBER(913);
	INST_IINC(8, 1);
	INST_IINC(9, 1);
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(924);
	((func_regexodus_TextBuffer_append_Array1_char_int_int) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_Array1_char_int_int, (frame[2].o)))(ctx, (frame[2].o), (frame[6].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	}
label_6:;
	{
	LINE_NUMBER(926);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:getGroup", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(930);
	jint temp0 = (jint)((func_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:getGroup", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(933);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	sp[0].o = (jobject)((func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(934);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown group: \""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(935);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean])(ctx, sp[0].o, temp0, (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:getGroup", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(939);
	jint temp0 = (jint)((func_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:getGroup", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(942);
	sp[0].o = (jobject)M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(ctx, (frame[0].o), (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(943);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(944);
	frame[5].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[4].o)))->F_in);
	LINE_NUMBER(945);
	if ((frame[3].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(947);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[5].i), (((jint)((regexodus_MemReg *) NULL_CHECK((frame[4].o)))->F_out) - (frame[5].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(951);
	sp[0].o = (jobject) createArray(ctx, &class_char, (((jint)((regexodus_MemReg *) NULL_CHECK((frame[4].o)))->F_out) - (frame[5].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(953);
	if (((frame[3].i) & (jint(2))) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(955);
	frame[8].i = ((((jarray) nullCheck(ctx, (frame[6].o)))->length) - (jint(1)));
	frame[9].i = (frame[5].i);
	}
label_11:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_12;
	{
	LINE_NUMBER(956);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[9].i)));
	LINE_NUMBER(957);
	if (((frame[3].i) & (jint(1))) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(958);
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(959);
	if (((frame[3].i) & (8)) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(960);
	jint temp0 = (jint)SM_regexodus_Category_caseUp_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	}
label_17:;
	{
	LINE_NUMBER(961);
	if (((frame[3].i) & (jint(4))) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(962);
	jint temp0 = (jint)SM_regexodus_Category_matchBracket_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	}
label_19:;
	{
	LINE_NUMBER(963);
	ARRAY_ACCESS(jchar, (frame[6].o), (frame[8].i)) = (frame[7].i);
	LINE_NUMBER(955);
	INST_IINC(8, -1);
	INST_IINC(9, 1);
	goto label_11;
	}
label_12:;
	goto label_22;
label_8:;
	{
	LINE_NUMBER(968);
	frame[8].i = (jint(0));
	frame[9].i = (frame[5].i);
	}
label_24:;
	{
	if ((frame[8].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_22;
	}
	{
	LINE_NUMBER(969);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[9].i)));
	LINE_NUMBER(970);
	if (((frame[3].i) & (jint(1))) <= 0) goto label_27;
	}
	{
	LINE_NUMBER(971);
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(972);
	if (((frame[3].i) & (8)) <= 0) goto label_29;
	}
	{
	LINE_NUMBER(973);
	jint temp0 = (jint)SM_regexodus_Category_caseUp_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	}
label_29:;
	{
	LINE_NUMBER(974);
	if (((frame[3].i) & (jint(4))) <= 0) goto label_31;
	}
	{
	LINE_NUMBER(975);
	jint temp0 = (jint)SM_regexodus_Category_matchBracket_char_R_char(ctx, (frame[7].i));
	frame[7].i = temp0;
	}
label_31:;
	{
	LINE_NUMBER(976);
	ARRAY_ACCESS(jchar, (frame[6].o), (frame[8].i)) = (frame[7].i);
	LINE_NUMBER(968);
	INST_IINC(8, 1);
	INST_IINC(9, 1);
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(979);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[6].o));
	}
label_6:;
	{
	LINE_NUMBER(981);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:getGroup", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(986);
	jint temp0 = (jint)((func_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:getGroup", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(989);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	sp[0].o = (jobject)((func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(990);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown group: \""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(991);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean])(ctx, sp[0].o, temp0, (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_groups_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:groups", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(997);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	frame[1].o = sp[0].o;
	LINE_NUMBER(998);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1001);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(1002);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(1003);
	frame[4].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[5].o)))->F_out);
	LINE_NUMBER(1004);
	jint temp0 = (jint)((regexodus_MemReg *) NULL_CHECK((frame[5].o)))->F_in;
	frame[3].i = temp0;
	if (temp0 < 0) goto label_9;
	}
	{
	if (((jint)((regexodus_MemReg *) NULL_CHECK((frame[5].o)))->F_out) >= (frame[3].i)) goto label_10;
	}
	goto label_9;
label_10:;
	{
	LINE_NUMBER(1005);
	sp[0].o = frame[2].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((func_regexodus_Matcher_getString_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getString_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[3].i), (frame[4].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(1001);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1007);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_groupv_R_java_util_ArrayList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:groupv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1013);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1014);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1016);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(1017);
	sp[0].o = (jobject)M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(ctx, (frame[0].o), (frame[4].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1018);
	if ((frame[3].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1019);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"empty"_j))));
	LINE_NUMBER(1020);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(1022);
	sp[0].o = (jobject)((func_regexodus_Matcher_getString_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getString_int_int_R_java_lang_String])(ctx, (frame[0].o), ((jint)((regexodus_MemReg *) NULL_CHECK((frame[3].o)))->F_in), ((jint)((regexodus_MemReg *) NULL_CHECK((frame[3].o)))->F_out));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1023);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[5].o));
	}
label_10:;
	{
	LINE_NUMBER(1016);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1025);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:bounds", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1030);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(1031);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(1032);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(1033);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(1034);
	switch((frame[1].i)) {
		case -3: goto label_7;
		case -2: goto label_8;
		case -1: goto label_9;
		default: goto label_10;
	}
	}
label_9:;
	{
	LINE_NUMBER(1036);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_prefixBounds;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1037);
	if ((frame[2].o) != nullptr) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	clinit_regexodus_MemReg(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_MemReg);
	init_regexodus_MemReg_int(ctx, sp[1].o, (jint(-1)));
	frame[2].o = sp[1].o;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_prefixBounds = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(1038);
	((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_in = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(1039);
	((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_out = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset);
	LINE_NUMBER(1040);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_suffixBounds;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1043);
	if ((frame[2].o) != nullptr) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	clinit_regexodus_MemReg(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_MemReg);
	init_regexodus_MemReg_int(ctx, sp[1].o, (-2));
	frame[2].o = sp[1].o;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_suffixBounds = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(1044);
	((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_in = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd);
	LINE_NUMBER(1045);
	((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_out = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end);
	LINE_NUMBER(1046);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1048);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_targetBounds;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1049);
	if ((frame[2].o) != nullptr) goto label_20;
	}
	{
	sp[0].o = frame[0].o;
	clinit_regexodus_MemReg(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_MemReg);
	init_regexodus_MemReg_int(ctx, sp[1].o, (-3));
	frame[2].o = sp[1].o;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_targetBounds = (jref) sp[1].o;
	}
label_20:;
	{
	LINE_NUMBER(1050);
	((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_in = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(1051);
	((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_out = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end);
	LINE_NUMBER(1052);
	goto label_6;
	}
label_10:;
	{
	LINE_NUMBER(1054);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"illegal group id: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"; must either nonnegative int, or MatchResult.PREFIX, or MatchResult.SUFFIX"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1057);
	jint temp0 = (jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_in;
	frame[3].i = temp0;
	if (temp0 < 0) goto label_24;
	}
	{
	if (((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_out) >= (frame[3].i)) goto label_25;
	}
label_24:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_25:;
	{
	LINE_NUMBER(1058);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_isCaptured_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:isCaptured", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1064);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset) < 0) goto label_1;
	}
	{
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd) < ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_isCaptured_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:isCaptured", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1070);
	sp[0].o = (jobject)M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(ctx, (frame[0].o), (frame[1].i));
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_isCaptured_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:isCaptured", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1076);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	sp[0].o = (jobject)((func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1077);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown group: \""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1078);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_regexodus_Matcher_isCaptured_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_isCaptured_int_R_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_length_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:length", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1084);
	sp[0].o = (jobject)M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1085);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1086);
	popStackFrame(ctx);
	return (((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_out) - ((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_in));
	}
label_2:;
	{
	LINE_NUMBER(1087);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_start_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:start", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1105);
	sp[0].o = (jobject)M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1106);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1107);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(1108);
	popStackFrame(ctx);
	return (((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_in) - ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset));
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_start_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:start", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1122);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	sp[0].o = (jobject)((func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1123);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"<"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"> isn't defined"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1124);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_regexodus_Matcher_start_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_start_int_R_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_end_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:end", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1138);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	sp[0].o = (jobject)((func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1139);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"<"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"> isn't defined"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1140);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_regexodus_Matcher_end_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_end_int_R_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_end_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:end", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1160);
	sp[0].o = (jobject)M_regexodus_Matcher_bounds_int_R_regexodus_MemReg(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1161);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1162);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(1163);
	popStackFrame(ctx);
	return (((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_out) - ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset));
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_search_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[38];
	auto stack = &frame[31];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:search", 38 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1167);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called = (jint(1));
	LINE_NUMBER(1168);
	frame[2].i = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end);
	LINE_NUMBER(1169);
	frame[3].i = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(1170);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1171);
	frame[5].i = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset);
	LINE_NUMBER(1172);
	frame[6].i = ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd);
	LINE_NUMBER(1174);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1175);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_counters;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1176);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_lookaheads;
	frame[9].o = sp[0].o;
	LINE_NUMBER(1181);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_defaultEntry;
	frame[10].o = sp[0].o;
	LINE_NUMBER(1182);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_first;
	frame[11].o = sp[0].o;
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1188);
	if (((frame[1].i) & (jint(4))) <= 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 1;
	frame[17].i = sp[0].i;
	LINE_NUMBER(1189);
	if (((frame[1].i) & (8)) <= 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[18].i = sp[0].i;
	LINE_NUMBER(1191);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	frame[19].o = sp[0].o;
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_root;
	frame[20].o = sp[0].o;
	LINE_NUMBER(1194);
	if ((frame[12].o) != nullptr) goto label_21;
	}
	{
	LINE_NUMBER(1195);
	if (((frame[1].i) & (jint(1))) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(1196);
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_root0;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1197);
	clinit_regexodus_Matcher(ctx);
	sp[0].o = (jobject)SF_regexodus_Matcher_startAnchor;
	frame[20].o = sp[0].o;
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(1198);
	if (((frame[1].i) & (jint(2))) <= 0) goto label_27;
	}
	{
	LINE_NUMBER(1199);
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_root0;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1200);
	clinit_regexodus_Matcher(ctx);
	sp[0].o = (jobject)SF_regexodus_Matcher_lastMatchAnchor;
	frame[20].o = sp[0].o;
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(1202);
	frame[21].o = (frame[20].o);
	}
label_26:;
	{
	LINE_NUMBER(1204);
	frame[16].i = (frame[5].i);
	LINE_NUMBER(1205);
	frame[13].o = (frame[11].o);
	LINE_NUMBER(1206);
	SM_regexodus_SearchEntry_popState_regexodus_SearchEntry_Array1_regexodus_MemReg_Array1_int(ctx, (frame[10].o), (frame[7].o), (frame[8].o));
	goto label_32;
	}
label_21:;
	{
	LINE_NUMBER(1208);
	sp[0].o = frame[12].o;
	frame[13].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_sub;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1209);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_term;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1210);
	frame[16].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index);
	LINE_NUMBER(1211);
	SM_regexodus_SearchEntry_popState_regexodus_SearchEntry_Array1_regexodus_MemReg_Array1_int(ctx, (frame[13].o), (frame[7].o), (frame[8].o));
	}
label_32:;
	{
	LINE_NUMBER(1213);
	frame[14].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt);
	LINE_NUMBER(1214);
	frame[15].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_regLen);
	}
label_38:;
	{
	LINE_NUMBER(1217);
	if ((frame[5].i) > (frame[2].i)) goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(1222);
	if ((frame[21].o) == nullptr) goto label_41;
	}
	{
	LINE_NUMBER(1223);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_type)) {
		case 0: goto label_43;
		case 1: goto label_44;
		case 2: goto label_45;
		case 3: goto label_46;
		case 4: goto label_47;
		case 5: goto label_48;
		case 6: goto label_49;
		case 7: goto label_49;
		case 8: goto label_50;
		case 9: goto label_51;
		case 10: goto label_52;
		case 11: goto label_53;
		case 12: goto label_54;
		case 13: goto label_55;
		case 14: goto label_56;
		case 15: goto label_57;
		case 16: goto label_58;
		case 17: goto label_59;
		case 18: goto label_60;
		case 19: goto label_61;
		case 20: goto label_62;
		case 21: goto label_63;
		case 22: goto label_64;
		case 23: goto label_65;
		case 24: goto label_66;
		case 25: goto label_67;
		case 26: goto label_68;
		case 27: goto label_69;
		case 28: goto label_70;
		case 29: goto label_71;
		case 30: goto label_72;
		case 31: goto label_73;
		case 32: goto label_74;
		case 33: goto label_75;
		case 34: goto label_76;
		case 35: goto label_77;
		case 36: goto label_78;
		case 37: goto label_79;
		case 38: goto label_80;
		case 39: goto label_81;
		case 40: goto label_78;
		case 41: goto label_82;
		case 42: goto label_80;
		case 43: goto label_77;
		case 44: goto label_83;
		case 45: goto label_84;
		case 46: goto label_85;
		case 47: goto label_86;
		case 48: goto label_87;
		case 49: goto label_88;
		case 50: goto label_89;
		case 51: goto label_90;
		case 52: goto label_91;
		case 53: goto label_92;
		case 54: goto label_93;
		case 55: goto label_94;
		case 56: goto label_95;
		case 57: goto label_78;
		case 58: goto label_96;
		case 59: goto label_78;
		default: goto label_46;
	}
	}
label_50:;
	{
	LINE_NUMBER(1225);
	sp[0].o = frame[4].o;
	jint temp0 = (frame[16].i) + ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_distance);
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_target;
	jint temp2 = (jint)SM_regexodus_Matcher_find_Array1_char_int_int_regexodus_Term_R_int(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[25].i = temp2;
	LINE_NUMBER(1226);
	if ((frame[25].i) >= 0) goto label_98;
	}
	goto label_39;
label_98:;
	{
	LINE_NUMBER(1227);
	frame[16].i = ((frame[16].i) + (frame[25].i));
	LINE_NUMBER(1228);
	frame[5].i = (frame[16].i);
	LINE_NUMBER(1229);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_eat) == 0) goto label_101;
	}
	{
	LINE_NUMBER(1230);
	if ((frame[16].i) != (frame[2].i)) goto label_103;
	}
	goto label_104;
label_103:;
	LINE_NUMBER(1231);
	INST_IINC(16, 1);
label_101:;
	{
	LINE_NUMBER(1233);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1234);
	goto label_40;
	}
label_51:;
	{
	LINE_NUMBER(1237);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_target;
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_memreg)));
	LINE_NUMBER(1238);
	frame[26].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_in);
	LINE_NUMBER(1239);
	frame[27].i = (((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_out) - (frame[26].i));
	LINE_NUMBER(1242);
	if ((frame[26].i) < 0) goto label_104;
	}
	INST_ILOAD(27);
	if ((--sp)->i >= 0) goto label_109;
	LINE_NUMBER(1243);
	goto label_104;
label_109:;
	{
	LINE_NUMBER(1244);
	if ((frame[27].i) != 0) goto label_111;
	}
	{
	LINE_NUMBER(1245);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1246);
	goto label_40;
	}
label_111:;
	{
	LINE_NUMBER(1248);
	sp[0].o = frame[4].o;
	jint temp0 = (frame[16].i) + ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_distance);
	jint temp1 = frame[26].i;
	jint temp2 = frame[27].i;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_target;
	jint temp3 = (jint)SM_regexodus_Matcher_findReg_Array1_char_int_int_int_regexodus_Term_int_R_int(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[2].i));
	frame[28].i = temp3;
	LINE_NUMBER(1249);
	if ((frame[28].i) >= 0) goto label_115;
	}
	goto label_39;
label_115:;
	{
	LINE_NUMBER(1250);
	frame[16].i = ((frame[16].i) + (frame[28].i));
	LINE_NUMBER(1251);
	frame[5].i = (frame[16].i);
	LINE_NUMBER(1252);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_eat) == 0) goto label_118;
	}
	{
	LINE_NUMBER(1253);
	frame[16].i = ((frame[16].i) + (frame[27].i));
	LINE_NUMBER(1254);
	if ((frame[16].i) <= (frame[2].i)) goto label_118;
	}
	goto label_104;
label_118:;
	{
	LINE_NUMBER(1256);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1257);
	goto label_40;
	}
label_59:;
	{
	LINE_NUMBER(1260);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1261);
	goto label_40;
	}
label_43:;
	{
	LINE_NUMBER(1266);
	if ((frame[16].i) >= (frame[2].i)) goto label_104;
	}
	{
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_123;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_124;
	}
label_123:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_124:;
	{
	sp -= 1;
	if (sp[0].i == ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_c)) goto label_125;
	}
	LINE_NUMBER(1267);
	goto label_104;
label_125:;
	{
	LINE_NUMBER(1268);
	INST_IINC(16, 1);
	LINE_NUMBER(1269);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1270);
	goto label_40;
	}
label_47:;
	{
	LINE_NUMBER(1275);
	if ((frame[16].i) < (frame[2].i)) goto label_129;
	}
	goto label_104;
label_129:;
	{
	LINE_NUMBER(1276);
	INST_IINC(16, 1);
	LINE_NUMBER(1277);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1278);
	goto label_40;
	}
label_48:;
	{
	LINE_NUMBER(1283);
	if ((frame[16].i) >= (frame[2].i)) goto label_104;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i));
	frame[24].i = temp0;
	if (temp0 == (13)) goto label_104;
	}
	{
	if ((frame[24].i) != (10)) goto label_133;
	}
	goto label_104;
label_133:;
	{
	LINE_NUMBER(1284);
	INST_IINC(16, 1);
	LINE_NUMBER(1285);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1286);
	goto label_40;
	}
label_61:;
	{
	LINE_NUMBER(1289);
	if ((frame[16].i) < (frame[2].i)) goto label_104;
	}
	{
	LINE_NUMBER(1290);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1291);
	goto label_40;
	}
label_62:;
	{
	LINE_NUMBER(1296);
	if ((frame[16].i) < (frame[2].i)) goto label_138;
	}
	{
	LINE_NUMBER(1297);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1298);
	goto label_40;
	}
label_138:;
	{
	LINE_NUMBER(1300);
	if ((frame[16].i) < (frame[2].i)) goto label_141;
	}
	INST_ICONST(1);
	goto label_142;
label_141:;
	INST_ICONST(0);
label_142:;
	{
	if (((frame[16].i) + (jint(1))) != (frame[2].i)) goto label_143;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i))) != (10)) goto label_143;
	}
	INST_ICONST(1);
	goto label_144;
label_143:;
	INST_ICONST(0);
label_144:;
	{
	sp -= 2;
	jint temp0 = sp[0].i | sp[1].i;
	sp[0].i = temp0;
	sp += 1;
	if (((frame[16].i) + (jint(2))) != (frame[2].i)) goto label_145;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i))) != (13)) goto label_145;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), ((frame[16].i) + (jint(1))))) != (10)) goto label_145;
	}
	INST_ICONST(1);
	goto label_146;
label_145:;
	INST_ICONST(0);
label_146:;
	{
	sp -= 2;
	frame[25].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(1305);
	if ((frame[25].i) == 0) goto label_104;
	}
	{
	LINE_NUMBER(1306);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1307);
	goto label_40;
	}
label_64:;
	{
	LINE_NUMBER(1312);
	if ((frame[16].i) < (frame[2].i)) goto label_150;
	}
	{
	LINE_NUMBER(1313);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1314);
	goto label_40;
	}
label_150:;
	{
	LINE_NUMBER(1324);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i));
	frame[24].i = temp0;
	if (temp0 == (10)) goto label_154;
	}
	{
	if ((frame[24].i) == (133)) goto label_154;
	}
	{
	if ((frame[24].i) == (8232)) goto label_154;
	}
	{
	if ((frame[24].i) == (8233)) goto label_154;
	}
	{
	if ((frame[16].i) >= ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)))) goto label_155;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), ((frame[16].i) + (jint(1))))) != (10)) goto label_155;
	}
	{
	if ((frame[24].i) == (13)) goto label_154;
	}
label_155:;
	{
	if ((frame[24].i) != (13)) goto label_104;
	}
label_154:;
	{
	LINE_NUMBER(1330);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1331);
	goto label_40;
	}
label_60:;
	{
	LINE_NUMBER(1337);
	if ((frame[16].i) != (frame[3].i)) goto label_157;
	}
	{
	LINE_NUMBER(1338);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1339);
	goto label_40;
	}
label_157:;
	{
	LINE_NUMBER(1359);
	if ((frame[12].o) == nullptr) goto label_160;
	}
	goto label_104;
label_160:;
	{
	LINE_NUMBER(1360);
	sp[0].o = frame[21].o;
	clinit_regexodus_Matcher(ctx);
	sp[1].o = (jobject)SF_regexodus_Matcher_startAnchor;
	if (sp[0].o == sp[1].o) goto label_39;
	}
	goto label_104;
label_65:;
	{
	LINE_NUMBER(1364);
	if ((frame[16].i) == (frame[6].i)) goto label_161;
	}
	{
	if ((frame[6].i) != (jint(-1))) goto label_39;
	}
	{
	if ((frame[16].i) != (frame[3].i)) goto label_39;
	}
label_161:;
	{
	LINE_NUMBER(1366);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1367);
	goto label_40;
	}
label_63:;
	{
	LINE_NUMBER(1372);
	if ((frame[16].i) != (frame[3].i)) goto label_163;
	}
	{
	LINE_NUMBER(1373);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1374);
	goto label_40;
	}
label_163:;
	{
	LINE_NUMBER(1375);
	if ((frame[16].i) >= (frame[2].i)) goto label_104;
	}
	{
	LINE_NUMBER(1385);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), ((frame[16].i) - (jint(1))));
	frame[24].i = temp0;
	if (temp0 == (10)) goto label_168;
	}
	{
	if ((frame[24].i) == (133)) goto label_168;
	}
	{
	if ((frame[24].i) == (8232)) goto label_168;
	}
	{
	if ((frame[24].i) == (8233)) goto label_168;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i))) != (10)) goto label_169;
	}
	{
	if ((frame[24].i) == (13)) goto label_168;
	}
label_169:;
	{
	if ((frame[24].i) != (13)) goto label_104;
	}
label_168:;
	{
	LINE_NUMBER(1391);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1392);
	goto label_40;
	}
label_44:;
	{
	LINE_NUMBER(1400);
	if ((frame[16].i) < (frame[2].i)) goto label_171;
	}
	goto label_104;
label_171:;
	{
	LINE_NUMBER(1401);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_172;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_173;
	}
label_172:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_173:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1402);
	if ((frame[24].i) > (255)) goto label_175;
	}
	{
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_bitset;
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, sp[0].o, (frame[24].i));
	if (temp0 != 0) goto label_176;
	}
label_175:;
	INST_ICONST(1);
	goto label_177;
label_176:;
	INST_ICONST(0);
label_177:;
	{
	sp -= 1;
	if ((sp[0].i ^ ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_inverse)) == 0) goto label_178;
	}
	goto label_104;
label_178:;
	{
	LINE_NUMBER(1403);
	INST_IINC(16, 1);
	LINE_NUMBER(1404);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1405);
	goto label_40;
	}
label_45:;
	{
	LINE_NUMBER(1410);
	if ((frame[16].i) < (frame[2].i)) goto label_181;
	}
	goto label_104;
label_181:;
	{
	LINE_NUMBER(1411);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_182;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_183;
	}
label_182:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_183:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1412);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_bitset2;
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[24].i) >> (8))));
	LINE_NUMBER(1413);
	if ((frame[25].o) == nullptr) goto label_104;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[25].o), ((frame[24].i) & (255)));
	if (temp0 != 0) goto label_186;
	}
	INST_ICONST(1);
	goto label_187;
label_186:;
	INST_ICONST(0);
label_187:;
	{
	sp -= 1;
	if ((sp[0].i ^ ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_inverse)) == 0) goto label_188;
	}
	goto label_104;
label_188:;
	{
	LINE_NUMBER(1414);
	INST_IINC(16, 1);
	LINE_NUMBER(1415);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1416);
	goto label_40;
	}
label_53:;
	{
	LINE_NUMBER(1419);
	frame[25].i = (jint(0));
	frame[26].i = (jint(0));
	LINE_NUMBER(1420);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_bitset;
	frame[27].o = sp[0].o;
	LINE_NUMBER(1423);
	frame[28].i = ((frame[16].i) - (jint(1)));
	LINE_NUMBER(1425);
	if ((frame[28].i) >= (frame[3].i)) goto label_195;
	}
	goto label_196;
label_195:;
	{
	LINE_NUMBER(1426);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_197;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[28].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_198;
	}
label_197:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[28].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_198:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1427);
	if ((frame[24].i) >= (256)) goto label_200;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[27].o), (frame[24].i));
	if (temp0 == 0) goto label_200;
	}
	INST_ICONST(1);
	goto label_201;
label_200:;
	INST_ICONST(0);
label_201:;
	INST_ISTORE(25);
label_196:;
	{
	LINE_NUMBER(1432);
	if ((frame[16].i) < (frame[2].i)) goto label_202;
	}
	goto label_203;
label_202:;
	{
	LINE_NUMBER(1433);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_204;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_205;
	}
label_204:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_205:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1434);
	if ((frame[24].i) >= (256)) goto label_207;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[27].o), (frame[24].i));
	if (temp0 == 0) goto label_207;
	}
	INST_ICONST(1);
	goto label_208;
label_207:;
	INST_ICONST(0);
label_208:;
	INST_ISTORE(26);
label_203:;
	{
	LINE_NUMBER(1436);
	if ((((frame[25].i) ^ (frame[26].i)) ^ ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_inverse)) == 0) goto label_104;
	}
	{
	LINE_NUMBER(1437);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1438);
	goto label_40;
	}
label_55:;
	{
	LINE_NUMBER(1442);
	frame[25].i = (jint(0));
	frame[26].i = (jint(0));
	LINE_NUMBER(1443);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_bitset2;
	frame[27].o = sp[0].o;
	LINE_NUMBER(1446);
	frame[28].i = ((frame[16].i) - (jint(1)));
	LINE_NUMBER(1448);
	if ((frame[28].i) >= (frame[3].i)) goto label_215;
	}
	goto label_216;
label_215:;
	{
	LINE_NUMBER(1449);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_217;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[28].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_218;
	}
label_217:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[28].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_218:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1450);
	frame[29].o = ((jobject)ARRAY_ACCESS(jobject, (frame[27].o), ((frame[24].i) >> (8))));
	LINE_NUMBER(1451);
	if ((frame[29].o) == nullptr) goto label_221;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[29].o), ((frame[24].i) & (255)));
	if (temp0 == 0) goto label_221;
	}
	INST_ICONST(1);
	goto label_222;
label_221:;
	INST_ICONST(0);
label_222:;
	INST_ISTORE(25);
label_216:;
	{
	LINE_NUMBER(1456);
	if ((frame[16].i) < (frame[2].i)) goto label_223;
	}
	goto label_224;
label_223:;
	{
	LINE_NUMBER(1457);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_225;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_226;
	}
label_225:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_226:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1458);
	frame[28].o = ((jobject)ARRAY_ACCESS(jobject, (frame[27].o), ((frame[24].i) >> (8))));
	LINE_NUMBER(1459);
	if ((frame[28].o) == nullptr) goto label_229;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[28].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[28].o), ((frame[24].i) & (255)));
	if (temp0 == 0) goto label_229;
	}
	INST_ICONST(1);
	goto label_230;
label_229:;
	INST_ICONST(0);
label_230:;
	INST_ISTORE(26);
label_224:;
	{
	LINE_NUMBER(1461);
	if ((((frame[25].i) ^ (frame[26].i)) ^ ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_inverse)) == 0) goto label_104;
	}
	{
	LINE_NUMBER(1462);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1463);
	goto label_40;
	}
label_54:;
	{
	LINE_NUMBER(1467);
	frame[25].i = (jint(0));
	frame[26].i = (jint(0));
	LINE_NUMBER(1468);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_bitset;
	frame[27].o = sp[0].o;
	LINE_NUMBER(1469);
	frame[28].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_inverse);
	LINE_NUMBER(1470);
	frame[29].i = ((frame[16].i) - (jint(1)));
	LINE_NUMBER(1472);
	if ((frame[29].i) < (frame[3].i)) goto label_238;
	}
	{
	LINE_NUMBER(1473);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_240;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[29].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_241;
	}
label_240:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[29].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_241:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1474);
	if ((frame[24].i) >= (256)) goto label_243;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[27].o), (frame[24].i));
	if (temp0 == 0) goto label_243;
	}
	INST_ICONST(1);
	goto label_244;
label_243:;
	INST_ICONST(0);
label_244:;
	INST_ISTORE(25);
label_238:;
	{
	LINE_NUMBER(1476);
	if (((frame[25].i) ^ (frame[28].i)) == 0) goto label_245;
	}
	goto label_104;
label_245:;
	{
	LINE_NUMBER(1479);
	if ((frame[16].i) >= (frame[2].i)) goto label_246;
	}
	{
	LINE_NUMBER(1480);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_248;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_249;
	}
label_248:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_249:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1481);
	if ((frame[24].i) >= (256)) goto label_251;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[27].o), (frame[24].i));
	if (temp0 == 0) goto label_251;
	}
	INST_ICONST(1);
	goto label_252;
label_251:;
	INST_ICONST(0);
label_252:;
	INST_ISTORE(26);
label_246:;
	{
	LINE_NUMBER(1483);
	if ((frame[26].i) != 0) goto label_253;
	}
	INST_ICONST(1);
	goto label_254;
label_253:;
	INST_ICONST(0);
label_254:;
	{
	sp -= 1;
	if ((sp[0].i ^ (frame[28].i)) == 0) goto label_255;
	}
	goto label_104;
label_255:;
	{
	LINE_NUMBER(1486);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1487);
	goto label_40;
	}
label_56:;
	{
	LINE_NUMBER(1490);
	frame[25].i = (jint(0));
	frame[26].i = (jint(0));
	LINE_NUMBER(1491);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_bitset2;
	frame[27].o = sp[0].o;
	LINE_NUMBER(1492);
	frame[28].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_inverse);
	LINE_NUMBER(1493);
	frame[29].i = ((frame[16].i) - (jint(1)));
	LINE_NUMBER(1496);
	if ((frame[29].i) < (frame[3].i)) goto label_262;
	}
	{
	LINE_NUMBER(1497);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_264;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[29].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_265;
	}
label_264:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[29].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_265:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1498);
	frame[30].o = ((jobject)ARRAY_ACCESS(jobject, (frame[27].o), ((frame[24].i) >> (8))));
	LINE_NUMBER(1499);
	if ((frame[30].o) == nullptr) goto label_268;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[30].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[30].o), ((frame[24].i) & (255)));
	if (temp0 == 0) goto label_268;
	}
	INST_ICONST(1);
	goto label_269;
label_268:;
	INST_ICONST(0);
label_269:;
	INST_ISTORE(25);
label_262:;
	{
	LINE_NUMBER(1501);
	if (((frame[25].i) ^ (frame[28].i)) == 0) goto label_270;
	}
	goto label_104;
label_270:;
	{
	LINE_NUMBER(1504);
	if ((frame[16].i) >= (frame[2].i)) goto label_271;
	}
	{
	LINE_NUMBER(1505);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[19].o)))->F_caseless) == 0) goto label_273;
	}
	{
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i))));
	sp[0].i = temp0;
	sp += 1;
	goto label_274;
	}
label_273:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[16].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_274:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1506);
	frame[30].o = ((jobject)ARRAY_ACCESS(jobject, (frame[27].o), ((frame[24].i) >> (8))));
	LINE_NUMBER(1507);
	if ((frame[30].o) == nullptr) goto label_277;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[30].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[30].o), ((frame[24].i) & (255)));
	if (temp0 == 0) goto label_277;
	}
	INST_ICONST(1);
	goto label_278;
label_277:;
	INST_ICONST(0);
label_278:;
	INST_ISTORE(26);
label_271:;
	{
	LINE_NUMBER(1509);
	if ((frame[26].i) != 0) goto label_279;
	}
	INST_ICONST(1);
	goto label_280;
label_279:;
	INST_ICONST(0);
label_280:;
	{
	sp -= 1;
	if ((sp[0].i ^ (frame[28].i)) == 0) goto label_281;
	}
	goto label_104;
label_281:;
	{
	LINE_NUMBER(1511);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1512);
	goto label_40;
	}
label_49:;
	{
	LINE_NUMBER(1516);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_memreg) < (((jarray) nullCheck(ctx, (frame[7].o)))->length)) goto label_283;
	}
	LINE_NUMBER(1517);
	goto label_104;
label_283:;
	{
	LINE_NUMBER(1518);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_memreg)));
	LINE_NUMBER(1519);
	frame[26].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_in);
	LINE_NUMBER(1520);
	frame[27].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_out);
	LINE_NUMBER(1522);
	if ((frame[26].i) < 0) goto label_104;
	}
	{
	jint temp0 = (frame[27].i) - (frame[26].i);
	frame[28].i = temp0;
	if (temp0 >= 0) goto label_289;
	}
	LINE_NUMBER(1523);
	goto label_104;
label_289:;
	{
	LINE_NUMBER(1524);
	if ((frame[28].i) != 0) goto label_291;
	}
	{
	LINE_NUMBER(1525);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1526);
	goto label_40;
	}
label_291:;
	{
	LINE_NUMBER(1530);
	if (((frame[16].i) + (frame[28].i)) <= (frame[2].i)) goto label_294;
	}
	goto label_104;
label_294:;
	{
	LINE_NUMBER(1532);
	jint temp0 = (jint)SM_regexodus_Matcher_compareRegions_Array1_char_int_int_int_int_regexodus_Term_R_boolean(ctx, (frame[4].o), (frame[26].i), (frame[16].i), (frame[28].i), (frame[2].i), (frame[21].o));
	if (temp0 == 0) goto label_104;
	}
	{
	LINE_NUMBER(1533);
	frame[16].i = ((frame[16].i) + (frame[28].i));
	LINE_NUMBER(1534);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1535);
	goto label_40;
	}
label_84:;
	{
	LINE_NUMBER(1563);
	sp[0].o = frame[4].o;
	jint temp0 = frame[16].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_target;
	jint temp2 = (jint)SM_regexodus_Matcher_repeat_Array1_char_int_int_regexodus_Term_R_int(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[14].i = temp2;
	if (temp2 > 0) goto label_298;
	}
	{
	LINE_NUMBER(1564);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1565);
	goto label_40;
	}
label_298:;
	{
	LINE_NUMBER(1567);
	frame[16].i = ((frame[16].i) + (frame[14].i));
	LINE_NUMBER(1570);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1571);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_term = (jref) sp[1].o;
	LINE_NUMBER(1572);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1573);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1574);
	if ((frame[13].o) != nullptr) goto label_306;
	}
	{
	LINE_NUMBER(1575);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1576);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1577);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_306:;
	{
	LINE_NUMBER(1579);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1580);
	goto label_40;
	}
label_85:;
	{
	LINE_NUMBER(1583);
	sp[0].o = frame[4].o;
	jint temp0 = frame[16].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_target;
	jint temp2 = (jint)SM_regexodus_Matcher_repeat_Array1_char_int_int_regexodus_Term_R_int(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[14].i = temp2;
	LINE_NUMBER(1584);
	if ((frame[14].i) >= ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_minCount)) goto label_312;
	}
	goto label_104;
label_312:;
	{
	LINE_NUMBER(1585);
	frame[16].i = ((frame[16].i) + (frame[14].i));
	LINE_NUMBER(1588);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1589);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_term = (jref) sp[1].o;
	LINE_NUMBER(1590);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1591);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1592);
	if ((frame[13].o) != nullptr) goto label_318;
	}
	{
	LINE_NUMBER(1593);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1594);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1595);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_318:;
	{
	LINE_NUMBER(1597);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1598);
	goto label_40;
	}
label_86:;
	{
	LINE_NUMBER(1601);
	frame[25].i = ((frame[16].i) + ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_maxCount));
	LINE_NUMBER(1602);
	sp[0].o = frame[4].o;
	jint temp0 = frame[16].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[2].i) >= (frame[25].i)) goto label_324;
	}
	INST_ILOAD(2);
	goto label_325;
label_324:;
	INST_ILOAD(25);
label_325:;
	{
	sp -= 3;
	sp[3].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_target;
	jint temp0 = (jint)SM_regexodus_Matcher_repeat_Array1_char_int_int_regexodus_Term_R_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].o);
	frame[14].i = temp0;
	LINE_NUMBER(1603);
	if ((frame[14].i) >= ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_minCount)) goto label_327;
	}
	goto label_104;
label_327:;
	{
	LINE_NUMBER(1604);
	frame[16].i = ((frame[16].i) + (frame[14].i));
	LINE_NUMBER(1607);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1608);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_term = (jref) sp[1].o;
	LINE_NUMBER(1609);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1610);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1611);
	if ((frame[13].o) != nullptr) goto label_333;
	}
	{
	LINE_NUMBER(1612);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1613);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1614);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_333:;
	{
	LINE_NUMBER(1616);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1617);
	goto label_40;
	}
label_87:;
	{
	LINE_NUMBER(1620);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_memreg)));
	LINE_NUMBER(1621);
	frame[26].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_in);
	LINE_NUMBER(1622);
	frame[27].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_out);
	LINE_NUMBER(1625);
	if ((frame[26].i) < 0) goto label_104;
	}
	{
	jint temp0 = (frame[27].i) - (frame[26].i);
	frame[28].i = temp0;
	if (temp0 >= 0) goto label_342;
	}
	LINE_NUMBER(1626);
	goto label_104;
label_342:;
	{
	LINE_NUMBER(1627);
	if ((frame[28].i) != 0) goto label_344;
	}
	{
	LINE_NUMBER(1628);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1629);
	goto label_40;
	}
label_344:;
	{
	LINE_NUMBER(1632);
	frame[14].i = (jint(0));
	}
label_347:;
	{
	LINE_NUMBER(1634);
	jint temp0 = (jint)SM_regexodus_Matcher_compareRegions_Array1_char_int_int_int_int_regexodus_Term_R_boolean(ctx, (frame[4].o), (frame[16].i), (frame[26].i), (frame[28].i), (frame[2].i), (frame[21].o));
	if (temp0 == 0) goto label_348;
	}
	{
	LINE_NUMBER(1635);
	INST_IINC(14, 1);
	LINE_NUMBER(1636);
	frame[16].i = ((frame[16].i) + (frame[28].i));
	goto label_347;
	}
label_348:;
	{
	LINE_NUMBER(1639);
	if ((frame[14].i) >= ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_minCount)) goto label_351;
	}
	goto label_104;
label_351:;
	{
	LINE_NUMBER(1641);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1642);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_term = (jref) sp[1].o;
	LINE_NUMBER(1643);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1644);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_regLen = (frame[28].i);
	LINE_NUMBER(1645);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1646);
	if ((frame[13].o) != nullptr) goto label_357;
	}
	{
	LINE_NUMBER(1647);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1648);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1649);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_357:;
	{
	LINE_NUMBER(1651);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1652);
	goto label_40;
	}
label_88:;
	{
	LINE_NUMBER(1655);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_memreg)));
	LINE_NUMBER(1656);
	frame[26].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_in);
	LINE_NUMBER(1657);
	frame[27].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_out);
	LINE_NUMBER(1660);
	if ((frame[26].i) < 0) goto label_104;
	}
	{
	jint temp0 = (frame[27].i) - (frame[26].i);
	frame[28].i = temp0;
	if (temp0 >= 0) goto label_366;
	}
	LINE_NUMBER(1661);
	goto label_104;
label_366:;
	{
	LINE_NUMBER(1662);
	if ((frame[28].i) != 0) goto label_368;
	}
	{
	LINE_NUMBER(1663);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1664);
	goto label_40;
	}
label_368:;
	{
	LINE_NUMBER(1667);
	frame[14].i = (jint(0));
	LINE_NUMBER(1668);
	frame[29].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_maxCount);
	}
label_372:;
	{
	LINE_NUMBER(1669);
	if ((frame[29].i) <= 0) goto label_373;
	}
	{
	jint temp0 = (jint)SM_regexodus_Matcher_compareRegions_Array1_char_int_int_int_int_regexodus_Term_R_boolean(ctx, (frame[4].o), (frame[16].i), (frame[26].i), (frame[28].i), (frame[2].i), (frame[21].o));
	if (temp0 == 0) goto label_373;
	}
	{
	LINE_NUMBER(1670);
	INST_IINC(14, 1);
	LINE_NUMBER(1671);
	frame[16].i = ((frame[16].i) + (frame[28].i));
	LINE_NUMBER(1672);
	INST_IINC(29, -1);
	goto label_372;
	}
label_373:;
	{
	LINE_NUMBER(1675);
	if ((frame[14].i) >= ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_minCount)) goto label_377;
	}
	goto label_104;
label_377:;
	{
	LINE_NUMBER(1677);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1678);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_term = (jref) sp[1].o;
	LINE_NUMBER(1679);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1680);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_regLen = (frame[28].i);
	LINE_NUMBER(1681);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1682);
	if ((frame[13].o) != nullptr) goto label_383;
	}
	{
	LINE_NUMBER(1683);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1684);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1685);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_383:;
	{
	LINE_NUMBER(1687);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1688);
	goto label_40;
	}
label_89:;
	{
	LINE_NUMBER(1691);
	frame[14].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt);
	LINE_NUMBER(1692);
	if ((frame[14].i) <= 0) goto label_104;
	}
	{
	LINE_NUMBER(1693);
	INST_IINC(14, -1);
	LINE_NUMBER(1694);
	INST_IINC(16, -1);
	LINE_NUMBER(1695);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1696);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1697);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_term = (jref) (frame[21].o);
	LINE_NUMBER(1698);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1699);
	if ((frame[13].o) != nullptr) goto label_396;
	}
	{
	LINE_NUMBER(1700);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1701);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1702);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_396:;
	{
	LINE_NUMBER(1704);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1705);
	goto label_40;
	}
label_90:;
	{
	LINE_NUMBER(1709);
	frame[14].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt);
	LINE_NUMBER(1710);
	if ((frame[14].i) <= ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_minCount)) goto label_104;
	}
	{
	LINE_NUMBER(1711);
	INST_IINC(14, -1);
	LINE_NUMBER(1712);
	INST_IINC(16, -1);
	LINE_NUMBER(1713);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1714);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1715);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_term = (jref) (frame[21].o);
	LINE_NUMBER(1716);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1717);
	if ((frame[13].o) != nullptr) goto label_409;
	}
	{
	LINE_NUMBER(1718);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1719);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1720);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_409:;
	{
	LINE_NUMBER(1722);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1723);
	goto label_40;
	}
label_91:;
	{
	LINE_NUMBER(1727);
	frame[14].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt);
	LINE_NUMBER(1729);
	jint temp0 = frame[14].i;
	jint temp1 = (jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_minCount;
	frame[25].i = temp1;
	if (temp0 <= temp1) goto label_104;
	}
	{
	LINE_NUMBER(1730);
	frame[26].i = ((frame[16].i) + ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_distance));
	LINE_NUMBER(1731);
	if ((frame[26].i) <= (frame[2].i)) goto label_418;
	}
	{
	LINE_NUMBER(1732);
	frame[27].i = ((frame[26].i) - (frame[2].i));
	LINE_NUMBER(1733);
	frame[14].i = ((frame[14].i) - (frame[27].i));
	LINE_NUMBER(1734);
	if ((frame[14].i) > (frame[25].i)) goto label_422;
	}
	goto label_104;
label_422:;
	{
	LINE_NUMBER(1735);
	frame[16].i = ((frame[16].i) - (frame[27].i));
	}
label_418:;
	{
	LINE_NUMBER(1737);
	sp[0].o = frame[4].o;
	jint temp0 = (frame[16].i) + ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_distance);
	jint temp1 = (frame[14].i) - (frame[25].i);
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_target;
	jint temp2 = (jint)SM_regexodus_Matcher_findBack_Array1_char_int_int_regexodus_Term_R_int(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[27].i = temp2;
	LINE_NUMBER(1738);
	if ((frame[27].i) >= 0) goto label_424;
	}
	goto label_104;
label_424:;
	{
	LINE_NUMBER(1742);
	jint temp0 = (frame[14].i) - (frame[27].i);
	frame[14].i = temp0;
	if (temp0 > (frame[25].i)) goto label_425;
	}
	{
	LINE_NUMBER(1743);
	frame[16].i = ((frame[16].i) - (frame[27].i));
	LINE_NUMBER(1744);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_eat) == 0) goto label_428;
	}
	INST_IINC(16, 1);
label_428:;
	{
	LINE_NUMBER(1745);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1746);
	goto label_40;
	}
label_425:;
	{
	LINE_NUMBER(1748);
	frame[16].i = ((frame[16].i) - (frame[27].i));
	LINE_NUMBER(1750);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1751);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1753);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_eat) == 0) goto label_433;
	}
	INST_IINC(16, 1);
label_433:;
	{
	LINE_NUMBER(1755);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_term = (jref) (frame[21].o);
	LINE_NUMBER(1756);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1757);
	if ((frame[13].o) != nullptr) goto label_436;
	}
	{
	LINE_NUMBER(1758);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1759);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1760);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_436:;
	{
	LINE_NUMBER(1762);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1763);
	goto label_40;
	}
label_92:;
	{
	LINE_NUMBER(1768);
	frame[14].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt);
	LINE_NUMBER(1770);
	jint temp0 = frame[14].i;
	jint temp1 = (jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_minCount;
	frame[25].i = temp1;
	if (temp0 <= temp1) goto label_104;
	}
	{
	LINE_NUMBER(1771);
	frame[26].i = ((frame[16].i) + ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_distance));
	LINE_NUMBER(1772);
	if ((frame[26].i) <= (frame[2].i)) goto label_445;
	}
	{
	LINE_NUMBER(1773);
	frame[27].i = ((frame[26].i) - (frame[2].i));
	LINE_NUMBER(1774);
	frame[14].i = ((frame[14].i) - (frame[27].i));
	LINE_NUMBER(1775);
	if ((frame[14].i) > (frame[25].i)) goto label_449;
	}
	goto label_104;
label_449:;
	{
	LINE_NUMBER(1776);
	frame[16].i = ((frame[16].i) - (frame[27].i));
	}
label_445:;
	{
	LINE_NUMBER(1778);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_target;
	frame[27].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((regexodus_Term *) NULL_CHECK(sp[1].o))->F_memreg)));
	LINE_NUMBER(1779);
	frame[28].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[27].o)))->F_in);
	LINE_NUMBER(1780);
	frame[29].i = (((jint)((regexodus_MemReg *) NULL_CHECK((frame[27].o)))->F_out) - (frame[28].i));
	LINE_NUMBER(1783);
	if ((frame[28].i) < 0) goto label_453;
	}
	INST_ILOAD(29);
	if ((--sp)->i >= 0) goto label_454;
label_453:;
	{
	LINE_NUMBER(1786);
	INST_IINC(14, -1);
	LINE_NUMBER(1787);
	INST_IINC(16, -1);
	LINE_NUMBER(1788);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1789);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1790);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_term = (jref) (frame[21].o);
	LINE_NUMBER(1791);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1792);
	if ((frame[13].o) != nullptr) goto label_461;
	}
	{
	LINE_NUMBER(1793);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1794);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1795);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_461:;
	{
	LINE_NUMBER(1797);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1798);
	goto label_40;
	}
label_454:;
	{
	LINE_NUMBER(1799);
	if ((frame[29].i) != 0) goto label_466;
	}
	{
	LINE_NUMBER(1800);
	frame[30].i = (jint(-1));
	goto label_469;
	}
label_466:;
	{
	LINE_NUMBER(1802);
	sp[0].o = frame[4].o;
	jint temp0 = (frame[16].i) + ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_distance);
	jint temp1 = frame[28].i;
	jint temp2 = frame[29].i;
	jint temp3 = (frame[14].i) - (frame[25].i);
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_target;
	jint temp4 = (jint)SM_regexodus_Matcher_findBackReg_Array1_char_int_int_int_int_regexodus_Term_int_R_int(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o, (frame[2].i));
	frame[30].i = temp4;
	LINE_NUMBER(1803);
	if ((frame[30].i) >= 0) goto label_469;
	}
	goto label_104;
label_469:;
	{
	LINE_NUMBER(1805);
	frame[14].i = ((frame[14].i) - (frame[30].i));
	LINE_NUMBER(1806);
	frame[16].i = ((frame[16].i) - (frame[30].i));
	LINE_NUMBER(1807);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1808);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1810);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_eat) == 0) goto label_475;
	}
	{
	frame[16].i = ((frame[16].i) + (frame[29].i));
	}
label_475:;
	{
	LINE_NUMBER(1812);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_term = (jref) (frame[21].o);
	LINE_NUMBER(1813);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1814);
	if ((frame[13].o) != nullptr) goto label_478;
	}
	{
	LINE_NUMBER(1815);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1816);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1817);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_478:;
	{
	LINE_NUMBER(1819);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1820);
	goto label_40;
	}
label_93:;
	{
	LINE_NUMBER(1825);
	frame[14].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt);
	LINE_NUMBER(1826);
	if ((frame[14].i) <= ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_minCount)) goto label_104;
	}
	{
	LINE_NUMBER(1827);
	frame[15].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_regLen);
	LINE_NUMBER(1828);
	INST_IINC(14, -1);
	LINE_NUMBER(1829);
	frame[16].i = ((frame[16].i) - (frame[15].i));
	LINE_NUMBER(1830);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	LINE_NUMBER(1831);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1832);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_term = (jref) (frame[21].o);
	LINE_NUMBER(1834);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1835);
	if ((frame[13].o) != nullptr) goto label_492;
	}
	{
	LINE_NUMBER(1836);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1837);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1838);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_492:;
	{
	LINE_NUMBER(1840);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1841);
	goto label_40;
	}
label_57:;
	{
	LINE_NUMBER(1845);
	frame[22].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_memreg);
	LINE_NUMBER(1848);
	if ((frame[22].i) <= 0) goto label_498;
	}
	{
	LINE_NUMBER(1849);
	((regexodus_MemReg *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[22].i)))))->F_tmp = (frame[16].i);
	}
label_498:;
	{
	LINE_NUMBER(1851);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1852);
	goto label_40;
	}
label_58:;
	{
	LINE_NUMBER(1855);
	frame[22].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_memreg);
	LINE_NUMBER(1857);
	if ((frame[22].i) <= 0) goto label_502;
	}
	{
	LINE_NUMBER(1858);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[22].i)));
	LINE_NUMBER(1859);
	if ((frame[12].o) == nullptr) goto label_505;
	}
	INST_ALOAD(12);
	goto label_506;
label_505:;
	INST_ALOAD(10);
label_506:;
	{
	sp -= 1;
	SM_regexodus_SearchEntry_saveMemregState_regexodus_SearchEntry_int_regexodus_MemReg(ctx, sp[0].o, (frame[22].i), (frame[25].o));
	LINE_NUMBER(1860);
	((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_in = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_tmp);
	LINE_NUMBER(1861);
	((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_out = (frame[16].i);
	}
label_502:;
	{
	LINE_NUMBER(1863);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1864);
	goto label_40;
	}
label_81:;
	{
	LINE_NUMBER(1867);
	frame[25].i = ((frame[16].i) - ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_distance));
	LINE_NUMBER(1868);
	if ((frame[25].i) >= (frame[3].i)) goto label_511;
	}
	goto label_104;
label_511:;
	{
	LINE_NUMBER(1869);
	frame[26].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_lookaheadId)));
	LINE_NUMBER(1870);
	((regexodus_LAEntry *) NULL_CHECK((frame[26].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1871);
	frame[16].i = (frame[25].i);
	LINE_NUMBER(1872);
	((regexodus_LAEntry *) NULL_CHECK((frame[26].o)))->F_actual = (jref) (frame[13].o);
	LINE_NUMBER(1873);
	((regexodus_LAEntry *) NULL_CHECK((frame[26].o)))->F_top = (jref) (frame[12].o);
	LINE_NUMBER(1874);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1875);
	goto label_40;
	}
label_77:;
	{
	LINE_NUMBER(1879);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_lookaheadId)));
	LINE_NUMBER(1880);
	((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1881);
	((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_actual = (jref) (frame[13].o);
	LINE_NUMBER(1882);
	((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_top = (jref) (frame[12].o);
	LINE_NUMBER(1883);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1884);
	goto label_40;
	}
label_78:;
	{
	LINE_NUMBER(1890);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_lookaheadId)));
	LINE_NUMBER(1891);
	frame[16].i = ((jint)((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_index);
	LINE_NUMBER(1892);
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_actual;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1893);
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_top;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1894);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1895);
	goto label_40;
	}
label_83:;
	{
	LINE_NUMBER(1898);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_lookaheadId)));
	LINE_NUMBER(1899);
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_actual;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1900);
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_top;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1901);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1902);
	goto label_40;
	}
label_82:;
	{
	LINE_NUMBER(1905);
	frame[25].i = ((frame[16].i) - ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_distance));
	LINE_NUMBER(1906);
	if ((frame[25].i) >= (frame[3].i)) goto label_533;
	}
	{
	LINE_NUMBER(1907);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1908);
	goto label_40;
	}
label_533:;
	{
	LINE_NUMBER(1910);
	frame[26].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_lookaheadId)));
	LINE_NUMBER(1911);
	((regexodus_LAEntry *) NULL_CHECK((frame[26].o)))->F_actual = (jref) (frame[13].o);
	LINE_NUMBER(1912);
	((regexodus_LAEntry *) NULL_CHECK((frame[26].o)))->F_top = (jref) (frame[12].o);
	LINE_NUMBER(1914);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_term = (jref) sp[1].o;
	LINE_NUMBER(1915);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1916);
	frame[16].i = (frame[25].i);
	LINE_NUMBER(1917);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1918);
	if ((frame[13].o) != nullptr) goto label_543;
	}
	{
	LINE_NUMBER(1919);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1920);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1921);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_543:;
	{
	LINE_NUMBER(1923);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1924);
	goto label_40;
	}
label_79:;
	{
	LINE_NUMBER(1927);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_lookaheadId)));
	LINE_NUMBER(1928);
	((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_actual = (jref) (frame[13].o);
	LINE_NUMBER(1929);
	((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_top = (jref) (frame[12].o);
	LINE_NUMBER(1931);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_term = (jref) sp[1].o;
	LINE_NUMBER(1932);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1933);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1934);
	if ((frame[13].o) != nullptr) goto label_554;
	}
	{
	LINE_NUMBER(1935);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1936);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1937);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_554:;
	{
	LINE_NUMBER(1940);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1941);
	goto label_40;
	}
label_80:;
	{
	LINE_NUMBER(1945);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_lookaheadId)));
	LINE_NUMBER(1946);
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_actual;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1947);
	sp[0].o = (jobject)((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_top;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1948);
	goto label_104;
	}
label_96:;
	{
	LINE_NUMBER(1951);
	frame[25].i = ((frame[16].i) - ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_distance));
	LINE_NUMBER(1952);
	if ((frame[25].i) >= (frame[3].i)) goto label_563;
	}
	{
	LINE_NUMBER(1953);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1954);
	goto label_40;
	}
label_563:;
	{
	LINE_NUMBER(1956);
	frame[26].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_lookaheadId)));
	LINE_NUMBER(1957);
	((regexodus_LAEntry *) NULL_CHECK((frame[26].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1958);
	((regexodus_LAEntry *) NULL_CHECK((frame[26].o)))->F_actual = (jref) (frame[13].o);
	LINE_NUMBER(1959);
	((regexodus_LAEntry *) NULL_CHECK((frame[26].o)))->F_top = (jref) (frame[12].o);
	LINE_NUMBER(1961);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_term = (jref) sp[1].o;
	LINE_NUMBER(1962);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1963);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1964);
	if ((frame[13].o) != nullptr) goto label_573;
	}
	{
	LINE_NUMBER(1965);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1966);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1967);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_573:;
	{
	LINE_NUMBER(1970);
	frame[16].i = (frame[25].i);
	LINE_NUMBER(1972);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1973);
	goto label_40;
	}
label_95:;
	{
	LINE_NUMBER(1976);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_lookaheadId)));
	LINE_NUMBER(1977);
	((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1978);
	((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_actual = (jref) (frame[13].o);
	LINE_NUMBER(1979);
	((regexodus_LAEntry *) NULL_CHECK((frame[25].o)))->F_top = (jref) (frame[12].o);
	LINE_NUMBER(1981);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_term = (jref) sp[1].o;
	LINE_NUMBER(1982);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(1983);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(1984);
	if ((frame[13].o) != nullptr) goto label_586;
	}
	{
	LINE_NUMBER(1985);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(1986);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(1987);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_586:;
	{
	LINE_NUMBER(1990);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1991);
	goto label_40;
	}
label_94:;
	{
	LINE_NUMBER(1994);
	frame[25].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_memreg)));
	LINE_NUMBER(1995);
	frame[26].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_in);
	LINE_NUMBER(1996);
	frame[27].i = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[25].o)))->F_out);
	LINE_NUMBER(1997);
	if ((frame[26].i) < 0) goto label_594;
	}
	INST_ILOAD(27);
	if ((--sp)->i < 0) goto label_594;
	{
	if ((frame[27].i) < (frame[26].i)) goto label_594;
	}
	{
	LINE_NUMBER(1998);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	goto label_40;
	}
label_594:;
	{
	LINE_NUMBER(2000);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2002);
	goto label_40;
	}
label_76:;
	{
	LINE_NUMBER(2005);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_regLen = (frame[15].i);
	}
label_75:;
	{
	LINE_NUMBER(2007);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt = (frame[14].i);
	}
label_74:;
	{
	LINE_NUMBER(2009);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_failNext;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_term = (jref) sp[1].o;
	LINE_NUMBER(2010);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index = (frame[16].i);
	LINE_NUMBER(2011);
	sp[0].o = frame[13].o;
	frame[12].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_on;
	frame[13].o = sp[0].o;
	LINE_NUMBER(2012);
	if ((frame[13].o) != nullptr) goto label_600;
	}
	{
	LINE_NUMBER(2013);
	clinit_regexodus_SearchEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_SearchEntry);
	init_regexodus_SearchEntry(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(2014);
	((regexodus_SearchEntry *) NULL_CHECK((frame[12].o)))->F_on = (jref) (frame[13].o);
	LINE_NUMBER(2015);
	((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_sub = (jref) (frame[12].o);
	}
label_600:;
	{
	LINE_NUMBER(2017);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2018);
	goto label_40;
	}
label_52:;
	{
	LINE_NUMBER(2021);
	if ((frame[17].i) == 0) goto label_605;
	}
	{
	if ((frame[16].i) != (frame[2].i)) goto label_104;
	}
label_605:;
	{
	LINE_NUMBER(2022);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)));
	jint temp0 = frame[5].i;
	((regexodus_MemReg *) NULL_CHECK(sp[1].o))->F_in = temp0;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_wOffset = temp0;
	LINE_NUMBER(2023);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)));
	jint temp3 = frame[16].i;
	((regexodus_MemReg *) NULL_CHECK(sp[1].o))->F_out = temp3;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_wEnd = temp3;
	LINE_NUMBER(2024);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top = (jref) (frame[12].o);
	LINE_NUMBER(2025);
	popStackFrame(ctx);
	return (jint(1));
	}
label_66:;
	{
	LINE_NUMBER(2029);
	frame[14].i = (jint(0));
	LINE_NUMBER(2030);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2031);
	goto label_40;
	}
label_67:;
	{
	LINE_NUMBER(2034);
	INST_IINC(14, 1);
	LINE_NUMBER(2035);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2036);
	goto label_40;
	}
label_68:;
	{
	LINE_NUMBER(2039);
	if ((frame[14].i) < ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_maxCount)) goto label_104;
	}
	{
	LINE_NUMBER(2040);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2041);
	goto label_40;
	}
label_69:;
	{
	LINE_NUMBER(2045);
	frame[14].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_cnt);
	LINE_NUMBER(2046);
	if ((frame[14].i) >= ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_maxCount)) goto label_104;
	}
	{
	LINE_NUMBER(2047);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2048);
	goto label_40;
	}
label_70:;
	{
	LINE_NUMBER(2052);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_cntreg;
	frame[23].i = temp0;
	frame[25].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	LINE_NUMBER(2053);
	if ((frame[12].o) == nullptr) goto label_620;
	}
	INST_ALOAD(12);
	goto label_621;
label_620:;
	INST_ALOAD(10);
label_621:;
	{
	sp -= 1;
	SM_regexodus_SearchEntry_saveCntState_regexodus_SearchEntry_int_int(ctx, sp[0].o, (frame[23].i), (frame[25].i));
	LINE_NUMBER(2054);
	sp[0].o = frame[8].o;
	jint temp0 = frame[23].i;
	INST_IINC(25, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[25].i);
	LINE_NUMBER(2055);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2056);
	goto label_40;
	}
label_71:;
	{
	LINE_NUMBER(2059);
	ARRAY_ACCESS(jint, (frame[8].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_cntreg)) = (jint(0));
	LINE_NUMBER(2061);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2062);
	goto label_40;
	}
label_72:;
	{
	LINE_NUMBER(2065);
	if (((jint)ARRAY_ACCESS(jint, (frame[8].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_cntreg))) >= ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_maxCount)) goto label_104;
	}
	{
	LINE_NUMBER(2066);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2067);
	goto label_40;
	}
label_73:;
	{
	LINE_NUMBER(2071);
	if (((jint)ARRAY_ACCESS(jint, (frame[8].o), ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_cntreg))) < ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_maxCount)) goto label_104;
	}
	{
	LINE_NUMBER(2072);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_next;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2073);
	goto label_40;
	}
label_46:;
	{
	LINE_NUMBER(2077);
	clinit_java_lang_Error(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Error);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown term type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[21].o)))->F_type));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_Error_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_41:;
	{
	LINE_NUMBER(2082);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)));
	jint temp0 = frame[5].i;
	((regexodus_MemReg *) NULL_CHECK(sp[1].o))->F_in = temp0;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_wOffset = temp0;
	LINE_NUMBER(2083);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)));
	jint temp3 = frame[16].i;
	((regexodus_MemReg *) NULL_CHECK(sp[1].o))->F_out = temp3;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_wEnd = temp3;
	LINE_NUMBER(2084);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top = (jref) (frame[12].o);
	LINE_NUMBER(2085);
	popStackFrame(ctx);
	return (jint(1));
	}
label_104:;
	{
	LINE_NUMBER(2088);
	if ((frame[18].i) == 0) goto label_634;
	}
	{
	if ((frame[16].i) != (frame[2].i)) goto label_634;
	}
	{
	LINE_NUMBER(2096);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)));
	jint temp0 = frame[5].i;
	((regexodus_MemReg *) NULL_CHECK(sp[1].o))->F_in = temp0;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_wOffset = temp0;
	LINE_NUMBER(2097);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)));
	jint temp3 = frame[16].i;
	((regexodus_MemReg *) NULL_CHECK(sp[1].o))->F_out = temp3;
	((regexodus_Matcher *) NULL_CHECK(sp[0].o))->F_wEnd = temp3;
	LINE_NUMBER(2098);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top = (jref) (frame[12].o);
	LINE_NUMBER(2100);
	popStackFrame(ctx);
	return (jint(1));
	}
label_634:;
	{
	LINE_NUMBER(2102);
	if ((frame[12].o) != nullptr) goto label_639;
	}
	LINE_NUMBER(2103);
	goto label_641;
label_639:;
	{
	LINE_NUMBER(2107);
	sp[0].o = frame[12].o;
	frame[13].o = sp[0].o;
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_sub;
	frame[12].o = sp[0].o;
	LINE_NUMBER(2108);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_term;
	frame[21].o = sp[0].o;
	LINE_NUMBER(2109);
	frame[16].i = ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_index);
	LINE_NUMBER(2110);
	if (((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[13].o)))->F_isState) == 0) goto label_40;
	}
	{
	LINE_NUMBER(2111);
	SM_regexodus_SearchEntry_popState_regexodus_SearchEntry_Array1_regexodus_MemReg_Array1_int(ctx, (frame[13].o), (frame[7].o), (frame[8].o));
	goto label_40;
	}
label_641:;
	{
	LINE_NUMBER(2115);
	if (((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[10].o)))->F_isState) == 0) goto label_646;
	}
	{
	SM_regexodus_SearchEntry_popState_regexodus_SearchEntry_Array1_regexodus_MemReg_Array1_int(ctx, (frame[10].o), (frame[7].o), (frame[8].o));
	}
label_646:;
	{
	LINE_NUMBER(2117);
	frame[21].o = (frame[20].o);
	LINE_NUMBER(2120);
	INST_IINC(5, 1);
	frame[16].i = (frame[5].i);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(2122);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset = (frame[5].i);
	LINE_NUMBER(2123);
	((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top = (jref) (frame[12].o);
	LINE_NUMBER(2125);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_regexodus_Matcher_compareRegions_Array1_char_int_int_int_int_regexodus_Term_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:compareRegions", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(2129);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_mode_reverse) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2131);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].i = temp3;
	sp += 5;
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_mode_insensitive) != 0) goto label_3;
	}
	{
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_mode_upper) == 0) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 6;
	jint temp0 = (jint)SM_regexodus_Matcher_compareRegionsReverse_Array1_char_int_int_int_int_boolean_boolean_R_boolean(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i, ((jint)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_mode_bracket));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(2135);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].i = temp3;
	sp += 5;
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_mode_insensitive) != 0) goto label_6;
	}
	{
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_mode_upper) == 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 6;
	jint temp0 = (jint)SM_regexodus_Matcher_compareRegionsForward_Array1_char_int_int_int_int_boolean_boolean_R_boolean(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i, ((jint)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_mode_bracket));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_regexodus_Matcher_compareRegionsForward_Array1_char_int_int_int_int_boolean_boolean_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5, jbool param6) {
	jtype frame[14];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:compareRegionsForward", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(2140);
	frame[7].i = (((frame[1].i) + (frame[3].i)) - (jint(1)));
	LINE_NUMBER(2141);
	frame[8].i = (((frame[2].i) + (frame[3].i)) - (jint(1)));
	LINE_NUMBER(2142);
	if ((frame[7].i) >= (frame[4].i)) goto label_3;
	}
	{
	if ((frame[8].i) < (frame[4].i)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2143);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(2146);
	frame[11].i = (frame[3].i);
	}
label_5:;
	INST_ILOAD(11);
	if ((--sp)->i <= 0) goto label_6;
	{
	LINE_NUMBER(2147);
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[7].i)));
	LINE_NUMBER(2148);
	frame[10].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[8].i)));
	LINE_NUMBER(2149);
	if ((frame[5].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(2151);
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[9].i));
	frame[9].i = temp0;
	LINE_NUMBER(2152);
	jint temp1 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[10].i));
	frame[10].i = temp1;
	}
label_10:;
	{
	LINE_NUMBER(2154);
	if ((frame[6].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(2156);
	jint temp0 = (jint)SM_regexodus_Category_matchBracket_char_R_char(ctx, (frame[10].i));
	frame[10].i = temp0;
	}
label_13:;
	{
	LINE_NUMBER(2158);
	if ((frame[9].i) == (frame[10].i)) goto label_15;
	}
	{
	LINE_NUMBER(2159);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(2146);
	INST_IINC(11, -1);
	INST_IINC(7, -1);
	INST_IINC(8, -1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2162);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_regexodus_Matcher_compareRegionsReverse_Array1_char_int_int_int_int_boolean_boolean_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5, jbool param6) {
	jtype frame[14];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:compareRegionsReverse", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(2166);
	frame[7].i = (((frame[1].i) + (frame[3].i)) - (jint(1)));
	LINE_NUMBER(2167);
	frame[8].i = (frame[2].i);
	LINE_NUMBER(2168);
	if ((frame[7].i) >= (frame[4].i)) goto label_3;
	}
	{
	if ((frame[8].i) < (frame[4].i)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2169);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(2172);
	frame[11].i = (frame[3].i);
	}
label_5:;
	INST_ILOAD(11);
	if ((--sp)->i <= 0) goto label_6;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(2173);
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[7].i)));
	LINE_NUMBER(2174);
	frame[10].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[8].i)));
	LINE_NUMBER(2175);
	if ((frame[5].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(2177);
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[9].i));
	frame[9].i = temp0;
	LINE_NUMBER(2178);
	jint temp1 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[10].i));
	frame[10].i = temp1;
	}
label_10:;
	{
	LINE_NUMBER(2180);
	if ((frame[6].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(2182);
	jint temp0 = (jint)SM_regexodus_Category_matchBracket_char_R_char(ctx, (frame[10].i));
	frame[10].i = temp0;
	}
label_13:;
	{
	LINE_NUMBER(2184);
	if ((frame[9].i) == (frame[10].i)) goto label_15;
	}
	{
	LINE_NUMBER(2185);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(2172);
	INST_IINC(11, -1);
	INST_IINC(7, -1);
	INST_IINC(8, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2188);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_regexodus_Matcher_compareRegionsI_Array1_char_int_int_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:compareRegionsI", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2192);
	frame[5].i = (((frame[1].i) + (frame[3].i)) - (jint(1)));
	LINE_NUMBER(2193);
	frame[6].i = (((frame[2].i) + (frame[3].i)) - (jint(1)));
	LINE_NUMBER(2194);
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	if ((frame[6].i) < (frame[4].i)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2195);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(2197);
	frame[7].i = (frame[3].i);
	}
label_5:;
	INST_ILOAD(7);
	if ((--sp)->i <= 0) goto label_6;
	{
	LINE_NUMBER(2198);
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i))));
	jint temp1 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[6].i))));
	if (temp0 == temp1) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(2197);
	INST_IINC(7, -1);
	INST_IINC(5, -1);
	INST_IINC(6, -1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2205);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Matcher_repeat_Array1_char_int_int_regexodus_Term_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:repeat", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2210);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_type)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(2212);
	frame[4].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_c);
	LINE_NUMBER(2213);
	frame[5].i = (frame[1].i);
	}
label_8:;
	{
	LINE_NUMBER(2214);
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(2215);
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i))) == (frame[4].i)) goto label_11;
	}
	goto label_9;
label_11:;
	{
	LINE_NUMBER(2216);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2218);
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[1].i));
	}
label_5:;
	{
	LINE_NUMBER(2221);
	popStackFrame(ctx);
	return ((frame[2].i) - (frame[1].i));
	}
label_6:;
	{
	LINE_NUMBER(2224);
	frame[4].i = (frame[1].i);
	}
label_12:;
	{
	LINE_NUMBER(2226);
	if ((frame[4].i) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(2227);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i));
	frame[5].i = temp0;
	if (temp0 == (13)) goto label_13;
	}
	{
	if ((frame[5].i) != (10)) goto label_16;
	}
	goto label_13;
label_16:;
	{
	LINE_NUMBER(2228);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(2230);
	popStackFrame(ctx);
	return ((frame[4].i) - (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(2233);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_bitset;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2234);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(2236);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_inverse) == 0) goto label_19;
	}
label_20:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_21;
	}
	{
	LINE_NUMBER(2237);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i));
	frame[6].i = temp0;
	if (temp0 > (255)) goto label_24;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[4].o), (frame[6].i));
	if (temp0 == 0) goto label_24;
	}
	goto label_21;
label_24:;
	{
	LINE_NUMBER(2238);
	INST_IINC(5, 1);
	goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(2240);
	if ((frame[5].i) >= (frame[2].i)) goto label_21;
	}
	{
	LINE_NUMBER(2241);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i));
	frame[6].i = temp0;
	if (temp0 > (255)) goto label_21;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[4].o), (frame[6].i));
	if (temp0 == 0) goto label_21;
	}
	INST_IINC(5, 1);
	goto label_19;
label_21:;
	{
	LINE_NUMBER(2244);
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[1].i));
	}
label_3:;
	{
	LINE_NUMBER(2247);
	frame[4].i = (frame[1].i);
	LINE_NUMBER(2248);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_bitset2;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2250);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_inverse) == 0) goto label_29;
	}
label_30:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_31;
	}
	{
	LINE_NUMBER(2251);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i));
	frame[6].i = temp0;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp0 >> (8))));
	LINE_NUMBER(2252);
	if ((frame[7].o) == nullptr) goto label_35;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[7].o), ((frame[6].i) & (255)));
	if (temp0 == 0) goto label_35;
	}
	goto label_31;
label_35:;
	{
	LINE_NUMBER(2253);
	INST_IINC(4, 1);
	LINE_NUMBER(2254);
	goto label_30;
	}
label_29:;
	{
	LINE_NUMBER(2255);
	if ((frame[4].i) >= (frame[2].i)) goto label_31;
	}
	{
	LINE_NUMBER(2256);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i));
	frame[6].i = temp0;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp0 >> (8))));
	LINE_NUMBER(2257);
	if ((frame[7].o) == nullptr) goto label_31;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[7].o), ((frame[6].i) & (255)));
	if (temp0 == 0) goto label_31;
	}
	{
	INST_IINC(4, 1);
	LINE_NUMBER(2259);
	goto label_29;
	}
label_31:;
	{
	LINE_NUMBER(2260);
	popStackFrame(ctx);
	return ((frame[4].i) - (frame[1].i));
	}
label_4:;
	{
	LINE_NUMBER(2263);
	clinit_java_lang_Error(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Error);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"this kind of term can't be quantified:"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_type));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_Error_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_regexodus_Matcher_find_Array1_char_int_int_regexodus_Term_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:find", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2268);
	if ((frame[1].i) < (frame[2].i)) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2269);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_type)) {
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		default: goto label_5;
	}
	}
label_2:;
	{
	LINE_NUMBER(2271);
	frame[4].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_c);
	LINE_NUMBER(2272);
	frame[5].i = (frame[1].i);
	}
label_7:;
	{
	LINE_NUMBER(2273);
	if ((frame[5].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(2274);
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i))) != (frame[4].i)) goto label_10;
	}
	goto label_8;
label_10:;
	{
	LINE_NUMBER(2275);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2277);
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[1].i));
	}
label_3:;
	{
	LINE_NUMBER(2280);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_bitset;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2281);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(2283);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_inverse) != 0) goto label_13;
	}
label_14:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_15;
	}
	{
	LINE_NUMBER(2284);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i));
	frame[6].i = temp0;
	if (temp0 > (255)) goto label_18;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[4].o), (frame[6].i));
	if (temp0 == 0) goto label_18;
	}
	goto label_15;
label_18:;
	{
	LINE_NUMBER(2285);
	INST_IINC(5, 1);
	goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(2287);
	if ((frame[5].i) >= (frame[2].i)) goto label_15;
	}
	{
	LINE_NUMBER(2288);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i));
	frame[6].i = temp0;
	if (temp0 > (255)) goto label_15;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[4].o), (frame[6].i));
	if (temp0 == 0) goto label_15;
	}
	INST_IINC(5, 1);
	goto label_13;
label_15:;
	{
	LINE_NUMBER(2291);
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[1].i));
	}
label_4:;
	{
	LINE_NUMBER(2294);
	frame[4].i = (frame[1].i);
	LINE_NUMBER(2295);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_bitset2;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2297);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_inverse) != 0) goto label_23;
	}
label_24:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_25;
	}
	{
	LINE_NUMBER(2298);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i));
	frame[6].i = temp0;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp0 >> (8))));
	LINE_NUMBER(2299);
	if ((frame[7].o) == nullptr) goto label_29;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[7].o), ((frame[6].i) & (255)));
	if (temp0 == 0) goto label_29;
	}
	goto label_25;
label_29:;
	{
	LINE_NUMBER(2300);
	INST_IINC(4, 1);
	LINE_NUMBER(2301);
	goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(2302);
	if ((frame[4].i) >= (frame[2].i)) goto label_25;
	}
	{
	LINE_NUMBER(2303);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i));
	frame[6].i = temp0;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp0 >> (8))));
	LINE_NUMBER(2304);
	if ((frame[7].o) == nullptr) goto label_25;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[7].o), ((frame[6].i) & (255)));
	if (temp0 == 0) goto label_25;
	}
	{
	INST_IINC(4, 1);
	LINE_NUMBER(2306);
	goto label_23;
	}
label_25:;
	{
	LINE_NUMBER(2307);
	popStackFrame(ctx);
	return ((frame[4].i) - (frame[1].i));
	}
label_5:;
	{
	LINE_NUMBER(2310);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"can't seek this kind of term:"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_type));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_regexodus_Matcher_findReg_Array1_char_int_int_int_regexodus_Term_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:findReg", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(2315);
	if ((frame[1].i) < (frame[5].i)) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2316);
	frame[6].i = (frame[1].i);
	LINE_NUMBER(2317);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type) == (6)) goto label_3;
	}
	{
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type) != (7)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2318);
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(2319);
	jint temp0 = (jint)SM_regexodus_Matcher_compareRegions_Array1_char_int_int_int_int_regexodus_Term_R_boolean(ctx, (frame[0].o), (frame[6].i), (frame[2].i), (frame[3].i), (frame[5].i), (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	goto label_5;
label_7:;
	{
	LINE_NUMBER(2320);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2322);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"wrong findReg() target:"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_type));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(2323);
	popStackFrame(ctx);
	return ((frame[1].i) - (frame[6].i));
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Matcher_findBack_Array1_char_int_int_regexodus_Term_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:findBack", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2327);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_type)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(2329);
	frame[4].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_c);
	LINE_NUMBER(2330);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(2331);
	frame[6].i = ((frame[1].i) - (frame[2].i));
	}
label_7:;
	{
	LINE_NUMBER(2333);
	sp[0].o = frame[0].o;
	INST_IINC(5, -1);
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[5].i))) != (frame[4].i)) goto label_8;
	}
	goto label_9;
label_8:;
	{
	LINE_NUMBER(2334);
	if ((frame[5].i) > (frame[6].i)) goto label_7;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(2336);
	popStackFrame(ctx);
	return ((frame[1].i) - (frame[5].i));
	}
label_2:;
	{
	LINE_NUMBER(2339);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_bitset;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2340);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(2342);
	frame[7].i = ((frame[1].i) - (frame[2].i));
	LINE_NUMBER(2343);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_inverse) != 0) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(2344);
	sp[0].o = frame[0].o;
	INST_IINC(5, -1);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[5].i));
	frame[6].i = temp0;
	if (temp0 > (255)) goto label_16;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[4].o), (frame[6].i));
	if (temp0 == 0) goto label_16;
	}
	goto label_17;
label_16:;
	{
	LINE_NUMBER(2345);
	if ((frame[5].i) > (frame[7].i)) goto label_14;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(2348);
	sp[0].o = frame[0].o;
	INST_IINC(5, -1);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[5].i));
	frame[6].i = temp0;
	if (temp0 > (255)) goto label_17;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[4].o), (frame[6].i));
	if (temp0 != 0) goto label_19;
	}
	goto label_17;
label_19:;
	{
	LINE_NUMBER(2349);
	if ((frame[5].i) > (frame[7].i)) goto label_13;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(2351);
	popStackFrame(ctx);
	return ((frame[1].i) - (frame[5].i));
	}
label_3:;
	{
	LINE_NUMBER(2354);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_bitset2;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2355);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(2357);
	frame[7].i = ((frame[1].i) - (frame[2].i));
	LINE_NUMBER(2358);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_inverse) != 0) goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(2359);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	INST_IINC(5, -1);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[5].i));
	frame[6].i = temp0;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp0 >> (8))));
	LINE_NUMBER(2360);
	if ((frame[8].o) == nullptr) goto label_27;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[8].o), ((frame[6].i) & (255)));
	if (temp0 == 0) goto label_27;
	}
	goto label_28;
label_27:;
	{
	LINE_NUMBER(2361);
	if ((frame[5].i) > (frame[7].i)) goto label_29;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_29:;
	LINE_NUMBER(2362);
	goto label_24;
label_23:;
	{
	LINE_NUMBER(2364);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	INST_IINC(5, -1);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[5].i));
	frame[6].i = temp0;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp0 >> (8))));
	LINE_NUMBER(2365);
	if ((frame[8].o) == nullptr) goto label_28;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[8].o), ((frame[6].i) & (255)));
	if (temp0 == 0) goto label_32;
	}
	goto label_28;
label_32:;
	{
	LINE_NUMBER(2366);
	if ((frame[5].i) > (frame[7].i)) goto label_33;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_33:;
	LINE_NUMBER(2367);
	goto label_23;
label_28:;
	{
	LINE_NUMBER(2368);
	popStackFrame(ctx);
	return ((frame[1].i) - (frame[5].i));
	}
label_4:;
	{
	LINE_NUMBER(2371);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"can't find this kind of term:"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_type));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_regexodus_Matcher_findBackReg_Array1_char_int_int_int_int_regexodus_Term_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jint param6) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:findBackReg", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(2376);
	frame[7].i = (frame[1].i);
	LINE_NUMBER(2377);
	frame[8].i = ((frame[1].i) - (frame[4].i));
	LINE_NUMBER(2378);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_type) == (6)) goto label_3;
	}
	{
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_type) != (7)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2380);
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(2381);
	INST_IINC(2, 1);
	LINE_NUMBER(2382);
	INST_IINC(3, -1);
	}
label_7:;
	{
	LINE_NUMBER(2384);
	INST_IINC(7, -1);
	LINE_NUMBER(2385);
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[7].i))) != (frame[9].i)) goto label_9;
	}
	{
	jint temp0 = (jint)SM_regexodus_Matcher_compareRegions_Array1_char_int_int_int_int_regexodus_Term_R_boolean(ctx, (frame[0].o), ((frame[7].i) + (jint(1))), (frame[2].i), (frame[3].i), (frame[6].i), (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	goto label_10;
label_9:;
	{
	LINE_NUMBER(2386);
	if ((frame[7].i) > (frame[8].i)) goto label_7;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	LINE_NUMBER(2388);
	goto label_11;
label_4:;
	{
	LINE_NUMBER(2400);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"wrong findBackReg() target type :"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_type));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(2401);
	popStackFrame(ctx);
	return ((frame[1].i) - (frame[7].i));
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_toString_d_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:toString_d", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2405);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2406);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"counters: "_j))));
	LINE_NUMBER(2407);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_counters;
	sp += 1;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_counters;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(2409);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\r\nmemregs: "_j))));
	LINE_NUMBER(2410);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(2411);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(2412);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	if (((jint)((regexodus_MemReg *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_in) < 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	if (((jint)((regexodus_MemReg *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_out) >= 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(2413);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\r\n #"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": [INVALID]"_j))));
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(2415);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\r\n #"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": ["_j))));
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_MemReg *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_in));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_MemReg *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_out));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"](\""_j))));
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	jint temp0 = (jint)((regexodus_MemReg *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_in;
	sp[2].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	sp[1].o = (jobject)((func_regexodus_Matcher_getString_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_regexodus_Matcher_getString_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, ((jint)((regexodus_MemReg *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_out));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\")"_j))));
	}
label_13:;
	{
	LINE_NUMBER(2411);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2417);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\r\ndata: "_j))));
	LINE_NUMBER(2418);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(2419);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"[none]"_j))));
	}
label_16:;
	{
	LINE_NUMBER(2421);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\r\noffset: "_j))));
	LINE_NUMBER(2422);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset));
	LINE_NUMBER(2424);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\r\nend: "_j))));
	LINE_NUMBER(2425);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end));
	LINE_NUMBER(2427);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\r\nwOffset: "_j))));
	LINE_NUMBER(2428);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset));
	LINE_NUMBER(2430);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\r\nwEnd: "_j))));
	LINE_NUMBER(2431);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd));
	LINE_NUMBER(2433);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\r\nregex: "_j))));
	LINE_NUMBER(2434);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2435);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Matcher_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2440);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2441);
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
	LINE_NUMBER(2443);
	frame[2].o = (checkCast(ctx, &class_regexodus_Matcher, (frame[1].o)));
	LINE_NUMBER(2445);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_counterCount) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_counterCount)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(2446);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregCount) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_memregCount)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(2447);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_lookaheadCount) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_lookaheadCount)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(2448);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_offset)) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(2449);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_end)) goto label_9;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(2450);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_wOffset)) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(2451);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_wEnd)) goto label_11;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(2452);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_shared) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_shared)) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(2453);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_called)) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(2454);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_minQueueLength) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_minQueueLength)) goto label_14;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(2455);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cacheOffset) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_cacheOffset)) goto label_15;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(2456);
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cacheLength) == ((jint)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_cacheLength)) goto label_16;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_16:;
	{
	LINE_NUMBER(2457);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_re;
	jint temp0 = (jint)((func_regexodus_Pattern_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_18;
	}
	goto label_19;
label_17:;
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_re;
	if (sp[0].o == nullptr) goto label_18;
	}
label_19:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(2458);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_counters;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_counters;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_int_Array1_int_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_20;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_20:;
	{
	LINE_NUMBER(2460);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_memregs;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_21;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_21:;
	{
	LINE_NUMBER(2462);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_lookaheads;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_lookaheads;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_22;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_22:;
	{
	LINE_NUMBER(2463);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_data;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_char_Array1_char_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_23;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_23:;
	{
	LINE_NUMBER(2464);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_top;
	jint temp0 = (jint)((func_regexodus_SearchEntry_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_25;
	}
	goto label_26;
label_24:;
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_top;
	if (sp[0].o == nullptr) goto label_25;
	}
label_26:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_25:;
	{
	LINE_NUMBER(2465);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_first;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_first;
	jint temp0 = (jint)((func_regexodus_SearchEntry_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_28;
	}
	goto label_29;
label_27:;
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_first;
	if (sp[0].o == nullptr) goto label_28;
	}
label_29:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_28:;
	{
	LINE_NUMBER(2466);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_defaultEntry;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_defaultEntry;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_defaultEntry;
	jint temp0 = (jint)((func_regexodus_SearchEntry_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_31;
	}
	goto label_32;
label_30:;
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_defaultEntry;
	if (sp[0].o == nullptr) goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(2467);
	popStackFrame(ctx);
	return (jint(0));
	}
label_31:;
	{
	LINE_NUMBER(2468);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cache;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_cache;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_34;
	}
	goto label_35;
label_33:;
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_cache;
	if (sp[0].o == nullptr) goto label_34;
	}
label_35:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_34:;
	{
	LINE_NUMBER(2469);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_prefixBounds;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_prefixBounds;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_prefixBounds;
	jint temp0 = (jint)((func_regexodus_MemReg_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_MemReg_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_37;
	}
label_36:;
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_prefixBounds;
	if (sp[0].o != nullptr) goto label_38;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_suffixBounds;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_suffixBounds;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_suffixBounds;
	jint temp0 = (jint)((func_regexodus_MemReg_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_MemReg_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_38;
	}
	goto label_40;
label_39:;
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_suffixBounds;
	if (sp[0].o != nullptr) goto label_38;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_targetBounds;
	if (sp[0].o == nullptr) goto label_41;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_targetBounds;
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_targetBounds;
	jint temp0 = (jint)((func_regexodus_MemReg_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_MemReg_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_38;
	}
	goto label_40;
label_41:;
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[2].o)))->F_targetBounds;
	if (sp[0].o != nullptr) goto label_38;
	}
label_40:;
	INST_ICONST(1);
	goto label_37;
label_38:;
	INST_ICONST(0);
label_37:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_Matcher_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2475);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_re;
	jint temp0 = (jint)((func_regexodus_Pattern_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(2476);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_counters;
	jint temp1 = (jint)SM_java_util_Arrays_hashCode_Array1_int_R_int(ctx, sp[0].o);
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(2477);
	jint temp2 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregs;
	jint temp3 = (jint)SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(ctx, sp[0].o);
	frame[1].i = (temp2 + temp3);
	LINE_NUMBER(2478);
	jint temp4 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_lookaheads;
	jint temp5 = (jint)SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(ctx, sp[0].o);
	frame[1].i = (temp4 + temp5);
	LINE_NUMBER(2479);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_counterCount));
	LINE_NUMBER(2480);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_memregCount));
	LINE_NUMBER(2481);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_lookaheadCount));
	LINE_NUMBER(2482);
	jint temp6 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp7 = (jint)SM_java_util_Arrays_hashCode_Array1_char_R_int(ctx, sp[0].o);
	frame[1].i = (temp6 + temp7);
	LINE_NUMBER(2483);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_offset));
	LINE_NUMBER(2484);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_end));
	LINE_NUMBER(2485);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wOffset));
	LINE_NUMBER(2486);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_wEnd));
	LINE_NUMBER(2487);
	jint temp8 = (31) * (frame[1].i);
	sp[0].i = temp8;
	sp += 1;
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_shared) == 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2488);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_top;
	jint temp0 = (jint)((func_regexodus_SearchEntry_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2489);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_first;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_first;
	jint temp0 = (jint)((func_regexodus_SearchEntry_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_22;
	}
label_21:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2490);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_defaultEntry;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_defaultEntry;
	jint temp0 = (jint)((func_regexodus_SearchEntry_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_25;
	}
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2491);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_called) == 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2492);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_minQueueLength));
	LINE_NUMBER(2493);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cache;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_31;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cache;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_32;
	}
label_31:;
	INST_ICONST(0);
label_32:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2494);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cacheOffset));
	LINE_NUMBER(2495);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_cacheLength));
	LINE_NUMBER(2496);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_prefixBounds;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_36;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_prefixBounds;
	jint temp0 = (jint)((func_regexodus_MemReg_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_MemReg_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_37;
	}
label_36:;
	INST_ICONST(0);
label_37:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2497);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_suffixBounds;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_39;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_suffixBounds;
	jint temp0 = (jint)((func_regexodus_MemReg_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_MemReg_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_40;
	}
label_39:;
	INST_ICONST(0);
label_40:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2498);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_targetBounds;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_42;
	}
	{
	sp[0].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_targetBounds;
	jint temp0 = (jint)((func_regexodus_MemReg_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_MemReg_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_43;
	}
label_42:;
	INST_ICONST(0);
label_43:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2499);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_replaceFirst_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:replaceFirst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2511);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2512);
	sp[0].o = frame[0].o;
	clinit_regexodus_PerlSubstitution(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution);
	init_regexodus_PerlSubstitution_java_lang_String(ctx, sp[1].o, (frame[1].o));
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_int_R_int(ctx, sp[0].o, sp[1].o, (frame[2].o), (jint(1)));
	LINE_NUMBER(2513);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_replaceAmount_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:replaceAmount", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2526);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2527);
	sp[0].o = frame[0].o;
	clinit_regexodus_PerlSubstitution(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution);
	init_regexodus_PerlSubstitution_java_lang_String(ctx, sp[1].o, (frame[1].o));
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_int_R_int(ctx, sp[0].o, sp[1].o, (frame[3].o), (frame[2].i));
	LINE_NUMBER(2528);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_replaceAll_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:replaceAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2539);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2540);
	sp[0].o = frame[0].o;
	clinit_regexodus_PerlSubstitution(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution);
	init_regexodus_PerlSubstitution_java_lang_String(ctx, sp[1].o, (frame[1].o));
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(2541);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_replaceFirst_regexodus_Substitution_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:replaceFirst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2554);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2555);
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(2556);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_replaceAmount_regexodus_Substitution_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:replaceAmount", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2569);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2570);
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[2].i));
	LINE_NUMBER(2571);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Matcher_replaceAll_regexodus_Substitution_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:replaceAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2582);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((regexodus_Matcher *) NULL_CHECK((frame[0].o)))->F_data;
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2583);
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(2584);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_regexodus_Matcher(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_Matcher_serialVersionUID = jlong(-3628346657932720807ll);
	SF_regexodus_Matcher_ANCHOR_START = jint(1);
	SF_regexodus_Matcher_ANCHOR_LASTMATCH = jint(2);
	SF_regexodus_Matcher_ANCHOR_END = jint(4);
	SF_regexodus_Matcher_ACCEPT_INCOMPLETE = jint(8);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Matcher:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Matcher(ctx);
	{
	LINE_NUMBER(104);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (18));
	clinit_regexodus_Matcher(ctx);
	SF_regexodus_Matcher_startAnchor = sp[0].o;
	LINE_NUMBER(107);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term_int(ctx, sp[0].o, (23));
	clinit_regexodus_Matcher(ctx);
	SF_regexodus_Matcher_lastMatchAnchor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Matcher[] {
	(void *) M_regexodus_Matcher_hashCode_R_int,
	(void *) M_regexodus_Matcher_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_Matcher_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Matcher_start_R_int,
	(void *) M_regexodus_Matcher_start_int_R_int,
	(void *) M_regexodus_Matcher_start_java_lang_String_R_int,
	(void *) M_regexodus_Matcher_end_R_int,
	(void *) M_regexodus_Matcher_end_int_R_int,
	(void *) M_regexodus_Matcher_end_java_lang_String_R_int,
	(void *) M_regexodus_Matcher_group_R_java_lang_String,
	(void *) M_regexodus_Matcher_group_int_R_java_lang_String,
	(void *) M_regexodus_Matcher_group_java_lang_String_R_java_lang_String,
	(void *) M_regexodus_Matcher_groupCount_R_int,
	(void *) M_regexodus_Matcher_pattern_R_regexodus_Pattern,
	(void *) M_regexodus_Matcher_isCaptured_R_boolean,
	(void *) M_regexodus_Matcher_isCaptured_int_R_boolean,
	(void *) M_regexodus_Matcher_isCaptured_java_lang_String_R_boolean,
	(void *) M_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean,
	(void *) M_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean,
	(void *) M_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_R_boolean,
	(void *) M_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean,
	(void *) M_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean,
	(void *) M_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean,
	(void *) M_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_R_boolean,
	(void *) M_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_R_boolean,
	(void *) M_regexodus_Matcher_prefix_R_java_lang_String,
	(void *) M_regexodus_Matcher_suffix_R_java_lang_String,
	(void *) M_regexodus_Matcher_target_R_java_lang_String,
	(void *) M_regexodus_Matcher_targetStart_R_int,
	(void *) M_regexodus_Matcher_targetEnd_R_int,
	(void *) M_regexodus_Matcher_targetChars_R_Array1_char,
	(void *) M_regexodus_Matcher_length_R_int,
	(void *) M_regexodus_Matcher_length_int_R_int,
	(void *) M_regexodus_Matcher_charAt_int_R_char,
	(void *) M_regexodus_Matcher_charAt_int_int_R_char,
	(void *) M_regexodus_Matcher_copy_R_regexodus_Matcher,
	(void *) M_regexodus_Matcher_setPattern_regexodus_Pattern,
	(void *) M_regexodus_Matcher_setTarget_regexodus_Matcher_int,
	(void *) M_regexodus_Matcher_setTarget_java_lang_CharSequence,
	(void *) M_regexodus_Matcher_setTarget_java_lang_CharSequence_int_int,
	(void *) M_regexodus_Matcher_setTarget_Array1_char_int_int,
	(void *) M_regexodus_Matcher_setTarget_Array1_char_int_int_boolean,
	(void *) M_regexodus_Matcher_setTarget_java_io_Reader_int,
	(void *) M_regexodus_Matcher_setAll_java_io_Reader,
	(void *) M_regexodus_Matcher_getString_int_int_R_java_lang_String,
	(void *) M_regexodus_Matcher_matchesPrefix_R_boolean,
	(void *) M_regexodus_Matcher_isStart_R_boolean,
	(void *) M_regexodus_Matcher_matches_R_boolean,
	(void *) M_regexodus_Matcher_matches_java_lang_String_R_boolean,
	(void *) M_regexodus_Matcher_setPosition_int,
	(void *) M_regexodus_Matcher_find_R_boolean,
	(void *) M_regexodus_Matcher_find_int_R_boolean,
	(void *) M_regexodus_Matcher_findAll_R_regexodus_MatchIterator,
	(void *) M_regexodus_Matcher_findAll_int_R_regexodus_MatchIterator,
	(void *) M_regexodus_Matcher_foundStrings_R_java_util_ArrayList,
	(void *) M_regexodus_Matcher_proceed_R_boolean,
	(void *) M_regexodus_Matcher_proceed_int_R_boolean,
	(void *) M_regexodus_Matcher_skip,
	(void *) M_regexodus_Matcher_init,
	(void *) M_regexodus_Matcher_flush,
	(void *) M_regexodus_Matcher_rflush,
	(void *) M_regexodus_Matcher_dataStart_R_int,
	(void *) M_regexodus_Matcher_dataEnd_R_int,
	(void *) M_regexodus_Matcher_groups_R_Array1_java_lang_String,
	(void *) M_regexodus_Matcher_groupv_R_java_util_ArrayList,
	(void *) M_regexodus_Matcher_bounds_int_R_regexodus_MemReg,
	(void *) M_regexodus_Matcher_search_int_R_boolean,
	(void *) M_regexodus_Matcher_toString_d_R_java_lang_String,
	(void *) M_regexodus_Matcher_replaceFirst_java_lang_String_R_java_lang_String,
	(void *) M_regexodus_Matcher_replaceAmount_java_lang_String_int_R_java_lang_String,
	(void *) M_regexodus_Matcher_replaceAll_java_lang_String_R_java_lang_String,
	(void *) M_regexodus_Matcher_replaceFirst_regexodus_Substitution_R_java_lang_String,
	(void *) M_regexodus_Matcher_replaceAmount_regexodus_Substitution_int_R_java_lang_String,
	(void *) M_regexodus_Matcher_replaceAll_regexodus_Substitution_R_java_lang_String,
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
	{ "start", "()I" },
	{ "start", "(I)I" },
	{ "start", "(Ljava/lang/String;)I" },
	{ "end", "()I" },
	{ "end", "(I)I" },
	{ "end", "(Ljava/lang/String;)I" },
	{ "group", "()Ljava/lang/String;" },
	{ "group", "(I)Ljava/lang/String;" },
	{ "group", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "groupCount", "()I" },
	{ "pattern", "()Lregexodus/Pattern;" },
	{ "isCaptured", "()Z" },
	{ "isCaptured", "(I)Z" },
	{ "isCaptured", "(Ljava/lang/String;)Z" },
	{ "getGroup", "(ILjava/lang/StringBuilder;I)Z" },
	{ "getGroup", "(ILregexodus/TextBuffer;I)Z" },
	{ "getGroup", "(ILjava/lang/StringBuilder;)Z" },
	{ "getGroup", "(ILregexodus/TextBuffer;)Z" },
	{ "getGroup", "(Ljava/lang/String;Ljava/lang/StringBuilder;I)Z" },
	{ "getGroup", "(Ljava/lang/String;Lregexodus/TextBuffer;I)Z" },
	{ "getGroup", "(Ljava/lang/String;Ljava/lang/StringBuilder;)Z" },
	{ "getGroup", "(Ljava/lang/String;Lregexodus/TextBuffer;)Z" },
	{ "prefix", "()Ljava/lang/String;" },
	{ "suffix", "()Ljava/lang/String;" },
	{ "target", "()Ljava/lang/String;" },
	{ "targetStart", "()I" },
	{ "targetEnd", "()I" },
	{ "targetChars", "()[C" },
	{ "length", "()I" },
	{ "length", "(I)I" },
	{ "charAt", "(I)C" },
	{ "charAt", "(II)C" },
	{ "copy", "()Lregexodus/Matcher;" },
	{ "setPattern", "(Lregexodus/Pattern;)V" },
	{ "setTarget", "(Lregexodus/Matcher;I)V" },
	{ "setTarget", "(Ljava/lang/CharSequence;)V" },
	{ "setTarget", "(Ljava/lang/CharSequence;II)V" },
	{ "setTarget", "([CII)V" },
	{ "setTarget", "([CIIZ)V" },
	{ "setTarget", "(Ljava/io/Reader;I)V" },
	{ "setAll", "(Ljava/io/Reader;)V" },
	{ "getString", "(II)Ljava/lang/String;" },
	{ "matchesPrefix", "()Z" },
	{ "isStart", "()Z" },
	{ "matches", "()Z" },
	{ "matches", "(Ljava/lang/String;)Z" },
	{ "setPosition", "(I)V" },
	{ "find", "()Z" },
	{ "find", "(I)Z" },
	{ "findAll", "()Lregexodus/MatchIterator;" },
	{ "findAll", "(I)Lregexodus/MatchIterator;" },
	{ "foundStrings", "()Ljava/util/ArrayList;" },
	{ "proceed", "()Z" },
	{ "proceed", "(I)Z" },
	{ "skip", "()V" },
	{ "init", "()V" },
	{ "flush", "()V" },
	{ "rflush", "()V" },
	{ "dataStart", "()I" },
	{ "dataEnd", "()I" },
	{ "groups", "()[Ljava/lang/String;" },
	{ "groupv", "()Ljava/util/ArrayList;" },
	{ "bounds", "(I)Lregexodus/MemReg;" },
	{ "search", "(I)Z" },
	{ "toString_d", "()Ljava/lang/String;" },
	{ "replaceFirst", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "replaceAmount", "(Ljava/lang/String;I)Ljava/lang/String;" },
	{ "replaceAll", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "replaceFirst", "(Lregexodus/Substitution;)Ljava/lang/String;" },
	{ "replaceAmount", "(Lregexodus/Substitution;I)Ljava/lang/String;" },
	{ "replaceAll", "(Lregexodus/Substitution;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_regexodus_MatchResult, &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_Matcher_serialVersionUID, "J", 26 },
	{ "ANCHOR_START", &class_int, (intptr_t) &SF_regexodus_Matcher_ANCHOR_START, "I", 25 },
	{ "ANCHOR_LASTMATCH", &class_int, (intptr_t) &SF_regexodus_Matcher_ANCHOR_LASTMATCH, "I", 25 },
	{ "ANCHOR_END", &class_int, (intptr_t) &SF_regexodus_Matcher_ANCHOR_END, "I", 25 },
	{ "ACCEPT_INCOMPLETE", &class_int, (intptr_t) &SF_regexodus_Matcher_ACCEPT_INCOMPLETE, "I", 25 },
	{ "startAnchor", &class_regexodus_Term, (intptr_t) &SF_regexodus_Matcher_startAnchor, "Lregexodus/Term;", 10 },
	{ "lastMatchAnchor", &class_regexodus_Term, (intptr_t) &SF_regexodus_Matcher_lastMatchAnchor, "Lregexodus/Term;", 10 },
	{ "re", &class_regexodus_Pattern, offsetof(regexodus_Matcher, F_re), "Lregexodus/Pattern;", 2 },
	{ "counters", getArrayClass(&class_int, 1), offsetof(regexodus_Matcher, F_counters), "[I", 2 },
	{ "memregs", getArrayClass(&class_regexodus_MemReg, 1), offsetof(regexodus_Matcher, F_memregs), "[Lregexodus/MemReg;", 2 },
	{ "lookaheads", getArrayClass(&class_regexodus_LAEntry, 1), offsetof(regexodus_Matcher, F_lookaheads), "[Lregexodus/LAEntry;", 2 },
	{ "counterCount", &class_int, offsetof(regexodus_Matcher, F_counterCount), "I", 2 },
	{ "memregCount", &class_int, offsetof(regexodus_Matcher, F_memregCount), "I", 2 },
	{ "lookaheadCount", &class_int, offsetof(regexodus_Matcher, F_lookaheadCount), "I", 2 },
	{ "data", getArrayClass(&class_char, 1), offsetof(regexodus_Matcher, F_data), "[C", 2 },
	{ "offset", &class_int, offsetof(regexodus_Matcher, F_offset), "I", 2 },
	{ "end", &class_int, offsetof(regexodus_Matcher, F_end), "I", 2 },
	{ "wOffset", &class_int, offsetof(regexodus_Matcher, F_wOffset), "I", 2 },
	{ "wEnd", &class_int, offsetof(regexodus_Matcher, F_wEnd), "I", 2 },
	{ "shared", &class_boolean, offsetof(regexodus_Matcher, F_shared), "Z", 2 },
	{ "top", &class_regexodus_SearchEntry, offsetof(regexodus_Matcher, F_top), "Lregexodus/SearchEntry;", 2 },
	{ "first", &class_regexodus_SearchEntry, offsetof(regexodus_Matcher, F_first), "Lregexodus/SearchEntry;", 2 },
	{ "defaultEntry", &class_regexodus_SearchEntry, offsetof(regexodus_Matcher, F_defaultEntry), "Lregexodus/SearchEntry;", 2 },
	{ "called", &class_boolean, offsetof(regexodus_Matcher, F_called), "Z", 2 },
	{ "minQueueLength", &class_int, offsetof(regexodus_Matcher, F_minQueueLength), "I", 2 },
	{ "cache", &class_java_lang_CharSequence, offsetof(regexodus_Matcher, F_cache), "Ljava/lang/CharSequence;", 2 },
	{ "cacheOffset", &class_int, offsetof(regexodus_Matcher, F_cacheOffset), "I", 2 },
	{ "cacheLength", &class_int, offsetof(regexodus_Matcher, F_cacheLength), "I", 2 },
	{ "prefixBounds", &class_regexodus_MemReg, offsetof(regexodus_Matcher, F_prefixBounds), "Lregexodus/MemReg;", 2 },
	{ "suffixBounds", &class_regexodus_MemReg, offsetof(regexodus_Matcher, F_suffixBounds), "Lregexodus/MemReg;", 2 },
	{ "targetBounds", &class_regexodus_MemReg, offsetof(regexodus_Matcher, F_targetBounds), "Lregexodus/MemReg;", 2 },
};

static MethodMetadata methods[] {
	{ "copy", (intptr_t) M_regexodus_Matcher_copy_R_regexodus_Matcher, VTABLE_regexodus_Matcher_copy_R_regexodus_Matcher, "()Lregexodus/Matcher;", 1 },
	{ "<init>", (intptr_t) init_regexodus_Matcher, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_regexodus_Matcher_regexodus_Pattern, 0, "(Lregexodus/Pattern;)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_Matcher_regexodus_Pattern_java_lang_CharSequence, 0, "(Lregexodus/Pattern;Ljava/lang/CharSequence;)V", 1 },
	{ "setPattern", (intptr_t) M_regexodus_Matcher_setPattern_regexodus_Pattern, VTABLE_regexodus_Matcher_setPattern_regexodus_Pattern, "(Lregexodus/Pattern;)V", 1 },
	{ "setTarget", (intptr_t) M_regexodus_Matcher_setTarget_regexodus_Matcher_int, VTABLE_regexodus_Matcher_setTarget_regexodus_Matcher_int, "(Lregexodus/Matcher;I)V", 17 },
	{ "setTarget", (intptr_t) M_regexodus_Matcher_setTarget_java_lang_CharSequence, VTABLE_regexodus_Matcher_setTarget_java_lang_CharSequence, "(Ljava/lang/CharSequence;)V", 1 },
	{ "setTarget", (intptr_t) M_regexodus_Matcher_setTarget_java_lang_CharSequence_int_int, VTABLE_regexodus_Matcher_setTarget_java_lang_CharSequence_int_int, "(Ljava/lang/CharSequence;II)V", 1 },
	{ "setTarget", (intptr_t) M_regexodus_Matcher_setTarget_Array1_char_int_int, VTABLE_regexodus_Matcher_setTarget_Array1_char_int_int, "([CII)V", 1 },
	{ "setTarget", (intptr_t) M_regexodus_Matcher_setTarget_Array1_char_int_int_boolean, VTABLE_regexodus_Matcher_setTarget_Array1_char_int_int_boolean, "([CIIZ)V", 1 },
	{ "setTarget", (intptr_t) M_regexodus_Matcher_setTarget_java_io_Reader_int, VTABLE_regexodus_Matcher_setTarget_java_io_Reader_int, "(Ljava/io/Reader;I)V", 1 },
	{ "setAll", (intptr_t) M_regexodus_Matcher_setAll_java_io_Reader, VTABLE_regexodus_Matcher_setAll_java_io_Reader, "(Ljava/io/Reader;)V", 1 },
	{ "getString", (intptr_t) M_regexodus_Matcher_getString_int_int_R_java_lang_String, VTABLE_regexodus_Matcher_getString_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 1 },
	{ "matchesPrefix", (intptr_t) M_regexodus_Matcher_matchesPrefix_R_boolean, VTABLE_regexodus_Matcher_matchesPrefix_R_boolean, "()Z", 17 },
	{ "isStart", (intptr_t) M_regexodus_Matcher_isStart_R_boolean, VTABLE_regexodus_Matcher_isStart_R_boolean, "()Z", 131089 },
	{ "matches", (intptr_t) M_regexodus_Matcher_matches_R_boolean, VTABLE_regexodus_Matcher_matches_R_boolean, "()Z", 17 },
	{ "matches", (intptr_t) M_regexodus_Matcher_matches_java_lang_String_R_boolean, VTABLE_regexodus_Matcher_matches_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 17 },
	{ "setPosition", (intptr_t) M_regexodus_Matcher_setPosition_int, VTABLE_regexodus_Matcher_setPosition_int, "(I)V", 1 },
	{ "find", (intptr_t) M_regexodus_Matcher_find_R_boolean, VTABLE_regexodus_Matcher_find_R_boolean, "()Z", 17 },
	{ "find", (intptr_t) M_regexodus_Matcher_find_int_R_boolean, VTABLE_regexodus_Matcher_find_int_R_boolean, "(I)Z", 1 },
	{ "findAll", (intptr_t) M_regexodus_Matcher_findAll_R_regexodus_MatchIterator, VTABLE_regexodus_Matcher_findAll_R_regexodus_MatchIterator, "()Lregexodus/MatchIterator;", 1 },
	{ "findAll", (intptr_t) M_regexodus_Matcher_findAll_int_R_regexodus_MatchIterator, VTABLE_regexodus_Matcher_findAll_int_R_regexodus_MatchIterator, "(I)Lregexodus/MatchIterator;", 1 },
	{ "foundStrings", (intptr_t) M_regexodus_Matcher_foundStrings_R_java_util_ArrayList, VTABLE_regexodus_Matcher_foundStrings_R_java_util_ArrayList, "()Ljava/util/ArrayList;", 1 },
	{ "proceed", (intptr_t) M_regexodus_Matcher_proceed_R_boolean, VTABLE_regexodus_Matcher_proceed_R_boolean, "()Z", 17 },
	{ "proceed", (intptr_t) M_regexodus_Matcher_proceed_int_R_boolean, VTABLE_regexodus_Matcher_proceed_int_R_boolean, "(I)Z", 1 },
	{ "skip", (intptr_t) M_regexodus_Matcher_skip, VTABLE_regexodus_Matcher_skip, "()V", 1 },
	{ "init", (intptr_t) M_regexodus_Matcher_init, VTABLE_regexodus_Matcher_init, "()V", 2 },
	{ "flush", (intptr_t) M_regexodus_Matcher_flush, VTABLE_regexodus_Matcher_flush, "()V", 1 },
	{ "rflush", (intptr_t) M_regexodus_Matcher_rflush, VTABLE_regexodus_Matcher_rflush, "()V", 2 },
	{ "toString", (intptr_t) M_regexodus_Matcher_toString_R_java_lang_String, VTABLE_regexodus_Matcher_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "pattern", (intptr_t) M_regexodus_Matcher_pattern_R_regexodus_Pattern, VTABLE_regexodus_Matcher_pattern_R_regexodus_Pattern, "()Lregexodus/Pattern;", 1 },
	{ "target", (intptr_t) M_regexodus_Matcher_target_R_java_lang_String, VTABLE_regexodus_Matcher_target_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "targetChars", (intptr_t) M_regexodus_Matcher_targetChars_R_Array1_char, VTABLE_regexodus_Matcher_targetChars_R_Array1_char, "()[C", 1 },
	{ "targetStart", (intptr_t) M_regexodus_Matcher_targetStart_R_int, VTABLE_regexodus_Matcher_targetStart_R_int, "()I", 1 },
	{ "targetEnd", (intptr_t) M_regexodus_Matcher_targetEnd_R_int, VTABLE_regexodus_Matcher_targetEnd_R_int, "()I", 1 },
	{ "dataStart", (intptr_t) M_regexodus_Matcher_dataStart_R_int, VTABLE_regexodus_Matcher_dataStart_R_int, "()I", 1 },
	{ "dataEnd", (intptr_t) M_regexodus_Matcher_dataEnd_R_int, VTABLE_regexodus_Matcher_dataEnd_R_int, "()I", 1 },
	{ "charAt", (intptr_t) M_regexodus_Matcher_charAt_int_R_char, VTABLE_regexodus_Matcher_charAt_int_R_char, "(I)C", 1 },
	{ "charAt", (intptr_t) M_regexodus_Matcher_charAt_int_int_R_char, VTABLE_regexodus_Matcher_charAt_int_int_R_char, "(II)C", 1 },
	{ "length", (intptr_t) M_regexodus_Matcher_length_R_int, VTABLE_regexodus_Matcher_length_R_int, "()I", 17 },
	{ "start", (intptr_t) M_regexodus_Matcher_start_R_int, VTABLE_regexodus_Matcher_start_R_int, "()I", 17 },
	{ "end", (intptr_t) M_regexodus_Matcher_end_R_int, VTABLE_regexodus_Matcher_end_R_int, "()I", 17 },
	{ "prefix", (intptr_t) M_regexodus_Matcher_prefix_R_java_lang_String, VTABLE_regexodus_Matcher_prefix_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "suffix", (intptr_t) M_regexodus_Matcher_suffix_R_java_lang_String, VTABLE_regexodus_Matcher_suffix_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "groupCount", (intptr_t) M_regexodus_Matcher_groupCount_R_int, VTABLE_regexodus_Matcher_groupCount_R_int, "()I", 1 },
	{ "group", (intptr_t) M_regexodus_Matcher_group_int_R_java_lang_String, VTABLE_regexodus_Matcher_group_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "group", (intptr_t) M_regexodus_Matcher_group_R_java_lang_String, VTABLE_regexodus_Matcher_group_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "group", (intptr_t) M_regexodus_Matcher_group_java_lang_String_R_java_lang_String, VTABLE_regexodus_Matcher_group_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getGroup", (intptr_t) M_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean, VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean, "(ILregexodus/TextBuffer;)Z", 1 },
	{ "getGroup", (intptr_t) M_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean, VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_int_R_boolean, "(ILregexodus/TextBuffer;I)Z", 1 },
	{ "getGroup", (intptr_t) M_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_R_boolean, VTABLE_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_R_boolean, "(Ljava/lang/String;Lregexodus/TextBuffer;)Z", 1 },
	{ "getGroup", (intptr_t) M_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean, VTABLE_regexodus_Matcher_getGroup_java_lang_String_regexodus_TextBuffer_int_R_boolean, "(Ljava/lang/String;Lregexodus/TextBuffer;I)Z", 1 },
	{ "getGroup", (intptr_t) M_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_R_boolean, VTABLE_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_R_boolean, "(ILjava/lang/StringBuilder;)Z", 1 },
	{ "getGroup", (intptr_t) M_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean, VTABLE_regexodus_Matcher_getGroup_int_java_lang_StringBuilder_int_R_boolean, "(ILjava/lang/StringBuilder;I)Z", 1 },
	{ "getGroup", (intptr_t) M_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_R_boolean, VTABLE_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_R_boolean, "(Ljava/lang/String;Ljava/lang/StringBuilder;)Z", 1 },
	{ "getGroup", (intptr_t) M_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean, VTABLE_regexodus_Matcher_getGroup_java_lang_String_java_lang_StringBuilder_int_R_boolean, "(Ljava/lang/String;Ljava/lang/StringBuilder;I)Z", 1 },
	{ "groups", (intptr_t) M_regexodus_Matcher_groups_R_Array1_java_lang_String, VTABLE_regexodus_Matcher_groups_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "groupv", (intptr_t) M_regexodus_Matcher_groupv_R_java_util_ArrayList, VTABLE_regexodus_Matcher_groupv_R_java_util_ArrayList, "()Ljava/util/ArrayList;", 1 },
	{ "bounds", (intptr_t) M_regexodus_Matcher_bounds_int_R_regexodus_MemReg, VTABLE_regexodus_Matcher_bounds_int_R_regexodus_MemReg, "(I)Lregexodus/MemReg;", 2 },
	{ "isCaptured", (intptr_t) M_regexodus_Matcher_isCaptured_R_boolean, VTABLE_regexodus_Matcher_isCaptured_R_boolean, "()Z", 17 },
	{ "isCaptured", (intptr_t) M_regexodus_Matcher_isCaptured_int_R_boolean, VTABLE_regexodus_Matcher_isCaptured_int_R_boolean, "(I)Z", 17 },
	{ "isCaptured", (intptr_t) M_regexodus_Matcher_isCaptured_java_lang_String_R_boolean, VTABLE_regexodus_Matcher_isCaptured_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 17 },
	{ "length", (intptr_t) M_regexodus_Matcher_length_int_R_int, VTABLE_regexodus_Matcher_length_int_R_int, "(I)I", 17 },
	{ "start", (intptr_t) M_regexodus_Matcher_start_int_R_int, VTABLE_regexodus_Matcher_start_int_R_int, "(I)I", 17 },
	{ "start", (intptr_t) M_regexodus_Matcher_start_java_lang_String_R_int, VTABLE_regexodus_Matcher_start_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "end", (intptr_t) M_regexodus_Matcher_end_java_lang_String_R_int, VTABLE_regexodus_Matcher_end_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "end", (intptr_t) M_regexodus_Matcher_end_int_R_int, VTABLE_regexodus_Matcher_end_int_R_int, "(I)I", 17 },
	{ "search", (intptr_t) M_regexodus_Matcher_search_int_R_boolean, VTABLE_regexodus_Matcher_search_int_R_boolean, "(I)Z", 1 },
	{ "compareRegions", (intptr_t) SM_regexodus_Matcher_compareRegions_Array1_char_int_int_int_int_regexodus_Term_R_boolean, 0, "([CIIIILregexodus/Term;)Z", 10 },
	{ "compareRegionsForward", (intptr_t) SM_regexodus_Matcher_compareRegionsForward_Array1_char_int_int_int_int_boolean_boolean_R_boolean, 0, "([CIIIIZZ)Z", 10 },
	{ "compareRegionsReverse", (intptr_t) SM_regexodus_Matcher_compareRegionsReverse_Array1_char_int_int_int_int_boolean_boolean_R_boolean, 0, "([CIIIIZZ)Z", 10 },
	{ "compareRegionsI", (intptr_t) SM_regexodus_Matcher_compareRegionsI_Array1_char_int_int_int_int_R_boolean, 0, "([CIIII)Z", 10 },
	{ "repeat", (intptr_t) SM_regexodus_Matcher_repeat_Array1_char_int_int_regexodus_Term_R_int, 0, "([CIILregexodus/Term;)I", 10 },
	{ "find", (intptr_t) SM_regexodus_Matcher_find_Array1_char_int_int_regexodus_Term_R_int, 0, "([CIILregexodus/Term;)I", 10 },
	{ "findReg", (intptr_t) SM_regexodus_Matcher_findReg_Array1_char_int_int_int_regexodus_Term_int_R_int, 0, "([CIIILregexodus/Term;I)I", 10 },
	{ "findBack", (intptr_t) SM_regexodus_Matcher_findBack_Array1_char_int_int_regexodus_Term_R_int, 0, "([CIILregexodus/Term;)I", 10 },
	{ "findBackReg", (intptr_t) SM_regexodus_Matcher_findBackReg_Array1_char_int_int_int_int_regexodus_Term_int_R_int, 0, "([CIIIILregexodus/Term;I)I", 10 },
	{ "toString_d", (intptr_t) M_regexodus_Matcher_toString_d_R_java_lang_String, VTABLE_regexodus_Matcher_toString_d_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "equals", (intptr_t) M_regexodus_Matcher_equals_java_lang_Object_R_boolean, VTABLE_regexodus_Matcher_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_Matcher_hashCode_R_int, VTABLE_regexodus_Matcher_hashCode_R_int, "()I", 1 },
	{ "replaceFirst", (intptr_t) M_regexodus_Matcher_replaceFirst_java_lang_String_R_java_lang_String, VTABLE_regexodus_Matcher_replaceFirst_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "replaceAmount", (intptr_t) M_regexodus_Matcher_replaceAmount_java_lang_String_int_R_java_lang_String, VTABLE_regexodus_Matcher_replaceAmount_java_lang_String_int_R_java_lang_String, "(Ljava/lang/String;I)Ljava/lang/String;", 1 },
	{ "replaceAll", (intptr_t) M_regexodus_Matcher_replaceAll_java_lang_String_R_java_lang_String, VTABLE_regexodus_Matcher_replaceAll_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "replaceFirst", (intptr_t) M_regexodus_Matcher_replaceFirst_regexodus_Substitution_R_java_lang_String, VTABLE_regexodus_Matcher_replaceFirst_regexodus_Substitution_R_java_lang_String, "(Lregexodus/Substitution;)Ljava/lang/String;", 1 },
	{ "replaceAmount", (intptr_t) M_regexodus_Matcher_replaceAmount_regexodus_Substitution_int_R_java_lang_String, VTABLE_regexodus_Matcher_replaceAmount_regexodus_Substitution_int_R_java_lang_String, "(Lregexodus/Substitution;I)Ljava/lang/String;", 1 },
	{ "replaceAll", (intptr_t) M_regexodus_Matcher_replaceAll_regexodus_Substitution_R_java_lang_String, VTABLE_regexodus_Matcher_replaceAll_regexodus_Substitution_R_java_lang_String, "(Lregexodus/Substitution;)Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_regexodus_Matcher, 0, "()V", 8 },
};

Class class_regexodus_Matcher{
		.nativeName = (intptr_t) "regexodus/Matcher",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Matcher),
		.classVtable = (intptr_t) vtable_regexodus_Matcher,
		.staticInitializer = (intptr_t) clinit_regexodus_Matcher,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Matcher,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 31,
		.nativeFields = (intptr_t) fields,
		.methodCount = 87,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 82,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Matcher = registerClass(&class_regexodus_Matcher);

}
