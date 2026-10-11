#include "regexodus/Pretokenizer.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "regexodus/Pattern.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "regexodus/Category.h"
#include "regexodus/Pretokenizer.h"
#include "regexodus/PatternSyntaxException.h"

extern "C" {

jlong SF_regexodus_Pretokenizer_serialVersionUID;
jint SF_regexodus_Pretokenizer_START;
jint SF_regexodus_Pretokenizer_END;
jint SF_regexodus_Pretokenizer_PLAIN_GROUP;
jint SF_regexodus_Pretokenizer_POS_LOOKAHEAD;
jint SF_regexodus_Pretokenizer_NEG_LOOKAHEAD;
jint SF_regexodus_Pretokenizer_POS_LOOKBEHIND;
jint SF_regexodus_Pretokenizer_NEG_LOOKBEHIND;
jint SF_regexodus_Pretokenizer_INDEPENDENT_REGEX;
jint SF_regexodus_Pretokenizer_COMMENT;
jint SF_regexodus_Pretokenizer_CONDITIONAL_GROUP;
jint SF_regexodus_Pretokenizer_FLAGS;
jint SF_regexodus_Pretokenizer_CLASS_GROUP;
jint SF_regexodus_Pretokenizer_NAMED_GROUP;

void mark_regexodus_Pretokenizer(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Pretokenizer *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_groupName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_groupName)->clazz)->markFunction)((jobject) self->F_groupName, mark, depth + 1);
}

void clinit_regexodus_Pretokenizer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_Pretokenizer_serialVersionUID = jlong(2528136757932720807ll);
	SF_regexodus_Pretokenizer_START = jint(1);
	SF_regexodus_Pretokenizer_END = jint(2);
	SF_regexodus_Pretokenizer_PLAIN_GROUP = jint(3);
	SF_regexodus_Pretokenizer_POS_LOOKAHEAD = jint(4);
	SF_regexodus_Pretokenizer_NEG_LOOKAHEAD = jint(5);
	SF_regexodus_Pretokenizer_POS_LOOKBEHIND = jint(6);
	SF_regexodus_Pretokenizer_NEG_LOOKBEHIND = jint(7);
	SF_regexodus_Pretokenizer_INDEPENDENT_REGEX = jint(8);
	SF_regexodus_Pretokenizer_COMMENT = jint(9);
	SF_regexodus_Pretokenizer_CONDITIONAL_GROUP = jint(10);
	SF_regexodus_Pretokenizer_FLAGS = jint(11);
	SF_regexodus_Pretokenizer_CLASS_GROUP = jint(12);
	SF_regexodus_Pretokenizer_NAMED_GROUP = jint(13);
}

void init_regexodus_Pretokenizer_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pretokenizer:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pretokenizer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1809);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1798);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (jint(1));
	LINE_NUMBER(1810);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	if ((frame[3].i) <= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1811);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"offset="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", end="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", length="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1812);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_offset = (frame[2].i);
	LINE_NUMBER(1813);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_end = (frame[3].i);
	LINE_NUMBER(1815);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOffset = (frame[2].i);
	LINE_NUMBER(1816);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOutside = (frame[2].i);
	LINE_NUMBER(1818);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(1819);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Pretokenizer_flags_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pretokenizer:flags", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1822);
	if (((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_flagsChanged) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_flags;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ILOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_regexodus_Pretokenizer_next(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pretokenizer:next", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1826);
	frame[1].i = ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOutside);
	LINE_NUMBER(1827);
	frame[2].i = ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_skip);
	LINE_NUMBER(1829);
	frame[1].i = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(1830);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_flagsChanged = (jint(0));
	LINE_NUMBER(1832);
	frame[3].i = ((jint)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_end);
	LINE_NUMBER(1833);
	sp[0].o = (jobject)((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_data;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1834);
	frame[5].i = (jint(0));
	LINE_NUMBER(1835);
	frame[6].i = (frame[1].i);
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(1836);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(1837);
	if ((frame[5].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1838);
	if ((frame[7].i) != (81)) goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(1841);
	if ((frame[6].i) >= (frame[3].i)) goto label_16;
	}
	{
	LINE_NUMBER(1842);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(1843);
	if ((frame[8].i) != (92)) goto label_19;
	}
	{
	LINE_NUMBER(1844);
	if (((frame[6].i) + (jint(1))) >= (frame[3].i)) goto label_19;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), ((frame[6].i) + (jint(1))))) != (69)) goto label_19;
	}
	{
	LINE_NUMBER(1845);
	INST_IINC(6, 1);
	LINE_NUMBER(1846);
	frame[5].i = (jint(0));
	LINE_NUMBER(1847);
	goto label_16;
	}
