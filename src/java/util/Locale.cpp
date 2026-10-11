#include "java/util/Locale.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Locale_Category.h"
#include "java/util/Locale.h"

extern "C" {

jobject SF_java_util_Locale_defaultLocale;
jobject SF_java_util_Locale_ENGLISH;
jobject SF_java_util_Locale_FRENCH;
jobject SF_java_util_Locale_GERMAN;
jobject SF_java_util_Locale_ITALIAN;
jobject SF_java_util_Locale_JAPANESE;
jobject SF_java_util_Locale_KOREAN;
jobject SF_java_util_Locale_CHINESE;
jobject SF_java_util_Locale_SIMPLIFIED_CHINESE;
jobject SF_java_util_Locale_TRADITIONAL_CHINESE;
jobject SF_java_util_Locale_FRANCE;
jobject SF_java_util_Locale_GERMANY;
jobject SF_java_util_Locale_ITALY;
jobject SF_java_util_Locale_JAPAN;
jobject SF_java_util_Locale_KOREA;
jobject SF_java_util_Locale_CHINA;
jobject SF_java_util_Locale_PRC;
jobject SF_java_util_Locale_TAIWAN;
jobject SF_java_util_Locale_UK;
jobject SF_java_util_Locale_US;
jobject SF_java_util_Locale_CANADA;
jobject SF_java_util_Locale_CANADA_FRENCH;
jobject SF_java_util_Locale_ROOT;

void mark_java_util_Locale(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_Locale_defaultLocale)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_defaultLocale)->clazz)->markFunction)((jobject) SF_java_util_Locale_defaultLocale, mark, depth + 1);
		if (SF_java_util_Locale_ENGLISH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_ENGLISH)->clazz)->markFunction)((jobject) SF_java_util_Locale_ENGLISH, mark, depth + 1);
		if (SF_java_util_Locale_FRENCH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_FRENCH)->clazz)->markFunction)((jobject) SF_java_util_Locale_FRENCH, mark, depth + 1);
		if (SF_java_util_Locale_GERMAN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_GERMAN)->clazz)->markFunction)((jobject) SF_java_util_Locale_GERMAN, mark, depth + 1);
		if (SF_java_util_Locale_ITALIAN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_ITALIAN)->clazz)->markFunction)((jobject) SF_java_util_Locale_ITALIAN, mark, depth + 1);
		if (SF_java_util_Locale_JAPANESE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_JAPANESE)->clazz)->markFunction)((jobject) SF_java_util_Locale_JAPANESE, mark, depth + 1);
		if (SF_java_util_Locale_KOREAN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_KOREAN)->clazz)->markFunction)((jobject) SF_java_util_Locale_KOREAN, mark, depth + 1);
		if (SF_java_util_Locale_CHINESE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_CHINESE)->clazz)->markFunction)((jobject) SF_java_util_Locale_CHINESE, mark, depth + 1);
		if (SF_java_util_Locale_SIMPLIFIED_CHINESE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_SIMPLIFIED_CHINESE)->clazz)->markFunction)((jobject) SF_java_util_Locale_SIMPLIFIED_CHINESE, mark, depth + 1);
		if (SF_java_util_Locale_TRADITIONAL_CHINESE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_TRADITIONAL_CHINESE)->clazz)->markFunction)((jobject) SF_java_util_Locale_TRADITIONAL_CHINESE, mark, depth + 1);
		if (SF_java_util_Locale_FRANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_FRANCE)->clazz)->markFunction)((jobject) SF_java_util_Locale_FRANCE, mark, depth + 1);
		if (SF_java_util_Locale_GERMANY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_GERMANY)->clazz)->markFunction)((jobject) SF_java_util_Locale_GERMANY, mark, depth + 1);
		if (SF_java_util_Locale_ITALY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_ITALY)->clazz)->markFunction)((jobject) SF_java_util_Locale_ITALY, mark, depth + 1);
		if (SF_java_util_Locale_JAPAN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_JAPAN)->clazz)->markFunction)((jobject) SF_java_util_Locale_JAPAN, mark, depth + 1);
		if (SF_java_util_Locale_KOREA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_KOREA)->clazz)->markFunction)((jobject) SF_java_util_Locale_KOREA, mark, depth + 1);
		if (SF_java_util_Locale_CHINA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_CHINA)->clazz)->markFunction)((jobject) SF_java_util_Locale_CHINA, mark, depth + 1);
		if (SF_java_util_Locale_PRC)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_PRC)->clazz)->markFunction)((jobject) SF_java_util_Locale_PRC, mark, depth + 1);
		if (SF_java_util_Locale_TAIWAN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_TAIWAN)->clazz)->markFunction)((jobject) SF_java_util_Locale_TAIWAN, mark, depth + 1);
		if (SF_java_util_Locale_UK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_UK)->clazz)->markFunction)((jobject) SF_java_util_Locale_UK, mark, depth + 1);
		if (SF_java_util_Locale_US)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_US)->clazz)->markFunction)((jobject) SF_java_util_Locale_US, mark, depth + 1);
		if (SF_java_util_Locale_CANADA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_CANADA)->clazz)->markFunction)((jobject) SF_java_util_Locale_CANADA, mark, depth + 1);
		if (SF_java_util_Locale_CANADA_FRENCH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_CANADA_FRENCH)->clazz)->markFunction)((jobject) SF_java_util_Locale_CANADA_FRENCH, mark, depth + 1);
		if (SF_java_util_Locale_ROOT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale_ROOT)->clazz)->markFunction)((jobject) SF_java_util_Locale_ROOT, mark, depth + 1);
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
	auto self = (java_util_Locale *) object;
	if (self->F_language)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_language)->clazz)->markFunction)((jobject) self->F_language, mark, depth + 1);
	if (self->F_country)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_country)->clazz)->markFunction)((jobject) self->F_country, mark, depth + 1);
	if (self->F_variant)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_variant)->clazz)->markFunction)((jobject) self->F_variant, mark, depth + 1);
}

