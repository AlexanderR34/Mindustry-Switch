#include "arc/util/ColorCodes.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/OrderedMap.h"
#include "arc/util/ColorCodes.h"
#include "arc/struct/Seq.h"
#include "arc/util/OS.h"
#include "java/lang/Class.h"
#include "arc/struct/ObjectMap_Values.h"

extern "C" {

jobject SF_arc_util_ColorCodes_flush;
jobject SF_arc_util_ColorCodes_reset;
jobject SF_arc_util_ColorCodes_bold;
jobject SF_arc_util_ColorCodes_italic;
jobject SF_arc_util_ColorCodes_underline;
jobject SF_arc_util_ColorCodes_black;
jobject SF_arc_util_ColorCodes_red;
jobject SF_arc_util_ColorCodes_green;
jobject SF_arc_util_ColorCodes_yellow;
jobject SF_arc_util_ColorCodes_blue;
jobject SF_arc_util_ColorCodes_purple;
jobject SF_arc_util_ColorCodes_cyan;
jobject SF_arc_util_ColorCodes_lightBlack;
jobject SF_arc_util_ColorCodes_lightRed;
jobject SF_arc_util_ColorCodes_lightGreen;
jobject SF_arc_util_ColorCodes_lightYellow;
jobject SF_arc_util_ColorCodes_lightBlue;
jobject SF_arc_util_ColorCodes_lightMagenta;
jobject SF_arc_util_ColorCodes_lightCyan;
jobject SF_arc_util_ColorCodes_lightWhite;
jobject SF_arc_util_ColorCodes_white;
jobject SF_arc_util_ColorCodes_backDefault;
jobject SF_arc_util_ColorCodes_backRed;
jobject SF_arc_util_ColorCodes_backGreen;
jobject SF_arc_util_ColorCodes_backYellow;
jobject SF_arc_util_ColorCodes_backBlue;
jobject SF_arc_util_ColorCodes_codes;
jobject SF_arc_util_ColorCodes_values;

void mark_arc_util_ColorCodes(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_ColorCodes_flush)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_flush)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_flush, mark, depth + 1);
		if (SF_arc_util_ColorCodes_reset)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_reset)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_reset, mark, depth + 1);
		if (SF_arc_util_ColorCodes_bold)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_bold)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_bold, mark, depth + 1);
		if (SF_arc_util_ColorCodes_italic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_italic)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_italic, mark, depth + 1);
		if (SF_arc_util_ColorCodes_underline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_underline)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_underline, mark, depth + 1);
		if (SF_arc_util_ColorCodes_black)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_black)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_black, mark, depth + 1);
		if (SF_arc_util_ColorCodes_red)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_red)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_red, mark, depth + 1);
		if (SF_arc_util_ColorCodes_green)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_green)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_green, mark, depth + 1);
		if (SF_arc_util_ColorCodes_yellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_yellow)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_yellow, mark, depth + 1);
		if (SF_arc_util_ColorCodes_blue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_blue)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_blue, mark, depth + 1);
		if (SF_arc_util_ColorCodes_purple)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_purple)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_purple, mark, depth + 1);
		if (SF_arc_util_ColorCodes_cyan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_cyan)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_cyan, mark, depth + 1);
		if (SF_arc_util_ColorCodes_lightBlack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_lightBlack)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_lightBlack, mark, depth + 1);
		if (SF_arc_util_ColorCodes_lightRed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_lightRed)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_lightRed, mark, depth + 1);
		if (SF_arc_util_ColorCodes_lightGreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_lightGreen)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_lightGreen, mark, depth + 1);
		if (SF_arc_util_ColorCodes_lightYellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_lightYellow)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_lightYellow, mark, depth + 1);
		if (SF_arc_util_ColorCodes_lightBlue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_lightBlue)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_lightBlue, mark, depth + 1);
		if (SF_arc_util_ColorCodes_lightMagenta)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_lightMagenta)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_lightMagenta, mark, depth + 1);
		if (SF_arc_util_ColorCodes_lightCyan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_lightCyan)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_lightCyan, mark, depth + 1);
		if (SF_arc_util_ColorCodes_lightWhite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_lightWhite)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_lightWhite, mark, depth + 1);
		if (SF_arc_util_ColorCodes_white)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_white)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_white, mark, depth + 1);
		if (SF_arc_util_ColorCodes_backDefault)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_backDefault)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_backDefault, mark, depth + 1);
		if (SF_arc_util_ColorCodes_backRed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_backRed)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_backRed, mark, depth + 1);
		if (SF_arc_util_ColorCodes_backGreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_backGreen)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_backGreen, mark, depth + 1);
		if (SF_arc_util_ColorCodes_backYellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_backYellow)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_backYellow, mark, depth + 1);
		if (SF_arc_util_ColorCodes_backBlue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_backBlue)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_backBlue, mark, depth + 1);
		if (SF_arc_util_ColorCodes_codes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_codes)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_codes, mark, depth + 1);
		if (SF_arc_util_ColorCodes_values)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ColorCodes_values)->clazz)->markFunction)((jobject) SF_arc_util_ColorCodes_values, mark, depth + 1);
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
	auto self = (arc_util_ColorCodes *) object;
}