label_19:;
	{
	LINE_NUMBER(1841);
	INST_IINC(6, 1);
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(1853);
	frame[5].i = (jint(0));
	LINE_NUMBER(1855);
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(1857);
	switch((frame[7].i)) {
		case 40: goto label_25;
		case 41: goto label_26;
		case 91: goto label_27;
		case 92: goto label_28;
		case 124: goto label_26;
		default: goto label_16;
	}
	}
label_28:;
	{
	LINE_NUMBER(1859);
	frame[5].i = (jint(1));
	LINE_NUMBER(1860);
	goto label_16;
	}
label_26:;
	{
	LINE_NUMBER(1863);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (frame[7].i);
	LINE_NUMBER(1864);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOffset = (frame[1].i);
	LINE_NUMBER(1865);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOutside = (frame[6].i);
	LINE_NUMBER(1866);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_skip = (jint(1));
	LINE_NUMBER(1867);
	popStackFrame(ctx);
	return;
	}
label_25:;
	{
	LINE_NUMBER(1869);
	if (((frame[6].i) + (jint(2))) >= (frame[3].i)) goto label_34;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), ((frame[6].i) + (jint(1))))) != (63)) goto label_34;
	}
	{
	LINE_NUMBER(1870);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, (frame[4].o), ((frame[6].i) + (jint(2)))));
	LINE_NUMBER(1871);
	switch((frame[8].i)) {
		case 33: goto label_37;
		case 35: goto label_38;
		case 40: goto label_39;
		case 58: goto label_40;
		case 60: goto label_41;
		case 61: goto label_42;
		case 62: goto label_43;
		case 91: goto label_44;
		default: goto label_45;
	}
	}
label_40:;
	{
	LINE_NUMBER(1873);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (jint(3));
	LINE_NUMBER(1874);
	frame[2].i = (jint(3));
	LINE_NUMBER(1875);
	goto label_48;
	}
label_42:;
	{
	LINE_NUMBER(1877);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (jint(4));
	LINE_NUMBER(1878);
	frame[2].i = (jint(3));
	LINE_NUMBER(1879);
	goto label_48;
	}
label_37:;
	{
	LINE_NUMBER(1881);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (jint(5));
	LINE_NUMBER(1882);
	frame[2].i = (jint(3));
	LINE_NUMBER(1883);
	goto label_48;
	}
label_41:;
	{
	LINE_NUMBER(1885);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[4].o), ((frame[6].i) + (jint(3))));
	frame[8].i = temp0;
	switch(temp0) {
		case 33: goto label_53;
		case 61: goto label_54;
		default: goto label_55;
	}
	}
label_54:;
	{
	LINE_NUMBER(1887);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (6);
	LINE_NUMBER(1888);
	frame[2].i = (jint(4));
	LINE_NUMBER(1889);
	goto label_58;
	}
label_53:;
	{
	LINE_NUMBER(1891);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (7);
	LINE_NUMBER(1892);
	frame[2].i = (jint(4));
	LINE_NUMBER(1893);
	goto label_58;
	}
label_55:;
	{
	LINE_NUMBER(1895);
	frame[9].i = ((frame[6].i) + (jint(3)));
	LINE_NUMBER(1896);
	frame[2].i = (jint(4));
	LINE_NUMBER(1898);
	frame[10].i = (frame[9].i);
	LINE_NUMBER(1899);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_N;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, (frame[8].i));
	if (temp0 == 0) goto label_64;
	}
	{
	LINE_NUMBER(1900);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"number at the start of a named group"_j))));
	throwException(ctx, sp[0].o);	}
label_64:;
	{
	LINE_NUMBER(1901);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_IdentifierPart;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, (frame[8].i));
	if (temp0 == 0) goto label_66;
	}
	{
	LINE_NUMBER(1902);
	sp[0].o = frame[4].o;
	INST_IINC(9, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[9].i)));
	LINE_NUMBER(1903);
	INST_IINC(2, 1);
	LINE_NUMBER(1904);
	if ((frame[9].i) != (frame[3].i)) goto label_64;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malformed named group"_j))));
	throwException(ctx, sp[0].o);	}
