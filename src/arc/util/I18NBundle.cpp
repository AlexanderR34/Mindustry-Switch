#include "arc/util/I18NBundle.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "arc/util/TextFormatter.h"
#include "arc/files/Fi.h"
#include "arc/util/io/PropertiesUtils.h"
#include "java/lang/Iterable.h"
#include "java/lang/CharSequence.h"
#include "java/io/InputStream.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/MissingResourceException.h"
#include "arc/util/I18NBundle.h"
#include "java/lang/NullPointerException.h"
#include "arc/struct/Seq.h"
#include "arc/util/io/Streams.h"
#include "java/io/Closeable.h"
#include "arc/struct/ObjectMap_Keys.h"
#include "arc/struct/ObjectMap.h"
#include "java/io/Reader.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/util/Locale.h"

extern "C" {

jobject SF_arc_util_I18NBundle_DEFAULT_ENCODING;
jobject SF_arc_util_I18NBundle_ROOT_LOCALE;
jbool SF_arc_util_I18NBundle_simpleFormatter;

void mark_arc_util_I18NBundle(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_I18NBundle_DEFAULT_ENCODING)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_I18NBundle_DEFAULT_ENCODING)->clazz)->markFunction)((jobject) SF_arc_util_I18NBundle_DEFAULT_ENCODING, mark, depth + 1);
		if (SF_arc_util_I18NBundle_ROOT_LOCALE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_I18NBundle_ROOT_LOCALE)->clazz)->markFunction)((jobject) SF_arc_util_I18NBundle_ROOT_LOCALE, mark, depth + 1);
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
	auto self = (arc_util_I18NBundle *) object;
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_locale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locale)->clazz)->markFunction)((jobject) self->F_locale, mark, depth + 1);
	if (self->F_properties)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_properties)->clazz)->markFunction)((jobject) self->F_properties, mark, depth + 1);
	if (self->F_formatter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_formatter)->clazz)->markFunction)((jobject) self->F_formatter, mark, depth + 1);
}

void init_arc_util_I18NBundle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_I18NBundle_getSimpleFormatter_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:getSimpleFormatter", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (clinit_arc_util_I18NBundle(ctx), (jint)SF_arc_util_I18NBundle_simpleFormatter);
	}

	popStackFrame(ctx);
}

void SM_arc_util_I18NBundle_setSimpleFormatter_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:setSimpleFormatter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(72);
	clinit_arc_util_I18NBundle(ctx);
	SF_arc_util_I18NBundle_simpleFormatter = (frame[0].i);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_createEmptyBundle_R_arc_util_I18NBundle(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:createEmptyBundle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	{
	LINE_NUMBER(77);
	clinit_arc_util_I18NBundle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_I18NBundle);
	init_arc_util_I18NBundle(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	clinit_arc_util_I18NBundle(ctx);
	sp[1].o = (jobject)SF_arc_util_I18NBundle_ROOT_LOCALE;
	((arc_util_I18NBundle *) NULL_CHECK(sp[0].o))->F_locale = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_arc_util_TextFormatter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_TextFormatter);
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_ROOT;
	init_arc_util_TextFormatter_java_util_Locale_boolean(ctx, sp[1].o, sp[2].o, (jint(0)));
	((arc_util_I18NBundle *) NULL_CHECK(sp[0].o))->F_formatter = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_I18NBundle *) NULL_CHECK(sp[0].o))->F_properties = (jref) sp[1].o;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_createBundle_arc_files_Fi_R_arc_util_I18NBundle(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:createBundle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_createBundleImpl_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_util_Locale_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:createBundle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_createBundleImpl_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_lang_String_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:createBundle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_createBundleImpl_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:createBundle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_createBundleImpl_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_createBundleImpl_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:createBundleImpl", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(135);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(138);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(139);
	frame[5].o = (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_getCandidateLocales_java_util_Locale_R_arc_struct_Seq(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(145);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_loadBundleChain_arc_files_Fi_java_lang_String_arc_struct_Seq_int_arc_util_I18NBundle_R_arc_util_I18NBundle(ctx, (frame[0].o), (frame[2].o), (frame[6].o), (jint(0)), (frame[4].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(148);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[3].o)))->F_locale;
	frame[7].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = frame[7].o;
	clinit_arc_util_I18NBundle(ctx);
	sp[1].o = (jobject)SF_arc_util_I18NBundle_ROOT_LOCALE;
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[8].i = temp0;
	LINE_NUMBER(152);
	if ((frame[8].i) == 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (frame[1].o));
	if (temp0 == 0) goto label_12;
	}
	LINE_NUMBER(154);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(156);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size) != (jint(1))) goto label_14;
	}
	{
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (jint(0)));
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_14;
	}
	LINE_NUMBER(158);
	goto label_11;