void init_arc_util_ColorCodes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ColorCodes:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ColorCodes(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_ColorCodes(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ColorCodes:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ColorCodes(ctx);
	{
	LINE_NUMBER(8);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_flush = (((jobject) createStringLiteral(ctx, u8"\u001b[H\u001b[2J"_j)));
	LINE_NUMBER(9);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_reset = (((jobject) createStringLiteral(ctx, u8"\u001b[0m"_j)));
	LINE_NUMBER(10);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_bold = (((jobject) createStringLiteral(ctx, u8"\u001b[1m"_j)));
	LINE_NUMBER(11);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_italic = (((jobject) createStringLiteral(ctx, u8"\u001b[3m"_j)));
	LINE_NUMBER(12);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_underline = (((jobject) createStringLiteral(ctx, u8"\u001b[4m"_j)));
	LINE_NUMBER(13);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_black = (((jobject) createStringLiteral(ctx, u8"\u001b[30m"_j)));
	LINE_NUMBER(14);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_red = (((jobject) createStringLiteral(ctx, u8"\u001b[31m"_j)));
	LINE_NUMBER(15);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_green = (((jobject) createStringLiteral(ctx, u8"\u001b[32m"_j)));
	LINE_NUMBER(16);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_yellow = (((jobject) createStringLiteral(ctx, u8"\u001b[33m"_j)));
	LINE_NUMBER(17);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_blue = (((jobject) createStringLiteral(ctx, u8"\u001b[34m"_j)));
	LINE_NUMBER(18);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_purple = (((jobject) createStringLiteral(ctx, u8"\u001b[35m"_j)));
	LINE_NUMBER(19);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_cyan = (((jobject) createStringLiteral(ctx, u8"\u001b[36m"_j)));
	LINE_NUMBER(20);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightBlack = (((jobject) createStringLiteral(ctx, u8"\u001b[90m"_j)));
	LINE_NUMBER(21);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightRed = (((jobject) createStringLiteral(ctx, u8"\u001b[91m"_j)));
	LINE_NUMBER(22);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightGreen = (((jobject) createStringLiteral(ctx, u8"\u001b[92m"_j)));
	LINE_NUMBER(23);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightYellow = (((jobject) createStringLiteral(ctx, u8"\u001b[93m"_j)));
	LINE_NUMBER(24);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightBlue = (((jobject) createStringLiteral(ctx, u8"\u001b[94m"_j)));
	LINE_NUMBER(25);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightMagenta = (((jobject) createStringLiteral(ctx, u8"\u001b[95m"_j)));
	LINE_NUMBER(26);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightCyan = (((jobject) createStringLiteral(ctx, u8"\u001b[96m"_j)));
	LINE_NUMBER(27);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightWhite = (((jobject) createStringLiteral(ctx, u8"\u001b[97m"_j)));
	LINE_NUMBER(28);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_white = (((jobject) createStringLiteral(ctx, u8"\u001b[37m"_j)));
	LINE_NUMBER(30);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_backDefault = (((jobject) createStringLiteral(ctx, u8"\u001b[49m"_j)));
	LINE_NUMBER(31);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_backRed = (((jobject) createStringLiteral(ctx, u8"\u001b[41m"_j)));
	LINE_NUMBER(32);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_backGreen = (((jobject) createStringLiteral(ctx, u8"\u001b[42m"_j)));
	LINE_NUMBER(33);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_backYellow = (((jobject) createStringLiteral(ctx, u8"\u001b[43m"_j)));
	LINE_NUMBER(34);
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_backBlue = (((jobject) createStringLiteral(ctx, u8"\u001b[44m"_j)));
	LINE_NUMBER(41);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isWindows) == 0) goto label_27;
	}
	{
	jint temp0 = (jint)SM_arc_util_OS_hasEnv_java_lang_String_R_boolean(ctx, (((jobject) createStringLiteral(ctx, u8"WT_SESSION"_j))));
	if (temp0 == 0) goto label_28;
	}