label_66:;
	{
	LINE_NUMBER(1906);
	frame[11].i = (frame[9].i);
	LINE_NUMBER(1907);
	if ((frame[8].i) == (62)) goto label_71;
	}
	{
	LINE_NUMBER(1908);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'>' expected at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[9].i) - (frame[6].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" in "_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, (frame[4].o), (frame[6].i), ((frame[3].i) - (frame[6].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_71:;
	{
	LINE_NUMBER(1910);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, (frame[4].o), (frame[10].i), ((frame[11].i) - (frame[10].i)));
	((regexodus_Pretokenizer *) NULL_CHECK(sp[0].o))->F_groupName = (jref) sp[1].o;
	LINE_NUMBER(1911);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_groupDeclared = (jint(1));
	LINE_NUMBER(1912);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (13);
	}
label_58:;
	LINE_NUMBER(1916);
	goto label_48;
label_43:;
	{
	LINE_NUMBER(1918);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (8);
	LINE_NUMBER(1919);
	frame[2].i = (jint(3));
	LINE_NUMBER(1920);
	goto label_48;
	}
label_38:;
	{
	LINE_NUMBER(1922);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (9);
	LINE_NUMBER(1923);
	frame[2].i = (jint(3));
	LINE_NUMBER(1924);
	goto label_48;
	}
label_39:;
	{
	LINE_NUMBER(1926);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (10);
	LINE_NUMBER(1927);
	frame[2].i = (jint(2));
	LINE_NUMBER(1928);
	goto label_48;
	}
label_44:;
	{
	LINE_NUMBER(1930);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (12);
	LINE_NUMBER(1931);
	frame[2].i = (jint(2));
	LINE_NUMBER(1932);
	goto label_48;
	}
label_45:;
	{
	LINE_NUMBER(1936);
	frame[11].i = ((frame[6].i) + (jint(2)));
	}
label_83:;
	{
	if ((frame[11].i) >= (frame[3].i)) goto label_48;
	}
	{
	LINE_NUMBER(1937);
	frame[12].i = ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[11].i)));
	LINE_NUMBER(1938);
	switch((frame[12].i)) {
		case 41: goto label_86;
		case 45: goto label_87;
		case 58: goto label_88;
		case 88: goto label_87;
		case 105: goto label_87;
		case 109: goto label_87;
		case 115: goto label_87;
		case 117: goto label_87;
		case 120: goto label_87;
		default: goto label_89;
	}
	}
label_87:;
	LINE_NUMBER(1946);
	goto label_90;
label_88:;
	{
	LINE_NUMBER(1949);
	frame[9].i = ((frame[6].i) + (jint(2)));
	LINE_NUMBER(1950);
	frame[10].i = ((frame[11].i) - (frame[9].i));
	LINE_NUMBER(1951);
	if ((frame[10].i) <= 0) goto label_93;
	}
	{
	LINE_NUMBER(1952);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_regexodus_Pattern_parseFlags_Array1_char_int_int_R_int(ctx, (frame[4].o), (frame[9].i), (frame[10].i));
	((regexodus_Pretokenizer *) NULL_CHECK(sp[0].o))->F_flags = temp0;
	LINE_NUMBER(1953);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_flagsChanged = (jint(1));
	}
label_93:;
	{
	LINE_NUMBER(1955);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (jint(3));
	LINE_NUMBER(1956);
	frame[2].i = ((frame[10].i) + (jint(3)));
	LINE_NUMBER(1957);
	goto label_48;
	}
label_86:;
	{
	LINE_NUMBER(1959);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	jint temp0 = (frame[6].i) + (jint(2));
	frame[9].i = temp0;
	jint temp3 = (frame[11].i) - (frame[9].i);
	frame[10].i = temp3;
	jint temp6 = (jint)SM_regexodus_Pattern_parseFlags_Array1_char_int_int_R_int(ctx, sp[1].o, temp0, temp3);
	((regexodus_Pretokenizer *) NULL_CHECK(sp[0].o))->F_flags = temp6;
	LINE_NUMBER(1960);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_flagsChanged = (jint(1));
	LINE_NUMBER(1961);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (11);
	LINE_NUMBER(1962);
	frame[2].i = ((frame[10].i) + (jint(3)));
	LINE_NUMBER(1963);
	goto label_48;
	}
label_89:;
	{
	LINE_NUMBER(1965);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"wrong char after \"(?\": "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[12].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_90:;
	{
	LINE_NUMBER(1936);
	INST_IINC(11, 1);
	goto label_83;
	}
label_48:;
	LINE_NUMBER(1970);
	goto label_104;
label_34:;
	{
	if (((frame[6].i) + (jint(2))) >= (frame[3].i)) goto label_105;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), ((frame[6].i) + (jint(1))))) != (123)) goto label_105;
	}
	{
	LINE_NUMBER(1971);
	frame[8].i = ((frame[6].i) + (jint(2)));
	LINE_NUMBER(1972);
	frame[2].i = (jint(3));
	LINE_NUMBER(1975);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[8].i)));
	}
