#include "mindustry/gen/Groups.h"
#include "mindustry/gen/IndexableEntity__effect.h"
#include "mindustry/gen/IndexableEntity__powerGraph.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "mindustry/gen/EffectState.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__build.h"
#include "mindustry/entities/EntityIndexer.h"
#include "mindustry/gen/IndexableEntity__weather.h"
#include "arc/struct/Seq.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/IndexableEntity__player.h"
#include "mindustry/gen/IndexableEntity__bullet.h"
#include "mindustry/gen/PowerGraphUpdaterc.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "mindustry/gen/Groups_invoke_mindustry_entities_EntityIndexer_11.h"
#include "mindustry/gen/Groups_invoke_mindustry_entities_EntityIndexer_12.h"
#include "mindustry/gen/Groups_invoke_mindustry_entities_EntityIndexer_10.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Groups_invoke_mindustry_entities_EntityIndexer_19.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Groups_invoke_mindustry_entities_EntityIndexer_17.h"
#include "mindustry/gen/Groups_invoke_mindustry_entities_EntityIndexer_18.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/gen/Groups_invoke_mindustry_entities_EntityIndexer_15.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/Groups_invoke_mindustry_entities_EntityIndexer_16.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/Groups_invoke_mindustry_entities_EntityIndexer_13.h"
#include "mindustry/gen/Groups_invoke_mindustry_entities_EntityIndexer_14.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/WeatherState.h"
#include "java/lang/Class.h"
#include "mindustry/gen/IndexableEntity__unit.h"
#include "mindustry/gen/IndexableEntity__all.h"

extern "C" {

jobject SF_mindustry_gen_Groups_all;
jobject SF_mindustry_gen_Groups_build;
jobject SF_mindustry_gen_Groups_bullet;
jobject SF_mindustry_gen_Groups_draw;
jobject SF_mindustry_gen_Groups_effect;
jobject SF_mindustry_gen_Groups_freeQueue;
jbool SF_mindustry_gen_Groups_isClearing;
jobject SF_mindustry_gen_Groups_player;
jobject SF_mindustry_gen_Groups_powerGraph;
jobject SF_mindustry_gen_Groups_sync;
jobject SF_mindustry_gen_Groups_unit;
jobject SF_mindustry_gen_Groups_weather;

void mark_mindustry_gen_Groups(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_gen_Groups_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_all)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_all, mark, depth + 1);
		if (SF_mindustry_gen_Groups_build)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_build)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_build, mark, depth + 1);
		if (SF_mindustry_gen_Groups_bullet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_bullet)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_bullet, mark, depth + 1);
		if (SF_mindustry_gen_Groups_draw)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_draw)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_draw, mark, depth + 1);
		if (SF_mindustry_gen_Groups_effect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_effect)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_effect, mark, depth + 1);
		if (SF_mindustry_gen_Groups_freeQueue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_freeQueue)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_freeQueue, mark, depth + 1);
		if (SF_mindustry_gen_Groups_player)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_player)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_player, mark, depth + 1);
		if (SF_mindustry_gen_Groups_powerGraph)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_powerGraph)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_powerGraph, mark, depth + 1);
		if (SF_mindustry_gen_Groups_sync)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_sync)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_sync, mark, depth + 1);
		if (SF_mindustry_gen_Groups_unit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_unit)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_unit, mark, depth + 1);
		if (SF_mindustry_gen_Groups_weather)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Groups_weather)->clazz)->markFunction)((jobject) SF_mindustry_gen_Groups_weather, mark, depth + 1);
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
	auto self = (mindustry_gen_Groups *) object;
}

