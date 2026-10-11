#include "mindustry/world/blocks/campaign/Accelerator.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/audio/RandomSound.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/blocks/campaign/Accelerator_invoke_arc_func_Func_1.h"
#include "mindustry/world/blocks/campaign/Accelerator_invoke_arc_func_Prov_3.h"
#include "mindustry/world/blocks/campaign/Accelerator_invoke_arc_func_Prov_2.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "arc/func/Floatp.h"
#include "mindustry/world/modules/PowerModule.h"
#include "mindustry/world/blocks/campaign/Accelerator_invoke_arc_func_Floatp_1.h"
#include "arc/func/Func.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Sounds.h"
#include "arc/math/Interp.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/math/Interp_PowIn.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild.h"
#include "arc/util/Nullable.h"
#include "mindustry/core/UI.h"
#include "mindustry/gen/Building.h"
#include "java/lang/CharSequence.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/campaign/Accelerator.h"
#include "mindustry/world/consumers/ConsumeItems.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_world_blocks_campaign_Accelerator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Block(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_campaign_Accelerator *) object;
	if (self->F_arrowRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrowRegion)->clazz)->markFunction)((jobject) self->F_arrowRegion, mark, depth + 1);
	if (self->F_selectArrowRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectArrowRegion)->clazz)->markFunction)((jobject) self->F_selectArrowRegion, mark, depth + 1);
	if (self->F_launchBlock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_launchBlock)->clazz)->markFunction)((jobject) self->F_launchBlock, mark, depth + 1);
	if (self->F_launchCandidates)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_launchCandidates)->clazz)->markFunction)((jobject) self->F_launchCandidates, mark, depth + 1);
	if (self->F_lightningSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightningSound)->clazz)->markFunction)((jobject) self->F_lightningSound, mark, depth + 1);
	if (self->F_chargeSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chargeSound)->clazz)->markFunction)((jobject) self->F_chargeSound, mark, depth + 1);
	if (self->F_launchSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_launchSound)->clazz)->markFunction)((jobject) self->F_launchSound, mark, depth + 1);
	if (self->F_constructSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_constructSound)->clazz)->markFunction)((jobject) self->F_constructSound, mark, depth + 1);
	if (self->F_landZoomInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_landZoomInterp)->clazz)->markFunction)((jobject) self->F_landZoomInterp, mark, depth + 1);
	if (self->F_chargeZoomInterp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chargeZoomInterp)->clazz)->markFunction)((jobject) self->F_chargeZoomInterp, mark, depth + 1);
	if (self->F_ringColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ringColor)->clazz)->markFunction)((jobject) self->F_ringColor, mark, depth + 1);
	if (self->F_lightningColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightningColor)->clazz)->markFunction)((jobject) self->F_lightningColor, mark, depth + 1);
	if (self->F_capacities)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_capacities)->clazz)->markFunction)((jobject) self->F_capacities, mark, depth + 1);
}

void clinit_mindustry_world_blocks_campaign_Accelerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
}