label_27:;
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isAndroid;
	if ((--sp)->i == 0) goto label_29;
label_28:;
	{
	LINE_NUMBER(42);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_italic = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_backGreen = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_backBlue = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_backYellow = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_backRed = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_backDefault = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_white = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightCyan = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightMagenta = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightBlue = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightYellow = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightGreen = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightRed = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightBlack = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_lightWhite = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_cyan = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_purple = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_blue = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_yellow = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_green = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_red = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_black = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_underline = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_bold = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_reset = sp[0].o;
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_flush = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (52));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"bd"_j)));
	jint temp0 = jint(1);
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_backDefault;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"br"_j)));
	jint temp1 = jint(3);
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_backRed;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"bg"_j)));
	jint temp2 = jint(5);
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_backGreen;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"by"_j)));
	jint temp3 = 7;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_backYellow;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"bb"_j)));
	jint temp4 = 9;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_backBlue;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"ff"_j)));
	jint temp5 = 11;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_flush;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"fr"_j)));
	jint temp6 = 13;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_reset;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (14)) = (((jobject) createStringLiteral(ctx, u8"fb"_j)));
	jint temp7 = 15;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_bold;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (16)) = (((jobject) createStringLiteral(ctx, u8"fi"_j)));
	jint temp8 = 17;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_italic;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (18)) = (((jobject) createStringLiteral(ctx, u8"fu"_j)));
	jint temp9 = 19;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_underline;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (20)) = (((jobject) createStringLiteral(ctx, u8"k"_j)));
	jint temp10 = 21;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_black;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (22)) = (((jobject) createStringLiteral(ctx, u8"lk"_j)));
	jint temp11 = 23;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_lightBlack;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (24)) = (((jobject) createStringLiteral(ctx, u8"lw"_j)));
	jint temp12 = 25;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_lightWhite;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (26)) = (((jobject) createStringLiteral(ctx, u8"r"_j)));
	jint temp13 = 27;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_red;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (28)) = (((jobject) createStringLiteral(ctx, u8"g"_j)));
	jint temp14 = 29;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_green;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (30)) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	jint temp15 = 31;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_yellow;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (32)) = (((jobject) createStringLiteral(ctx, u8"b"_j)));
	jint temp16 = 33;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_blue;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (34)) = (((jobject) createStringLiteral(ctx, u8"p"_j)));
	jint temp17 = 35;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_purple;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (36)) = (((jobject) createStringLiteral(ctx, u8"c"_j)));
	jint temp18 = 37;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_cyan;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (38)) = (((jobject) createStringLiteral(ctx, u8"lr"_j)));
	jint temp19 = 39;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_lightRed;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (40)) = (((jobject) createStringLiteral(ctx, u8"lg"_j)));
	jint temp20 = 41;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_lightGreen;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (42)) = (((jobject) createStringLiteral(ctx, u8"ly"_j)));
	jint temp21 = 43;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_lightYellow;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (44)) = (((jobject) createStringLiteral(ctx, u8"lm"_j)));
	jint temp22 = 45;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_lightMagenta;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (46)) = (((jobject) createStringLiteral(ctx, u8"lb"_j)));
	jint temp23 = 47;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_lightBlue;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (48)) = (((jobject) createStringLiteral(ctx, u8"lc"_j)));
	jint temp24 = 49;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_lightCyan;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (50)) = (((jobject) createStringLiteral(ctx, u8"w"_j)));
	jint temp25 = 51;
	clinit_arc_util_ColorCodes(ctx);
	sp[1].o = (jobject)SF_arc_util_ColorCodes_white;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_OrderedMap_of_Array1_java_lang_Object_R_arc_struct_OrderedMap(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_java_lang_String)));
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_codes = (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[0].o));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_java_lang_String)));
	clinit_arc_util_ColorCodes(ctx);
	SF_arc_util_ColorCodes_values = (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[0].o));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_ColorCodes[] {
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
	{ "flush", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_flush, "Ljava/lang/String;", 9 },
	{ "reset", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_reset, "Ljava/lang/String;", 9 },
	{ "bold", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_bold, "Ljava/lang/String;", 9 },
	{ "italic", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_italic, "Ljava/lang/String;", 9 },
	{ "underline", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_underline, "Ljava/lang/String;", 9 },
	{ "black", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_black, "Ljava/lang/String;", 9 },
	{ "red", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_red, "Ljava/lang/String;", 9 },
	{ "green", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_green, "Ljava/lang/String;", 9 },
	{ "yellow", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_yellow, "Ljava/lang/String;", 9 },
	{ "blue", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_blue, "Ljava/lang/String;", 9 },
	{ "purple", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_purple, "Ljava/lang/String;", 9 },
	{ "cyan", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_cyan, "Ljava/lang/String;", 9 },
	{ "lightBlack", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_lightBlack, "Ljava/lang/String;", 9 },
	{ "lightRed", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_lightRed, "Ljava/lang/String;", 9 },
	{ "lightGreen", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_lightGreen, "Ljava/lang/String;", 9 },
	{ "lightYellow", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_lightYellow, "Ljava/lang/String;", 9 },
	{ "lightBlue", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_lightBlue, "Ljava/lang/String;", 9 },
	{ "lightMagenta", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_lightMagenta, "Ljava/lang/String;", 9 },
	{ "lightCyan", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_lightCyan, "Ljava/lang/String;", 9 },
	{ "lightWhite", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_lightWhite, "Ljava/lang/String;", 9 },
	{ "white", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_white, "Ljava/lang/String;", 9 },
	{ "backDefault", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_backDefault, "Ljava/lang/String;", 9 },
	{ "backRed", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_backRed, "Ljava/lang/String;", 9 },
	{ "backGreen", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_backGreen, "Ljava/lang/String;", 9 },
	{ "backYellow", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_backYellow, "Ljava/lang/String;", 9 },
	{ "backBlue", &class_java_lang_String, (intptr_t) &SF_arc_util_ColorCodes_backBlue, "Ljava/lang/String;", 9 },
	{ "codes", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_arc_util_ColorCodes_codes, "[Ljava/lang/String;", 25 },
	{ "values", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_arc_util_ColorCodes_values, "[Ljava/lang/String;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_ColorCodes, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_util_ColorCodes, 0, "()V", 8 },
};

Class class_arc_util_ColorCodes{
		.nativeName = (intptr_t) "arc/util/ColorCodes",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_ColorCodes),
		.classVtable = (intptr_t) vtable_arc_util_ColorCodes,
		.staticInitializer = (intptr_t) clinit_arc_util_ColorCodes,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_ColorCodes,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_ColorCodes = registerClass(&class_arc_util_ColorCodes);

}
