#include "regexodus/CharacterClass.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/util/HashMap.h"
#include "java/lang/IllegalArgumentException.h"
#include "regexodus/UnicodeConstants.h"
#include "java/util/ArrayList.h"
#include "regexodus/Category.h"
#include "regexodus/Term.h"
#include "regexodus/PatternSyntaxException.h"
#include "java/lang/CharSequence.h"
#include "java/io/PrintStream.h"
#include "regexodus/ds/IntBitSet.h"
#include "regexodus/CharacterClass.h"
#include "java/lang/Object.h"
#include "regexodus/BlockSet.h"
#include "java/lang/String.h"
#include "java/lang/Throwable.h"
#include "java/util/List.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_regexodus_CharacterClass_DIGIT;
jobject SF_regexodus_CharacterClass_WORDCHAR;
jobject SF_regexodus_CharacterClass_SPACE;
jobject SF_regexodus_CharacterClass_HSPACE;
jobject SF_regexodus_CharacterClass_VSPACE;
jobject SF_regexodus_CharacterClass_UDIGIT;
jobject SF_regexodus_CharacterClass_UWORDCHAR;
jobject SF_regexodus_CharacterClass_USPACE;
jobject SF_regexodus_CharacterClass_UHSPACE;
jobject SF_regexodus_CharacterClass_UVSPACE;
jobject SF_regexodus_CharacterClass_NONDIGIT;
jobject SF_regexodus_CharacterClass_NONWORDCHAR;
jobject SF_regexodus_CharacterClass_NONSPACE;
jobject SF_regexodus_CharacterClass_NONHSPACE;
jobject SF_regexodus_CharacterClass_NONVSPACE;
jobject SF_regexodus_CharacterClass_UNONDIGIT;
jobject SF_regexodus_CharacterClass_UNONWORDCHAR;
jobject SF_regexodus_CharacterClass_UNONSPACE;
jobject SF_regexodus_CharacterClass_UNONHSPACE;
jobject SF_regexodus_CharacterClass_UNONVSPACE;
jbool SF_regexodus_CharacterClass_namesInitialized;
jobject SF_regexodus_CharacterClass_namedClasses;
jobject SF_regexodus_CharacterClass_unicodeBlocks;
jobject SF_regexodus_CharacterClass_posixClasses;
jobject SF_regexodus_CharacterClass_unicodeCategories;
jint SF_regexodus_CharacterClass_ADD;
jint SF_regexodus_CharacterClass_SUBTRACT;
jint SF_regexodus_CharacterClass_INTERSECT;
jobject SF_regexodus_CharacterClass_blockDataStarts;
jobject SF_regexodus_CharacterClass_blockDataEnds;
jobject SF_regexodus_CharacterClass_blockDataNames;
jobject SF_regexodus_CharacterClass_b0;
jobject SF_regexodus_CharacterClass_b2;

void mark_regexodus_CharacterClass(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_regexodus_CharacterClass_DIGIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_DIGIT)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_DIGIT, mark, depth + 1);
		if (SF_regexodus_CharacterClass_WORDCHAR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_WORDCHAR)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_WORDCHAR, mark, depth + 1);
		if (SF_regexodus_CharacterClass_SPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_SPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_SPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_HSPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_HSPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_HSPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_VSPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_VSPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_VSPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_UDIGIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_UDIGIT)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_UDIGIT, mark, depth + 1);
		if (SF_regexodus_CharacterClass_UWORDCHAR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_UWORDCHAR)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_UWORDCHAR, mark, depth + 1);
		if (SF_regexodus_CharacterClass_USPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_USPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_USPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_UHSPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_UHSPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_UHSPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_UVSPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_UVSPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_UVSPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_NONDIGIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_NONDIGIT)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_NONDIGIT, mark, depth + 1);
		if (SF_regexodus_CharacterClass_NONWORDCHAR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_NONWORDCHAR)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_NONWORDCHAR, mark, depth + 1);
		if (SF_regexodus_CharacterClass_NONSPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_NONSPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_NONSPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_NONHSPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_NONHSPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_NONHSPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_NONVSPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_NONVSPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_NONVSPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_UNONDIGIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_UNONDIGIT)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_UNONDIGIT, mark, depth + 1);
		if (SF_regexodus_CharacterClass_UNONWORDCHAR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_UNONWORDCHAR)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_UNONWORDCHAR, mark, depth + 1);
		if (SF_regexodus_CharacterClass_UNONSPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_UNONSPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_UNONSPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_UNONHSPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_UNONHSPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_UNONHSPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_UNONVSPACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_UNONVSPACE)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_UNONVSPACE, mark, depth + 1);
		if (SF_regexodus_CharacterClass_namedClasses)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_namedClasses)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_namedClasses, mark, depth + 1);
		if (SF_regexodus_CharacterClass_unicodeBlocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_unicodeBlocks)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_unicodeBlocks, mark, depth + 1);
		if (SF_regexodus_CharacterClass_posixClasses)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_posixClasses)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_posixClasses, mark, depth + 1);
		if (SF_regexodus_CharacterClass_unicodeCategories)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_unicodeCategories)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_unicodeCategories, mark, depth + 1);
		if (SF_regexodus_CharacterClass_blockDataStarts)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_blockDataStarts)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_blockDataStarts, mark, depth + 1);
		if (SF_regexodus_CharacterClass_blockDataEnds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_blockDataEnds)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_blockDataEnds, mark, depth + 1);
		if (SF_regexodus_CharacterClass_blockDataNames)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_blockDataNames)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_blockDataNames, mark, depth + 1);
		if (SF_regexodus_CharacterClass_b0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_b0)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_b0, mark, depth + 1);
		if (SF_regexodus_CharacterClass_b2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_CharacterClass_b2)->clazz)->markFunction)((jobject) SF_regexodus_CharacterClass_b2, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_regexodus_Term(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (regexodus_CharacterClass *) object;
}

void init_regexodus_CharacterClass(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_regexodus_Term(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:registerClass", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(118);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_namedClasses;
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"_"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_util_ArrayList_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_contains_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[0].o));
	}
label_3:;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_initPosixClasses(jcontext ctx) {
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:initPosixClasses", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	{
	LINE_NUMBER(124);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(125);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[0].o), (97), (122));
	LINE_NUMBER(126);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Lower"_j));
	sp[1].o = frame[0].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(127);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(128);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[1].o), (65), (90));
	LINE_NUMBER(129);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Upper"_j));
	sp[1].o = frame[1].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(130);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(131);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[2].o), (jint(0)), (127));
	LINE_NUMBER(132);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"ASCII"_j));
	sp[1].o = frame[2].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(133);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(134);
	((func_regexodus_BlockSet_add_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_add_regexodus_BlockSet])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(135);
	((func_regexodus_BlockSet_add_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_add_regexodus_BlockSet])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(136);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Alpha"_j));
	sp[1].o = frame[3].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(137);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(138);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[4].o), (48), (57));
	LINE_NUMBER(139);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Digit"_j));
	sp[1].o = frame[4].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(140);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(141);
	((func_regexodus_BlockSet_add_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_regexodus_BlockSet_add_regexodus_BlockSet])(ctx, (frame[5].o), (frame[3].o));
	LINE_NUMBER(142);
	((func_regexodus_BlockSet_add_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_regexodus_BlockSet_add_regexodus_BlockSet])(ctx, (frame[5].o), (frame[4].o));
	LINE_NUMBER(143);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Alnum"_j));
	sp[1].o = frame[5].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(144);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(145);
	((func_regexodus_BlockSet_setChars_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_regexodus_BlockSet_setChars_java_lang_String])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"_j))));
	LINE_NUMBER(146);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Punct"_j));
	sp[1].o = frame[6].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(147);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(148);
	((func_regexodus_BlockSet_add_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_regexodus_BlockSet_add_regexodus_BlockSet])(ctx, (frame[7].o), (frame[5].o));
	LINE_NUMBER(149);
	((func_regexodus_BlockSet_add_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_regexodus_BlockSet_add_regexodus_BlockSet])(ctx, (frame[7].o), (frame[6].o));
	LINE_NUMBER(150);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Graph"_j));
	sp[1].o = frame[7].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(151);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Print"_j));
	sp[1].o = frame[7].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(152);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(153);
	((func_regexodus_BlockSet_setChars_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_regexodus_BlockSet_setChars_java_lang_String])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8" \t"_j))));
	LINE_NUMBER(154);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Blank"_j));
	sp[1].o = frame[8].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(155);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(156);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[9].o), (jint(0)), (31));
	LINE_NUMBER(157);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[9].o), (127));
	LINE_NUMBER(158);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Cntrl"_j));
	sp[1].o = frame[9].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(159);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(160);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[10].o), (48), (57));
	LINE_NUMBER(161);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[10].o), (97), (102));
	LINE_NUMBER(162);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[10].o), (65), (70));
	LINE_NUMBER(163);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"XDigit"_j));
	sp[1].o = frame[10].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(164);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(165);
	((func_regexodus_BlockSet_setChars_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_regexodus_BlockSet_setChars_java_lang_String])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8" \t\n\r\u000c\u000b"_j))));
	LINE_NUMBER(166);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Space"_j));
	sp[1].o = frame[11].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_posixClasses;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_initNames(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:initNames", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	{
	LINE_NUMBER(170);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"C"_j))));
	LINE_NUMBER(171);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Cn"_j))));
	LINE_NUMBER(172);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Cc"_j))));
	LINE_NUMBER(173);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Cf"_j))));
	LINE_NUMBER(174);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Co"_j))));
	LINE_NUMBER(175);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Cs"_j))));
	LINE_NUMBER(177);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"L"_j))));
	LINE_NUMBER(178);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Lu"_j))));
	LINE_NUMBER(179);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Ll"_j))));
	LINE_NUMBER(180);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Lt"_j))));
	LINE_NUMBER(181);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Lm"_j))));
	LINE_NUMBER(182);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Lo"_j))));
	LINE_NUMBER(184);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"M"_j))));
	LINE_NUMBER(185);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Mn"_j))));
	LINE_NUMBER(186);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Me"_j))));
	LINE_NUMBER(187);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Mc"_j))));
	LINE_NUMBER(189);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"N"_j))));
	LINE_NUMBER(190);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Nd"_j))));
	LINE_NUMBER(191);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Nl"_j))));
	LINE_NUMBER(192);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"No"_j))));
	LINE_NUMBER(194);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Z"_j))));
	LINE_NUMBER(195);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Zs"_j))));
	LINE_NUMBER(196);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Zl"_j))));
	LINE_NUMBER(197);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Zp"_j))));
	LINE_NUMBER(198);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Zh"_j))));
	LINE_NUMBER(199);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Zv"_j))));
	LINE_NUMBER(201);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"P"_j))));
	LINE_NUMBER(202);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Pd"_j))));
	LINE_NUMBER(203);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Ps"_j))));
	LINE_NUMBER(204);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Pi"_j))));
	LINE_NUMBER(205);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Pe"_j))));
	LINE_NUMBER(206);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Pf"_j))));
	LINE_NUMBER(207);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Pc"_j))));
	LINE_NUMBER(208);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Po"_j))));
	LINE_NUMBER(210);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"S"_j))));
	LINE_NUMBER(211);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Sm"_j))));
	LINE_NUMBER(212);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Sc"_j))));
	LINE_NUMBER(213);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Sk"_j))));
	LINE_NUMBER(214);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"So"_j))));
	LINE_NUMBER(216);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"J"_j))));
	LINE_NUMBER(217);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Js"_j))));
	LINE_NUMBER(218);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Jp"_j))));
	LINE_NUMBER(220);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"G"_j))));
	LINE_NUMBER(221);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Gh"_j))));
	LINE_NUMBER(222);
	SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Gv"_j))));
	LINE_NUMBER(224);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(225);
	((func_regexodus_BlockSet_setCategory_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setCategory_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Cn"_j))));
	LINE_NUMBER(226);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"UNASSIGNED"_j));
	sp[1].o = frame[0].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_unicodeCategories;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(227);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(228);
	((func_regexodus_BlockSet_setCategory_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setCategory_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Cn"_j))));
	LINE_NUMBER(229);
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(230);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"ASSIGNED"_j));
	sp[1].o = frame[0].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_unicodeCategories;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(232);
	frame[1].i = (jint(0));
	}