void init_mindustry_world_blocks_campaign_Accelerator_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_Accelerator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreNucleus;
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_arc_audio_RandomSound(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_audio_RandomSound);
	sp[2].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Sounds_acceleratorLightning1;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Sounds_acceleratorLightning2;
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	jint temp2 = jint(2);
	clinit_mindustry_gen_Sounds(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Sounds_shootArc;
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	init_arc_audio_RandomSound_Array1_arc_audio_Sound(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_lightningSound = (jref) sp[1].o;
	LINE_NUMBER(46);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_lightningSoundVolume = (jfloat(0.85f));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_acceleratorCharge;
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeSound = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_acceleratorLaunch;
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchSound = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_acceleratorConstruct;
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_constructSound = (jref) sp[1].o;
	LINE_NUMBER(50);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_launchDuration = (jfloat(120.0f));
	LINE_NUMBER(51);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_chargeDuration = (jfloat(220.0f));
	LINE_NUMBER(52);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_buildDuration = (jfloat(120.0f));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow4In;
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_landZoomInterp = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow4In;
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeZoomInterp = (jref) sp[1].o;
	LINE_NUMBER(54);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_landZoomFrom = (jfloat(0.02f));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_landZoomTo = (jfloat(4.0f));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_chargeZoomTo = (jfloat(5.0f));
	LINE_NUMBER(56);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_chargeRings = (jint(4));
	LINE_NUMBER(57);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_ringRadBase = (jfloat(60.0f));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_ringRadSpacing = (jfloat(25.0f));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_ringRadPow = (jfloat(1.6f));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_ringStroke = (jfloat(3.0f));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_ringSpeedup = (jfloat(1.4f));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_chargeRingMerge = (jfloat(2));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_ringArrowRad = (jfloat(3.0f));
	LINE_NUMBER(58);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_ringHandleTilt = (jfloat(0.8f));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_ringHandleLen = (jfloat(30.0f));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_ringColor = (jref) sp[1].o;
	LINE_NUMBER(61);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_launchLightning = (20);
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_lightningColor = (jref) sp[1].o;
	LINE_NUMBER(63);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_lightningDamage = (jfloat(40.0f));
	LINE_NUMBER(64);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_lightningOffset = (jfloat(24.0f));
	LINE_NUMBER(65);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_lightningLengthMin = (jint(5));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_lightningLengthMax = (25);
	LINE_NUMBER(66);
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_lightningLaunchChance = (jdouble(0.8));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(0)));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_capacities = (jref) sp[1].o;
	LINE_NUMBER(72);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(73);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(74);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(75);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasPower = (jint(1));
	LINE_NUMBER(76);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity = (8000);
	LINE_NUMBER(77);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurable = (jint(1));
	LINE_NUMBER(78);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_emitLight = (jint(1));
	LINE_NUMBER(79);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightRadius = (jfloat(70.0f));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator:init", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity = (jint(0));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_capacities = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_launchBlock;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_4;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_capacities;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_item;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id)) = ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_amount);
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity) + ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_amount));
	LINE_NUMBER(87);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_launchBlock;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_requirements;
	sp[0].o = (jobject)((func_mindustry_world_blocks_campaign_Accelerator_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator_checkContentArrayCapacity_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator:checkContentArrayCapacity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(97);
	M_mindustry_world_Block_checkContentArrayCapacity_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_capacities;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (frame[1].i)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_capacities;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, sp[1].o, (frame[1].i));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_capacities = (jref) sp[1].o;
	}