label_14:;
	{
	LINE_NUMBER(160);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(162);
	frame[4].o = (frame[3].o);
	}
label_7:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_getFallbackLocale_java_util_Locale_R_java_util_Locale(ctx, (frame[5].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(169);
	if ((frame[5].o) != nullptr) goto label_4;
	}
label_11:;
	{
	LINE_NUMBER(171);
	if ((frame[3].o) != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(172);
	if ((frame[4].o) != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(174);
	clinit_java_util_MissingResourceException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_MissingResourceException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't find bundle for base file handle "_j))));
	sp[2].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", locale "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	init_java_util_MissingResourceException_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(178);
	frame[3].o = (frame[4].o);
	}
label_18:;
	{
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_getCandidateLocales_java_util_Locale_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:getCandidateLocales", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_java_util_Locale_getLanguage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Locale_getLanguage_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_java_util_Locale_getCountry_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Locale_getCountry_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(236);
	sp[0].o = (jobject)((func_java_util_Locale_getVariant_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Locale_getVariant_R_java_lang_String])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(238);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (jint(4)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(239);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 <= 0) goto label_5;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(242);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 <= 0) goto label_7;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[4].o));
	sp += 1;
	if (temp0 == 0) goto label_9;
	}
	INST_ALOAD(0);
	goto label_10;
label_9:;
	{
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp += 1;
	}
label_10:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp++;
	INST_POP();
label_7:;
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[4].o));
	sp += 1;
	if (temp0 == 0) goto label_13;
	}
	INST_ALOAD(0);
	goto label_14;
label_13:;
	{
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_14:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp++;
	INST_POP();
label_11:;
	{
	LINE_NUMBER(248);
	sp[0].o = frame[4].o;
	clinit_arc_util_I18NBundle(ctx);
	sp[1].o = (jobject)SF_arc_util_I18NBundle_ROOT_LOCALE;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_getFallbackLocale_java_util_Locale_R_java_util_Locale(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:getFallbackLocale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(268);
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(1);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_loadBundleChain_arc_files_Fi_java_lang_String_arc_struct_Seq_int_arc_util_I18NBundle_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:loadBundleChain", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_java_util_Locale, sp[0].o));
	LINE_NUMBER(274);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(275);
	if ((frame[3].i) == (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) - (jint(1)))) goto label_3;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_loadBundleChain_arc_files_Fi_java_lang_String_arc_struct_Seq_int_arc_util_I18NBundle_R_arc_util_I18NBundle(ctx, (frame[0].o), (frame[1].o), (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].o));
	frame[6].o = sp[0].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(278);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_util_I18NBundle(ctx);
	sp[1].o = (jobject)SF_arc_util_I18NBundle_ROOT_LOCALE;
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_5:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_loadBundle_arc_files_Fi_java_lang_String_java_util_Locale_R_arc_util_I18NBundle(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(284);
	if ((frame[7].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(285);
	((arc_util_I18NBundle *) NULL_CHECK((frame[7].o)))->F_parent = (jref) (frame[6].o);
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_8:;
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_loadBundle_arc_files_Fi_java_lang_String_java_util_Locale_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:loadBundle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(294);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(295);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)SM_arc_util_I18NBundle_toFileHandle_arc_files_Fi_java_util_Locale_R_arc_files_Fi(ctx, (frame[0].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(298);
	jint temp0 = (jint)SM_arc_util_I18NBundle_checkFileExistence_arc_files_Fi_R_boolean(ctx, (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(300);
	clinit_arc_util_I18NBundle(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_I18NBundle);
	init_arc_util_I18NBundle(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_arc_files_Fi_reader_java_lang_String_R_java_io_Reader) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_files_Fi_reader_java_lang_String_R_java_io_Reader])(ctx, (frame[5].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(304);
	M_arc_util_I18NBundle_load_java_io_Reader(ctx, (frame[3].o), (frame[4].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(307);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[4].o));
	LINE_NUMBER(308);
	goto label_13;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(307);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[4].o));
	LINE_NUMBER(308);
	throwException(ctx, (frame[6].o));	}
label_13:;
	{
	LINE_NUMBER(309);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(310);
	M_arc_util_I18NBundle_setLocale_java_util_Locale(ctx, (frame[3].o), (frame[2].o));
	}
label_15:;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_I18NBundle_checkFileExistence_arc_files_Fi_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:checkFileExistence", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((func_arc_files_Fi_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_read_R_java_io_InputStream])(ctx, (frame[0].o));
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(320);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(321);
	frame[1].o = sp[0].o;
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_I18NBundle_toFileHandle_arc_files_Fi_java_util_Locale_R_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:toFileHandle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(345);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[0].o));
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(346);
	sp[0].o = frame[1].o;
	clinit_arc_util_I18NBundle(ctx);
	sp[1].o = (jobject)SF_arc_util_I18NBundle_ROOT_LOCALE;
	jint temp0 = (jint)((func_java_util_Locale_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_java_util_Locale_getLanguage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Locale_getLanguage_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"in"_j))), (((jobject) createStringLiteral(ctx, u8"id"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(348);
	sp[0].o = (jobject)((func_java_util_Locale_getCountry_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Locale_getCountry_R_java_lang_String])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_java_util_Locale_getVariant_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Locale_getVariant_R_java_lang_String])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(350);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8""_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[3].o));
	frame[6].i = temp0;
	LINE_NUMBER(351);
	jint temp1 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8""_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[4].o));
	frame[7].i = temp1;
	LINE_NUMBER(352);
	jint temp2 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8""_j))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[5].o));
	frame[8].i = temp2;
	LINE_NUMBER(354);
	if ((frame[6].i) == 0) goto label_10;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_10;
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_2;
label_10:;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (95));
	LINE_NUMBER(356);
	if ((frame[8].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (95));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (95));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	goto label_2;
	}