label_109:;
	{
	LINE_NUMBER(1976);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_Space;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, (frame[7].i));
	if (temp0 == 0) goto label_110;
	}
	{
	LINE_NUMBER(1977);
	sp[0].o = frame[4].o;
	INST_IINC(8, 1);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[8].i)));
	LINE_NUMBER(1978);
	INST_IINC(2, 1);
	LINE_NUMBER(1979);
	if ((frame[8].i) != (frame[3].i)) goto label_109;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malformed named group"_j))));
	throwException(ctx, sp[0].o);	}
label_110:;
	{
	LINE_NUMBER(1982);
	if ((frame[7].i) != (61)) goto label_114;
	}
	{
	LINE_NUMBER(1983);
	frame[11].i = (jint(0));
	LINE_NUMBER(1984);
	sp[0].o = frame[4].o;
	INST_IINC(8, 1);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[8].i)));
	LINE_NUMBER(1985);
	INST_IINC(2, 1);
	LINE_NUMBER(1986);
	if ((frame[8].i) != (frame[3].i)) goto label_119;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malformed named group"_j))));
	throwException(ctx, sp[0].o);	}
label_114:;
	{
	LINE_NUMBER(1987);
	frame[11].i = (jint(1));
	}
label_119:;
	{
	LINE_NUMBER(1989);
	frame[9].i = (frame[8].i);
	}
label_120:;
	{
	LINE_NUMBER(1990);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_IdentifierPart;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, (frame[7].i));
	if (temp0 == 0) goto label_121;
	}
	{
	LINE_NUMBER(1991);
	sp[0].o = frame[4].o;
	INST_IINC(8, 1);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[8].i)));
	LINE_NUMBER(1992);
	INST_IINC(2, 1);
	LINE_NUMBER(1993);
	if ((frame[8].i) != (frame[3].i)) goto label_120;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malformed named group"_j))));
	throwException(ctx, sp[0].o);	}
label_121:;
	{
	LINE_NUMBER(1995);
	frame[10].i = (frame[8].i);
	}
label_125:;
	{
	LINE_NUMBER(1996);
	clinit_regexodus_Category(ctx);
	sp[0].o = (jobject)SF_regexodus_Category_Space;
	jint temp0 = (jint)((func_regexodus_Category_contains_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Category_contains_char_R_boolean])(ctx, sp[0].o, (frame[7].i));
	if (temp0 == 0) goto label_126;
	}
	{
	LINE_NUMBER(1997);
	sp[0].o = frame[4].o;
	INST_IINC(8, 1);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[8].i)));
	LINE_NUMBER(1998);
	INST_IINC(2, 1);
	LINE_NUMBER(1999);
	if ((frame[8].i) != (frame[3].i)) goto label_125;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malformed named group"_j))));
	throwException(ctx, sp[0].o);	}
