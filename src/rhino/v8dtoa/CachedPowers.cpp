#include "rhino/v8dtoa/CachedPowers.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "rhino/v8dtoa/CachedPowers_CachedPower.h"
#include "rhino/v8dtoa/CachedPowers.h"
#include "java/lang/AssertionError.h"
#include "rhino/v8dtoa/DiyFp.h"
#include "java/lang/Class.h"

extern "C" {

jdouble SF_rhino_v8dtoa_CachedPowers_kD_1_LOG2_10;
jint SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS_SPACING;
jobject SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS;
jint SF_rhino_v8dtoa_CachedPowers_GRISU_CACHE_MAX_DISTANCE;
jint SF_rhino_v8dtoa_CachedPowers_GRISU_CACHE_OFFSET;
jbool SF_rhino_v8dtoa_CachedPowers_$assertionsDisabled;

void mark_rhino_v8dtoa_CachedPowers(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS)->clazz)->markFunction)((jobject) SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS, mark, depth + 1);
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
	auto self = (rhino_v8dtoa_CachedPowers *) object;
}

void init_rhino_v8dtoa_CachedPowers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/CachedPowers:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_CachedPowers(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_rhino_v8dtoa_CachedPowers_getCachedPower_int_int_int_rhino_v8dtoa_DiyFp_R_int(jcontext ctx, jint param0, jint param1, jint param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/CachedPowers:getCachedPower", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_CachedPowers(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(50);
	frame[4].i = (64);
	LINE_NUMBER(51);
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, ((jdouble(((((frame[1].i) - (frame[0].i)) + (frame[4].i)) - (jint(1))))) * (jdouble(0.30102999566398114))));
	frame[5].d = temp0;
	LINE_NUMBER(52);
	frame[7].i = (((((308) + (jint((frame[5].d)))) - (jint(1))) / (8)) + (jint(1)));
	LINE_NUMBER(53);
	clinit_rhino_v8dtoa_CachedPowers(ctx);
	sp[0].o = (jobject)SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)));
	LINE_NUMBER(55);
	((func_rhino_v8dtoa_DiyFp_setF_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setF_long])(ctx, (frame[3].o), ((jlong)((rhino_v8dtoa_CachedPowers$CachedPower *) NULL_CHECK((frame[8].o)))->F_significand));
	LINE_NUMBER(56);
	((func_rhino_v8dtoa_DiyFp_setE_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setE_int])(ctx, (frame[3].o), ((jint)((rhino_v8dtoa_CachedPowers$CachedPower *) NULL_CHECK((frame[8].o)))->F_binaryExponent));
	LINE_NUMBER(57);
	if ((clinit_rhino_v8dtoa_CachedPowers(ctx), (jint)SF_rhino_v8dtoa_CachedPowers_$assertionsDisabled) != 0) goto label_7;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[3].o));
	if (temp0 > (temp1 + (frame[0].i))) goto label_8;
	}
	{
	jint temp0 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[3].o));
	if ((temp0 + (frame[0].i)) <= (frame[2].i)) goto label_7;
	}
label_8:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return ((jint)((rhino_v8dtoa_CachedPowers$CachedPower *) NULL_CHECK((frame[8].o)))->F_decimalExponent);
	}

	popStackFrame(ctx);
}