label_12:;
	{
	LINE_NUMBER(358);
	if ((frame[7].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (95));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	goto label_2;
	}
label_14:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8".properties"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_I18NBundle_load_java_io_Reader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_I18NBundle *) NULL_CHECK(sp[0].o))->F_properties = (jref) sp[1].o;
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	SM_arc_util_io_PropertiesUtils_load_arc_struct_ObjectMap_java_io_Reader(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_getLocale_R_java_util_Locale(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:getLocale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_locale;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_I18NBundle_setLocale_java_util_Locale(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:setLocale", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(390);
	((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_locale = (jref) (frame[1].o);
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	clinit_arc_util_TextFormatter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_TextFormatter);
	sp[2].o = frame[1].o;
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((clinit_arc_util_I18NBundle(ctx), (jint)SF_arc_util_I18NBundle_simpleFormatter) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 5;
	init_arc_util_TextFormatter_java_util_Locale_boolean(ctx, sp[1].o, sp[3].o, sp[4].i);
	((arc_util_I18NBundle *) NULL_CHECK(sp[0].o))->F_formatter = (jref) sp[1].o;
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(402);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(404);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(405);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"???"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"???"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(2);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:getOrNull", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(417);
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_getNotNull_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:getNotNull", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(422);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(423);
	clinit_java_util_MissingResourceException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_MissingResourceException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No key with name \""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\" found!"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	init_java_util_MissingResourceException_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_getKeys_R_java_lang_Iterable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:getKeys", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:getProperties", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_I18NBundle_setProperties_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:setProperties", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(439);
	((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties = (jref) (frame[1].o);
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_I18NBundle_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_parent;
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:format", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_formatter;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_formatString_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:formatString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_formatter;
	sp[0].o = (jobject)((func_arc_util_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:formatFloat", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_formatter;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, (frame[2].f), (frame[3].i));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_util_I18NBundle_debug_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:debug", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(482);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectMap$Keys_iterator_R_arc_struct_ObjectMap$Keys])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(485);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_properties;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o), (frame[1].o));
	LINE_NUMBER(486);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:getParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((arc_util_I18NBundle *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_I18NBundle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_I18NBundle_DEFAULT_ENCODING = ((jobject) createStringLiteral(ctx, u8"UTF-8"_j));
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/I18NBundle:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_I18NBundle(ctx);
	{
	LINE_NUMBER(49);
	clinit_java_util_Locale(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale);
	init_java_util_Locale_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))), (((jobject) createStringLiteral(ctx, u8""_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_arc_util_I18NBundle(ctx);
	SF_arc_util_I18NBundle_ROOT_LOCALE = sp[0].o;
	LINE_NUMBER(50);
	clinit_arc_util_I18NBundle(ctx);
	SF_arc_util_I18NBundle_simpleFormatter = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_I18NBundle[] {
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
	(void *) M_arc_util_I18NBundle_load_java_io_Reader,
	(void *) M_arc_util_I18NBundle_getLocale_R_java_util_Locale,
	(void *) M_arc_util_I18NBundle_setLocale_java_util_Locale,
	(void *) M_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_I18NBundle_getNotNull_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_I18NBundle_getKeys_R_java_lang_Iterable,
	(void *) M_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap,
	(void *) M_arc_util_I18NBundle_setProperties_arc_struct_ObjectMap,
	(void *) M_arc_util_I18NBundle_has_java_lang_String_R_boolean,
	(void *) M_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_arc_util_I18NBundle_formatString_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String,
	(void *) M_arc_util_I18NBundle_debug_java_lang_String,
	(void *) M_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle,
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
	{ "load", "(Ljava/io/Reader;)V" },
	{ "getLocale", "()Ljava/util/Locale;" },
	{ "setLocale", "(Ljava/util/Locale;)V" },
	{ "get", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "get", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "getOrNull", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getNotNull", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getKeys", "()Ljava/lang/Iterable;" },
	{ "getProperties", "()Larc/struct/ObjectMap;" },
	{ "setProperties", "(Larc/struct/ObjectMap;)V" },
	{ "has", "(Ljava/lang/String;)Z" },
	{ "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
	{ "formatString", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
	{ "formatFloat", "(Ljava/lang/String;FI)Ljava/lang/String;" },
	{ "debug", "(Ljava/lang/String;)V" },
	{ "getParent", "()Larc/util/I18NBundle;" },
};

static FieldMetadata fields[] {
	{ "DEFAULT_ENCODING", &class_java_lang_String, (intptr_t) &SF_arc_util_I18NBundle_DEFAULT_ENCODING, "Ljava/lang/String;", 26 },
	{ "ROOT_LOCALE", &class_java_util_Locale, (intptr_t) &SF_arc_util_I18NBundle_ROOT_LOCALE, "Ljava/util/Locale;", 26 },
	{ "simpleFormatter", &class_boolean, (intptr_t) &SF_arc_util_I18NBundle_simpleFormatter, "Z", 10 },
	{ "parent", &class_arc_util_I18NBundle, offsetof(arc_util_I18NBundle, F_parent), "Larc/util/I18NBundle;", 2 },
	{ "locale", &class_java_util_Locale, offsetof(arc_util_I18NBundle, F_locale), "Ljava/util/Locale;", 2 },
	{ "properties", &class_arc_struct_ObjectMap, offsetof(arc_util_I18NBundle, F_properties), "Larc/struct/ObjectMap;", 2 },
	{ "formatter", &class_arc_util_TextFormatter, offsetof(arc_util_I18NBundle, F_formatter), "Larc/util/TextFormatter;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_I18NBundle, 0, "()V", 1 },
	{ "getSimpleFormatter", (intptr_t) SM_arc_util_I18NBundle_getSimpleFormatter_R_boolean, 0, "()Z", 9 },
	{ "setSimpleFormatter", (intptr_t) SM_arc_util_I18NBundle_setSimpleFormatter_boolean, 0, "(Z)V", 9 },
	{ "createEmptyBundle", (intptr_t) SM_arc_util_I18NBundle_createEmptyBundle_R_arc_util_I18NBundle, 0, "()Larc/util/I18NBundle;", 9 },
	{ "createBundle", (intptr_t) SM_arc_util_I18NBundle_createBundle_arc_files_Fi_R_arc_util_I18NBundle, 0, "(Larc/files/Fi;)Larc/util/I18NBundle;", 9 },
	{ "createBundle", (intptr_t) SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_util_Locale_R_arc_util_I18NBundle, 0, "(Larc/files/Fi;Ljava/util/Locale;)Larc/util/I18NBundle;", 9 },
	{ "createBundle", (intptr_t) SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_lang_String_R_arc_util_I18NBundle, 0, "(Larc/files/Fi;Ljava/lang/String;)Larc/util/I18NBundle;", 9 },
	{ "createBundle", (intptr_t) SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle, 0, "(Larc/files/Fi;Ljava/util/Locale;Ljava/lang/String;)Larc/util/I18NBundle;", 9 },
	{ "createBundleImpl", (intptr_t) SM_arc_util_I18NBundle_createBundleImpl_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle, 0, "(Larc/files/Fi;Ljava/util/Locale;Ljava/lang/String;)Larc/util/I18NBundle;", 10 },
	{ "getCandidateLocales", (intptr_t) SM_arc_util_I18NBundle_getCandidateLocales_java_util_Locale_R_arc_struct_Seq, 0, "(Ljava/util/Locale;)Larc/struct/Seq;", 10 },
	{ "getFallbackLocale", (intptr_t) SM_arc_util_I18NBundle_getFallbackLocale_java_util_Locale_R_java_util_Locale, 0, "(Ljava/util/Locale;)Ljava/util/Locale;", 10 },
	{ "loadBundleChain", (intptr_t) SM_arc_util_I18NBundle_loadBundleChain_arc_files_Fi_java_lang_String_arc_struct_Seq_int_arc_util_I18NBundle_R_arc_util_I18NBundle, 0, "(Larc/files/Fi;Ljava/lang/String;Larc/struct/Seq;ILarc/util/I18NBundle;)Larc/util/I18NBundle;", 10 },
	{ "loadBundle", (intptr_t) SM_arc_util_I18NBundle_loadBundle_arc_files_Fi_java_lang_String_java_util_Locale_R_arc_util_I18NBundle, 0, "(Larc/files/Fi;Ljava/lang/String;Ljava/util/Locale;)Larc/util/I18NBundle;", 10 },
	{ "checkFileExistence", (intptr_t) SM_arc_util_I18NBundle_checkFileExistence_arc_files_Fi_R_boolean, 0, "(Larc/files/Fi;)Z", 10 },
	{ "toFileHandle", (intptr_t) SM_arc_util_I18NBundle_toFileHandle_arc_files_Fi_java_util_Locale_R_arc_files_Fi, 0, "(Larc/files/Fi;Ljava/util/Locale;)Larc/files/Fi;", 10 },
	{ "load", (intptr_t) M_arc_util_I18NBundle_load_java_io_Reader, VTABLE_arc_util_I18NBundle_load_java_io_Reader, "(Ljava/io/Reader;)V", 2 },
	{ "getLocale", (intptr_t) M_arc_util_I18NBundle_getLocale_R_java_util_Locale, VTABLE_arc_util_I18NBundle_getLocale_R_java_util_Locale, "()Ljava/util/Locale;", 1 },
	{ "setLocale", (intptr_t) M_arc_util_I18NBundle_setLocale_java_util_Locale, VTABLE_arc_util_I18NBundle_setLocale_java_util_Locale, "(Ljava/util/Locale;)V", 2 },
	{ "get", (intptr_t) M_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String, VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 17 },
	{ "get", (intptr_t) M_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getOrNull", (intptr_t) M_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String, VTABLE_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getNotNull", (intptr_t) M_arc_util_I18NBundle_getNotNull_java_lang_String_R_java_lang_String, VTABLE_arc_util_I18NBundle_getNotNull_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getKeys", (intptr_t) M_arc_util_I18NBundle_getKeys_R_java_lang_Iterable, VTABLE_arc_util_I18NBundle_getKeys_R_java_lang_Iterable, "()Ljava/lang/Iterable;", 1 },
	{ "getProperties", (intptr_t) M_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap, VTABLE_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap, "()Larc/struct/ObjectMap;", 1 },
	{ "setProperties", (intptr_t) M_arc_util_I18NBundle_setProperties_arc_struct_ObjectMap, VTABLE_arc_util_I18NBundle_setProperties_arc_struct_ObjectMap, "(Larc/struct/ObjectMap;)V", 1 },
	{ "has", (intptr_t) M_arc_util_I18NBundle_has_java_lang_String_R_boolean, VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "format", (intptr_t) M_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 129 },
	{ "formatString", (intptr_t) M_arc_util_I18NBundle_formatString_java_lang_String_Array1_java_lang_Object_R_java_lang_String, VTABLE_arc_util_I18NBundle_formatString_java_lang_String_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 129 },
	{ "formatFloat", (intptr_t) M_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String, VTABLE_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String, "(Ljava/lang/String;FI)Ljava/lang/String;", 1 },
	{ "debug", (intptr_t) M_arc_util_I18NBundle_debug_java_lang_String, VTABLE_arc_util_I18NBundle_debug_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getParent", (intptr_t) M_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle, VTABLE_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle, "()Larc/util/I18NBundle;", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_util_I18NBundle, 0, "()V", 8 },
};

Class class_arc_util_I18NBundle{
		.nativeName = (intptr_t) "arc/util/I18NBundle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_I18NBundle),
		.classVtable = (intptr_t) vtable_arc_util_I18NBundle,
		.staticInitializer = (intptr_t) clinit_arc_util_I18NBundle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_I18NBundle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 32,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_I18NBundle = registerClass(&class_arc_util_I18NBundle);

}