label_126:;
	{
	LINE_NUMBER(2001);
	if ((frame[7].i) == (125)) goto label_130;
	}
	{
	LINE_NUMBER(2002);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'}' expected at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[8].i) - (frame[6].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" in "_j))));
	clinit_java_lang_String(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[2].o, (frame[4].o), (frame[6].i), ((frame[3].i) - (frame[6].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_130:;
	{
	LINE_NUMBER(2004);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, (frame[4].o), (frame[9].i), ((frame[10].i) - (frame[9].i)));
	((regexodus_Pretokenizer *) NULL_CHECK(sp[0].o))->F_groupName = (jref) sp[1].o;
	LINE_NUMBER(2005);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_groupDeclared = (frame[11].i);
	LINE_NUMBER(2006);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (13);
	LINE_NUMBER(2007);
	goto label_104;
	}
label_105:;
	{
	LINE_NUMBER(2008);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (40);
	LINE_NUMBER(2009);
	frame[2].i = (jint(1));
	}
label_104:;
	{
	LINE_NUMBER(2011);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOffset = (frame[1].i);
	LINE_NUMBER(2012);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOutside = (frame[6].i);
	LINE_NUMBER(2013);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_skip = (frame[2].i);
	LINE_NUMBER(2014);
	popStackFrame(ctx);
	return;
	}
label_27:;
	{
	LINE_NUMBER(2018);
	if ((frame[6].i) != (frame[3].i)) goto label_139;
	}
	{
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malformed character class"_j))));
	throwException(ctx, sp[0].o);	}
label_139:;
	{
	LINE_NUMBER(2019);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(2020);
	switch((frame[8].i)) {
		case 92: goto label_141;
		case 93: goto label_142;
		default: goto label_143;
	}
	}
label_141:;
	{
	LINE_NUMBER(2022);
	INST_IINC(6, 1);
	LINE_NUMBER(2023);
	goto label_143;
	}
label_142:;
	LINE_NUMBER(2025);
	goto label_16;
label_143:;
	{
	LINE_NUMBER(2017);
	INST_IINC(6, 1);
	goto label_27;
	}
label_16:;
	{
	LINE_NUMBER(1835);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2030);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_ttype = (jint(2));
	LINE_NUMBER(2031);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOffset = (frame[1].i);
	LINE_NUMBER(2032);
	((regexodus_Pretokenizer *) NULL_CHECK((frame[0].o)))->F_tOutside = (frame[3].i);
	LINE_NUMBER(2033);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Pretokenizer[] {
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
	(void *) M_regexodus_Pretokenizer_flags_int_R_int,
	(void *) M_regexodus_Pretokenizer_next,
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
	{ "flags", "(I)I" },
	{ "next", "()V" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_Pretokenizer_serialVersionUID, "J", 26 },
	{ "START", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_START, "I", 26 },
	{ "END", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_END, "I", 24 },
	{ "PLAIN_GROUP", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_PLAIN_GROUP, "I", 24 },
	{ "POS_LOOKAHEAD", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_POS_LOOKAHEAD, "I", 24 },
	{ "NEG_LOOKAHEAD", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_NEG_LOOKAHEAD, "I", 24 },
	{ "POS_LOOKBEHIND", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_POS_LOOKBEHIND, "I", 24 },
	{ "NEG_LOOKBEHIND", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_NEG_LOOKBEHIND, "I", 24 },
	{ "INDEPENDENT_REGEX", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_INDEPENDENT_REGEX, "I", 24 },
	{ "COMMENT", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_COMMENT, "I", 24 },
	{ "CONDITIONAL_GROUP", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_CONDITIONAL_GROUP, "I", 24 },
	{ "FLAGS", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_FLAGS, "I", 24 },
	{ "CLASS_GROUP", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_CLASS_GROUP, "I", 24 },
	{ "NAMED_GROUP", &class_int, (intptr_t) &SF_regexodus_Pretokenizer_NAMED_GROUP, "I", 24 },
	{ "tOffset", &class_int, offsetof(regexodus_Pretokenizer, F_tOffset), "I", 0 },
	{ "tOutside", &class_int, offsetof(regexodus_Pretokenizer, F_tOutside), "I", 0 },
	{ "skip", &class_int, offsetof(regexodus_Pretokenizer, F_skip), "I", 2 },
	{ "offset", &class_int, offsetof(regexodus_Pretokenizer, F_offset), "I", 2 },
	{ "end", &class_int, offsetof(regexodus_Pretokenizer, F_end), "I", 2 },
	{ "c", &class_int, offsetof(regexodus_Pretokenizer, F_c), "I", 0 },
	{ "ttype", &class_int, offsetof(regexodus_Pretokenizer, F_ttype), "I", 0 },
	{ "data", getArrayClass(&class_char, 1), offsetof(regexodus_Pretokenizer, F_data), "[C", 2 },
	{ "flags", &class_int, offsetof(regexodus_Pretokenizer, F_flags), "I", 2 },
	{ "flagsChanged", &class_boolean, offsetof(regexodus_Pretokenizer, F_flagsChanged), "Z", 2 },
	{ "groupName", &class_java_lang_String, offsetof(regexodus_Pretokenizer, F_groupName), "Ljava/lang/String;", 0 },
	{ "groupDeclared", &class_boolean, offsetof(regexodus_Pretokenizer, F_groupDeclared), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Pretokenizer_Array1_char_int_int, 0, "([CII)V", 0 },
	{ "flags", (intptr_t) M_regexodus_Pretokenizer_flags_int_R_int, VTABLE_regexodus_Pretokenizer_flags_int_R_int, "(I)I", 0 },
	{ "next", (intptr_t) M_regexodus_Pretokenizer_next, VTABLE_regexodus_Pretokenizer_next, "()V", 0 },
};

Class class_regexodus_Pretokenizer{
		.nativeName = (intptr_t) "regexodus/Pretokenizer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Pretokenizer),
		.classVtable = (intptr_t) vtable_regexodus_Pretokenizer,
		.staticInitializer = (intptr_t) clinit_regexodus_Pretokenizer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Pretokenizer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Pretokenizer = registerClass(&class_regexodus_Pretokenizer);

}