label_57:;
	{
	jint temp0 = frame[1].i;
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_blockDataStarts;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_58;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(234);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_blockDataNames;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	clinit_regexodus_CharacterClass(ctx);
	sp[1].o = (jobject)SF_regexodus_CharacterClass_blockDataStarts;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i));
	clinit_regexodus_CharacterClass(ctx);
	sp[1].o = (jobject)SF_regexodus_CharacterClass_blockDataEnds;
	SM_regexodus_CharacterClass_initNamedBlock_java_lang_String_int_int(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(237);
	goto label_59;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(235);
	frame[2].o = sp[0].o;
	LINE_NUMBER(236);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_59:;
	{
	LINE_NUMBER(232);
	INST_IINC(1, 1);
	goto label_57;
	}
label_58:;
	{
	LINE_NUMBER(240);
	SM_regexodus_CharacterClass_initNamedBlock_java_lang_String_int_int(ctx, (((jobject) createStringLiteral(ctx, u8"ALL"_j))), (jint(0)), (jint(65535)));
	LINE_NUMBER(242);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_namesInitialized = (jint(1));
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_initNamedBlock_java_lang_String_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:initNamedBlock", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(247);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) <= (jint(65535))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(248);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"wrong start code ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8") in block "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(249);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	if ((frame[2].i) <= (jint(65535))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(250);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"wrong end code ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8") in block "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(251);
	if ((frame[2].i) >= (frame[1].i)) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"end code < start code in block "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"_"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(253);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_namedClasses;
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[3].o = (checkCast(ctx, &class_regexodus_BlockSet, sp[0].o));
	LINE_NUMBER(254);
	if ((frame[3].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(255);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_unicodeBlocks;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_8:;
	{
	LINE_NUMBER(258);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[3].o), (jchar((frame[1].i))), (jchar((frame[2].i))));
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_initNamedCategory_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:initNamedCategory", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(262);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(263);
	((func_regexodus_BlockSet_setCategory_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_regexodus_BlockSet_setCategory_java_lang_String])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(264);
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	clinit_regexodus_CharacterClass(ctx);
	sp[2].o = (jobject)SF_regexodus_CharacterClass_unicodeCategories;
	SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_CharacterClass_getNamedClass_java_lang_String_R_regexodus_BlockSet(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:getNamedClass", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(268);
	if ((clinit_regexodus_CharacterClass(ctx), (jint)SF_regexodus_CharacterClass_namesInitialized) != 0) goto label_1;
	}
	SM_regexodus_CharacterClass_initNames(ctx);
label_1:;
	{
	LINE_NUMBER(269);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_namedClasses;
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"_"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_regexodus_BlockSet, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_makeDigit_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:makeDigit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(284);
	if ((frame[2].i) == 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_2;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UNONDIGIT;
	goto label_3;
label_2:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UDIGIT;
	goto label_3;
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_4;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_NONDIGIT;
	goto label_3;
label_4:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_DIGIT;
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(286);
	SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_makeSpace_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:makeSpace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(290);
	if ((frame[2].i) == 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_2;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UNONSPACE;
	goto label_3;
label_2:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_USPACE;
	goto label_3;
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_4;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_NONSPACE;
	goto label_3;
label_4:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_SPACE;
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(292);
	SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_makeHSpace_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:makeHSpace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(296);
	if ((frame[2].i) == 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_2;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UNONHSPACE;
	goto label_3;
label_2:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UHSPACE;
	goto label_3;
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_4;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_NONHSPACE;
	goto label_3;
label_4:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_HSPACE;
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(298);
	SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_makeVSpace_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:makeVSpace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(301);
	if ((frame[2].i) == 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_2;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UNONVSPACE;
	goto label_3;
label_2:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UVSPACE;
	goto label_3;
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_4;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_NONVSPACE;
	goto label_3;
label_4:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_VSPACE;
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(303);
	SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_makeWordChar_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:makeWordChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(307);
	if ((frame[2].i) == 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_2;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UNONWORDCHAR;
	goto label_3;
label_2:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UWORDCHAR;
	goto label_3;
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_4;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_NONWORDCHAR;
	goto label_3;
label_4:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_WORDCHAR;
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(309);
	SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_makeWordBoundary_regexodus_Term_boolean_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:makeWordBoundary", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(313);
	SM_regexodus_CharacterClass_makeWordChar_regexodus_Term_boolean_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_2;
	}
	INST_BIPUSH(13);
	goto label_3;
label_2:;
	INST_BIPUSH(11);
label_3:;
	{
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = sp[1].i;
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_makeWordStart_regexodus_Term_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:makeWordStart", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(318);
	SM_regexodus_CharacterClass_makeWordChar_regexodus_Term_boolean_boolean(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_2;
	}
	INST_BIPUSH(14);
	goto label_3;
label_2:;
	INST_BIPUSH(12);
label_3:;
	{
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = sp[1].i;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_makeWordEnd_regexodus_Term_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:makeWordEnd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(323);
	SM_regexodus_CharacterClass_makeWordChar_regexodus_Term_boolean_boolean(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_2;
	}
	INST_BIPUSH(14);
	goto label_3;
label_2:;
	INST_BIPUSH(12);
label_3:;
	{
	sp -= 2;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = sp[1].i;
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_parseGroup_Array1_char_int_int_regexodus_Term_boolean_boolean_boolean_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jbool param5, jbool param6, jbool param7) {
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:parseGroup", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(329);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(330);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(331);
	frame[10].i = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(333);
	if ((frame[1].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	frame[11].i = temp1;
	switch(temp1) {
		case 38: goto label_7;
		case 41: goto label_8;
		case 43: goto label_9;
		case 45: goto label_10;
		case 91: goto label_11;
		default: goto label_12;
	}
	}
label_9:;
	{
	LINE_NUMBER(336);
	frame[10].i = (jint(1));
	LINE_NUMBER(337);
	goto label_3;
	}
label_10:;
	{
	LINE_NUMBER(339);
	frame[10].i = (jint(2));
	LINE_NUMBER(340);
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(342);
	frame[10].i = (jint(3));
	LINE_NUMBER(343);
	goto label_3;
	}
label_11:;
	{
	LINE_NUMBER(345);
	((func_regexodus_BlockSet_reset) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_regexodus_BlockSet_reset])(ctx, (frame[9].o));
	LINE_NUMBER(346);
	jint temp0 = (jint)SM_regexodus_CharacterClass_parseClass_Array1_char_int_int_regexodus_BlockSet_boolean_boolean_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[9].o), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	frame[1].i = temp0;
	LINE_NUMBER(347);
	switch((frame[10].i)) {
		case 1: goto label_18;
		case 2: goto label_19;
		case 3: goto label_20;
		default: goto label_21;
	}
	}
label_18:;
	{
	LINE_NUMBER(349);
	((func_regexodus_BlockSet_add_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_regexodus_BlockSet_add_regexodus_BlockSet])(ctx, (frame[8].o), (frame[9].o));
	LINE_NUMBER(350);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(352);
	((func_regexodus_BlockSet_subtract_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_regexodus_BlockSet_subtract_regexodus_BlockSet])(ctx, (frame[8].o), (frame[9].o));
	LINE_NUMBER(353);
	goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(355);
	((func_regexodus_BlockSet_intersect_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_regexodus_BlockSet_intersect_regexodus_BlockSet])(ctx, (frame[8].o), (frame[9].o));
	}
label_21:;
	LINE_NUMBER(358);
	goto label_3;
label_8:;
	{
	LINE_NUMBER(360);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unbalanced class group"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	goto label_3;
label_4:;
	{
	LINE_NUMBER(363);
	SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term(ctx, (frame[8].o), (frame[3].o));
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_regexodus_CharacterClass_parseClass_Array1_char_int_int_regexodus_Term_boolean_boolean_boolean_boolean_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jbool param5, jbool param6, jbool param7) {
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:parseClass", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(368);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(369);
	jint temp0 = (jint)SM_regexodus_CharacterClass_parseClass_Array1_char_int_int_regexodus_BlockSet_boolean_boolean_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[8].o), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	frame[1].i = temp0;
	LINE_NUMBER(370);
	SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term(ctx, (frame[8].o), (frame[3].o));
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_regexodus_CharacterClass_parseName_Array1_char_int_int_regexodus_Term_boolean_boolean_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jbool param5) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:parseName", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(376);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(377);
	jint temp0 = (jint)SM_regexodus_CharacterClass_parseName_Array1_char_int_int_java_lang_StringBuilder_boolean_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[6].o), (frame[5].i));
	frame[1].i = temp0;
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)SM_regexodus_CharacterClass_getNamedClass_java_lang_String_R_regexodus_BlockSet(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(379);
	if ((frame[7].o) != nullptr) goto label_4;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown class: {"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"}"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(380);
	SM_regexodus_BlockSet_unify_regexodus_BlockSet_regexodus_Term(ctx, (frame[7].o), (frame[3].o));
	LINE_NUMBER(381);
	((regexodus_Term *) NULL_CHECK((frame[3].o)))->F_inverse = (frame[4].i);
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_regexodus_CharacterClass_parseClass_Array1_char_int_int_regexodus_BlockSet_boolean_boolean_boolean_boolean_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jbool param5, jbool param6, jbool param7) {
	jtype frame[28];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:parseClass", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(392);
	frame[9].i = (jint(-1));
	frame[10].i = (jint(0));
	LINE_NUMBER(393);
	frame[11].i = (jint(1));
	frame[12].i = (jint(0));
	frame[13].i = (jint(0));
	LINE_NUMBER(394);
	frame[14].o = (jobject(nullptr));
	LINE_NUMBER(395);
	frame[15].o = (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(397);
	if ((frame[1].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	frame[8].i = temp1;
	switch(temp1) {
		case 9: goto label_11;
		case 10: goto label_11;
		case 12: goto label_11;
		case 13: goto label_11;
		case 32: goto label_11;
		case 45: goto label_12;
		case 91: goto label_13;
		case 92: goto label_14;
		case 93: goto label_15;
		case 94: goto label_16;
		default: goto label_17;
	}
	}
label_15:;
	{
	LINE_NUMBER(401);
	if ((frame[11].i) == 0) goto label_18;
	}
	goto label_17;
label_18:;
	{
	LINE_NUMBER(402);
	if ((frame[13].i) == 0) goto label_19;
	}
	{
	LINE_NUMBER(403);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[3].o), (45));
	}
label_19:;
	{
	LINE_NUMBER(405);
	if ((frame[9].i) < 0) goto label_21;
	}
	{
	LINE_NUMBER(406);
	frame[16].i = (jchar((frame[9].i)));
	LINE_NUMBER(407);
	if ((frame[4].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[16].i));
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, sp[0].o, temp0);
	goto label_21;
	}
label_24:;
	{
	LINE_NUMBER(414);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[3].o), (frame[16].i));
	}
label_21:;
	{
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_12:;
	{
	LINE_NUMBER(419);
	if ((frame[11].i) == 0) goto label_26;
	}
	goto label_17;
label_26:;
	{
	LINE_NUMBER(421);
	if ((frame[13].i) == 0) goto label_27;
	}
	goto label_17;
label_27:;
	{
	LINE_NUMBER(423);
	frame[13].i = (jint(1));
	LINE_NUMBER(424);
	goto label_29;
	}
label_13:;
	{
	LINE_NUMBER(427);
	if ((frame[13].i) == 0) goto label_17;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_17;
	{
	LINE_NUMBER(428);
	if ((frame[9].i) < 0) goto label_31;
	}
	{
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[3].o), (jchar((frame[9].i))));
	}
label_31:;
	{
	LINE_NUMBER(429);
	if ((frame[14].o) != nullptr) goto label_32;
	}
	{
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	goto label_33;
	}
label_32:;
	{
	LINE_NUMBER(430);
	((func_regexodus_BlockSet_reset) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_regexodus_BlockSet_reset])(ctx, (frame[14].o));
	}
label_33:;
	{
	LINE_NUMBER(431);
	jint temp0 = (jint)SM_regexodus_CharacterClass_parseClass_Array1_char_int_int_regexodus_BlockSet_boolean_boolean_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[14].o), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	frame[1].i = temp0;
	LINE_NUMBER(432);
	((func_regexodus_BlockSet_subtract_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_subtract_regexodus_BlockSet])(ctx, (frame[3].o), (frame[14].o));
	LINE_NUMBER(433);
	frame[13].i = (jint(0));
	LINE_NUMBER(434);
	frame[9].i = (jint(-1));
	LINE_NUMBER(435);
	goto label_29;
	}
label_16:;
	{
	LINE_NUMBER(443);
	if ((frame[11].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(444);
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(445);
	frame[12].i = (jint(1));
	LINE_NUMBER(446);
	goto label_29;
	}
label_11:;
	{
	LINE_NUMBER(456);
	if ((frame[5].i) == 0) goto label_17;
	}
	goto label_29;
label_14:;
	{
	LINE_NUMBER(459);
	frame[16].o = (jobject(nullptr));
	LINE_NUMBER(460);
	frame[17].i = (jint(0));
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	frame[8].i = temp1;
	switch(temp1) {
		case 48: goto label_43;
		case 49: goto label_43;
		case 50: goto label_43;
		case 51: goto label_43;
		case 52: goto label_43;
		case 53: goto label_43;
		case 54: goto label_43;
		case 55: goto label_43;
		case 56: goto label_44;
		case 57: goto label_44;
		case 58: goto label_44;
		case 59: goto label_44;
		case 60: goto label_44;
		case 61: goto label_44;
		case 62: goto label_44;
		case 63: goto label_44;
		case 64: goto label_44;
		case 65: goto label_44;
		case 66: goto label_44;
		case 67: goto label_44;
		case 68: goto label_45;
		case 69: goto label_46;
		case 70: goto label_44;
		case 71: goto label_44;
		case 72: goto label_44;
		case 73: goto label_44;
		case 74: goto label_44;
		case 75: goto label_44;
		case 76: goto label_44;
		case 77: goto label_44;
		case 78: goto label_44;
		case 79: goto label_44;
		case 80: goto label_47;
		case 81: goto label_46;
		case 82: goto label_44;
		case 83: goto label_48;
		case 84: goto label_44;
		case 85: goto label_44;
		case 86: goto label_44;
		case 87: goto label_49;
		case 88: goto label_44;
		case 89: goto label_44;
		case 90: goto label_44;
		case 91: goto label_44;
		case 92: goto label_44;
		case 93: goto label_44;
		case 94: goto label_44;
		case 95: goto label_44;
		case 96: goto label_44;
		case 97: goto label_44;
		case 98: goto label_50;
		case 99: goto label_51;
		case 100: goto label_52;
		case 101: goto label_44;
		case 102: goto label_53;
		case 103: goto label_44;
		case 104: goto label_54;
		case 105: goto label_44;
		case 106: goto label_44;
		case 107: goto label_44;
		case 108: goto label_44;
		case 109: goto label_55;
		case 110: goto label_56;
		case 111: goto label_57;
		case 112: goto label_58;
		case 113: goto label_44;
		case 114: goto label_59;
		case 115: goto label_60;
		case 116: goto label_61;
		case 117: goto label_62;
		case 118: goto label_63;
		case 119: goto label_64;
		case 120: goto label_65;
		default: goto label_44;
	}
	}
label_59:;
	{
	LINE_NUMBER(463);
	frame[8].i = (13);
	LINE_NUMBER(464);
	goto label_17;
	}
label_56:;
	{
	LINE_NUMBER(467);
	frame[8].i = (10);
	LINE_NUMBER(468);
	goto label_17;
	}
label_61:;
	{
	LINE_NUMBER(471);
	frame[8].i = (9);
	LINE_NUMBER(472);
	goto label_17;
	}
label_53:;
	{
	LINE_NUMBER(475);
	frame[8].i = (12);
	LINE_NUMBER(476);
	goto label_17;
	}
label_62:;
	{
	LINE_NUMBER(479);
	if ((frame[1].i) < ((frame[2].i) - (jint(4)))) goto label_70;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"incomplete escape sequence \\uXXXX"_j))));
	throwException(ctx, sp[0].o);	}
label_70:;
	{
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)));
	jint temp2 = temp1 << (12);
	sp[0].o = frame[0].o;
	jint temp3 = frame[1].i;
	INST_IINC(1, 1);
	jint temp4 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp3);
	LINE_NUMBER(481);
	jint temp5 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, temp4);
	jint temp6 = temp2 + (temp5 << (8));
	sp[0].o = frame[0].o;
	jint temp7 = frame[1].i;
	INST_IINC(1, 1);
	jint temp8 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp7);
	LINE_NUMBER(482);
	jint temp9 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, temp8);
	jint temp10 = temp6 + (temp9 << (jint(4)));
	sp[0].o = frame[0].o;
	jint temp11 = frame[1].i;
	INST_IINC(1, 1);
	jint temp12 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp11);
	LINE_NUMBER(483);
	jint temp13 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, temp12);
	frame[8].i = (jchar((temp10 + temp13)));
	LINE_NUMBER(484);
	goto label_17;
	}