void init_mindustry_gen_Groups(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_clear(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:clear", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	{
	LINE_NUMBER(34);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_isClearing = (jint(1));
	LINE_NUMBER(35);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(36);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_effect;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(37);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(38);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(39);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(40);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_build;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(41);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(42);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(43);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_weather;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(44);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_powerGraph;
	((func_mindustry_entities_EntityGroup_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_clear])(ctx, sp[0].o);
	LINE_NUMBER(45);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_isClearing = (jint(0));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_init(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	{
	LINE_NUMBER(49);
	clinit_mindustry_entities_EntityGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityGroup);
	sp[1].o = ((jobject) &class_mindustry_gen_Entityc);
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_10(ctx);
		auto proxy = (mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_10 *) gcAlloc(ctx, &class_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_10);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_all = sp[0].o;
	LINE_NUMBER(50);
	clinit_mindustry_entities_EntityGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityGroup);
	sp[1].o = ((jobject) &class_mindustry_gen_EffectState);
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_11(ctx);
		auto proxy = (mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_11 *) gcAlloc(ctx, &class_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_11);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, sp[0].o, sp[1].o, temp2, temp3, sp[2].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_effect = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_entities_EntityGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityGroup);
	sp[1].o = ((jobject) &class_mindustry_gen_Player);
	jint temp4 = jint(0);
	jint temp5 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_12(ctx);
		auto proxy = (mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_12 *) gcAlloc(ctx, &class_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_12);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, sp[0].o, sp[1].o, temp4, temp5, sp[2].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_player = sp[0].o;
	LINE_NUMBER(52);
	clinit_mindustry_entities_EntityGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityGroup);
	sp[1].o = ((jobject) &class_mindustry_gen_Bullet);
	jint temp6 = jint(1);
	jint temp7 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_13(ctx);
		auto proxy = (mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_13 *) gcAlloc(ctx, &class_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_13);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, sp[0].o, sp[1].o, temp6, temp7, sp[2].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_bullet = sp[0].o;
	LINE_NUMBER(53);
	clinit_mindustry_entities_EntityGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityGroup);
	sp[1].o = ((jobject) &class_mindustry_gen_Unit);
	jint temp8 = jint(1);
	jint temp9 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_14(ctx);
		auto proxy = (mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_14 *) gcAlloc(ctx, &class_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_14);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, sp[0].o, sp[1].o, temp8, temp9, sp[2].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_unit = sp[0].o;
	LINE_NUMBER(54);
	clinit_mindustry_entities_EntityGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityGroup);
	sp[1].o = ((jobject) &class_mindustry_gen_Building);
	jint temp10 = jint(0);
	jint temp11 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_15(ctx);
		auto proxy = (mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_15 *) gcAlloc(ctx, &class_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_15);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, sp[0].o, sp[1].o, temp10, temp11, sp[2].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_build = sp[0].o;
	LINE_NUMBER(55);
	clinit_mindustry_entities_EntityGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityGroup);
	sp[1].o = ((jobject) &class_mindustry_gen_Syncc);
	jint temp12 = jint(0);
	jint temp13 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_16(ctx);
		auto proxy = (mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_16 *) gcAlloc(ctx, &class_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_16);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, sp[0].o, sp[1].o, temp12, temp13, sp[2].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_sync = sp[0].o;
	LINE_NUMBER(56);
	clinit_mindustry_entities_EntityGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityGroup);
	sp[1].o = ((jobject) &class_mindustry_gen_Drawc);
	jint temp14 = jint(0);
	jint temp15 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_17(ctx);
		auto proxy = (mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_17 *) gcAlloc(ctx, &class_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_17);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, sp[0].o, sp[1].o, temp14, temp15, sp[2].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_draw = sp[0].o;
	LINE_NUMBER(57);
	clinit_mindustry_entities_EntityGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityGroup);
	sp[1].o = ((jobject) &class_mindustry_gen_WeatherState);
	jint temp16 = jint(0);
	jint temp17 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_18(ctx);
		auto proxy = (mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_18 *) gcAlloc(ctx, &class_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_18);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, sp[0].o, sp[1].o, temp16, temp17, sp[2].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_weather = sp[0].o;
	LINE_NUMBER(58);
	clinit_mindustry_entities_EntityGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_EntityGroup);
	sp[1].o = ((jobject) &class_mindustry_gen_PowerGraphUpdaterc);
	jint temp18 = jint(0);
	jint temp19 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_19(ctx);
		auto proxy = (mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_19 *) gcAlloc(ctx, &class_mindustry_gen_Groups_invoke_mindustry_entities_EntityIndexer_19);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, sp[0].o, sp[1].o, temp18, temp19, sp[2].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_powerGraph = sp[0].o;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_queueFree_arc_util_pooling_Pool$Poolable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:queueFree", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(62);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_freeQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_resize_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:resize", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(66);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	((func_mindustry_entities_EntityGroup_resize_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_resize_float_float_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(67);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	((func_mindustry_entities_EntityGroup_resize_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_resize_float_float_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_update(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:update", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	{
	LINE_NUMBER(71);
	SM_mindustry_gen_Groups_updatePooling(ctx);
	LINE_NUMBER(72);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	((func_mindustry_entities_EntityGroup_updatePhysics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_updatePhysics])(ctx, sp[0].o);
	LINE_NUMBER(73);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	((func_mindustry_entities_EntityGroup_updatePhysics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_updatePhysics])(ctx, sp[0].o);
	LINE_NUMBER(74);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
	LINE_NUMBER(75);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_build;
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, sp[0].o);
	LINE_NUMBER(76);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	((func_mindustry_entities_EntityGroup_collide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_collide])(ctx, sp[0].o);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_updatePooling(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:updatePooling", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	{
	LINE_NUMBER(80);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_freeQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_arc_util_pooling_Pool$Poolable, sp[0].o));
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[1].o));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(81);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_freeQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_lambda$init$9_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:lambda$init$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(58);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_IndexableEntity__powerGraph)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_IndexableEntity__powerGraph, (frame[0].o)));
	((func_mindustry_gen_IndexableEntity__powerGraph_setIndex__powerGraph_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_IndexableEntity__powerGraph, INDEX_mindustry_gen_IndexableEntity__powerGraph_setIndex__powerGraph_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_lambda$init$8_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:lambda$init$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(57);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_IndexableEntity__weather)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_IndexableEntity__weather, (frame[0].o)));
	((func_mindustry_gen_IndexableEntity__weather_setIndex__weather_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_IndexableEntity__weather, INDEX_mindustry_gen_IndexableEntity__weather_setIndex__weather_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_lambda$init$7_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:lambda$init$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(56);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_IndexableEntity__draw)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_IndexableEntity__draw, (frame[0].o)));
	((func_mindustry_gen_IndexableEntity__draw_setIndex__draw_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_IndexableEntity__draw, INDEX_mindustry_gen_IndexableEntity__draw_setIndex__draw_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_lambda$init$6_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:lambda$init$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(55);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_IndexableEntity__sync)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_IndexableEntity__sync, (frame[0].o)));
	((func_mindustry_gen_IndexableEntity__sync_setIndex__sync_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_IndexableEntity__sync, INDEX_mindustry_gen_IndexableEntity__sync_setIndex__sync_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_lambda$init$5_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:lambda$init$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(54);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_IndexableEntity__build)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_IndexableEntity__build, (frame[0].o)));
	((func_mindustry_gen_IndexableEntity__build_setIndex__build_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_IndexableEntity__build, INDEX_mindustry_gen_IndexableEntity__build_setIndex__build_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_lambda$init$4_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:lambda$init$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(53);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_IndexableEntity__unit)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_IndexableEntity__unit, (frame[0].o)));
	((func_mindustry_gen_IndexableEntity__unit_setIndex__unit_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_IndexableEntity__unit, INDEX_mindustry_gen_IndexableEntity__unit_setIndex__unit_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_lambda$init$3_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:lambda$init$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(52);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_IndexableEntity__bullet)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_IndexableEntity__bullet, (frame[0].o)));
	((func_mindustry_gen_IndexableEntity__bullet_setIndex__bullet_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_IndexableEntity__bullet, INDEX_mindustry_gen_IndexableEntity__bullet_setIndex__bullet_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_lambda$init$2_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:lambda$init$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(51);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_IndexableEntity__player)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_IndexableEntity__player, (frame[0].o)));
	((func_mindustry_gen_IndexableEntity__player_setIndex__player_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_IndexableEntity__player, INDEX_mindustry_gen_IndexableEntity__player_setIndex__player_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_lambda$init$1_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:lambda$init$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(50);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_IndexableEntity__effect)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_IndexableEntity__effect, (frame[0].o)));
	((func_mindustry_gen_IndexableEntity__effect_setIndex__effect_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_IndexableEntity__effect, INDEX_mindustry_gen_IndexableEntity__effect_setIndex__effect_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Groups_lambda$init$0_mindustry_gen_Entityc_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:lambda$init$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(49);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_IndexableEntity__all)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_IndexableEntity__all, (frame[0].o)));
	((func_mindustry_gen_IndexableEntity__all_setIndex__all_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_IndexableEntity__all, INDEX_mindustry_gen_IndexableEntity__all_setIndex__all_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_gen_Groups(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Groups:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Groups(ctx);
	{
	LINE_NUMBER(19);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_gen_Groups(ctx);
	SF_mindustry_gen_Groups_freeQueue = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_Groups[] {
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
	{ "all", &class_mindustry_entities_EntityGroup, (intptr_t) &SF_mindustry_gen_Groups_all, "Lmindustry/entities/EntityGroup;", 9 },
	{ "build", &class_mindustry_entities_EntityGroup, (intptr_t) &SF_mindustry_gen_Groups_build, "Lmindustry/entities/EntityGroup;", 9 },
	{ "bullet", &class_mindustry_entities_EntityGroup, (intptr_t) &SF_mindustry_gen_Groups_bullet, "Lmindustry/entities/EntityGroup;", 9 },
	{ "draw", &class_mindustry_entities_EntityGroup, (intptr_t) &SF_mindustry_gen_Groups_draw, "Lmindustry/entities/EntityGroup;", 9 },
	{ "effect", &class_mindustry_entities_EntityGroup, (intptr_t) &SF_mindustry_gen_Groups_effect, "Lmindustry/entities/EntityGroup;", 9 },
	{ "freeQueue", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_gen_Groups_freeQueue, "Larc/struct/Seq;", 10 },
	{ "isClearing", &class_boolean, (intptr_t) &SF_mindustry_gen_Groups_isClearing, "Z", 9 },
	{ "player", &class_mindustry_entities_EntityGroup, (intptr_t) &SF_mindustry_gen_Groups_player, "Lmindustry/entities/EntityGroup;", 9 },
	{ "powerGraph", &class_mindustry_entities_EntityGroup, (intptr_t) &SF_mindustry_gen_Groups_powerGraph, "Lmindustry/entities/EntityGroup;", 9 },
	{ "sync", &class_mindustry_entities_EntityGroup, (intptr_t) &SF_mindustry_gen_Groups_sync, "Lmindustry/entities/EntityGroup;", 9 },
	{ "unit", &class_mindustry_entities_EntityGroup, (intptr_t) &SF_mindustry_gen_Groups_unit, "Lmindustry/entities/EntityGroup;", 9 },
	{ "weather", &class_mindustry_entities_EntityGroup, (intptr_t) &SF_mindustry_gen_Groups_weather, "Lmindustry/entities/EntityGroup;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Groups, 0, "()V", 1 },
	{ "clear", (intptr_t) SM_mindustry_gen_Groups_clear, 0, "()V", 9 },
	{ "init", (intptr_t) SM_mindustry_gen_Groups_init, 0, "()V", 9 },
	{ "queueFree", (intptr_t) SM_mindustry_gen_Groups_queueFree_arc_util_pooling_Pool$Poolable, 0, "(Larc/util/pooling/Pool$Poolable;)V", 9 },
	{ "resize", (intptr_t) SM_mindustry_gen_Groups_resize_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "update", (intptr_t) SM_mindustry_gen_Groups_update, 0, "()V", 9 },
	{ "updatePooling", (intptr_t) SM_mindustry_gen_Groups_updatePooling, 0, "()V", 9 },
	{ "lambda$init$9", (intptr_t) SM_mindustry_gen_Groups_lambda$init$9_mindustry_gen_Entityc_int, 0, "(Lmindustry/gen/Entityc;I)V", 4106 },
	{ "lambda$init$8", (intptr_t) SM_mindustry_gen_Groups_lambda$init$8_mindustry_gen_Entityc_int, 0, "(Lmindustry/gen/Entityc;I)V", 4106 },
	{ "lambda$init$7", (intptr_t) SM_mindustry_gen_Groups_lambda$init$7_mindustry_gen_Entityc_int, 0, "(Lmindustry/gen/Entityc;I)V", 4106 },
	{ "lambda$init$6", (intptr_t) SM_mindustry_gen_Groups_lambda$init$6_mindustry_gen_Entityc_int, 0, "(Lmindustry/gen/Entityc;I)V", 4106 },
	{ "lambda$init$5", (intptr_t) SM_mindustry_gen_Groups_lambda$init$5_mindustry_gen_Entityc_int, 0, "(Lmindustry/gen/Entityc;I)V", 4106 },
	{ "lambda$init$4", (intptr_t) SM_mindustry_gen_Groups_lambda$init$4_mindustry_gen_Entityc_int, 0, "(Lmindustry/gen/Entityc;I)V", 4106 },
	{ "lambda$init$3", (intptr_t) SM_mindustry_gen_Groups_lambda$init$3_mindustry_gen_Entityc_int, 0, "(Lmindustry/gen/Entityc;I)V", 4106 },
	{ "lambda$init$2", (intptr_t) SM_mindustry_gen_Groups_lambda$init$2_mindustry_gen_Entityc_int, 0, "(Lmindustry/gen/Entityc;I)V", 4106 },
	{ "lambda$init$1", (intptr_t) SM_mindustry_gen_Groups_lambda$init$1_mindustry_gen_Entityc_int, 0, "(Lmindustry/gen/Entityc;I)V", 4106 },
	{ "lambda$init$0", (intptr_t) SM_mindustry_gen_Groups_lambda$init$0_mindustry_gen_Entityc_int, 0, "(Lmindustry/gen/Entityc;I)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_gen_Groups, 0, "()V", 8 },
};

Class class_mindustry_gen_Groups{
		.nativeName = (intptr_t) "mindustry/gen/Groups",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Groups),
		.classVtable = (intptr_t) vtable_mindustry_gen_Groups,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Groups,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Groups,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Groups = registerClass(&class_mindustry_gen_Groups);

}