label_2:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	M_mindustry_world_Block_setBars(ctx, (frame[0].o));
	LINE_NUMBER(105);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_powerBufferRequirement), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerBufferRequirement"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_campaign_Accelerator_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_Accelerator_outputsItems_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator:outputsItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator:lambda$setBars$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Prov_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator_invoke_arc_func_Floatp_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$3_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator:lambda$setBars$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 / ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_powerBufferRequirement));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator:lambda$setBars$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_Accelerator(ctx);
	{
	LINE_NUMBER(108);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_powerBar;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$1_mindustry_gen_Building_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator:lambda$setBars$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.powerbuffer"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[3].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[3].o))->F_graph;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float])(ctx, sp[3].o);
	sp[3].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong(temp1)));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp2 = jint(1);
	sp[3].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong(((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK((frame[0].o)))->F_powerBufferRequirement))));
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_campaign_Accelerator;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field launchCandidates
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_campaign_Accelerator[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_blocks_campaign_Accelerator_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_Block_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_Block_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_blocks_campaign_Accelerator_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_blocks_campaign_Accelerator_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_blocks_campaign_Accelerator_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$3_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$1_mindustry_gen_Building_R_java_lang_CharSequence,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
	{ "lambda$setBars$0", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$3", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(Lmindustry/gen/Building;)Ljava/lang/CharSequence;" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild,
};

static FieldMetadata fields[] {
	{ "arrowRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_campaign_Accelerator, F_arrowRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "selectArrowRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_campaign_Accelerator, F_selectArrowRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "launchBlock", &class_mindustry_world_Block, offsetof(mindustry_world_blocks_campaign_Accelerator, F_launchBlock), "Lmindustry/world/Block;", 1 },
	{ "powerBufferRequirement", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_powerBufferRequirement), "F", 1 },
	{ "launchCandidates", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_campaign_Accelerator, F_launchCandidates), "Larc/struct/Seq;", 1 },
	{ "lightningSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_campaign_Accelerator, F_lightningSound), "Larc/audio/Sound;", 1 },
	{ "lightningSoundVolume", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_lightningSoundVolume), "F", 1 },
	{ "chargeSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_campaign_Accelerator, F_chargeSound), "Larc/audio/Sound;", 1 },
	{ "launchSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_campaign_Accelerator, F_launchSound), "Larc/audio/Sound;", 1 },
	{ "constructSound", &class_arc_audio_Sound, offsetof(mindustry_world_blocks_campaign_Accelerator, F_constructSound), "Larc/audio/Sound;", 1 },
	{ "launchDuration", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_launchDuration), "F", 1 },
	{ "chargeDuration", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_chargeDuration), "F", 1 },
	{ "buildDuration", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_buildDuration), "F", 1 },
	{ "landZoomInterp", &class_arc_math_Interp, offsetof(mindustry_world_blocks_campaign_Accelerator, F_landZoomInterp), "Larc/math/Interp;", 1 },
	{ "chargeZoomInterp", &class_arc_math_Interp, offsetof(mindustry_world_blocks_campaign_Accelerator, F_chargeZoomInterp), "Larc/math/Interp;", 1 },
	{ "landZoomFrom", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_landZoomFrom), "F", 1 },
	{ "landZoomTo", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_landZoomTo), "F", 1 },
	{ "chargeZoomTo", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_chargeZoomTo), "F", 1 },
	{ "chargeRings", &class_int, offsetof(mindustry_world_blocks_campaign_Accelerator, F_chargeRings), "I", 1 },
	{ "ringRadBase", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_ringRadBase), "F", 1 },
	{ "ringRadSpacing", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_ringRadSpacing), "F", 1 },
	{ "ringRadPow", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_ringRadPow), "F", 1 },
	{ "ringStroke", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_ringStroke), "F", 1 },
	{ "ringSpeedup", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_ringSpeedup), "F", 1 },
	{ "chargeRingMerge", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_chargeRingMerge), "F", 1 },
	{ "ringArrowRad", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_ringArrowRad), "F", 1 },
	{ "ringHandleTilt", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_ringHandleTilt), "F", 1 },
	{ "ringHandleLen", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_ringHandleLen), "F", 1 },
	{ "ringColor", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_campaign_Accelerator, F_ringColor), "Larc/graphics/Color;", 1 },
	{ "launchLightning", &class_int, offsetof(mindustry_world_blocks_campaign_Accelerator, F_launchLightning), "I", 1 },
	{ "lightningColor", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_campaign_Accelerator, F_lightningColor), "Larc/graphics/Color;", 1 },
	{ "lightningDamage", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_lightningDamage), "F", 1 },
	{ "lightningOffset", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator, F_lightningOffset), "F", 1 },
	{ "lightningLengthMin", &class_int, offsetof(mindustry_world_blocks_campaign_Accelerator, F_lightningLengthMin), "I", 1 },
	{ "lightningLengthMax", &class_int, offsetof(mindustry_world_blocks_campaign_Accelerator, F_lightningLengthMax), "I", 1 },
	{ "lightningLaunchChance", &class_double, offsetof(mindustry_world_blocks_campaign_Accelerator, F_lightningLaunchChance), "D", 1 },
	{ "capacities", getArrayClass(&class_int, 1), offsetof(mindustry_world_blocks_campaign_Accelerator, F_capacities), "[I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_campaign_Accelerator_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator_init, VTABLE_mindustry_world_blocks_campaign_Accelerator_init, "()V", 1 },
	{ "checkContentArrayCapacity", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator_checkContentArrayCapacity_int_int, VTABLE_mindustry_world_blocks_campaign_Accelerator_checkContentArrayCapacity_int_int, "(II)V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator_setBars, VTABLE_mindustry_world_blocks_campaign_Accelerator_setBars, "()V", 1 },
	{ "outputsItems", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator_outputsItems_R_boolean, VTABLE_mindustry_world_blocks_campaign_Accelerator_outputsItems_R_boolean, "()Z", 1 },
	{ "lambda$setBars$0", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar, VTABLE_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar, "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$setBars$3", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$3_mindustry_gen_Building_R_float, VTABLE_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$3_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 4098 },
	{ "lambda$setBars$2", (intptr_t) SM_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$1", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$1_mindustry_gen_Building_R_java_lang_CharSequence, VTABLE_mindustry_world_blocks_campaign_Accelerator_lambda$setBars$1_mindustry_gen_Building_R_java_lang_CharSequence, "(Lmindustry/gen/Building;)Ljava/lang/CharSequence;", 4098 },
};

Class class_mindustry_world_blocks_campaign_Accelerator{
		.nativeName = (intptr_t) "mindustry/world/blocks/campaign/Accelerator",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_campaign_Accelerator),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_campaign_Accelerator,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_campaign_Accelerator,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_campaign_Accelerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 37,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 192,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_campaign_Accelerator = registerClass(&class_mindustry_world_blocks_campaign_Accelerator);

}