label_50:;
	{
	LINE_NUMBER(487);
	frame[8].i = (8);
	LINE_NUMBER(488);
	goto label_17;
	}
label_65:;
	{
	LINE_NUMBER(491);
	frame[18].i = (jint(0));
	LINE_NUMBER(493);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	frame[19].i = temp1;
	if (temp1 != (123)) goto label_78;
	}
label_79:;
	{
	LINE_NUMBER(494);
	if ((frame[1].i) >= (frame[2].i)) goto label_80;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	frame[19].i = temp1;
	if (temp1 == (125)) goto label_80;
	}
	{
	LINE_NUMBER(495);
	jint temp0 = (frame[18].i) << (jint(4));
	jint temp1 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, (frame[19].i));
	frame[18].i = (temp0 + temp1);
	goto label_79;
	}
label_80:;
	{
	LINE_NUMBER(497);
	if ((frame[18].i) > (jint(65535))) goto label_82;
	}
	{
	if ((frame[1].i) != (frame[2].i)) goto label_83;
	}
label_82:;
	{
	LINE_NUMBER(498);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\\x{<out of range or incomplete>}"_j))));
	throwException(ctx, sp[0].o);	}
label_78:;
	{
	LINE_NUMBER(500);
	if ((frame[1].i) < ((frame[2].i) - (jint(2)))) goto label_84;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"incomplete escape sequence \\xHH"_j))));
	throwException(ctx, sp[0].o);	}
label_84:;
	{
	LINE_NUMBER(501);
	jint temp0 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, (frame[19].i));
	jint temp1 = temp0 << (jint(4));
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	INST_IINC(1, 1);
	jint temp3 = (jint)SM_regexodus_CharacterClass_toHexDigit_char_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp2)));
	frame[18].i = (temp1 + temp3);
	}
label_83:;
	{
	LINE_NUMBER(503);
	frame[8].i = (jchar((frame[18].i)));
	LINE_NUMBER(504);
	goto label_17;
	}
label_57:;
	{
	LINE_NUMBER(507);
	frame[10].i = (jint(0));
	}
label_86:;
	{
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	frame[18].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(510);
	if ((frame[18].i) < (48)) goto label_88;
	}
	{
	if ((frame[18].i) > (55)) goto label_88;
	}
	{
	LINE_NUMBER(511);
	frame[10].i = ((frame[10].i) * (8));
	LINE_NUMBER(512);
	frame[10].i = ((frame[10].i) + ((frame[18].i) - (48)));
	LINE_NUMBER(513);
	if ((frame[10].i) <= (jint(65535))) goto label_92;
	}
	{
	LINE_NUMBER(514);
	frame[10].i = ((frame[10].i) - ((frame[18].i) - (48)));
	LINE_NUMBER(515);
	frame[10].i = ((frame[10].i) / (8));
	LINE_NUMBER(516);
	goto label_88;
	}
label_92:;
	LINE_NUMBER(519);
	goto label_86;
label_88:;
	{
	LINE_NUMBER(520);
	frame[8].i = (jchar((frame[10].i)));
	LINE_NUMBER(521);
	goto label_17;
	}
label_43:;
	{
	LINE_NUMBER(530);
	frame[10].i = (jint(0));
	}
label_97:;
	{
	LINE_NUMBER(532);
	frame[18].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), ((frame[1].i) - (jint(1)))));
	LINE_NUMBER(533);
	if ((frame[18].i) < (48)) goto label_99;
	}
	{
	if ((frame[18].i) > (55)) goto label_99;
	}
	{
	LINE_NUMBER(534);
	INST_IINC(1, 1);
	LINE_NUMBER(535);
	frame[10].i = ((frame[10].i) * (8));
	LINE_NUMBER(536);
	frame[10].i = ((frame[10].i) + ((frame[18].i) - (48)));
	LINE_NUMBER(537);
	if ((frame[10].i) <= (jint(65535))) goto label_104;
	}
	{
	LINE_NUMBER(538);
	frame[10].i = ((frame[10].i) - ((frame[18].i) - (48)));
	LINE_NUMBER(539);
	frame[10].i = ((frame[10].i) / (8));
	LINE_NUMBER(540);
	goto label_108;
	}
label_99:;
	{
	LINE_NUMBER(543);
	INST_IINC(1, -1);
	LINE_NUMBER(544);
	goto label_108;
	}
label_104:;
	LINE_NUMBER(546);
	goto label_97;
label_108:;
	{
	LINE_NUMBER(547);
	frame[8].i = (jchar((frame[10].i)));
	LINE_NUMBER(548);
	goto label_17;
	}
label_55:;
	{
	LINE_NUMBER(551);
	frame[18].i = (jint(0));
	}
label_111:;
	{
	LINE_NUMBER(553);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	frame[19].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(554);
	if ((frame[19].i) < (48)) goto label_113;
	}
	{
	if ((frame[19].i) > (57)) goto label_113;
	}
	{
	LINE_NUMBER(555);
	frame[18].i = ((frame[18].i) * (10));
	LINE_NUMBER(556);
	frame[18].i = ((frame[18].i) + ((frame[19].i) - (48)));
	LINE_NUMBER(557);
	if ((frame[18].i) <= (jint(65535))) goto label_117;
	}
	{
	LINE_NUMBER(558);
	frame[18].i = ((frame[18].i) - ((frame[19].i) - (48)));
	LINE_NUMBER(559);
	frame[18].i = ((frame[18].i) / (10));
	LINE_NUMBER(560);
	goto label_113;
	}
label_117:;
	LINE_NUMBER(563);
	goto label_111;
label_113:;
	{
	LINE_NUMBER(564);
	frame[8].i = (jchar((frame[18].i)));
	LINE_NUMBER(565);
	goto label_17;
	}
label_51:;
	{
	LINE_NUMBER(568);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	frame[8].i = (jchar((((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) & (31))));
	LINE_NUMBER(569);
	goto label_17;
	}
label_45:;
	{
	LINE_NUMBER(574);
	if ((frame[6].i) == 0) goto label_123;
	}
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UNONDIGIT;
	goto label_124;
label_123:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_NONDIGIT;
label_124:;
	{
	sp -= 1;
	frame[16].o = sp[0].o;
	LINE_NUMBER(575);
	goto label_126;
	}
label_48:;
	{
	LINE_NUMBER(578);
	if ((frame[6].i) == 0) goto label_127;
	}
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UNONSPACE;
	goto label_128;
label_127:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_NONSPACE;
label_128:;
	{
	sp -= 1;
	frame[16].o = sp[0].o;
	LINE_NUMBER(579);
	goto label_126;
	}
label_49:;
	{
	LINE_NUMBER(582);
	if ((frame[6].i) == 0) goto label_130;
	}
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_UNONWORDCHAR;
	goto label_131;
label_130:;
	clinit_regexodus_CharacterClass(ctx);
	(sp++)->o = SF_regexodus_CharacterClass_NONWORDCHAR;
label_131:;
	{
	sp -= 1;
	frame[16].o = sp[0].o;
	LINE_NUMBER(583);
	goto label_126;
	}
label_52:;
	{
	LINE_NUMBER(586);
	if ((frame[13].i) == 0) goto label_133;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"illegal range: [..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-\\d...]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_133:;
	{
	LINE_NUMBER(587);
	((func_regexodus_BlockSet_setDigit_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setDigit_boolean])(ctx, (frame[3].o), (frame[6].i));
	LINE_NUMBER(588);
	goto label_29;
	}
label_60:;
	{
	LINE_NUMBER(591);
	if ((frame[13].i) == 0) goto label_135;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"illegal range: [..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-\\s...]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_135:;
	{
	LINE_NUMBER(592);
	((func_regexodus_BlockSet_setSpace_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setSpace_boolean])(ctx, (frame[3].o), (frame[6].i));
	LINE_NUMBER(593);
	goto label_29;
	}
label_64:;
	{
	LINE_NUMBER(596);
	if ((frame[13].i) == 0) goto label_137;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"illegal range: [..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-\\w...]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_137:;
	{
	LINE_NUMBER(597);
	((func_regexodus_BlockSet_setWordChar_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setWordChar_boolean])(ctx, (frame[3].o), (frame[6].i));
	LINE_NUMBER(598);
	goto label_29;
	}
label_54:;
	{
	LINE_NUMBER(601);
	if ((frame[13].i) == 0) goto label_139;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"illegal range: [..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-\\w...]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_139:;
	{
	LINE_NUMBER(602);
	((func_regexodus_BlockSet_setHorizontalSpace_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setHorizontalSpace_boolean])(ctx, (frame[3].o), (frame[6].i));
	LINE_NUMBER(603);
	goto label_29;
	}
label_63:;
	{
	LINE_NUMBER(606);
	if ((frame[13].i) == 0) goto label_141;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"illegal range: [..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-\\w...]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_141:;
	{
	LINE_NUMBER(607);
	((func_regexodus_BlockSet_setVerticalSpace_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setVerticalSpace_boolean])(ctx, (frame[3].o), (frame[6].i));
	LINE_NUMBER(608);
	goto label_29;
	}
label_47:;
	{
	LINE_NUMBER(611);
	if ((frame[13].i) == 0) goto label_143;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"illegal range: [..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-\\P...]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_143:;
	{
	LINE_NUMBER(612);
	frame[17].i = (jint(1));
	}
label_58:;
	{
	LINE_NUMBER(614);
	if ((frame[13].i) == 0) goto label_144;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"illegal range: [..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-\\p...]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_144:;
	{
	LINE_NUMBER(615);
	if ((frame[15].o) != nullptr) goto label_145;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[15].o = sp[0].o;
	goto label_146;
	}
label_145:;
	{
	LINE_NUMBER(616);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[15].o), (jint(0)));
	}
label_146:;
	{
	LINE_NUMBER(617);
	jint temp0 = (jint)SM_regexodus_CharacterClass_parseName_Array1_char_int_int_java_lang_StringBuilder_boolean_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[15].o), (frame[5].i));
	frame[1].i = temp0;
	LINE_NUMBER(618);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[15].o));
	sp[0].o = (jobject)SM_regexodus_CharacterClass_getNamedClass_java_lang_String_R_regexodus_BlockSet(ctx, sp[0].o);
	frame[19].o = sp[0].o;
	LINE_NUMBER(619);
	if ((frame[19].o) != nullptr) goto label_149;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown named class: {"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[15].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"}"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_149:;
	{
	LINE_NUMBER(620);
	((func_regexodus_BlockSet_add_regexodus_BlockSet_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_add_regexodus_BlockSet_boolean])(ctx, (frame[3].o), (frame[19].o), (frame[17].i));
	LINE_NUMBER(621);
	goto label_29;
	}
label_46:;
	{
	LINE_NUMBER(624);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Escaped \\Q\\E literals cannot be inside character classes"_j))));
	throwException(ctx, sp[0].o);	}
label_44:;
	LINE_NUMBER(627);
	goto label_17;
label_126:;
	{
	LINE_NUMBER(631);
	if ((frame[13].i) == 0) goto label_151;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"illegal range: [..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-\\"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"...]"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_151:;
	{
	LINE_NUMBER(632);
	((func_regexodus_BlockSet_add_regexodus_BlockSet) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_add_regexodus_BlockSet])(ctx, (frame[3].o), (frame[16].o));
	LINE_NUMBER(633);
	goto label_29;
	}
label_17:;
	{
	LINE_NUMBER(649);
	if ((frame[9].i) >= 0) goto label_153;
	}
	{
	LINE_NUMBER(650);
	frame[9].i = (frame[8].i);
	LINE_NUMBER(651);
	frame[13].i = (jint(0));
	LINE_NUMBER(652);
	goto label_29;
	}
label_153:;
	{
	LINE_NUMBER(654);
	if ((frame[13].i) != 0) goto label_157;
	}
	{
	LINE_NUMBER(655);
	frame[16].i = (jchar((frame[9].i)));
	LINE_NUMBER(656);
	if ((frame[4].i) == 0) goto label_160;
	}
	{
	LINE_NUMBER(662);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[16].i));
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, sp[0].o, temp0);
	goto label_162;
	}