void clinit_rhino_v8dtoa_CachedPowers(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_v8dtoa_CachedPowers_kD_1_LOG2_10 = jdouble(0.30102999566398114);
	SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS_SPACING = jint(8);
	SF_rhino_v8dtoa_CachedPowers_GRISU_CACHE_MAX_DISTANCE = jint(27);
	SF_rhino_v8dtoa_CachedPowers_GRISU_CACHE_OFFSET = jint(308);
	jtype frame[9];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/CachedPowers:<clinit>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_CachedPowers(ctx);
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_v8dtoa_CachedPowers)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_v8dtoa_CachedPowers)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_rhino_v8dtoa_CachedPowers(ctx);
	SF_rhino_v8dtoa_CachedPowers_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(68);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower, (82));
	jint temp0 = jint(0);
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-1865951482774665761ll)), (-1087), (-308));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-6093090917745768758ll)), (-1060), (-300));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-38366372719436721ll)), (-1034), (-292));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-4731433901725329908ll)), (-1007), (-284));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8228041688891786180ll)), (-980), (-276));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-3219690930897053053ll)), (-954), (-268));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-7101705404292871755ll)), (-927), (-260));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-1541319077368263733ll)), (-901), (-252));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-5851220927660403859ll)), (-874), (-244));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-9062348037703676329ll)), (-847), (-236));
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-4462904269766699465ll)), (-821), (-228));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8027971522334779313ll)), (-794), (-220));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-2921563150702462265ll)), (-768), (-212));
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-6879582898840692748ll)), (-741), (-204));
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-1210330751515841307ll)), (-715), (-196));
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-5604615407819967858ll)), (-688), (-188));
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8878612607581929669ll)), (-661), (-180));
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-4189117143640191558ll)), (-635), (-172));
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-7823984217374209642ll)), (-608), (-164));
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-2617598379430861436ll)), (-582), (-156));
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-6653111496142234890ll)), (-555), (-148));
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-872862063775190746ll)), (-529), (-140));
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-5353181642124984136ll)), (-502), (-132));
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8691279853972075893ll)), (-475), (-124));
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-3909969587797413805ll)), (-449), (-116));
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-7616003081050118571ll)), (-422), (-108));
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-2307682335666372931ll)), (-396), (-100));
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 27;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-6422206049907525489ll)), (-369), (-92));
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 28;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-528786136287117932ll)), (-343), (-84));
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 29;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-5096825099203863601ll)), (-316), (-76));
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 30;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8500279345513818773ll)), (-289), (-68));
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 31;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-3625356651333078602ll)), (-263), (-60));
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 32;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-7403949918844649556ll)), (-236), (-52));
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 33;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-1991698500497491194ll)), (-210), (-44));
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 34;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-6186779746782440749ll)), (-183), (-36));
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp35 = 35;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-177973607073265138ll)), (-157), (-28));
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = 36;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-4835449396872013077ll)), (-130), (-20));
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp37 = 37;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8305539271883716404ll)), (-103), (-12));
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp38 = 38;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-3335171328526686932ll)), (-77), (-4));
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = 39;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-7187745005283311616ll)), (-50), (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp40 = 40;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-1669528073709551616ll)), (-24), (12));
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp41 = 41;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-5946744073709551616ll)), (jint(3)), (20));
	ARRAY_ACCESS(jobject, sp[0].o, temp41) = sp[1].o;
	jint temp42 = 42;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-9133518327554766460ll)), (30), (28));
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp43 = 43;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-4568956265895094861ll)), (56), (36));
	ARRAY_ACCESS(jobject, sp[0].o, temp43) = sp[1].o;
	jint temp44 = 44;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8106986416796705680ll)), (83), (44));
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp45 = 45;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-3039304518611664792ll)), (109), (52));
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	jint temp46 = 46;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-6967307053960650171ll)), (136), (60));
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp47 = 47;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-1341049929119499481ll)), (162), (68));
	ARRAY_ACCESS(jobject, sp[0].o, temp47) = sp[1].o;
	jint temp48 = 48;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-5702008784649933400ll)), (189), (76));
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp49 = 49;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8951176327949752869ll)), (216), (84));
	ARRAY_ACCESS(jobject, sp[0].o, temp49) = sp[1].o;
	jint temp50 = 50;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-4297245513042813542ll)), (242), (92));
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp51 = 51;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-7904546130479028392ll)), (269), (100));
	ARRAY_ACCESS(jobject, sp[0].o, temp51) = sp[1].o;
	jint temp52 = 52;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-2737644984756826646ll)), (295), (108));
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	jint temp53 = 53;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-6742553186979055798ll)), (322), (116));
	ARRAY_ACCESS(jobject, sp[0].o, temp53) = sp[1].o;
	jint temp54 = 54;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-1006140569036166267ll)), (348), (124));
	ARRAY_ACCESS(jobject, sp[0].o, temp54) = sp[1].o;
	jint temp55 = 55;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-5452481866653427593ll)), (375), (132));
	ARRAY_ACCESS(jobject, sp[0].o, temp55) = sp[1].o;
	jint temp56 = 56;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8765264286586255934ll)), (402), (140));
	ARRAY_ACCESS(jobject, sp[0].o, temp56) = sp[1].o;
	jint temp57 = 57;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-4020214983419339459ll)), (428), (148));
	ARRAY_ACCESS(jobject, sp[0].o, temp57) = sp[1].o;
	jint temp58 = 58;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-7698142301602209613ll)), (455), (156));
	ARRAY_ACCESS(jobject, sp[0].o, temp58) = sp[1].o;
	jint temp59 = 59;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-2430079312244744221ll)), (481), (164));
	ARRAY_ACCESS(jobject, sp[0].o, temp59) = sp[1].o;
	jint temp60 = 60;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-6513398903789220827ll)), (508), (172));
	ARRAY_ACCESS(jobject, sp[0].o, temp60) = sp[1].o;
	jint temp61 = 61;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-664674077828931748ll)), (534), (180));
	ARRAY_ACCESS(jobject, sp[0].o, temp61) = sp[1].o;
	jint temp62 = 62;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-5198069505264599346ll)), (561), (188));
	ARRAY_ACCESS(jobject, sp[0].o, temp62) = sp[1].o;
	jint temp63 = 63;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8575712306248138270ll)), (588), (196));
	ARRAY_ACCESS(jobject, sp[0].o, temp63) = sp[1].o;
	jint temp64 = 64;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-3737760522056206171ll)), (614), (204));
	ARRAY_ACCESS(jobject, sp[0].o, temp64) = sp[1].o;
	jint temp65 = 65;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-7487697328667536417ll)), (641), (212));
	ARRAY_ACCESS(jobject, sp[0].o, temp65) = sp[1].o;
	jint temp66 = 66;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-2116491865831296966ll)), (667), (220));
	ARRAY_ACCESS(jobject, sp[0].o, temp66) = sp[1].o;
	jint temp67 = 67;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-6279758049420528746ll)), (694), (228));
	ARRAY_ACCESS(jobject, sp[0].o, temp67) = sp[1].o;
	jint temp68 = 68;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-316522074587315140ll)), (720), (236));
	ARRAY_ACCESS(jobject, sp[0].o, temp68) = sp[1].o;
	jint temp69 = 69;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-4938676049251384304ll)), (747), (244));
	ARRAY_ACCESS(jobject, sp[0].o, temp69) = sp[1].o;
	jint temp70 = 70;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8382449121214030822ll)), (774), (252));
	ARRAY_ACCESS(jobject, sp[0].o, temp70) = sp[1].o;
	jint temp71 = 71;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-3449775934753242068ll)), (800), (260));
	ARRAY_ACCESS(jobject, sp[0].o, temp71) = sp[1].o;
	jint temp72 = 72;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-7273132090830278359ll)), (827), (268));
	ARRAY_ACCESS(jobject, sp[0].o, temp72) = sp[1].o;
	jint temp73 = 73;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-1796764746270372707ll)), (853), (276));
	ARRAY_ACCESS(jobject, sp[0].o, temp73) = sp[1].o;
	jint temp74 = 74;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-6041542782089432023ll)), (880), (284));
	ARRAY_ACCESS(jobject, sp[0].o, temp74) = sp[1].o;
	jint temp75 = 75;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-9204148869281624187ll)), (907), (292));
	ARRAY_ACCESS(jobject, sp[0].o, temp75) = sp[1].o;
	jint temp76 = 76;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-4674203974643163859ll)), (933), (300));
	ARRAY_ACCESS(jobject, sp[0].o, temp76) = sp[1].o;
	jint temp77 = 77;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-8185402070463610993ll)), (960), (308));
	ARRAY_ACCESS(jobject, sp[0].o, temp77) = sp[1].o;
	jint temp78 = 78;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-3156152948152813503ll)), (986), (316));
	ARRAY_ACCESS(jobject, sp[0].o, temp78) = sp[1].o;
	jint temp79 = 79;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-7054365918152680535ll)), (1013), (324));
	ARRAY_ACCESS(jobject, sp[0].o, temp79) = sp[1].o;
	jint temp80 = 80;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-1470777745987373095ll)), (1039), (332));
	ARRAY_ACCESS(jobject, sp[0].o, temp80) = sp[1].o;
	jint temp81 = 81;
	clinit_rhino_v8dtoa_CachedPowers$CachedPower(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_v8dtoa_CachedPowers$CachedPower);
	init_rhino_v8dtoa_CachedPowers$CachedPower_long_short_short(ctx, sp[1].o, (jlong(-5798663540173640085ll)), (1066), (340));
	ARRAY_ACCESS(jobject, sp[0].o, temp81) = sp[1].o;
	clinit_rhino_v8dtoa_CachedPowers(ctx);
	SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_v8dtoa_CachedPowers[] {
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

static jclass innerClasses[] {
	&class_rhino_v8dtoa_CachedPowers$CachedPower,
};

static FieldMetadata fields[] {
	{ "kD_1_LOG2_10", &class_double, (intptr_t) &SF_rhino_v8dtoa_CachedPowers_kD_1_LOG2_10, "D", 24 },
	{ "CACHED_POWERS_SPACING", &class_int, (intptr_t) &SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS_SPACING, "I", 24 },
	{ "CACHED_POWERS", getArrayClass(&class_rhino_v8dtoa_CachedPowers$CachedPower, 1), (intptr_t) &SF_rhino_v8dtoa_CachedPowers_CACHED_POWERS, "[Lrhino/v8dtoa/CachedPowers$CachedPower;", 24 },
	{ "GRISU_CACHE_MAX_DISTANCE", &class_int, (intptr_t) &SF_rhino_v8dtoa_CachedPowers_GRISU_CACHE_MAX_DISTANCE, "I", 24 },
	{ "GRISU_CACHE_OFFSET", &class_int, (intptr_t) &SF_rhino_v8dtoa_CachedPowers_GRISU_CACHE_OFFSET, "I", 24 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_v8dtoa_CachedPowers_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_v8dtoa_CachedPowers, 0, "()V", 1 },
	{ "getCachedPower", (intptr_t) SM_rhino_v8dtoa_CachedPowers_getCachedPower_int_int_int_rhino_v8dtoa_DiyFp_R_int, 0, "(IIILrhino/v8dtoa/DiyFp;)I", 8 },
	{ "<clinit>", (intptr_t) clinit_rhino_v8dtoa_CachedPowers, 0, "()V", 8 },
};

Class class_rhino_v8dtoa_CachedPowers{
		.nativeName = (intptr_t) "rhino/v8dtoa/CachedPowers",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_v8dtoa_CachedPowers),
		.classVtable = (intptr_t) vtable_rhino_v8dtoa_CachedPowers,
		.staticInitializer = (intptr_t) clinit_rhino_v8dtoa_CachedPowers,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_v8dtoa_CachedPowers,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_v8dtoa_CachedPowers = registerClass(&class_rhino_v8dtoa_CachedPowers);

}