void init_java_util_Locale_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Locale_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(136);
	init_java_util_Locale_java_lang_String_java_lang_String_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Locale_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(139);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(140);
	((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language = (jref) (frame[1].o);
	LINE_NUMBER(141);
	((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_country = (jref) (frame[2].o);
	LINE_NUMBER(142);
	((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_variant = (jref) (frame[3].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Locale(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(145);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Locale_getOSLanguage_R_java_lang_String(ctx);
	((java_util_Locale *) NULL_CHECK(sp[0].o))->F_language = (jref) sp[1].o;
	LINE_NUMBER(148);
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, sp[0].o, (45));
	frame[1].i = temp0;
	if (temp0 == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, ((frame[1].i) + (jint(1))));
	((java_util_Locale *) NULL_CHECK(sp[0].o))->F_country = (jref) sp[1].o;
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)), (frame[1].i));
	((java_util_Locale *) NULL_CHECK(sp[0].o))->F_language = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, sp[0].o, (95));
	frame[1].i = temp0;
	if (temp0 == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, ((frame[1].i) + (jint(1))));
	((java_util_Locale *) NULL_CHECK(sp[0].o))->F_country = (jref) sp[1].o;
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)), (frame[1].i));
	((java_util_Locale *) NULL_CHECK(sp[0].o))->F_language = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_country;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(157);
	((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_country = (jref) (((jobject) createStringLiteral(ctx, u8"US"_j)));
	}
label_11:;
	{
	LINE_NUMBER(159);
	((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_variant = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Locale_getDefault_R_java_util_Locale(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:getDefault", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale(ctx);
	{
	LINE_NUMBER(163);
	clinit_java_util_Locale(ctx);
	sp[0].o = (jobject)SF_java_util_Locale_defaultLocale;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(164);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale(ctx, sp[0].o);
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_defaultLocale = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(166);
	clinit_java_util_Locale(ctx);
	sp[0].o = (jobject)SF_java_util_Locale_defaultLocale;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Locale_getDefault_java_util_Locale$Category_R_java_util_Locale(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:getDefault", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_util_Locale_setDefault_java_util_Locale(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:setDefault", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(174);
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_defaultLocale = (frame[0].o);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Locale_getLanguage_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:getLanguage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Locale_getCountry_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:getCountry", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_country;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Locale_getVariant_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:getVariant", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_variant;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Locale_getDisplayName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:getDisplayName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:getDisplayName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_java_util_Locale_getDisplayName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Locale_getDisplayName_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Locale_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_language;
	frame[1].o = sp[0].o;
	LINE_NUMBER(202);
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_country;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_country;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(203);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (95));
	sp[1].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_country;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_variant;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_variant;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(205);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (95));
	sp[1].o = (jobject)((java_util_Locale *) NULL_CHECK((frame[0].o)))->F_variant;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void clinit_java_util_Locale(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale(ctx);
	{
	LINE_NUMBER(35);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"en"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_ENGLISH = sp[0].o;
	LINE_NUMBER(39);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fr"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_FRENCH = sp[0].o;
	LINE_NUMBER(43);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"de"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_GERMAN = sp[0].o;
	LINE_NUMBER(47);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"it"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_ITALIAN = sp[0].o;
	LINE_NUMBER(51);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ja"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_JAPANESE = sp[0].o;
	LINE_NUMBER(55);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ko"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_KOREAN = sp[0].o;
	LINE_NUMBER(59);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"zh"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_CHINESE = sp[0].o;
	LINE_NUMBER(63);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"zh"_j))), (((jobject) createStringLiteral(ctx, u8"CN"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_SIMPLIFIED_CHINESE = sp[0].o;
	LINE_NUMBER(67);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"zh"_j))), (((jobject) createStringLiteral(ctx, u8"TW"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_TRADITIONAL_CHINESE = sp[0].o;
	LINE_NUMBER(71);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fr"_j))), (((jobject) createStringLiteral(ctx, u8"FR"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_FRANCE = sp[0].o;
	LINE_NUMBER(75);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"de"_j))), (((jobject) createStringLiteral(ctx, u8"DE"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_GERMANY = sp[0].o;
	LINE_NUMBER(79);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"it"_j))), (((jobject) createStringLiteral(ctx, u8"IT"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_ITALY = sp[0].o;
	LINE_NUMBER(83);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ja"_j))), (((jobject) createStringLiteral(ctx, u8"JP"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_JAPAN = sp[0].o;
	LINE_NUMBER(87);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ko"_j))), (((jobject) createStringLiteral(ctx, u8"KR"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_KOREA = sp[0].o;
	LINE_NUMBER(91);
	clinit_java_util_Locale(ctx);
	sp[0].o = (jobject)SF_java_util_Locale_SIMPLIFIED_CHINESE;
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_CHINA = sp[0].o;
	LINE_NUMBER(95);
	clinit_java_util_Locale(ctx);
	sp[0].o = (jobject)SF_java_util_Locale_SIMPLIFIED_CHINESE;
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_PRC = sp[0].o;
	LINE_NUMBER(99);
	clinit_java_util_Locale(ctx);
	sp[0].o = (jobject)SF_java_util_Locale_TRADITIONAL_CHINESE;
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_TAIWAN = sp[0].o;
	LINE_NUMBER(103);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"en"_j))), (((jobject) createStringLiteral(ctx, u8"GB"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_UK = sp[0].o;
	LINE_NUMBER(107);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"en"_j))), (((jobject) createStringLiteral(ctx, u8"US"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_US = sp[0].o;
	LINE_NUMBER(111);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"en"_j))), (((jobject) createStringLiteral(ctx, u8"CA"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_CANADA = sp[0].o;
	LINE_NUMBER(115);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fr"_j))), (((jobject) createStringLiteral(ctx, u8"CA"_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_CANADA_FRENCH = sp[0].o;
	LINE_NUMBER(125);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_java_util_Locale(ctx);
	SF_java_util_Locale_ROOT = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Locale[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Locale_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Locale_getLanguage_R_java_lang_String,
	(void *) M_java_util_Locale_getCountry_R_java_lang_String,
	(void *) M_java_util_Locale_getVariant_R_java_lang_String,
	(void *) M_java_util_Locale_getDisplayName_R_java_lang_String,
	(void *) M_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String,
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
	{ "getLanguage", "()Ljava/lang/String;" },
	{ "getCountry", "()Ljava/lang/String;" },
	{ "getVariant", "()Ljava/lang/String;" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;" },
};

static jclass innerClasses[] {
	&class_java_util_Locale$Category,
};

static FieldMetadata fields[] {
	{ "defaultLocale", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_defaultLocale, "Ljava/util/Locale;", 10 },
	{ "ENGLISH", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_ENGLISH, "Ljava/util/Locale;", 25 },
	{ "FRENCH", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_FRENCH, "Ljava/util/Locale;", 25 },
	{ "GERMAN", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_GERMAN, "Ljava/util/Locale;", 25 },
	{ "ITALIAN", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_ITALIAN, "Ljava/util/Locale;", 25 },
	{ "JAPANESE", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_JAPANESE, "Ljava/util/Locale;", 25 },
	{ "KOREAN", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_KOREAN, "Ljava/util/Locale;", 25 },
	{ "CHINESE", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_CHINESE, "Ljava/util/Locale;", 25 },
	{ "SIMPLIFIED_CHINESE", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_SIMPLIFIED_CHINESE, "Ljava/util/Locale;", 25 },
	{ "TRADITIONAL_CHINESE", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_TRADITIONAL_CHINESE, "Ljava/util/Locale;", 25 },
	{ "FRANCE", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_FRANCE, "Ljava/util/Locale;", 25 },
	{ "GERMANY", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_GERMANY, "Ljava/util/Locale;", 25 },
	{ "ITALY", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_ITALY, "Ljava/util/Locale;", 25 },
	{ "JAPAN", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_JAPAN, "Ljava/util/Locale;", 25 },
	{ "KOREA", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_KOREA, "Ljava/util/Locale;", 25 },
	{ "CHINA", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_CHINA, "Ljava/util/Locale;", 25 },
	{ "PRC", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_PRC, "Ljava/util/Locale;", 25 },
	{ "TAIWAN", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_TAIWAN, "Ljava/util/Locale;", 25 },
	{ "UK", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_UK, "Ljava/util/Locale;", 25 },
	{ "US", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_US, "Ljava/util/Locale;", 25 },
	{ "CANADA", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_CANADA, "Ljava/util/Locale;", 25 },
	{ "CANADA_FRENCH", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_CANADA_FRENCH, "Ljava/util/Locale;", 25 },
	{ "ROOT", &class_java_util_Locale, (intptr_t) &SF_java_util_Locale_ROOT, "Ljava/util/Locale;", 25 },
	{ "language", &class_java_lang_String, offsetof(java_util_Locale, F_language), "Ljava/lang/String;", 2 },
	{ "country", &class_java_lang_String, offsetof(java_util_Locale, F_country), "Ljava/lang/String;", 2 },
	{ "variant", &class_java_lang_String, offsetof(java_util_Locale, F_variant), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Locale_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Locale_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Locale_java_lang_String_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_Locale, 0, "()V", 1 },
	{ "getDefault", (intptr_t) SM_java_util_Locale_getDefault_R_java_util_Locale, 0, "()Ljava/util/Locale;", 9 },
	{ "getDefault", (intptr_t) SM_java_util_Locale_getDefault_java_util_Locale$Category_R_java_util_Locale, 0, "(Ljava/util/Locale$Category;)Ljava/util/Locale;", 9 },
	{ "setDefault", (intptr_t) SM_java_util_Locale_setDefault_java_util_Locale, 0, "(Ljava/util/Locale;)V", 9 },
	{ "getLanguage", (intptr_t) M_java_util_Locale_getLanguage_R_java_lang_String, VTABLE_java_util_Locale_getLanguage_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getCountry", (intptr_t) M_java_util_Locale_getCountry_R_java_lang_String, VTABLE_java_util_Locale_getCountry_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getVariant", (intptr_t) M_java_util_Locale_getVariant_R_java_lang_String, VTABLE_java_util_Locale_getVariant_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getOSLanguage", (intptr_t) SM_java_util_Locale_getOSLanguage_R_java_lang_String, 0, "()Ljava/lang/String;", 266 },
	{ "getDisplayName", (intptr_t) M_java_util_Locale_getDisplayName_R_java_lang_String, VTABLE_java_util_Locale_getDisplayName_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "getDisplayName", (intptr_t) M_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String, VTABLE_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String, "(Ljava/util/Locale;)Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_java_util_Locale_toString_R_java_lang_String, VTABLE_java_util_Locale_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_util_Locale, 0, "()V", 8 },
};

Class class_java_util_Locale{
		.nativeName = (intptr_t) "java/util/Locale",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Locale),
		.classVtable = (intptr_t) vtable_java_util_Locale,
		.staticInitializer = (intptr_t) clinit_java_util_Locale,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Locale,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Locale = registerClass(&class_java_util_Locale);

}