label_160:;
	{
	LINE_NUMBER(663);
	((func_regexodus_BlockSet_setChar_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setChar_char])(ctx, (frame[3].o), (frame[16].i));
	}
label_162:;
	{
	LINE_NUMBER(664);
	frame[9].i = (frame[8].i);
	LINE_NUMBER(665);
	goto label_29;
	}
label_157:;
	{
	LINE_NUMBER(666);
	if ((frame[9].i) <= (frame[8].i)) goto label_164;
	}
	{
	LINE_NUMBER(667);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"illegal range: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8">"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[8].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_164:;
	{
	LINE_NUMBER(668);
	frame[16].i = (jchar((frame[9].i)));
	LINE_NUMBER(669);
	frame[13].i = (jint(0));
	LINE_NUMBER(670);
	frame[9].i = (jint(-1));
	LINE_NUMBER(671);
	if ((frame[4].i) == 0) goto label_169;
	}
	{
	LINE_NUMBER(677);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[16].i));
	jint temp1 = (jint)SM_regexodus_Category_caseFold_char_R_char(ctx, (frame[8].i));
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, sp[0].o, temp0, temp1);
	goto label_29;
	}
label_169:;
	{
	LINE_NUMBER(679);
	((func_regexodus_BlockSet_setRange_char_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_BlockSet_setRange_char_char])(ctx, (frame[3].o), (frame[16].i), (frame[8].i));
	}
label_29:;
	{
	LINE_NUMBER(397);
	frame[11].i = (frame[12].i);
	frame[12].i = (jint(0));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(682);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unbalanced brackets in a class def"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_regexodus_CharacterClass_parseName_Array1_char_int_int_java_lang_StringBuilder_boolean_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4) {
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:parseName", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(689);
	frame[6].i = (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(690);
	if ((frame[1].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(691);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jchar, sp[0].o, temp0);
	frame[5].i = temp1;
	switch(temp1) {
		case 9: goto label_5;
		case 10: goto label_5;
		case 12: goto label_5;
		case 13: goto label_5;
		case 32: goto label_5;
		case 67: goto label_6;
		case 71: goto label_6;
		case 73: goto label_7;
		case 74: goto label_6;
		case 76: goto label_6;
		case 77: goto label_6;
		case 78: goto label_6;
		case 80: goto label_6;
		case 83: goto label_6;
		case 90: goto label_6;
		case 123: goto label_8;
		case 125: goto label_9;
		default: goto label_10;
	}
	}
label_8:;
	{
	LINE_NUMBER(693);
	frame[6].i = (frame[1].i);
	LINE_NUMBER(694);
	goto label_1;
	}
label_9:;
	{
	LINE_NUMBER(696);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_5:;
	{
	LINE_NUMBER(702);
	if ((frame[4].i) == 0) goto label_7;
	}
	goto label_1;
label_7:;
	{
	LINE_NUMBER(706);
	if ((frame[6].i) <= 0) goto label_12;
	}
	{
	if (((frame[6].i) + (jint(1))) != (frame[1].i)) goto label_12;
	}
	{
	LINE_NUMBER(707);
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i))) == (115)) goto label_14;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i))) != (110)) goto label_6;
	}
label_14:;
	{
	LINE_NUMBER(708);
	INST_IINC(1, 1);
	LINE_NUMBER(709);
	goto label_1;
	}
label_12:;
	{
	LINE_NUMBER(712);
	if ((frame[6].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(713);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Is or In named class doesn't start with '{'"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(723);
	if ((frame[6].i) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].i));
	LINE_NUMBER(726);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_10:;
	{
	LINE_NUMBER(729);
	if ((frame[6].i) >= 0) goto label_19;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"named class doesn't start with '{'"_j))));
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(730);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].i));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(733);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"wrong class name: "_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, (frame[0].o), (frame[1].i), ((frame[2].i) - (frame[1].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_regexodus_CharacterClass_stringValue0_regexodus_ds_IntBitSet_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:stringValue0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(739);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b0;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(740);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(743);
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_nextSetBit_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_nextSetBit_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[1].i = temp0;
	LINE_NUMBER(744);
	if ((frame[1].i) < 0) goto label_4;
	}
	{
	if ((frame[1].i) < (255)) goto label_5;
	}
	goto label_4;
label_5:;
	{
	LINE_NUMBER(746);
	frame[2].i = (frame[1].i);
	LINE_NUMBER(748);
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_nextClearBit_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_nextClearBit_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[1].i = temp0;
	LINE_NUMBER(749);
	if ((frame[1].i) <= 0) goto label_8;
	}
	{
	if ((frame[1].i) <= (255)) goto label_9;
	}
label_8:;
	INST_SIPUSH(255);
	goto label_10;
label_9:;
	{
	jint temp0 = (frame[1].i) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(751);
	if ((frame[3].i) != (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(752);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b0;
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue_int_R_java_lang_String(ctx, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(755);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b0;
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue_int_R_java_lang_String(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(756);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b0;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (45));
	LINE_NUMBER(757);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b0;
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue_int_R_java_lang_String(ctx, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	LINE_NUMBER(759);
	goto label_2;
label_4:;
	{
	LINE_NUMBER(760);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b0;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_CharacterClass_stringValue2_Array1_regexodus_ds_IntBitSet_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:stringValue2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(778);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b2;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(779);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(782);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(784);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[1].i) >> (8))));
	LINE_NUMBER(785);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[3].o), ((frame[1].i) & (255)));
	if (temp0 == 0) goto label_5;
	}
	goto label_6;
label_5:;
	{
	LINE_NUMBER(786);
	INST_IINC(1, 1);
	LINE_NUMBER(787);
	if ((frame[1].i) <= (jint(65535))) goto label_8;
	}
	goto label_9;
label_8:;
	LINE_NUMBER(788);
	goto label_3;
label_6:;
	{
	LINE_NUMBER(789);
	frame[3].i = (frame[1].i);
	}
label_10:;
	{
	LINE_NUMBER(790);
	if ((frame[1].i) > (jint(65535))) goto label_11;
	}
	{
	LINE_NUMBER(791);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[1].i) >> (8))));
	LINE_NUMBER(792);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = (jint)((func_regexodus_ds_IntBitSet_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean])(ctx, (frame[4].o), ((frame[1].i) & (255)));
	if (temp0 != 0) goto label_14;
	}
	goto label_11;
