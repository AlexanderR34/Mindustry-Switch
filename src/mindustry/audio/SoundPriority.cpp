#include "mindustry/audio/SoundPriority.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "arc/audio/AudioBus.h"
#include "arc/audio/AudioSource.h"
#include "arc/assets/AssetManager.h"
#include "java/lang/Object.h"
#include "mindustry/audio/SoundPriority.h"
#include "arc/audio/Sound.h"
#include "arc/struct/Seq.h"
#include "mindustry/core/Control.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {

jint SF_mindustry_audio_SoundPriority_lastGroup;

void mark_mindustry_audio_SoundPriority(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_audio_SoundPriority *) object;
}

void init_mindustry_audio_SoundPriority(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundPriority:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundPriority(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_audio_SoundPriority_init(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundPriority:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundPriority(ctx);
	{
	LINE_NUMBER(16);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_coreLaunch;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_sound;
	sp[1].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK(sp[1].o))->F_uiBus;
	((func_arc_audio_Sound_setBus_arc_audio_AudioBus) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setBus_arc_audio_AudioBus])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(18);
	jint temp0 = 7;
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(3)));
	jint temp1 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_beamPlasma;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootMeltdown;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(2);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_beamMeltdown;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	SM_mindustry_audio_SoundPriority_max_int_Array1_arc_audio_Sound(ctx, temp0, sp[0].o);
	LINE_NUMBER(21);
	jfloat temp4 = jfloat(3.0f);
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(4)));
	jint temp5 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_acceleratorLaunch;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_acceleratorCharge;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = jint(2);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_coreLand;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = jint(3);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_coreLaunch;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	SM_mindustry_audio_SoundPriority_set_float_Array1_arc_audio_Sound(ctx, temp4, sp[0].o);
	LINE_NUMBER(27);
	jfloat temp9 = jfloat(2);
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (10));
	jint temp10 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_beamMeltdown;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_beamLustre;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = jint(2);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_beamPlasma;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = jint(3);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_explosionReactor;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = jint(4);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_explosionReactor2;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = jint(5);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_explosionReactorNeoplasm;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 6;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_explosionCore;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 7;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_blockExplodeElectricBig;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 8;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_blockExplodeExplosive;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 9;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_blockExplodeExplosiveAlt;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	SM_mindustry_audio_SoundPriority_set_float_Array1_arc_audio_Sound(ctx, temp9, sp[0].o);
	LINE_NUMBER(40);
	jfloat temp20 = jfloat(1.5f);
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (15));
	jint temp21 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootMeltdown;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootSublimate;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = jint(2);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootForeshadow;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = jint(3);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootConquer;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = jint(4);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootCorvus;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = jint(5);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_chargeCorvus;
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 6;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_chargeVela;
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 7;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_chargeLancer;
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 8;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootReign;
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 9;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootEclipse;
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 10;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootArtillerySapBig;
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 11;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootToxopidShotgun;
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 12;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_beamPlasmaSmall;
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 13;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootNavanax;
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp35 = 14;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_explosionNavanax;
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	SM_mindustry_audio_SoundPriority_set_float_Array1_arc_audio_Sound(ctx, temp20, sp[0].o);
	LINE_NUMBER(60);
	jfloat temp36 = jfloat(1);
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (9));
	jint temp37 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopConveyor;
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp38 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopSmelter;
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = jint(2);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopDrill;
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp40 = jint(3);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopExtract;
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp41 = jint(4);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopFlux;
	ARRAY_ACCESS(jobject, sp[0].o, temp41) = sp[1].o;
	jint temp42 = jint(5);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopHum;
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp43 = 6;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopBio;
	ARRAY_ACCESS(jobject, sp[0].o, temp43) = sp[1].o;
	jint temp44 = 7;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopTech;
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp45 = 8;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopUnitBuilding;
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	SM_mindustry_audio_SoundPriority_set_float_Array1_arc_audio_Sound(ctx, temp36, sp[0].o);
	LINE_NUMBER(74);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_shootLancer;
	((func_arc_audio_Sound_setMaxConcurrent_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setMaxConcurrent_int])(ctx, sp[0].o, (jint(5)));
	LINE_NUMBER(76);
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(2)));
	jint temp46 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootFlame;
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp47 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootFlamePlasma;
	ARRAY_ACCESS(jobject, sp[0].o, temp47) = sp[1].o;
	SM_mindustry_audio_SoundPriority_sameGroup_Array1_arc_audio_Sound(ctx, sp[0].o);
	LINE_NUMBER(77);
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(3)));
	jint temp48 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootMissile;
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp49 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootMissileShort;
	ARRAY_ACCESS(jobject, sp[0].o, temp49) = sp[1].o;
	jint temp50 = jint(2);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootMissilePlasmaShort;
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	SM_mindustry_audio_SoundPriority_sameGroup_Array1_arc_audio_Sound(ctx, sp[0].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(2)));
	jint temp51 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootArc;
	ARRAY_ACCESS(jobject, sp[0].o, temp51) = sp[1].o;
	jint temp52 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootPulsar;
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	SM_mindustry_audio_SoundPriority_sameGroup_Array1_arc_audio_Sound(ctx, sp[0].o);
	LINE_NUMBER(80);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_audio_Sound);
	clinit_arc_struct_Seq(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_arc_audio_Sound, sp[0].o));
	LINE_NUMBER(81);
	((func_arc_audio_Sound_setMinConcurrentInterruptFraction_float_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_audio_Sound_setMinConcurrentInterruptFraction_float_float])(ctx, (frame[1].o), (jfloat(0.25f)), (jfloat(0.5f)));
	LINE_NUMBER(82);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(84);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_mechStepSmall;
	((func_arc_audio_Sound_setMinConcurrentInterrupt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setMinConcurrentInterrupt_float])(ctx, sp[0].o, (jfloat(0.5f)));
	LINE_NUMBER(85);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_mechStep;
	((func_arc_audio_Sound_setMinConcurrentInterrupt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setMinConcurrentInterrupt_float])(ctx, sp[0].o, (jfloat(0.5f)));
	LINE_NUMBER(86);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_walkerStep;
	((func_arc_audio_Sound_setMinConcurrentInterrupt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setMinConcurrentInterrupt_float])(ctx, sp[0].o, (jfloat(0.6f)));
	LINE_NUMBER(87);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_mechStepHeavy;
	((func_arc_audio_Sound_setMinConcurrentInterrupt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setMinConcurrentInterrupt_float])(ctx, sp[0].o, (jfloat(0.6f)));
	LINE_NUMBER(89);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_shieldHit;
	((func_arc_audio_Sound_setMaxConcurrent_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setMaxConcurrent_int])(ctx, sp[0].o, (jint(4)));
	LINE_NUMBER(91);
	jint temp0 = jint(5);
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(5)));
	jint temp1 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_mechStep;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_mechStepHeavy;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(2);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_walkerStep;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(3);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_walkerStepSmall;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(4);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_walkerStepTiny;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	SM_mindustry_audio_SoundPriority_max_int_Array1_arc_audio_Sound(ctx, temp0, sp[0].o);
	LINE_NUMBER(94);
	jfloat temp6 = jfloat(-1.0f);
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(2)));
	jint temp7 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_blockHeal;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_healWave;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	SM_mindustry_audio_SoundPriority_set_float_Array1_arc_audio_Sound(ctx, temp6, sp[0].o);
	LINE_NUMBER(97);
	jfloat temp9 = jfloat(-2.0f);
	sp[0].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (6));
	jint temp10 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_mechStep;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_mechStepHeavy;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = jint(2);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_walkerStep;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = jint(3);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_walkerStepSmall;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = jint(4);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_walkerStepTiny;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = jint(5);
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_mechStepSmall;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	SM_mindustry_audio_SoundPriority_set_float_Array1_arc_audio_Sound(ctx, temp9, sp[0].o);
	LINE_NUMBER(99);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_explosionCore;
	((func_arc_audio_Sound_setFalloffOffset_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setFalloffOffset_float])(ctx, sp[0].o, (jfloat(100.0f)));
	LINE_NUMBER(100);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_blockExplodeElectricBig;
	((func_arc_audio_Sound_setFalloffOffset_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_setFalloffOffset_float])(ctx, sp[0].o, (jfloat(70.0f)));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_audio_SoundPriority_max_int_Array1_arc_audio_Sound(jcontext ctx, jint param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundPriority:max", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundPriority(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(104);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	((func_arc_audio_Sound_setMaxConcurrent_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_audio_Sound_setMaxConcurrent_int])(ctx, (frame[5].o), (frame[0].i));
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_audio_SoundPriority_sameGroup_Array1_arc_audio_Sound(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundPriority:sameGroup", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundPriority(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	clinit_mindustry_audio_SoundPriority(ctx);
	jint temp0 = (jint)SF_mindustry_audio_SoundPriority_lastGroup;
	clinit_mindustry_audio_SoundPriority(ctx);
	SF_mindustry_audio_SoundPriority_lastGroup = (temp0 + (jint(1)));
	frame[1].i = temp0;
	LINE_NUMBER(109);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	((func_arc_audio_Sound_setConcurrentGroup_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_audio_Sound_setConcurrentGroup_int])(ctx, (frame[5].o), (frame[1].i));
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_audio_SoundPriority_set_float_Array1_arc_audio_Sound(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundPriority:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundPriority(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(113);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	((func_arc_audio_Sound_setPriority_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_audio_Sound_setPriority_float])(ctx, (frame[5].o), (frame[0].f));
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_audio_SoundPriority(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/SoundPriority:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_SoundPriority(ctx);
	{
	LINE_NUMBER(12);
	clinit_mindustry_audio_SoundPriority(ctx);
	SF_mindustry_audio_SoundPriority_lastGroup = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_audio_SoundPriority[] {
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
	{ "lastGroup", &class_int, (intptr_t) &SF_mindustry_audio_SoundPriority_lastGroup, "I", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_audio_SoundPriority, 0, "()V", 1 },
	{ "init", (intptr_t) SM_mindustry_audio_SoundPriority_init, 0, "()V", 9 },
	{ "max", (intptr_t) SM_mindustry_audio_SoundPriority_max_int_Array1_arc_audio_Sound, 0, "(I[Larc/audio/Sound;)V", 136 },
	{ "sameGroup", (intptr_t) SM_mindustry_audio_SoundPriority_sameGroup_Array1_arc_audio_Sound, 0, "([Larc/audio/Sound;)V", 136 },
	{ "set", (intptr_t) SM_mindustry_audio_SoundPriority_set_float_Array1_arc_audio_Sound, 0, "(F[Larc/audio/Sound;)V", 136 },
	{ "<clinit>", (intptr_t) clinit_mindustry_audio_SoundPriority, 0, "()V", 8 },
};

Class class_mindustry_audio_SoundPriority{
		.nativeName = (intptr_t) "mindustry/audio/SoundPriority",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_audio_SoundPriority),
		.classVtable = (intptr_t) vtable_mindustry_audio_SoundPriority,
		.staticInitializer = (intptr_t) clinit_mindustry_audio_SoundPriority,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_audio_SoundPriority,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_audio_SoundPriority = registerClass(&class_mindustry_audio_SoundPriority);

}