label_14:;
	{
	LINE_NUMBER(793);
	INST_IINC(1, 1);
	LINE_NUMBER(794);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(795);
	frame[4].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(796);
	if ((frame[4].i) != (frame[3].i)) goto label_17;
	}
	{
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b2;
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue_int_R_java_lang_String(ctx, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(798);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b2;
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue_int_R_java_lang_String(ctx, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(799);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (45));
	LINE_NUMBER(800);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b2;
	sp[1].o = (jobject)SM_regexodus_CharacterClass_stringValue_int_R_java_lang_String(ctx, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	{
	LINE_NUMBER(802);
	if ((frame[1].i) <= (jint(65535))) goto label_21;
	}
	goto label_9;
label_21:;
	LINE_NUMBER(803);
	goto label_2;
label_9:;
	{
	LINE_NUMBER(804);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_b2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_CharacterClass_stringValue_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:stringValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(808);
	if ((frame[0].i) >= (32)) goto label_1;
	}
	{
	LINE_NUMBER(809);
	switch((frame[0].i)) {
		case 9: goto label_3;
		case 10: goto label_4;
		case 11: goto label_5;
		case 12: goto label_6;
		case 13: goto label_7;
		default: goto label_5;
	}
	}
label_7:;
	{
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\r"_j)));
	}
label_4:;
	{
	LINE_NUMBER(813);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\n"_j)));
	}
label_3:;
	{
	LINE_NUMBER(815);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\t"_j)));
	}
label_6:;
	{
	LINE_NUMBER(817);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\f"_j)));
	}
label_5:;
	{
	LINE_NUMBER(819);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\\x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(822);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (jchar((frame[0].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_regexodus_CharacterClass_toHexDigit_char_R_int(jcontext ctx, jchar param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:toHexDigit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(827);
	if ((frame[0].i) < (48)) goto label_1;
	}
	{
	if ((frame[0].i) > (57)) goto label_1;
	}
	{
	frame[1].i = ((frame[0].i) - (48));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(828);
	if ((frame[0].i) < (97)) goto label_4;
	}
	{
	if ((frame[0].i) > (102)) goto label_4;
	}
	{
	frame[1].i = (((10) + (frame[0].i)) - (97));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(829);
	if ((frame[0].i) < (65)) goto label_6;
	}
	{
	if ((frame[0].i) > (70)) goto label_6;
	}
	{
	frame[1].i = (((10) + (frame[0].i)) - (65));
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(830);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"hexadecimal digit expected: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void SM_regexodus_CharacterClass_printRealm_java_util_ArrayList_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:printRealm", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(870);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(871);
	sp[0].o = (jobject)((func_java_util_ArrayList_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_ArrayList_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(872);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"  "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(873);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(874);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_regexodus_CharacterClass(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_regexodus_Term(ctx);
	SF_regexodus_CharacterClass_ADD = jint(1);
	SF_regexodus_CharacterClass_SUBTRACT = jint(2);
	SF_regexodus_CharacterClass_INTERSECT = jint(3);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/CharacterClass:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_CharacterClass(ctx);
	{
	LINE_NUMBER(38);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_DIGIT = sp[0].o;
	LINE_NUMBER(39);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_WORDCHAR = sp[0].o;
	LINE_NUMBER(40);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_SPACE = sp[0].o;
	LINE_NUMBER(41);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_HSPACE = sp[0].o;
	LINE_NUMBER(42);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_VSPACE = sp[0].o;
	LINE_NUMBER(44);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_UDIGIT = sp[0].o;
	LINE_NUMBER(45);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_UWORDCHAR = sp[0].o;
	LINE_NUMBER(46);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_USPACE = sp[0].o;
	LINE_NUMBER(47);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_UHSPACE = sp[0].o;
	LINE_NUMBER(48);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_UVSPACE = sp[0].o;
	LINE_NUMBER(50);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_NONDIGIT = sp[0].o;
	LINE_NUMBER(51);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_NONWORDCHAR = sp[0].o;
	LINE_NUMBER(52);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_NONSPACE = sp[0].o;
	LINE_NUMBER(53);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_NONHSPACE = sp[0].o;
	LINE_NUMBER(54);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_NONVSPACE = sp[0].o;
	LINE_NUMBER(56);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_UNONDIGIT = sp[0].o;
	LINE_NUMBER(57);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_UNONWORDCHAR = sp[0].o;
	LINE_NUMBER(58);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_UNONSPACE = sp[0].o;
	LINE_NUMBER(59);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_UNONHSPACE = sp[0].o;
	LINE_NUMBER(60);
	clinit_regexodus_BlockSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_BlockSet);
	init_regexodus_BlockSet(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_UNONVSPACE = sp[0].o;
	LINE_NUMBER(62);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_namesInitialized = (jint(0));
	LINE_NUMBER(64);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_namedClasses = sp[0].o;
	LINE_NUMBER(65);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_unicodeBlocks = sp[0].o;
	LINE_NUMBER(66);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_posixClasses = sp[0].o;
	LINE_NUMBER(67);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_unicodeCategories = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = (jobject) createArray(ctx, &class_int, (162));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (128);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (256);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (384);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (592);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (688);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (768);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (880);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (1024);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (1280);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (1328);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (1424);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (1536);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (1792);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (1872);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (1920);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (1984);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (2048);
	ARRAY_ACCESS(jint, sp[0].o, (18)) = (2112);
	ARRAY_ACCESS(jint, sp[0].o, (19)) = (2144);
	ARRAY_ACCESS(jint, sp[0].o, (20)) = (2208);
	ARRAY_ACCESS(jint, sp[0].o, (21)) = (2304);
	ARRAY_ACCESS(jint, sp[0].o, (22)) = (2432);
	ARRAY_ACCESS(jint, sp[0].o, (23)) = (2560);
	ARRAY_ACCESS(jint, sp[0].o, (24)) = (2688);
	ARRAY_ACCESS(jint, sp[0].o, (25)) = (2816);
	ARRAY_ACCESS(jint, sp[0].o, (26)) = (2944);
	ARRAY_ACCESS(jint, sp[0].o, (27)) = (3072);
	ARRAY_ACCESS(jint, sp[0].o, (28)) = (3200);
	ARRAY_ACCESS(jint, sp[0].o, (29)) = (3328);
	ARRAY_ACCESS(jint, sp[0].o, (30)) = (3456);
	ARRAY_ACCESS(jint, sp[0].o, (31)) = (3584);
	ARRAY_ACCESS(jint, sp[0].o, (32)) = (3712);
	ARRAY_ACCESS(jint, sp[0].o, (33)) = (3840);
	ARRAY_ACCESS(jint, sp[0].o, (34)) = (4096);
	ARRAY_ACCESS(jint, sp[0].o, (35)) = (4256);
	ARRAY_ACCESS(jint, sp[0].o, (36)) = (4352);
	ARRAY_ACCESS(jint, sp[0].o, (37)) = (4608);
	ARRAY_ACCESS(jint, sp[0].o, (38)) = (4992);
	ARRAY_ACCESS(jint, sp[0].o, (39)) = (5024);
	ARRAY_ACCESS(jint, sp[0].o, (40)) = (5120);
	ARRAY_ACCESS(jint, sp[0].o, (41)) = (5760);
	ARRAY_ACCESS(jint, sp[0].o, (42)) = (5792);
	ARRAY_ACCESS(jint, sp[0].o, (43)) = (5888);
	ARRAY_ACCESS(jint, sp[0].o, (44)) = (5920);
	ARRAY_ACCESS(jint, sp[0].o, (45)) = (5952);
	ARRAY_ACCESS(jint, sp[0].o, (46)) = (5984);
	ARRAY_ACCESS(jint, sp[0].o, (47)) = (6016);
	ARRAY_ACCESS(jint, sp[0].o, (48)) = (6144);
	ARRAY_ACCESS(jint, sp[0].o, (49)) = (6320);
	ARRAY_ACCESS(jint, sp[0].o, (50)) = (6400);
	ARRAY_ACCESS(jint, sp[0].o, (51)) = (6480);
	ARRAY_ACCESS(jint, sp[0].o, (52)) = (6528);
	ARRAY_ACCESS(jint, sp[0].o, (53)) = (6624);
	ARRAY_ACCESS(jint, sp[0].o, (54)) = (6656);
	ARRAY_ACCESS(jint, sp[0].o, (55)) = (6688);
	ARRAY_ACCESS(jint, sp[0].o, (56)) = (6832);
	ARRAY_ACCESS(jint, sp[0].o, (57)) = (6912);
	ARRAY_ACCESS(jint, sp[0].o, (58)) = (7040);
	ARRAY_ACCESS(jint, sp[0].o, (59)) = (7104);
	ARRAY_ACCESS(jint, sp[0].o, (60)) = (7168);
	ARRAY_ACCESS(jint, sp[0].o, (61)) = (7248);
	ARRAY_ACCESS(jint, sp[0].o, (62)) = (7296);
	ARRAY_ACCESS(jint, sp[0].o, (63)) = (7360);
	ARRAY_ACCESS(jint, sp[0].o, (64)) = (7376);
	ARRAY_ACCESS(jint, sp[0].o, (65)) = (7424);
	ARRAY_ACCESS(jint, sp[0].o, (66)) = (7552);
	ARRAY_ACCESS(jint, sp[0].o, (67)) = (7616);
	ARRAY_ACCESS(jint, sp[0].o, (68)) = (7680);
	ARRAY_ACCESS(jint, sp[0].o, (69)) = (7936);
	ARRAY_ACCESS(jint, sp[0].o, (70)) = (8192);
	ARRAY_ACCESS(jint, sp[0].o, (71)) = (8304);
	ARRAY_ACCESS(jint, sp[0].o, (72)) = (8352);
	ARRAY_ACCESS(jint, sp[0].o, (73)) = (8400);
	ARRAY_ACCESS(jint, sp[0].o, (74)) = (8448);
	ARRAY_ACCESS(jint, sp[0].o, (75)) = (8528);
	ARRAY_ACCESS(jint, sp[0].o, (76)) = (8592);
	ARRAY_ACCESS(jint, sp[0].o, (77)) = (8704);
	ARRAY_ACCESS(jint, sp[0].o, (78)) = (8960);
	ARRAY_ACCESS(jint, sp[0].o, (79)) = (9216);
	ARRAY_ACCESS(jint, sp[0].o, (80)) = (9280);
	ARRAY_ACCESS(jint, sp[0].o, (81)) = (9312);
	ARRAY_ACCESS(jint, sp[0].o, (82)) = (9472);
	ARRAY_ACCESS(jint, sp[0].o, (83)) = (9600);
	ARRAY_ACCESS(jint, sp[0].o, (84)) = (9632);
	ARRAY_ACCESS(jint, sp[0].o, (85)) = (9728);
	ARRAY_ACCESS(jint, sp[0].o, (86)) = (9984);
	ARRAY_ACCESS(jint, sp[0].o, (87)) = (10176);
	ARRAY_ACCESS(jint, sp[0].o, (88)) = (10224);
	ARRAY_ACCESS(jint, sp[0].o, (89)) = (10240);
	ARRAY_ACCESS(jint, sp[0].o, (90)) = (10496);
	ARRAY_ACCESS(jint, sp[0].o, (91)) = (10624);
	ARRAY_ACCESS(jint, sp[0].o, (92)) = (10752);
	ARRAY_ACCESS(jint, sp[0].o, (93)) = (11008);
	ARRAY_ACCESS(jint, sp[0].o, (94)) = (11264);
	ARRAY_ACCESS(jint, sp[0].o, (95)) = (11360);
	ARRAY_ACCESS(jint, sp[0].o, (96)) = (11392);
	ARRAY_ACCESS(jint, sp[0].o, (97)) = (11520);
	ARRAY_ACCESS(jint, sp[0].o, (98)) = (11568);
	ARRAY_ACCESS(jint, sp[0].o, (99)) = (11648);
	ARRAY_ACCESS(jint, sp[0].o, (100)) = (11744);
	ARRAY_ACCESS(jint, sp[0].o, (101)) = (11776);
	ARRAY_ACCESS(jint, sp[0].o, (102)) = (11904);
	ARRAY_ACCESS(jint, sp[0].o, (103)) = (12032);
	ARRAY_ACCESS(jint, sp[0].o, (104)) = (12272);
	ARRAY_ACCESS(jint, sp[0].o, (105)) = (12288);
	ARRAY_ACCESS(jint, sp[0].o, (106)) = (12352);
	ARRAY_ACCESS(jint, sp[0].o, (107)) = (12448);
	ARRAY_ACCESS(jint, sp[0].o, (108)) = (12544);
	ARRAY_ACCESS(jint, sp[0].o, (109)) = (12592);
	ARRAY_ACCESS(jint, sp[0].o, (110)) = (12688);
	ARRAY_ACCESS(jint, sp[0].o, (111)) = (12704);
	ARRAY_ACCESS(jint, sp[0].o, (112)) = (12736);
	ARRAY_ACCESS(jint, sp[0].o, (113)) = (12784);
	ARRAY_ACCESS(jint, sp[0].o, (114)) = (12800);
	ARRAY_ACCESS(jint, sp[0].o, (115)) = (13056);
	ARRAY_ACCESS(jint, sp[0].o, (116)) = (13312);
	ARRAY_ACCESS(jint, sp[0].o, (117)) = (19904);
	ARRAY_ACCESS(jint, sp[0].o, (118)) = (19968);
	ARRAY_ACCESS(jint, sp[0].o, (119)) = (jint(40960));
	ARRAY_ACCESS(jint, sp[0].o, (120)) = (jint(42128));
	ARRAY_ACCESS(jint, sp[0].o, (121)) = (jint(42192));
	ARRAY_ACCESS(jint, sp[0].o, (122)) = (jint(42240));
	ARRAY_ACCESS(jint, sp[0].o, (123)) = (jint(42560));
	ARRAY_ACCESS(jint, sp[0].o, (124)) = (jint(42656));
	ARRAY_ACCESS(jint, sp[0].o, (125)) = (jint(42752));
	ARRAY_ACCESS(jint, sp[0].o, (126)) = (jint(42784));
	ARRAY_ACCESS(jint, sp[0].o, (127)) = (jint(43008));
	ARRAY_ACCESS(jint, sp[0].o, (128)) = (jint(43056));
	ARRAY_ACCESS(jint, sp[0].o, (129)) = (jint(43072));
	ARRAY_ACCESS(jint, sp[0].o, (130)) = (jint(43136));
	ARRAY_ACCESS(jint, sp[0].o, (131)) = (jint(43232));
	ARRAY_ACCESS(jint, sp[0].o, (132)) = (jint(43264));
	ARRAY_ACCESS(jint, sp[0].o, (133)) = (jint(43312));
	ARRAY_ACCESS(jint, sp[0].o, (134)) = (jint(43360));
	ARRAY_ACCESS(jint, sp[0].o, (135)) = (jint(43392));
	ARRAY_ACCESS(jint, sp[0].o, (136)) = (jint(43488));
	ARRAY_ACCESS(jint, sp[0].o, (137)) = (jint(43520));
	ARRAY_ACCESS(jint, sp[0].o, (138)) = (jint(43616));
	ARRAY_ACCESS(jint, sp[0].o, (139)) = (jint(43648));
	ARRAY_ACCESS(jint, sp[0].o, (140)) = (jint(43744));
	ARRAY_ACCESS(jint, sp[0].o, (141)) = (jint(43776));
	ARRAY_ACCESS(jint, sp[0].o, (142)) = (jint(43824));
	ARRAY_ACCESS(jint, sp[0].o, (143)) = (jint(43888));
	ARRAY_ACCESS(jint, sp[0].o, (144)) = (jint(43968));
	ARRAY_ACCESS(jint, sp[0].o, (145)) = (jint(44032));
	ARRAY_ACCESS(jint, sp[0].o, (146)) = (jint(55216));
	ARRAY_ACCESS(jint, sp[0].o, (147)) = (jint(55296));
	ARRAY_ACCESS(jint, sp[0].o, (148)) = (jint(56192));
	ARRAY_ACCESS(jint, sp[0].o, (149)) = (jint(56320));
	ARRAY_ACCESS(jint, sp[0].o, (150)) = (jint(57344));
	ARRAY_ACCESS(jint, sp[0].o, (151)) = (jint(63744));
	ARRAY_ACCESS(jint, sp[0].o, (152)) = (jint(64256));
	ARRAY_ACCESS(jint, sp[0].o, (153)) = (jint(64336));
	ARRAY_ACCESS(jint, sp[0].o, (154)) = (jint(65024));
	ARRAY_ACCESS(jint, sp[0].o, (155)) = (jint(65040));
	ARRAY_ACCESS(jint, sp[0].o, (156)) = (jint(65056));
	ARRAY_ACCESS(jint, sp[0].o, (157)) = (jint(65072));
	ARRAY_ACCESS(jint, sp[0].o, (158)) = (jint(65104));
	ARRAY_ACCESS(jint, sp[0].o, (159)) = (jint(65136));
	ARRAY_ACCESS(jint, sp[0].o, (160)) = (jint(65280));
	ARRAY_ACCESS(jint, sp[0].o, (161)) = (jint(65520));
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_blockDataStarts = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject) createArray(ctx, &class_int, (162));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (127);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (255);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (383);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (591);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (687);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (767);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (879);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (1023);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (1279);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (1327);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (1423);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (1535);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (1791);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (1871);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (1919);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (1983);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (2047);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (2111);
	ARRAY_ACCESS(jint, sp[0].o, (18)) = (2143);
	ARRAY_ACCESS(jint, sp[0].o, (19)) = (2159);
	ARRAY_ACCESS(jint, sp[0].o, (20)) = (2303);
	ARRAY_ACCESS(jint, sp[0].o, (21)) = (2431);
	ARRAY_ACCESS(jint, sp[0].o, (22)) = (2559);
	ARRAY_ACCESS(jint, sp[0].o, (23)) = (2687);
	ARRAY_ACCESS(jint, sp[0].o, (24)) = (2815);
	ARRAY_ACCESS(jint, sp[0].o, (25)) = (2943);
	ARRAY_ACCESS(jint, sp[0].o, (26)) = (3071);
	ARRAY_ACCESS(jint, sp[0].o, (27)) = (3199);
	ARRAY_ACCESS(jint, sp[0].o, (28)) = (3327);
	ARRAY_ACCESS(jint, sp[0].o, (29)) = (3455);
	ARRAY_ACCESS(jint, sp[0].o, (30)) = (3583);
	ARRAY_ACCESS(jint, sp[0].o, (31)) = (3711);
	ARRAY_ACCESS(jint, sp[0].o, (32)) = (3839);
	ARRAY_ACCESS(jint, sp[0].o, (33)) = (4095);
	ARRAY_ACCESS(jint, sp[0].o, (34)) = (4255);
	ARRAY_ACCESS(jint, sp[0].o, (35)) = (4351);
	ARRAY_ACCESS(jint, sp[0].o, (36)) = (4607);
	ARRAY_ACCESS(jint, sp[0].o, (37)) = (4991);
	ARRAY_ACCESS(jint, sp[0].o, (38)) = (5023);
	ARRAY_ACCESS(jint, sp[0].o, (39)) = (5119);
	ARRAY_ACCESS(jint, sp[0].o, (40)) = (5759);
	ARRAY_ACCESS(jint, sp[0].o, (41)) = (5791);
	ARRAY_ACCESS(jint, sp[0].o, (42)) = (5887);
	ARRAY_ACCESS(jint, sp[0].o, (43)) = (5919);
	ARRAY_ACCESS(jint, sp[0].o, (44)) = (5951);
	ARRAY_ACCESS(jint, sp[0].o, (45)) = (5983);
	ARRAY_ACCESS(jint, sp[0].o, (46)) = (6015);
	ARRAY_ACCESS(jint, sp[0].o, (47)) = (6143);
	ARRAY_ACCESS(jint, sp[0].o, (48)) = (6319);
	ARRAY_ACCESS(jint, sp[0].o, (49)) = (6399);
	ARRAY_ACCESS(jint, sp[0].o, (50)) = (6479);
	ARRAY_ACCESS(jint, sp[0].o, (51)) = (6527);
	ARRAY_ACCESS(jint, sp[0].o, (52)) = (6623);
	ARRAY_ACCESS(jint, sp[0].o, (53)) = (6655);
	ARRAY_ACCESS(jint, sp[0].o, (54)) = (6687);
	ARRAY_ACCESS(jint, sp[0].o, (55)) = (6831);
	ARRAY_ACCESS(jint, sp[0].o, (56)) = (6911);
	ARRAY_ACCESS(jint, sp[0].o, (57)) = (7039);
	ARRAY_ACCESS(jint, sp[0].o, (58)) = (7103);
	ARRAY_ACCESS(jint, sp[0].o, (59)) = (7167);
	ARRAY_ACCESS(jint, sp[0].o, (60)) = (7247);
	ARRAY_ACCESS(jint, sp[0].o, (61)) = (7295);
	ARRAY_ACCESS(jint, sp[0].o, (62)) = (7311);
	ARRAY_ACCESS(jint, sp[0].o, (63)) = (7375);
	ARRAY_ACCESS(jint, sp[0].o, (64)) = (7423);
	ARRAY_ACCESS(jint, sp[0].o, (65)) = (7551);
	ARRAY_ACCESS(jint, sp[0].o, (66)) = (7615);
	ARRAY_ACCESS(jint, sp[0].o, (67)) = (7679);
	ARRAY_ACCESS(jint, sp[0].o, (68)) = (7935);
	ARRAY_ACCESS(jint, sp[0].o, (69)) = (8191);
	ARRAY_ACCESS(jint, sp[0].o, (70)) = (8303);
	ARRAY_ACCESS(jint, sp[0].o, (71)) = (8351);
	ARRAY_ACCESS(jint, sp[0].o, (72)) = (8399);
	ARRAY_ACCESS(jint, sp[0].o, (73)) = (8447);
	ARRAY_ACCESS(jint, sp[0].o, (74)) = (8527);
	ARRAY_ACCESS(jint, sp[0].o, (75)) = (8591);
	ARRAY_ACCESS(jint, sp[0].o, (76)) = (8703);
	ARRAY_ACCESS(jint, sp[0].o, (77)) = (8959);
	ARRAY_ACCESS(jint, sp[0].o, (78)) = (9215);
	ARRAY_ACCESS(jint, sp[0].o, (79)) = (9279);
	ARRAY_ACCESS(jint, sp[0].o, (80)) = (9311);
	ARRAY_ACCESS(jint, sp[0].o, (81)) = (9471);
	ARRAY_ACCESS(jint, sp[0].o, (82)) = (9599);
	ARRAY_ACCESS(jint, sp[0].o, (83)) = (9631);
	ARRAY_ACCESS(jint, sp[0].o, (84)) = (9727);
	ARRAY_ACCESS(jint, sp[0].o, (85)) = (9983);
	ARRAY_ACCESS(jint, sp[0].o, (86)) = (10175);
	ARRAY_ACCESS(jint, sp[0].o, (87)) = (10223);
	ARRAY_ACCESS(jint, sp[0].o, (88)) = (10239);
	ARRAY_ACCESS(jint, sp[0].o, (89)) = (10495);
	ARRAY_ACCESS(jint, sp[0].o, (90)) = (10623);
	ARRAY_ACCESS(jint, sp[0].o, (91)) = (10751);
	ARRAY_ACCESS(jint, sp[0].o, (92)) = (11007);
	ARRAY_ACCESS(jint, sp[0].o, (93)) = (11263);
	ARRAY_ACCESS(jint, sp[0].o, (94)) = (11359);
	ARRAY_ACCESS(jint, sp[0].o, (95)) = (11391);
	ARRAY_ACCESS(jint, sp[0].o, (96)) = (11519);
	ARRAY_ACCESS(jint, sp[0].o, (97)) = (11567);
	ARRAY_ACCESS(jint, sp[0].o, (98)) = (11647);
	ARRAY_ACCESS(jint, sp[0].o, (99)) = (11743);
	ARRAY_ACCESS(jint, sp[0].o, (100)) = (11775);
	ARRAY_ACCESS(jint, sp[0].o, (101)) = (11903);
	ARRAY_ACCESS(jint, sp[0].o, (102)) = (12031);
	ARRAY_ACCESS(jint, sp[0].o, (103)) = (12255);
	ARRAY_ACCESS(jint, sp[0].o, (104)) = (12287);
	ARRAY_ACCESS(jint, sp[0].o, (105)) = (12351);
	ARRAY_ACCESS(jint, sp[0].o, (106)) = (12447);
	ARRAY_ACCESS(jint, sp[0].o, (107)) = (12543);
	ARRAY_ACCESS(jint, sp[0].o, (108)) = (12591);
	ARRAY_ACCESS(jint, sp[0].o, (109)) = (12687);
	ARRAY_ACCESS(jint, sp[0].o, (110)) = (12703);
	ARRAY_ACCESS(jint, sp[0].o, (111)) = (12735);
	ARRAY_ACCESS(jint, sp[0].o, (112)) = (12783);
	ARRAY_ACCESS(jint, sp[0].o, (113)) = (12799);
	ARRAY_ACCESS(jint, sp[0].o, (114)) = (13055);
	ARRAY_ACCESS(jint, sp[0].o, (115)) = (13311);
	ARRAY_ACCESS(jint, sp[0].o, (116)) = (19903);
	ARRAY_ACCESS(jint, sp[0].o, (117)) = (19967);
	ARRAY_ACCESS(jint, sp[0].o, (118)) = (jint(40959));
	ARRAY_ACCESS(jint, sp[0].o, (119)) = (jint(42127));
	ARRAY_ACCESS(jint, sp[0].o, (120)) = (jint(42191));
	ARRAY_ACCESS(jint, sp[0].o, (121)) = (jint(42239));
	ARRAY_ACCESS(jint, sp[0].o, (122)) = (jint(42559));
	ARRAY_ACCESS(jint, sp[0].o, (123)) = (jint(42655));
	ARRAY_ACCESS(jint, sp[0].o, (124)) = (jint(42751));
	ARRAY_ACCESS(jint, sp[0].o, (125)) = (jint(42783));
	ARRAY_ACCESS(jint, sp[0].o, (126)) = (jint(43007));
	ARRAY_ACCESS(jint, sp[0].o, (127)) = (jint(43055));
	ARRAY_ACCESS(jint, sp[0].o, (128)) = (jint(43071));
	ARRAY_ACCESS(jint, sp[0].o, (129)) = (jint(43135));
	ARRAY_ACCESS(jint, sp[0].o, (130)) = (jint(43231));
	ARRAY_ACCESS(jint, sp[0].o, (131)) = (jint(43263));
	ARRAY_ACCESS(jint, sp[0].o, (132)) = (jint(43311));
	ARRAY_ACCESS(jint, sp[0].o, (133)) = (jint(43359));
	ARRAY_ACCESS(jint, sp[0].o, (134)) = (jint(43391));
	ARRAY_ACCESS(jint, sp[0].o, (135)) = (jint(43487));
	ARRAY_ACCESS(jint, sp[0].o, (136)) = (jint(43519));
	ARRAY_ACCESS(jint, sp[0].o, (137)) = (jint(43615));
	ARRAY_ACCESS(jint, sp[0].o, (138)) = (jint(43647));
	ARRAY_ACCESS(jint, sp[0].o, (139)) = (jint(43743));
	ARRAY_ACCESS(jint, sp[0].o, (140)) = (jint(43775));
	ARRAY_ACCESS(jint, sp[0].o, (141)) = (jint(43823));
	ARRAY_ACCESS(jint, sp[0].o, (142)) = (jint(43887));
	ARRAY_ACCESS(jint, sp[0].o, (143)) = (jint(43967));
	ARRAY_ACCESS(jint, sp[0].o, (144)) = (jint(44031));
	ARRAY_ACCESS(jint, sp[0].o, (145)) = (jint(55215));
	ARRAY_ACCESS(jint, sp[0].o, (146)) = (jint(55295));
	ARRAY_ACCESS(jint, sp[0].o, (147)) = (jint(56191));
	ARRAY_ACCESS(jint, sp[0].o, (148)) = (jint(56319));
	ARRAY_ACCESS(jint, sp[0].o, (149)) = (jint(57343));
	ARRAY_ACCESS(jint, sp[0].o, (150)) = (jint(63743));
	ARRAY_ACCESS(jint, sp[0].o, (151)) = (jint(64255));
	ARRAY_ACCESS(jint, sp[0].o, (152)) = (jint(64335));
	ARRAY_ACCESS(jint, sp[0].o, (153)) = (jint(65023));
	ARRAY_ACCESS(jint, sp[0].o, (154)) = (jint(65039));
	ARRAY_ACCESS(jint, sp[0].o, (155)) = (jint(65055));
	ARRAY_ACCESS(jint, sp[0].o, (156)) = (jint(65071));
	ARRAY_ACCESS(jint, sp[0].o, (157)) = (jint(65103));
	ARRAY_ACCESS(jint, sp[0].o, (158)) = (jint(65135));
	ARRAY_ACCESS(jint, sp[0].o, (159)) = (jint(65279));
	ARRAY_ACCESS(jint, sp[0].o, (160)) = (jint(65519));
	ARRAY_ACCESS(jint, sp[0].o, (161)) = (jint(65533));
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_blockDataEnds = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (162));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"BASICLATIN"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"LATIN1SUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"LATINEXTENDEDA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"LATINEXTENDEDB"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"IPAEXTENSIONS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"SPACINGMODIFIERLETTERS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"COMBININGDIACRITICALMARKS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"GREEK"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"CYRILLIC"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"CYRILLICSUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"ARMENIAN"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"HEBREW"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"ARABIC"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (13)) = (((jobject) createStringLiteral(ctx, u8"SYRIAC"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (14)) = (((jobject) createStringLiteral(ctx, u8"ARABICSUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (15)) = (((jobject) createStringLiteral(ctx, u8"THAANA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (16)) = (((jobject) createStringLiteral(ctx, u8"NKO"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (17)) = (((jobject) createStringLiteral(ctx, u8"SAMARITAN"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (18)) = (((jobject) createStringLiteral(ctx, u8"MANDAIC"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (19)) = (((jobject) createStringLiteral(ctx, u8"SYRIACSUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (20)) = (((jobject) createStringLiteral(ctx, u8"ARABICEXTENDEDA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (21)) = (((jobject) createStringLiteral(ctx, u8"DEVANAGARI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (22)) = (((jobject) createStringLiteral(ctx, u8"BENGALI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (23)) = (((jobject) createStringLiteral(ctx, u8"GURMUKHI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (24)) = (((jobject) createStringLiteral(ctx, u8"GUJARATI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (25)) = (((jobject) createStringLiteral(ctx, u8"ORIYA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (26)) = (((jobject) createStringLiteral(ctx, u8"TAMIL"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (27)) = (((jobject) createStringLiteral(ctx, u8"TELUGU"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (28)) = (((jobject) createStringLiteral(ctx, u8"KANNADA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (29)) = (((jobject) createStringLiteral(ctx, u8"MALAYALAM"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (30)) = (((jobject) createStringLiteral(ctx, u8"SINHALA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (31)) = (((jobject) createStringLiteral(ctx, u8"THAI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (32)) = (((jobject) createStringLiteral(ctx, u8"LAO"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (33)) = (((jobject) createStringLiteral(ctx, u8"TIBETAN"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (34)) = (((jobject) createStringLiteral(ctx, u8"MYANMAR"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (35)) = (((jobject) createStringLiteral(ctx, u8"GEORGIAN"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (36)) = (((jobject) createStringLiteral(ctx, u8"HANGULJAMO"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (37)) = (((jobject) createStringLiteral(ctx, u8"ETHIOPIC"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (38)) = (((jobject) createStringLiteral(ctx, u8"ETHIOPICSUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (39)) = (((jobject) createStringLiteral(ctx, u8"CHEROKEE"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (40)) = (((jobject) createStringLiteral(ctx, u8"UNIFIEDCANADIANABORIGINALSYLLABICS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (41)) = (((jobject) createStringLiteral(ctx, u8"OGHAM"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (42)) = (((jobject) createStringLiteral(ctx, u8"RUNIC"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (43)) = (((jobject) createStringLiteral(ctx, u8"TAGALOG"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (44)) = (((jobject) createStringLiteral(ctx, u8"HANUNOO"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (45)) = (((jobject) createStringLiteral(ctx, u8"BUHID"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (46)) = (((jobject) createStringLiteral(ctx, u8"TAGBANWA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (47)) = (((jobject) createStringLiteral(ctx, u8"KHMER"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (48)) = (((jobject) createStringLiteral(ctx, u8"MONGOLIAN"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (49)) = (((jobject) createStringLiteral(ctx, u8"UNIFIEDCANADIANABORIGINALSYLLABICSEXTENDED"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (50)) = (((jobject) createStringLiteral(ctx, u8"LIMBU"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (51)) = (((jobject) createStringLiteral(ctx, u8"TAILE"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (52)) = (((jobject) createStringLiteral(ctx, u8"NEWTAILUE"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (53)) = (((jobject) createStringLiteral(ctx, u8"KHMERSYMBOLS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (54)) = (((jobject) createStringLiteral(ctx, u8"BUGINESE"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (55)) = (((jobject) createStringLiteral(ctx, u8"TAITHAM"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (56)) = (((jobject) createStringLiteral(ctx, u8"COMBININGDIACRITICALMARKSEXTENDED"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (57)) = (((jobject) createStringLiteral(ctx, u8"BALINESE"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (58)) = (((jobject) createStringLiteral(ctx, u8"SUNDANESE"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (59)) = (((jobject) createStringLiteral(ctx, u8"BATAK"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (60)) = (((jobject) createStringLiteral(ctx, u8"LEPCHA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (61)) = (((jobject) createStringLiteral(ctx, u8"OLCHIKI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (62)) = (((jobject) createStringLiteral(ctx, u8"CYRILLICEXTENDEDC"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (63)) = (((jobject) createStringLiteral(ctx, u8"SUNDANESESUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (64)) = (((jobject) createStringLiteral(ctx, u8"VEDICEXTENSIONS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (65)) = (((jobject) createStringLiteral(ctx, u8"PHONETICEXTENSIONS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (66)) = (((jobject) createStringLiteral(ctx, u8"PHONETICEXTENSIONSSUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (67)) = (((jobject) createStringLiteral(ctx, u8"COMBININGDIACRITICALMARKSSUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (68)) = (((jobject) createStringLiteral(ctx, u8"LATINEXTENDEDADDITIONAL"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (69)) = (((jobject) createStringLiteral(ctx, u8"GREEKEXTENDED"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (70)) = (((jobject) createStringLiteral(ctx, u8"GENERALPUNCTUATION"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (71)) = (((jobject) createStringLiteral(ctx, u8"SUPERSCRIPTSANDSUBSCRIPTS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (72)) = (((jobject) createStringLiteral(ctx, u8"CURRENCYSYMBOLS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (73)) = (((jobject) createStringLiteral(ctx, u8"COMBININGDIACRITICALMARKSFORSYMBOLS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (74)) = (((jobject) createStringLiteral(ctx, u8"LETTERLIKESYMBOLS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (75)) = (((jobject) createStringLiteral(ctx, u8"NUMBERFORMS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (76)) = (((jobject) createStringLiteral(ctx, u8"ARROWS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (77)) = (((jobject) createStringLiteral(ctx, u8"MATHEMATICALOPERATORS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (78)) = (((jobject) createStringLiteral(ctx, u8"MISCELLANEOUSTECHNICAL"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (79)) = (((jobject) createStringLiteral(ctx, u8"CONTROLPICTURES"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (80)) = (((jobject) createStringLiteral(ctx, u8"OPTICALCHARACTERRECOGNITION"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (81)) = (((jobject) createStringLiteral(ctx, u8"ENCLOSEDALPHANUMERICS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (82)) = (((jobject) createStringLiteral(ctx, u8"BOXDRAWING"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (83)) = (((jobject) createStringLiteral(ctx, u8"BLOCKELEMENTS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (84)) = (((jobject) createStringLiteral(ctx, u8"GEOMETRICSHAPES"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (85)) = (((jobject) createStringLiteral(ctx, u8"MISCELLANEOUSSYMBOLS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (86)) = (((jobject) createStringLiteral(ctx, u8"DINGBATS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (87)) = (((jobject) createStringLiteral(ctx, u8"MISCELLANEOUSMATHEMATICALSYMBOLSA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (88)) = (((jobject) createStringLiteral(ctx, u8"SUPPLEMENTALARROWSA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (89)) = (((jobject) createStringLiteral(ctx, u8"BRAILLEPATTERNS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (90)) = (((jobject) createStringLiteral(ctx, u8"SUPPLEMENTALARROWSB"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (91)) = (((jobject) createStringLiteral(ctx, u8"MISCELLANEOUSMATHEMATICALSYMBOLSB"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (92)) = (((jobject) createStringLiteral(ctx, u8"SUPPLEMENTALMATHEMATICALOPERATORS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (93)) = (((jobject) createStringLiteral(ctx, u8"MISCELLANEOUSSYMBOLSANDARROWS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (94)) = (((jobject) createStringLiteral(ctx, u8"GLAGOLITIC"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (95)) = (((jobject) createStringLiteral(ctx, u8"LATINEXTENDEDC"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (96)) = (((jobject) createStringLiteral(ctx, u8"COPTIC"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (97)) = (((jobject) createStringLiteral(ctx, u8"GEORGIANSUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (98)) = (((jobject) createStringLiteral(ctx, u8"TIFINAGH"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (99)) = (((jobject) createStringLiteral(ctx, u8"ETHIOPICEXTENDED"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (100)) = (((jobject) createStringLiteral(ctx, u8"CYRILLICEXTENDEDA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (101)) = (((jobject) createStringLiteral(ctx, u8"SUPPLEMENTALPUNCTUATION"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (102)) = (((jobject) createStringLiteral(ctx, u8"CJKRADICALSSUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (103)) = (((jobject) createStringLiteral(ctx, u8"KANGXIRADICALS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (104)) = (((jobject) createStringLiteral(ctx, u8"IDEOGRAPHICDESCRIPTIONCHARACTERS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (105)) = (((jobject) createStringLiteral(ctx, u8"CJKSYMBOLSANDPUNCTUATION"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (106)) = (((jobject) createStringLiteral(ctx, u8"HIRAGANA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (107)) = (((jobject) createStringLiteral(ctx, u8"KATAKANA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (108)) = (((jobject) createStringLiteral(ctx, u8"BOPOMOFO"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (109)) = (((jobject) createStringLiteral(ctx, u8"HANGULCOMPATIBILITYJAMO"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (110)) = (((jobject) createStringLiteral(ctx, u8"KANBUN"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (111)) = (((jobject) createStringLiteral(ctx, u8"BOPOMOFOEXTENDED"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (112)) = (((jobject) createStringLiteral(ctx, u8"CJKSTROKES"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (113)) = (((jobject) createStringLiteral(ctx, u8"KATAKANAPHONETICEXTENSIONS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (114)) = (((jobject) createStringLiteral(ctx, u8"ENCLOSEDCJKLETTERSANDMONTHS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (115)) = (((jobject) createStringLiteral(ctx, u8"CJKCOMPATIBILITY"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (116)) = (((jobject) createStringLiteral(ctx, u8"CJKUNIFIEDIDEOGRAPHSEXTENSIONA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (117)) = (((jobject) createStringLiteral(ctx, u8"YIJINGHEXAGRAMSYMBOLS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (118)) = (((jobject) createStringLiteral(ctx, u8"CJKUNIFIEDIDEOGRAPHS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (119)) = (((jobject) createStringLiteral(ctx, u8"YISYLLABLES"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (120)) = (((jobject) createStringLiteral(ctx, u8"YIRADICALS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (121)) = (((jobject) createStringLiteral(ctx, u8"LISU"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (122)) = (((jobject) createStringLiteral(ctx, u8"VAI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (123)) = (((jobject) createStringLiteral(ctx, u8"CYRILLICEXTENDEDB"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (124)) = (((jobject) createStringLiteral(ctx, u8"BAMUM"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (125)) = (((jobject) createStringLiteral(ctx, u8"MODIFIERTONELETTERS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (126)) = (((jobject) createStringLiteral(ctx, u8"LATINEXTENDEDD"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (127)) = (((jobject) createStringLiteral(ctx, u8"SYLOTINAGRI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (128)) = (((jobject) createStringLiteral(ctx, u8"COMMONINDICNUMBERFORMS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (129)) = (((jobject) createStringLiteral(ctx, u8"PHAGSPA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (130)) = (((jobject) createStringLiteral(ctx, u8"SAURASHTRA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (131)) = (((jobject) createStringLiteral(ctx, u8"DEVANAGARIEXTENDED"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (132)) = (((jobject) createStringLiteral(ctx, u8"KAYAHLI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (133)) = (((jobject) createStringLiteral(ctx, u8"REJANG"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (134)) = (((jobject) createStringLiteral(ctx, u8"HANGULJAMOEXTENDEDA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (135)) = (((jobject) createStringLiteral(ctx, u8"JAVANESE"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (136)) = (((jobject) createStringLiteral(ctx, u8"MYANMAREXTENDEDB"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (137)) = (((jobject) createStringLiteral(ctx, u8"CHAM"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (138)) = (((jobject) createStringLiteral(ctx, u8"MYANMAREXTENDEDA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (139)) = (((jobject) createStringLiteral(ctx, u8"TAIVIET"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (140)) = (((jobject) createStringLiteral(ctx, u8"MEETEIMAYEKEXTENSIONS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (141)) = (((jobject) createStringLiteral(ctx, u8"ETHIOPICEXTENDEDA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (142)) = (((jobject) createStringLiteral(ctx, u8"LATINEXTENDEDE"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (143)) = (((jobject) createStringLiteral(ctx, u8"CHEROKEESUPPLEMENT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (144)) = (((jobject) createStringLiteral(ctx, u8"MEETEIMAYEK"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (145)) = (((jobject) createStringLiteral(ctx, u8"HANGULSYLLABLES"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (146)) = (((jobject) createStringLiteral(ctx, u8"HANGULJAMOEXTENDEDB"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (147)) = (((jobject) createStringLiteral(ctx, u8"HIGHSURROGATES"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (148)) = (((jobject) createStringLiteral(ctx, u8"HIGHPRIVATEUSESURROGATES"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (149)) = (((jobject) createStringLiteral(ctx, u8"LOWSURROGATES"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (150)) = (((jobject) createStringLiteral(ctx, u8"PRIVATEUSEAREA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (151)) = (((jobject) createStringLiteral(ctx, u8"CJKCOMPATIBILITYIDEOGRAPHS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (152)) = (((jobject) createStringLiteral(ctx, u8"ALPHABETICPRESENTATIONFORMS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (153)) = (((jobject) createStringLiteral(ctx, u8"ARABICPRESENTATIONFORMSA"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (154)) = (((jobject) createStringLiteral(ctx, u8"VARIATIONSELECTORS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (155)) = (((jobject) createStringLiteral(ctx, u8"VERTICALFORMS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (156)) = (((jobject) createStringLiteral(ctx, u8"COMBININGHALFMARKS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (157)) = (((jobject) createStringLiteral(ctx, u8"CJKCOMPATIBILITYFORMS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (158)) = (((jobject) createStringLiteral(ctx, u8"SMALLFORMVARIANTS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (159)) = (((jobject) createStringLiteral(ctx, u8"ARABICPRESENTATIONFORMSB"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (160)) = (((jobject) createStringLiteral(ctx, u8"HALFWIDTHANDFULLWIDTHFORMS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (161)) = (((jobject) createStringLiteral(ctx, u8"SPECIALS"_j)));
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_blockDataNames = sp[0].o;
	LINE_NUMBER(80);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_DIGIT;
	((func_regexodus_BlockSet_setDigit_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setDigit_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(81);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_WORDCHAR;
	((func_regexodus_BlockSet_setWordChar_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setWordChar_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(82);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_SPACE;
	((func_regexodus_BlockSet_setSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setSpace_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(83);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_HSPACE;
	((func_regexodus_BlockSet_setHorizontalSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setHorizontalSpace_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(84);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_VSPACE;
	((func_regexodus_BlockSet_setVerticalSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setVerticalSpace_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(86);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UDIGIT;
	((func_regexodus_BlockSet_setDigit_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setDigit_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(87);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UWORDCHAR;
	((func_regexodus_BlockSet_setWordChar_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setWordChar_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(88);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_USPACE;
	((func_regexodus_BlockSet_setSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setSpace_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(89);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UHSPACE;
	((func_regexodus_BlockSet_setHorizontalSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setHorizontalSpace_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(90);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UVSPACE;
	((func_regexodus_BlockSet_setVerticalSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setVerticalSpace_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(92);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_NONDIGIT;
	((func_regexodus_BlockSet_setDigit_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setDigit_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(93);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_NONDIGIT;
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(94);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_NONWORDCHAR;
	((func_regexodus_BlockSet_setWordChar_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setWordChar_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(95);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_NONWORDCHAR;
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(96);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_NONSPACE;
	((func_regexodus_BlockSet_setSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setSpace_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(97);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_NONSPACE;
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(98);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_NONHSPACE;
	((func_regexodus_BlockSet_setHorizontalSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setHorizontalSpace_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(99);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_NONHSPACE;
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(100);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_NONVSPACE;
	((func_regexodus_BlockSet_setVerticalSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setVerticalSpace_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(101);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_NONVSPACE;
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(103);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UNONDIGIT;
	((func_regexodus_BlockSet_setDigit_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setDigit_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(104);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UNONDIGIT;
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(105);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UNONWORDCHAR;
	((func_regexodus_BlockSet_setWordChar_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setWordChar_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(106);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UNONWORDCHAR;
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(107);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UNONSPACE;
	((func_regexodus_BlockSet_setSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setSpace_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(108);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UNONSPACE;
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(109);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UNONHSPACE;
	((func_regexodus_BlockSet_setHorizontalSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setHorizontalSpace_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(110);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UNONHSPACE;
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(111);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UNONVSPACE;
	((func_regexodus_BlockSet_setVerticalSpace_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setVerticalSpace_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(112);
	clinit_regexodus_CharacterClass(ctx);
	sp[0].o = (jobject)SF_regexodus_CharacterClass_UNONVSPACE;
	((func_regexodus_BlockSet_setPositive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_BlockSet_setPositive_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(114);
	SM_regexodus_CharacterClass_initPosixClasses(ctx);
	LINE_NUMBER(736);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (100));
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_b0 = sp[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (100));
	clinit_regexodus_CharacterClass(ctx);
	SF_regexodus_CharacterClass_b2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_CharacterClass[] {
	(void *) M_regexodus_Term_hashCode_R_int,
	(void *) M_regexodus_Term_equals_java_lang_Object_R_boolean,
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
	(void *) M_regexodus_Term_startNewBranch,
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

static jclass interfaces[] { &class_regexodus_UnicodeConstants, };

static FieldMetadata fields[] {
	{ "DIGIT", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_DIGIT, "Lregexodus/BlockSet;", 26 },
	{ "WORDCHAR", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_WORDCHAR, "Lregexodus/BlockSet;", 26 },
	{ "SPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_SPACE, "Lregexodus/BlockSet;", 26 },
	{ "HSPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_HSPACE, "Lregexodus/BlockSet;", 26 },
	{ "VSPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_VSPACE, "Lregexodus/BlockSet;", 26 },
	{ "UDIGIT", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_UDIGIT, "Lregexodus/BlockSet;", 26 },
	{ "UWORDCHAR", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_UWORDCHAR, "Lregexodus/BlockSet;", 26 },
	{ "USPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_USPACE, "Lregexodus/BlockSet;", 26 },
	{ "UHSPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_UHSPACE, "Lregexodus/BlockSet;", 26 },
	{ "UVSPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_UVSPACE, "Lregexodus/BlockSet;", 26 },
	{ "NONDIGIT", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_NONDIGIT, "Lregexodus/BlockSet;", 26 },
	{ "NONWORDCHAR", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_NONWORDCHAR, "Lregexodus/BlockSet;", 26 },
	{ "NONSPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_NONSPACE, "Lregexodus/BlockSet;", 26 },
	{ "NONHSPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_NONHSPACE, "Lregexodus/BlockSet;", 26 },
	{ "NONVSPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_NONVSPACE, "Lregexodus/BlockSet;", 26 },
	{ "UNONDIGIT", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_UNONDIGIT, "Lregexodus/BlockSet;", 26 },
	{ "UNONWORDCHAR", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_UNONWORDCHAR, "Lregexodus/BlockSet;", 26 },
	{ "UNONSPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_UNONSPACE, "Lregexodus/BlockSet;", 26 },
	{ "UNONHSPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_UNONHSPACE, "Lregexodus/BlockSet;", 26 },
	{ "UNONVSPACE", &class_regexodus_BlockSet, (intptr_t) &SF_regexodus_CharacterClass_UNONVSPACE, "Lregexodus/BlockSet;", 26 },
	{ "namesInitialized", &class_boolean, (intptr_t) &SF_regexodus_CharacterClass_namesInitialized, "Z", 10 },
	{ "namedClasses", &class_java_util_HashMap, (intptr_t) &SF_regexodus_CharacterClass_namedClasses, "Ljava/util/HashMap;", 26 },
	{ "unicodeBlocks", &class_java_util_ArrayList, (intptr_t) &SF_regexodus_CharacterClass_unicodeBlocks, "Ljava/util/ArrayList;", 26 },
	{ "posixClasses", &class_java_util_ArrayList, (intptr_t) &SF_regexodus_CharacterClass_posixClasses, "Ljava/util/ArrayList;", 26 },
	{ "unicodeCategories", &class_java_util_ArrayList, (intptr_t) &SF_regexodus_CharacterClass_unicodeCategories, "Ljava/util/ArrayList;", 26 },
	{ "ADD", &class_int, (intptr_t) &SF_regexodus_CharacterClass_ADD, "I", 26 },
	{ "SUBTRACT", &class_int, (intptr_t) &SF_regexodus_CharacterClass_SUBTRACT, "I", 26 },
	{ "INTERSECT", &class_int, (intptr_t) &SF_regexodus_CharacterClass_INTERSECT, "I", 26 },
	{ "blockDataStarts", getArrayClass(&class_int, 1), (intptr_t) &SF_regexodus_CharacterClass_blockDataStarts, "[I", 26 },
	{ "blockDataEnds", getArrayClass(&class_int, 1), (intptr_t) &SF_regexodus_CharacterClass_blockDataEnds, "[I", 26 },
	{ "blockDataNames", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_regexodus_CharacterClass_blockDataNames, "[Ljava/lang/String;", 26 },
	{ "b0", &class_java_lang_StringBuilder, (intptr_t) &SF_regexodus_CharacterClass_b0, "Ljava/lang/StringBuilder;", 10 },
	{ "b2", &class_java_lang_StringBuilder, (intptr_t) &SF_regexodus_CharacterClass_b2, "Ljava/lang/StringBuilder;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_CharacterClass, 0, "()V", 0 },
	{ "registerClass", (intptr_t) SM_regexodus_CharacterClass_registerClass_java_lang_String_regexodus_BlockSet_java_util_ArrayList, 0, "(Ljava/lang/String;Lregexodus/BlockSet;Ljava/util/ArrayList;)V", 10 },
	{ "initPosixClasses", (intptr_t) SM_regexodus_CharacterClass_initPosixClasses, 0, "()V", 10 },
	{ "initNames", (intptr_t) SM_regexodus_CharacterClass_initNames, 0, "()V", 10 },
	{ "initNamedBlock", (intptr_t) SM_regexodus_CharacterClass_initNamedBlock_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 10 },
	{ "initNamedCategory", (intptr_t) SM_regexodus_CharacterClass_initNamedCategory_java_lang_String, 0, "(Ljava/lang/String;)V", 10 },
	{ "getNamedClass", (intptr_t) SM_regexodus_CharacterClass_getNamedClass_java_lang_String_R_regexodus_BlockSet, 0, "(Ljava/lang/String;)Lregexodus/BlockSet;", 10 },
	{ "makeDigit", (intptr_t) SM_regexodus_CharacterClass_makeDigit_regexodus_Term_boolean_boolean, 0, "(Lregexodus/Term;ZZ)V", 8 },
	{ "makeSpace", (intptr_t) SM_regexodus_CharacterClass_makeSpace_regexodus_Term_boolean_boolean, 0, "(Lregexodus/Term;ZZ)V", 8 },
	{ "makeHSpace", (intptr_t) SM_regexodus_CharacterClass_makeHSpace_regexodus_Term_boolean_boolean, 0, "(Lregexodus/Term;ZZ)V", 8 },
	{ "makeVSpace", (intptr_t) SM_regexodus_CharacterClass_makeVSpace_regexodus_Term_boolean_boolean, 0, "(Lregexodus/Term;ZZ)V", 8 },
	{ "makeWordChar", (intptr_t) SM_regexodus_CharacterClass_makeWordChar_regexodus_Term_boolean_boolean, 0, "(Lregexodus/Term;ZZ)V", 8 },
	{ "makeWordBoundary", (intptr_t) SM_regexodus_CharacterClass_makeWordBoundary_regexodus_Term_boolean_boolean, 0, "(Lregexodus/Term;ZZ)V", 8 },
	{ "makeWordStart", (intptr_t) SM_regexodus_CharacterClass_makeWordStart_regexodus_Term_boolean, 0, "(Lregexodus/Term;Z)V", 8 },
	{ "makeWordEnd", (intptr_t) SM_regexodus_CharacterClass_makeWordEnd_regexodus_Term_boolean, 0, "(Lregexodus/Term;Z)V", 8 },
	{ "parseGroup", (intptr_t) SM_regexodus_CharacterClass_parseGroup_Array1_char_int_int_regexodus_Term_boolean_boolean_boolean_boolean, 0, "([CIILregexodus/Term;ZZZZ)V", 8 },
	{ "parseClass", (intptr_t) SM_regexodus_CharacterClass_parseClass_Array1_char_int_int_regexodus_Term_boolean_boolean_boolean_boolean_R_int, 0, "([CIILregexodus/Term;ZZZZ)I", 8 },
	{ "parseName", (intptr_t) SM_regexodus_CharacterClass_parseName_Array1_char_int_int_regexodus_Term_boolean_boolean_R_int, 0, "([CIILregexodus/Term;ZZ)I", 8 },
	{ "parseClass", (intptr_t) SM_regexodus_CharacterClass_parseClass_Array1_char_int_int_regexodus_BlockSet_boolean_boolean_boolean_boolean_R_int, 0, "([CIILregexodus/BlockSet;ZZZZ)I", 10 },
	{ "parseName", (intptr_t) SM_regexodus_CharacterClass_parseName_Array1_char_int_int_java_lang_StringBuilder_boolean_R_int, 0, "([CIILjava/lang/StringBuilder;Z)I", 10 },
	{ "stringValue0", (intptr_t) SM_regexodus_CharacterClass_stringValue0_regexodus_ds_IntBitSet_R_java_lang_String, 0, "(Lregexodus/ds/IntBitSet;)Ljava/lang/String;", 8 },
	{ "stringValue2", (intptr_t) SM_regexodus_CharacterClass_stringValue2_Array1_regexodus_ds_IntBitSet_R_java_lang_String, 0, "([Lregexodus/ds/IntBitSet;)Ljava/lang/String;", 8 },
	{ "stringValue", (intptr_t) SM_regexodus_CharacterClass_stringValue_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 8 },
	{ "toHexDigit", (intptr_t) SM_regexodus_CharacterClass_toHexDigit_char_R_int, 0, "(C)I", 8 },
	{ "printRealm", (intptr_t) SM_regexodus_CharacterClass_printRealm_java_util_ArrayList_java_lang_String, 0, "(Ljava/util/ArrayList;Ljava/lang/String;)V", 10 },
	{ "<clinit>", (intptr_t) clinit_regexodus_CharacterClass, 0, "()V", 8 },
};

Class class_regexodus_CharacterClass{
		.nativeName = (intptr_t) "regexodus/CharacterClass",
		.parentClass = (intptr_t) &class_regexodus_Term,
		.size = sizeof(regexodus_CharacterClass),
		.classVtable = (intptr_t) vtable_regexodus_CharacterClass,
		.staticInitializer = (intptr_t) clinit_regexodus_CharacterClass,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_CharacterClass,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 33,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_CharacterClass = registerClass(&class_regexodus_CharacterClass);

}
