#include "mindustry/ai/ControlPathfinder.h"
#include "arc/Input.h"
#include "mindustry/gen/PathTile.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Intc.h"
#include "mindustry/content/Fx.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/struct/IntQueue.h"
#include "java/lang/Thread.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/ai/ControlPathfinder_PathRequest.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/ai/ControlPathfinder_IntraEdgeStruct.h"
#include "arc/struct/ObjectMap_Values.h"
#include "arc/Graphics.h"
#include "arc/math/geom/Intersector.h"
#include "java/lang/Object.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ai/ControlPathfinder_invoke_arc_func_Intc_2.h"
#include "mindustry/gen/NodeIndex.h"
#include "mindustry/ai/ControlPathfinder_invoke_arc_func_Intc_3.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_33.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_32.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "arc/struct/LongMap.h"
#include "arc/struct/LongSeq.h"
#include "mindustry/game/Rules.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "arc/util/TaskQueue.h"
#include "arc/struct/IntIntMap.h"
#include "arc/struct/IntFloatMap.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/EventType_TileChangeEvent.h"
#include "mindustry/ai/ControlPathfinder.h"
#include "arc/struct/IntMap_Entry.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/ai/Pathfinder_PathCost.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/ai/ControlPathfinder_FieldCache.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "java/lang/Deprecated.h"
#include "arc/Events.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/gen/IntraEdge.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ai/Pathfinder.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/ControlPathfinder_NodeIndexStruct.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/ai/ControlPathfinder_PathfindResult.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/FieldIndex.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/ai/ControlPathfinder_invoke_arc_func_Cons_5.h"
#include "mindustry/ai/ControlPathfinder_invoke_arc_func_Cons_6.h"
#include "mindustry/ai/ControlPathfinder_invoke_arc_func_Cons_7.h"
#include "mindustry/ai/ControlPathfinder_invoke_arc_func_Cons_8.h"
#include "mindustry/ai/ControlPathfinder_invoke_arc_func_Cons_9.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_31.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_30.h"
#include "java/lang/InterruptedException.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/struct/IntMap.h"
#include "arc/struct/IntSeq.h"
#include "arc/Application.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_29.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_28.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_27.h"
#include "mindustry/ai/ControlPathfinder_FieldIndexStruct.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_26.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_25.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_24.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_23.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_22.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_21.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_20.h"
#include "java/lang/Math.h"
#include "mindustry/ai/ControlPathfinder_Cluster.h"
#include "mindustry/ai/PathfindQueue.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_19.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_18.h"
#include "mindustry/ai/ControlPathfinder_invoke_java_lang_Runnable_17.h"
#include "mindustry/ai/ControlPathfinder_invoke_mindustry_ai_Pathfinder_PathCost_4.h"
#include "mindustry/ai/ControlPathfinder_invoke_mindustry_ai_Pathfinder_PathCost_5.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/GameState.h"
#include "mindustry/ai/ControlPathfinder_invoke_mindustry_ai_Pathfinder_PathCost_6.h"
#include "mindustry/ai/ControlPathfinder_invoke_mindustry_ai_Pathfinder_PathCost_7.h"

extern "C" {

jint SF_mindustry_ai_ControlPathfinder_wallImpassableCap;
jint SF_mindustry_ai_ControlPathfinder_solidCap;
jbool SF_mindustry_ai_ControlPathfinder_initialized;
jbool SF_mindustry_ai_ControlPathfinder_showDebug;
jobject SF_mindustry_ai_ControlPathfinder_costGround;
jobject SF_mindustry_ai_ControlPathfinder_costHover;
jobject SF_mindustry_ai_ControlPathfinder_costLegs;
jobject SF_mindustry_ai_ControlPathfinder_costNaval;
jint SF_mindustry_ai_ControlPathfinder_costIdGround;
jint SF_mindustry_ai_ControlPathfinder_costIdHover;
jint SF_mindustry_ai_ControlPathfinder_costIdLegs;
jint SF_mindustry_ai_ControlPathfinder_costIdNaval;
jobject SF_mindustry_ai_ControlPathfinder_costTypes;
jlong SF_mindustry_ai_ControlPathfinder_maxUpdate;
jint SF_mindustry_ai_ControlPathfinder_updateStepInterval;
jint SF_mindustry_ai_ControlPathfinder_updateFPS;
jint SF_mindustry_ai_ControlPathfinder_updateInterval;
jint SF_mindustry_ai_ControlPathfinder_invalidateCheckInterval;
jobject SF_mindustry_ai_ControlPathfinder_pathResult;
jint SF_mindustry_ai_ControlPathfinder_clusterSize;
jobject SF_mindustry_ai_ControlPathfinder_offsets;
jobject SF_mindustry_ai_ControlPathfinder_moveDirs;
jobject SF_mindustry_ai_ControlPathfinder_nextOffsets;

void mark_mindustry_ai_ControlPathfinder(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_ControlPathfinder_costGround)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ControlPathfinder_costGround)->clazz)->markFunction)((jobject) SF_mindustry_ai_ControlPathfinder_costGround, mark, depth + 1);
		if (SF_mindustry_ai_ControlPathfinder_costHover)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ControlPathfinder_costHover)->clazz)->markFunction)((jobject) SF_mindustry_ai_ControlPathfinder_costHover, mark, depth + 1);
		if (SF_mindustry_ai_ControlPathfinder_costLegs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ControlPathfinder_costLegs)->clazz)->markFunction)((jobject) SF_mindustry_ai_ControlPathfinder_costLegs, mark, depth + 1);
		if (SF_mindustry_ai_ControlPathfinder_costNaval)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ControlPathfinder_costNaval)->clazz)->markFunction)((jobject) SF_mindustry_ai_ControlPathfinder_costNaval, mark, depth + 1);
		if (SF_mindustry_ai_ControlPathfinder_costTypes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ControlPathfinder_costTypes)->clazz)->markFunction)((jobject) SF_mindustry_ai_ControlPathfinder_costTypes, mark, depth + 1);
		if (SF_mindustry_ai_ControlPathfinder_pathResult)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ControlPathfinder_pathResult)->clazz)->markFunction)((jobject) SF_mindustry_ai_ControlPathfinder_pathResult, mark, depth + 1);
		if (SF_mindustry_ai_ControlPathfinder_offsets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ControlPathfinder_offsets)->clazz)->markFunction)((jobject) SF_mindustry_ai_ControlPathfinder_offsets, mark, depth + 1);
		if (SF_mindustry_ai_ControlPathfinder_moveDirs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ControlPathfinder_moveDirs)->clazz)->markFunction)((jobject) SF_mindustry_ai_ControlPathfinder_moveDirs, mark, depth + 1);
		if (SF_mindustry_ai_ControlPathfinder_nextOffsets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_ControlPathfinder_nextOffsets)->clazz)->markFunction)((jobject) SF_mindustry_ai_ControlPathfinder_nextOffsets, mark, depth + 1);
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
	auto self = (mindustry_ai_ControlPathfinder *) object;
	if (self->F_clusters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clusters)->clazz)->markFunction)((jobject) self->F_clusters, mark, depth + 1);
	if (self->F_usedEdges)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_usedEdges)->clazz)->markFunction)((jobject) self->F_usedEdges, mark, depth + 1);
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
	if (self->F_unitRequests)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitRequests)->clazz)->markFunction)((jobject) self->F_unitRequests, mark, depth + 1);
	if (self->F_threadPathRequests)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_threadPathRequests)->clazz)->markFunction)((jobject) self->F_threadPathRequests, mark, depth + 1);
	if (self->F_fields)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fields)->clazz)->markFunction)((jobject) self->F_fields, mark, depth + 1);
	if (self->F_fieldList)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fieldList)->clazz)->markFunction)((jobject) self->F_fieldList, mark, depth + 1);
	if (self->F_innerCosts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_innerCosts)->clazz)->markFunction)((jobject) self->F_innerCosts, mark, depth + 1);
	if (self->F_innerFrontier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_innerFrontier)->clazz)->markFunction)((jobject) self->F_innerFrontier, mark, depth + 1);
	if (self->F_clustersToUpdate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clustersToUpdate)->clazz)->markFunction)((jobject) self->F_clustersToUpdate, mark, depth + 1);
	if (self->F_clustersToInnerUpdate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clustersToInnerUpdate)->clazz)->markFunction)((jobject) self->F_clustersToInnerUpdate, mark, depth + 1);
	if (self->F_invalidRequests)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_invalidRequests)->clazz)->markFunction)((jobject) self->F_invalidRequests, mark, depth + 1);
	if (self->F_thread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thread)->clazz)->markFunction)((jobject) self->F_thread, mark, depth + 1);
}

void SM_mindustry_ai_ControlPathfinder_checkEvents(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:checkEvents", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	{
	LINE_NUMBER(222);
	if ((clinit_mindustry_ai_ControlPathfinder(ctx), (jint)SF_mindustry_ai_ControlPathfinder_initialized) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(223);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_initialized = (jint(1));
	LINE_NUMBER(225);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(227);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_6);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(234);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TileChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_7);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(239);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_update;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_17);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(260);
	if ((clinit_mindustry_ai_ControlPathfinder(ctx), (jint)SF_mindustry_ai_ControlPathfinder_showDebug) == 0) goto label_7;
	}
	{
	LINE_NUMBER(261);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_draw;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_18);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_mindustry_ai_ControlPathfinder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(351);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_mindustry_ai_ControlPathfinder$Cluster, 2), (256));
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_clusters = (jref) sp[1].o;
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat(temp0)) / (jfloat(12.0f))));
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_cwidth = temp1;
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	jint temp3 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat(temp2)) / (jfloat(12.0f))));
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_cheight = temp3;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_usedEdges = (jref) sp[1].o;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_arc_util_TaskQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_TaskQueue);
	init_arc_util_TaskQueue(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_queue = (jref) sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_unitRequests = (jref) sp[1].o;
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_threadPathRequests = (jref) sp[1].o;
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongMap);
	init_arc_struct_LongMap(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_fields = (jref) sp[1].o;
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_fieldList = (jref) sp[1].o;
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap);
	init_arc_struct_IntFloatMap(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_innerCosts = (jref) sp[1].o;
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_PathfindQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ai_PathfindQueue);
	init_mindustry_ai_PathfindQueue(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_innerFrontier = (jref) sp[1].o;
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_clustersToUpdate = (jref) sp[1].o;
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_clustersToInnerUpdate = (jref) sp[1].o;
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_invalidRequests = (jref) sp[1].o;
	LINE_NUMBER(352);
	SM_mindustry_ai_ControlPathfinder_checkEvents(ctx);
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:updateTile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(356);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_updateSingleTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:updateSingleTile", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(360);
	frame[2].i = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x);
	frame[3].i = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y);
	frame[4].i = ((frame[2].i) % (12));
	frame[5].i = ((frame[3].i) % (12));
	frame[6].i = ((frame[2].i) / (12));
	frame[7].i = ((frame[3].i) / (12));
	frame[8].i = ((frame[6].i) + ((frame[7].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)));
	LINE_NUMBER(363);
	if ((frame[4].i) == 0) goto label_8;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_8;
	{
	if ((frame[4].i) == (11)) goto label_8;
	}
	{
	if ((frame[5].i) != (11)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(365);
	if ((frame[4].i) != 0) goto label_10;
	}
	{
	((func_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int])(ctx, (frame[0].o), ((frame[6].i) - (jint(1))), (frame[7].i));
	}
label_10:;
	{
	LINE_NUMBER(366);
	if ((frame[5].i) != 0) goto label_11;
	}
	{
	((func_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int])(ctx, (frame[0].o), (frame[6].i), ((frame[7].i) - (jint(1))));
	}
label_11:;
	{
	LINE_NUMBER(367);
	if ((frame[4].i) != (11)) goto label_12;
	}
	{
	((func_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int])(ctx, (frame[0].o), ((frame[6].i) + (jint(1))), (frame[7].i));
	}
label_12:;
	{
	LINE_NUMBER(368);
	if ((frame[5].i) != (11)) goto label_13;
	}
	{
	((func_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int])(ctx, (frame[0].o), (frame[6].i), ((frame[7].i) + (jint(1))));
	}
label_13:;
	{
	LINE_NUMBER(370);
	((func_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int])(ctx, (frame[0].o), (frame[6].i), (frame[7].i));
	goto label_14;
	}
label_9:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_19);
		proxy->F_field1 = (frame[8].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	LINE_NUMBER(376);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:queueClusterUpdate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(379);
	if ((frame[1].i) < 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[1].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) goto label_1;
	}
	{
	if ((frame[2].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cheight)) goto label_1;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_20);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(382);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:portalToVec", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[1].o)))->F_portals;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_items;
	frame[7].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	LINE_NUMBER(387);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[7].i));
	frame[8].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[7].i));
	frame[9].i = temp1;
	LINE_NUMBER(388);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[10].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[4].i) * (jint(2)))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[11].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[4].i) * (jint(2))) + (jint(1)))));
	LINE_NUMBER(389);
	frame[12].f = ((jfloat(((frame[8].i) + (frame[9].i)))) / (jfloat(2)));
	LINE_NUMBER(392);
	jfloat temp2 = ((jfloat((frame[10].i))) * (frame[12].f)) + (jfloat(((frame[2].i) * (12))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	jfloat temp3 = temp2 + (jfloat((((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[4].i) * (jint(2))))) * (11))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_nextOffsets;
	frame[13].f = ((temp3 + ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[4].i) * (jint(2))))))) / (jfloat(2)))) * (jfloat(8.0f)));
	LINE_NUMBER(393);
	jfloat temp4 = ((jfloat((frame[11].i))) * (frame[12].f)) + (jfloat(((frame[3].i) * (12))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	jfloat temp5 = temp4 + (jfloat((((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[4].i) * (jint(2))) + (jint(1))))) * (11))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_nextOffsets;
	frame[14].f = ((temp5 + ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[4].i) * (jint(2))) + (jint(1))))))) / (jfloat(2)))) * (jfloat(8.0f)));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[6].o), (frame[13].f), (frame[14].f));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:start", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(400);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	if (sp[0].o == nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	clinit_java_lang_Thread(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Thread);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[1].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Control Pathfinder"_j))));
	((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_thread = (jref) sp[1].o;
	LINE_NUMBER(403);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	((func_java_lang_Thread_setPriority_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setPriority_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	((func_java_lang_Thread_setDaemon_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setDaemon_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(405);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_thread;
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(412);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_thread = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(414);
	((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_invalidated = (jint(1));
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_util_TaskQueue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_clear])(ctx, sp[0].o);
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ControlPathfinder_getCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:getCluster", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), ((frame[3].i) + ((frame[4].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:getCluster", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clusters;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clusters;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(429);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(431);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)));
	LINE_NUMBER(434);
	if ((frame[5].o) != nullptr) goto label_5;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[3].i)));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:getCreateCluster", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), ((frame[3].i) + ((frame[4].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:getCreateCluster", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(447);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), ((frame[3].i) % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)), ((frame[3].i) / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[32];
	auto stack = &frame[26];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:updateCluster", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clusters;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(459);
	if ((frame[5].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clusters;
	jint temp0 = frame[1].i;
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_ControlPathfinder_costTypes;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_mindustry_ai_ControlPathfinder$Cluster, 1), ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[5].o = sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(463);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[2].i)));
	LINE_NUMBER(465);
	if ((frame[6].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(466);
	sp[0].o = frame[5].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ai_ControlPathfinder$Cluster, (((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cheight)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[6].o = sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(469);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (((frame[4].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) + (frame[3].i))));
	LINE_NUMBER(470);
	if ((frame[7].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = frame[6].o;
	jint temp0 = ((frame[4].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) + (frame[3].i);
	clinit_mindustry_ai_ControlPathfinder$Cluster(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder$Cluster);
	init_mindustry_ai_ControlPathfinder$Cluster(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[7].o = sp[1].o;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[7].o)))->F_portals;
	frame[8].o = sp[0].o;
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_11:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_10;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(475);
	if ((frame[11].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(476);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[11].o));
	}
label_13:;
	{
	LINE_NUMBER(474);
	INST_IINC(10, 1);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost])(ctx, (frame[0].o), (frame[2].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(483);
	frame[9].i = (jint(0));
	}
label_16:;
	{
	if ((frame[9].i) >= (jint(4))) goto label_17;
	}
	{
	LINE_NUMBER(484);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[9].i));
	frame[10].i = (temp0 + temp1);
	jint temp2 = frame[4].i;
	jint temp3 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[9].i));
	frame[11].i = (temp2 + temp3);
	LINE_NUMBER(486);
	if ((frame[10].i) < 0) goto label_21;
	}
	INST_ILOAD(11);
	if ((--sp)->i < 0) goto label_21;
	{
	if ((frame[10].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) goto label_21;
	}
	{
	if ((frame[11].i) < ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cheight)) goto label_22;
	}
	LINE_NUMBER(487);
	goto label_21;
label_22:;
	{
	LINE_NUMBER(490);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), ((frame[10].i) + ((frame[11].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)))));
	LINE_NUMBER(493);
	if ((frame[12].o) != nullptr) goto label_25;
	}
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[7].o)))->F_portals;
	jint temp0 = frame[9].i;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[13].o = sp[1].o;
	goto label_28;
	}
label_25:;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[7].o)))->F_portals;
	jint temp0 = frame[9].i;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[12].o)))->F_portals;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (((frame[9].i) + (jint(2))) % (jint(4))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[13].o = sp[1].o;
	LINE_NUMBER(501);
	if ((frame[13].o) != nullptr) goto label_30;
	}
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[7].o)))->F_portals;
	jint temp0 = frame[9].i;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[12].o)))->F_portals;
	jint temp1 = ((frame[9].i) + (jint(2))) % (jint(4));
	clinit_arc_struct_IntSeq(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[2].o;
	frame[13].o = sp[2].o;
	}
label_30:;
	{
	LINE_NUMBER(506);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[13].o));
	}
label_28:;
	{
	LINE_NUMBER(509);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[14].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[9].i) * (jint(2)))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[15].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[9].i) * (jint(2))) + (jint(1)))));
	LINE_NUMBER(511);
	jint temp0 = (frame[3].i) * (12);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	frame[16].i = (temp0 + (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[9].i) * (jint(2))))) * (11)));
	LINE_NUMBER(512);
	jint temp1 = (frame[4].i) * (12);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	frame[17].i = (temp1 + (((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[9].i) * (jint(2))) + (jint(1))))) * (11)));
	LINE_NUMBER(513);
	jint temp2 = frame[16].i;
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[18].i = (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)))))->F_x));
	LINE_NUMBER(514);
	jint temp3 = frame[17].i;
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[19].i = (temp3 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)))))->F_y));
	LINE_NUMBER(516);
	frame[20].i = (jint(-1));
	LINE_NUMBER(517);
	frame[21].i = (jint(1));
	LINE_NUMBER(519);
	frame[22].i = (jint(0));
	}
label_40:;
	{
	if ((frame[22].i) >= (12)) goto label_41;
	}
	{
	LINE_NUMBER(520);
	frame[23].i = ((frame[16].i) + ((frame[14].i) * (frame[22].i)));
	frame[24].i = ((frame[17].i) + ((frame[15].i) * (frame[22].i)));
	LINE_NUMBER(523);
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_solid_int_mindustry_ai_Pathfinder$PathCost_int_int_R_boolean(ctx, (frame[1].i), (frame[8].o), (frame[23].i), (frame[24].i));
	if (temp0 != 0) goto label_45;
	}
	{
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_solid_int_mindustry_ai_Pathfinder$PathCost_int_int_R_boolean(ctx, (frame[1].i), (frame[8].o), ((frame[18].i) + ((frame[14].i) * (frame[22].i))), ((frame[19].i) + ((frame[15].i) * (frame[22].i))));
	if (temp0 == 0) goto label_46;
	}
label_45:;
	{
	LINE_NUMBER(524);
	frame[25].i = ((frame[22].i) - (jint(1)));
	LINE_NUMBER(526);
	if ((frame[21].i) != 0) goto label_48;
	}
	{
	if ((frame[25].i) < (frame[20].i)) goto label_48;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[25].i), (frame[20].i));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_48:;
	{
	LINE_NUMBER(530);
	frame[21].i = (jint(1));
	LINE_NUMBER(531);
	goto label_51;
	}
label_46:;
	{
	LINE_NUMBER(533);
	if ((frame[21].i) == 0) goto label_52;
	}
	{
	LINE_NUMBER(534);
	frame[20].i = (frame[22].i);
	}
label_52:;
	{
	LINE_NUMBER(536);
	frame[21].i = (jint(0));
	}
label_51:;
	{
	LINE_NUMBER(519);
	INST_IINC(22, 1);
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(541);
	frame[22].i = (11);
	LINE_NUMBER(542);
	if ((frame[21].i) != 0) goto label_21;
	}
	{
	if ((frame[22].i) < (frame[20].i)) goto label_21;
	}
	{
	LINE_NUMBER(544);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[22].i), (frame[20].i));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_21:;
	{
	LINE_NUMBER(483);
	INST_IINC(9, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(548);
	((func_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[1].i), (frame[8].o), (frame[3].i), (frame[4].i), (frame[7].o));
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_updateInnerEdges_int_int_int_int_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:updateInnerEdges", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(554);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((func_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost])(ctx, (frame[0].o), (frame[2].i));
	((func_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster])(ctx, sp[0].o, temp0, sp[1].o, (frame[3].i), (frame[4].i), (frame[5].o));
	LINE_NUMBER(555);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[48];
	auto stack = &frame[33];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:updateInnerEdges", 48 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(558);
	frame[6].i = ((frame[3].i) * (12));
	frame[7].i = ((frame[4].i) * (12));
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((frame[6].i) + (12)) - (jint(1))), ((clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth) - (jint(1))));
	frame[8].i = temp0;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((frame[7].i) + (12)) - (jint(1))), ((clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wheight) - (jint(1))));
	frame[9].i = temp1;
	LINE_NUMBER(560);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_usedEdges;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(563);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_arc_struct_LongSeq, 1), (jint(4)));
	((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK(sp[0].o))->F_portalConnections = (jref) sp[1].o;
	LINE_NUMBER(565);
	frame[10].i = (jint(0));
	}
label_7:;
	{
	if ((frame[10].i) >= (jint(4))) goto label_8;
	}
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portals;
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i)));
	LINE_NUMBER(567);
	if ((frame[11].o) != nullptr) goto label_11;
	}
	goto label_12;
label_11:;
	{
	LINE_NUMBER(569);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[12].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[10].i) * (jint(2)))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[13].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[10].i) * (jint(2))) + (jint(1)))));
	LINE_NUMBER(571);
	frame[14].i = (jint(0));
	}
label_15:;
	{
	if ((frame[14].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[11].o)))->F_size)) goto label_12;
	}
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_usedEdges;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[10].i), (frame[14].i));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(575);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[11].o)))->F_items;
	frame[15].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[14].i)));
	LINE_NUMBER(576);
	jint temp2 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[15].i));
	frame[16].i = temp2;
	jint temp3 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[15].i));
	frame[17].i = temp3;
	LINE_NUMBER(577);
	frame[18].i = (((frame[16].i) + (frame[17].i)) / (jint(2)));
	LINE_NUMBER(578);
	jint temp4 = ((frame[12].i) * (frame[18].i)) + ((frame[3].i) * (12));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	frame[19].i = (temp4 + (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[10].i) * (jint(2))))) * (11)));
	LINE_NUMBER(579);
	jint temp5 = ((frame[13].i) * (frame[18].i)) + ((frame[4].i) * (12));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	frame[20].i = (temp5 + (((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[10].i) * (jint(2))) + (jint(1))))) * (11)));
	LINE_NUMBER(581);
	frame[21].i = (jint(0));
	}
label_24:;
	{
	if ((frame[21].i) >= (jint(4))) goto label_25;
	}
	{
	LINE_NUMBER(582);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portals;
	frame[22].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[21].i)));
	LINE_NUMBER(583);
	if ((frame[22].o) != nullptr) goto label_28;
	}
	goto label_29;
label_28:;
	{
	LINE_NUMBER(585);
	frame[23].i = (jint(0));
	}
label_30:;
	{
	if ((frame[23].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[22].o)))->F_size)) goto label_29;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_usedEdges;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[21].i), (frame[23].i));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_32;
	}
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[22].o)))->F_items;
	frame[24].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[23].i)));
	LINE_NUMBER(591);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[24].i));
	frame[25].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[24].i));
	frame[26].i = temp1;
	LINE_NUMBER(592);
	frame[27].i = (((frame[25].i) + (frame[26].i)) / (jint(2)));
	LINE_NUMBER(593);
	jint temp2 = (frame[3].i) * (12);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	frame[28].i = (temp2 + (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[21].i) * (jint(2))))) * (11)));
	LINE_NUMBER(594);
	jint temp3 = (frame[4].i) * (12);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	frame[29].i = (temp3 + (((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[21].i) * (jint(2))) + (jint(1))))) * (11)));
	LINE_NUMBER(595);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[30].i = ((((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[21].i) * (jint(2))))) * (frame[27].i)) + (frame[28].i));
	LINE_NUMBER(596);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[31].i = ((((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[21].i) * (jint(2))) + (jint(1))))) * (frame[27].i)) + (frame[29].i));
	LINE_NUMBER(599);
	jint temp4 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[19].i), (frame[20].i));
	jint temp5 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[30].i), (frame[31].i));
	if (temp4 != temp5) goto label_42;
	}
	LINE_NUMBER(600);
	goto label_32;
label_42:;
	{
	LINE_NUMBER(603);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp1 = frame[6].i;
	jint temp2 = frame[7].i;
	jint temp3 = frame[8].i;
	jint temp4 = frame[9].i;
	jint temp5 = (frame[19].i) + ((frame[20].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	jint temp6 = (frame[30].i) + ((frame[31].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jint temp7 = (((jint)ARRAY_ACCESS(jint, sp[2].o, ((frame[21].i) * (jint(2))))) * (frame[25].i)) + (frame[28].i);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jint temp8 = (((jint)ARRAY_ACCESS(jint, sp[2].o, (((frame[21].i) * (jint(2))) + (jint(1))))) * (frame[25].i)) + (frame[29].i);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jint temp9 = (((jint)ARRAY_ACCESS(jint, sp[2].o, ((frame[21].i) * (jint(2))))) * (frame[26].i)) + (frame[28].i);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jfloat temp10 = (jfloat)((func_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float])(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, ((((jint)ARRAY_ACCESS(jint, sp[2].o, (((frame[21].i) * (jint(2))) + (jint(1))))) * (frame[26].i)) + (frame[29].i)));
	frame[32].f = temp10;
	LINE_NUMBER(614);
	if ((floatCompare((frame[32].f), (jfloat(-1.0f)), -1)) == 0) goto label_32;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portalConnections;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i))) != nullptr) goto label_46;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portalConnections;
	jint temp0 = frame[10].i;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portals;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_LongSeq, ((jint)((arc_struct_IntSeq *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[10].i)))))->F_size));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_46:;
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portalConnections;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[21].i))) != nullptr) goto label_47;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portalConnections;
	jint temp0 = frame[21].i;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portals;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_LongSeq, ((jint)((arc_struct_IntSeq *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[21].i)))))->F_size));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_47:;
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portalConnections;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i))), (frame[14].i))) != nullptr) goto label_48;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portalConnections;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i));
	jint temp0 = frame[14].i;
	clinit_arc_struct_LongSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq_int(ctx, sp[1].o, (8));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_48:;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portalConnections;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[21].i))), (frame[23].i))) != nullptr) goto label_49;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portalConnections;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[21].i));
	jint temp0 = frame[23].i;
	clinit_arc_struct_LongSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq_int(ctx, sp[1].o, (8));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_49:;
	{
	LINE_NUMBER(621);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portalConnections;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i))), (frame[14].i));
	jlong temp0 = (jlong)SM_mindustry_gen_IntraEdge_get_int_int_float_R_long(ctx, (frame[21].i), (frame[23].i), (frame[32].f));
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(622);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[5].o)))->F_portalConnections;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[21].i))), (frame[23].i));
	jlong temp1 = (jlong)SM_mindustry_gen_IntraEdge_get_int_int_float_R_long(ctx, (frame[10].i), (frame[14].i), (frame[32].f));
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, temp1);
	}
label_32:;
	{
	LINE_NUMBER(585);
	INST_IINC(23, 1);
	goto label_30;
	}
label_29:;
	{
	LINE_NUMBER(581);
	INST_IINC(21, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(571);
	INST_IINC(14, 1);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(565);
	INST_IINC(10, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(629);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_ControlPathfinder_heuristic_int_int_R_float(jcontext ctx, jint param0, jint param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:heuristic", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(633);
	frame[2].i = ((frame[0].i) % (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	frame[3].i = ((frame[1].i) % (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	frame[4].i = ((frame[0].i) / (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	frame[5].i = ((frame[1].i) / (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	LINE_NUMBER(634);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - (frame[3].i)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[4].i) - (frame[5].i)));
	popStackFrame(ctx);
	return (jfloat((temp0 + temp1)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ai_ControlPathfinder_tcost_int_mindustry_ai_Pathfinder$PathCost_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:tcost", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(638);
	sp[0].o = frame[1].o;
	jint temp0 = frame[0].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK(sp[1].o))->F_tiles;
	jint temp1 = (jint)((func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int) resolveInterfaceMethod(ctx, &class_mindustry_ai_Pathfinder$PathCost, INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int, sp[0].o))(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_ControlPathfinder_tileCost_int_mindustry_ai_Pathfinder$PathCost_int_int_R_float(jcontext ctx, jint param0, jobject param1, jint param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:tileCost", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(643);
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_cost_int_mindustry_ai_Pathfinder$PathCost_int_R_int(ctx, (frame[0].i), (frame[1].o), (frame[3].i));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint param11) {
	NULL_CHECK(self);
	jtype frame[32];
	auto stack = &frame[28];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:innerAstar", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].i = param9;
	frame[11].i = param10;
	frame[12].i = param11;
	{
	LINE_NUMBER(648);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_innerFrontier;
	frame[13].o = sp[0].o;
	LINE_NUMBER(649);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_innerCosts;
	frame[14].o = sp[0].o;
	LINE_NUMBER(651);
	((func_mindustry_ai_PathfindQueue_clear) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_ai_PathfindQueue_clear])(ctx, (frame[13].o));
	LINE_NUMBER(652);
	((func_arc_struct_IntFloatMap_clear) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_IntFloatMap_clear])(ctx, (frame[14].o));
	LINE_NUMBER(655);
	((func_arc_struct_IntFloatMap_put_int_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_IntFloatMap_put_int_float])(ctx, (frame[14].o), (frame[7].i), (jfloat(0)));
	LINE_NUMBER(656);
	jint temp0 = (jint)((func_mindustry_ai_PathfindQueue_add_int_float_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_ai_PathfindQueue_add_int_float_R_boolean])(ctx, (frame[13].o), (frame[7].i), (jfloat(0)));
	LINE_NUMBER(658);
	if ((frame[11].i) >= (frame[9].i)) goto label_7;
	}
	{
	LINE_NUMBER(659);
	frame[15].i = (frame[9].i);
	LINE_NUMBER(660);
	frame[9].i = (frame[11].i);
	LINE_NUMBER(661);
	frame[11].i = (frame[15].i);
	}
label_7:;
	{
	LINE_NUMBER(664);
	if ((frame[12].i) >= (frame[10].i)) goto label_11;
	}
	{
	LINE_NUMBER(665);
	frame[15].i = (frame[10].i);
	LINE_NUMBER(666);
	frame[10].i = (frame[12].i);
	LINE_NUMBER(667);
	frame[12].i = (frame[15].i);
	}
label_11:;
	{
	LINE_NUMBER(670);
	if (((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[13].o)))->F_size) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(671);
	jint temp0 = (jint)((func_mindustry_ai_PathfindQueue_poll_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_ai_PathfindQueue_poll_R_int])(ctx, (frame[13].o));
	frame[15].i = temp0;
	LINE_NUMBER(673);
	frame[16].i = ((frame[15].i) % (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	frame[17].i = ((frame[15].i) / (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	LINE_NUMBER(676);
	if ((frame[16].i) < (frame[9].i)) goto label_20;
	}
	{
	if ((frame[17].i) < (frame[10].i)) goto label_20;
	}
	{
	if ((frame[16].i) > (frame[11].i)) goto label_20;
	}
	{
	if ((frame[17].i) <= (frame[12].i)) goto label_21;
	}
label_20:;
	{
	if ((frame[15].i) != (frame[8].i)) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(677);
	jfloat temp0 = (jfloat)((func_arc_struct_IntFloatMap_get_int_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_R_float])(ctx, (frame[14].o), (frame[15].i));
	popStackFrame(ctx);
	return temp0;
	}
label_22:;
	{
	LINE_NUMBER(680);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[18].o = sp[0].o;
	frame[19].i = (((jarray) nullCheck(ctx, (frame[18].o)))->length);
	frame[20].i = (jint(0));
	}
label_23:;
	{
	if ((frame[20].i) >= (frame[19].i)) goto label_24;
	}
	{
	frame[21].o = ((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (frame[20].i)));
	LINE_NUMBER(681);
	frame[22].i = ((frame[16].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[21].o)))->F_x));
	frame[23].i = ((frame[17].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[21].o)))->F_y));
	LINE_NUMBER(682);
	frame[24].i = ((frame[22].i) + ((clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth) * (frame[23].i)));
	LINE_NUMBER(684);
	if ((frame[22].i) > (frame[5].i)) goto label_29;
	}
	{
	if ((frame[23].i) > (frame[6].i)) goto label_29;
	}
	{
	if ((frame[22].i) < (frame[3].i)) goto label_29;
	}
	{
	if ((frame[23].i) < (frame[4].i)) goto label_29;
	}
	{
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_tcost_int_mindustry_ai_Pathfinder$PathCost_int_R_int(ctx, (frame[1].i), (frame[2].o), (frame[24].i));
	if (temp0 != (jint(-1))) goto label_30;
	}
	goto label_29;
label_30:;
	{
	LINE_NUMBER(686);
	jfloat temp0 = (jfloat)SM_mindustry_ai_ControlPathfinder_tileCost_int_mindustry_ai_Pathfinder$PathCost_int_int_R_float(ctx, (frame[1].i), (frame[2].o), (frame[15].i), (frame[24].i));
	frame[25].f = temp0;
	LINE_NUMBER(688);
	if ((floatCompare((frame[25].f), (jfloat(0)), 1)) >= 0) goto label_32;
	}
	goto label_29;
label_32:;
	{
	LINE_NUMBER(690);
	jfloat temp0 = (jfloat)((func_arc_struct_IntFloatMap_get_int_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_R_float])(ctx, (frame[14].o), (frame[15].i));
	frame[26].f = (temp0 + (frame[25].f));
	LINE_NUMBER(692);
	jfloat temp1 = frame[26].f;
	jfloat temp2 = (jfloat)((func_arc_struct_IntFloatMap_get_int_float_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_float_R_float])(ctx, (frame[14].o), (frame[24].i), (jfloat(std::numeric_limits<float>::infinity())));
	if ((floatCompare(temp1, temp2, 1)) >= 0) goto label_29;
	}
	{
	LINE_NUMBER(693);
	((func_arc_struct_IntFloatMap_put_int_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_IntFloatMap_put_int_float])(ctx, (frame[14].o), (frame[24].i), (frame[26].f));
	LINE_NUMBER(694);
	jfloat temp0 = frame[26].f;
	jfloat temp1 = (jfloat)SM_mindustry_ai_ControlPathfinder_heuristic_int_int_R_float(ctx, (frame[24].i), (frame[8].i));
	frame[27].f = (temp0 + temp1);
	LINE_NUMBER(695);
	jint temp2 = (jint)((func_mindustry_ai_PathfindQueue_add_int_float_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_ai_PathfindQueue_add_int_float_R_boolean])(ctx, (frame[13].o), (frame[24].i), (frame[27].f));
	}
label_29:;
	{
	LINE_NUMBER(680);
	INST_IINC(20, 1);
	goto label_23;
	}
label_24:;
	LINE_NUMBER(698);
	goto label_11;
label_15:;
	{
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return (jfloat(-1.0f));
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:makeNodeIndex", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(707);
	if ((frame[3].i) != (jint(2))) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(708);
	frame[3].i = (jint(0));
	LINE_NUMBER(709);
	INST_IINC(1, -1);
	}
label_1:;
	{
	LINE_NUMBER(713);
	if ((frame[3].i) != (jint(3))) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_4;
	{
	LINE_NUMBER(714);
	frame[3].i = (jint(1));
	LINE_NUMBER(715);
	INST_IINC(2, -1);
	}
label_4:;
	{
	LINE_NUMBER(718);
	jint temp0 = (jint)SM_mindustry_gen_NodeIndex_get_int_int_int_R_int(ctx, ((frame[1].i) + ((frame[2].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth))), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[42];
	auto stack = &frame[27];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:findClosestNode", 42 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(725);
	frame[5].i = ((frame[3].i) / (12));
	frame[6].i = ((frame[4].i) / (12));
	LINE_NUMBER(727);
	if ((frame[5].i) < 0) goto label_3;
	}
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_3;
	{
	if ((frame[5].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) goto label_3;
	}
	{
	if ((frame[6].i) < ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cheight)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(728);
	popStackFrame(ctx);
	return (jint(2147483647));
	}
label_4:;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost])(ctx, (frame[0].o), (frame[2].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(732);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[5].i), (frame[6].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(733);
	frame[9].i = ((frame[5].i) * (12));
	frame[10].i = ((frame[6].i) * (12));
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((frame[9].i) + (12)) - (jint(1))), ((clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth) - (jint(1))));
	frame[11].i = temp0;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((frame[10].i) + (12)) - (jint(1))), ((clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wheight) - (jint(1))));
	frame[12].i = temp1;
	LINE_NUMBER(735);
	frame[13].i = (jint(2147483647));
	LINE_NUMBER(736);
	frame[14].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(739);
	frame[15].i = (jint(0));
	}
label_13:;
	{
	if ((frame[15].i) >= (jint(4))) goto label_14;
	}
	{
	LINE_NUMBER(740);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[8].o)))->F_portals;
	frame[16].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i)));
	LINE_NUMBER(741);
	if ((frame[16].o) != nullptr) goto label_17;
	}
	goto label_18;
label_17:;
	{
	LINE_NUMBER(743);
	frame[17].i = (jint(0));
	}
label_19:;
	{
	if ((frame[17].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[16].o)))->F_size)) goto label_18;
	}
	{
	LINE_NUMBER(746);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[16].o)))->F_items;
	frame[18].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[17].i)));
	LINE_NUMBER(747);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[18].i));
	frame[19].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[18].i));
	frame[20].i = temp1;
	LINE_NUMBER(748);
	frame[21].i = (((frame[19].i) + (frame[20].i)) / (jint(2)));
	LINE_NUMBER(749);
	jint temp2 = (frame[5].i) * (12);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	frame[22].i = (temp2 + (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[15].i) * (jint(2))))) * (11)));
	LINE_NUMBER(750);
	jint temp3 = (frame[6].i) * (12);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	frame[23].i = (temp3 + (((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[15].i) * (jint(2))) + (jint(1))))) * (11)));
	LINE_NUMBER(751);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[24].i = ((((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[15].i) * (jint(2))))) * (frame[21].i)) + (frame[22].i));
	LINE_NUMBER(752);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[25].i = ((((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[15].i) * (jint(2))) + (jint(1))))) * (frame[21].i)) + (frame[23].i));
	LINE_NUMBER(754);
	sp[0].o = frame[0].o;
	jint temp4 = frame[1].i;
	sp[1].o = frame[7].o;
	jint temp5 = frame[9].i;
	jint temp6 = frame[10].i;
	jint temp7 = frame[11].i;
	jint temp8 = frame[12].i;
	jint temp9 = (frame[3].i) + ((frame[4].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	jint temp10 = (frame[24].i) + ((frame[25].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jint temp11 = (((jint)ARRAY_ACCESS(jint, sp[2].o, ((frame[15].i) * (jint(2))))) * (frame[19].i)) + (frame[22].i);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jint temp12 = (((jint)ARRAY_ACCESS(jint, sp[2].o, (((frame[15].i) * (jint(2))) + (jint(1))))) * (frame[19].i)) + (frame[23].i);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jint temp13 = (((jint)ARRAY_ACCESS(jint, sp[2].o, ((frame[15].i) * (jint(2))))) * (frame[20].i)) + (frame[22].i);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jfloat temp14 = (jfloat)((func_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float])(ctx, sp[0].o, temp4, sp[1].o, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12, temp13, ((((jint)ARRAY_ACCESS(jint, sp[2].o, (((frame[15].i) * (jint(2))) + (jint(1))))) * (frame[20].i)) + (frame[23].i)));
	frame[26].f = temp14;
	LINE_NUMBER(766);
	if ((floatCompare((frame[26].f), (jfloat(-1.0f)), -1)) == 0) goto label_30;
	}
	{
	if ((floatCompare((frame[26].f), (frame[14].f), 1)) >= 0) goto label_30;
	}
	{
	LINE_NUMBER(767);
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[15].i), (frame[17].i));
	frame[13].i = temp0;
	LINE_NUMBER(768);
	frame[14].f = (frame[26].f);
	}
label_30:;
	{
	LINE_NUMBER(743);
	INST_IINC(17, 1);
	goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(739);
	INST_IINC(15, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(773);
	if ((frame[13].i) == (jint(2147483647))) goto label_33;
	}
	{
	LINE_NUMBER(774);
	sp[0].o = frame[0].o;
	jint temp0 = frame[5].i;
	jint temp1 = frame[6].i;
	jint temp2 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[13].i));
	jint temp3 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[13].i));
	jint temp4 = (jint)((func_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	popStackFrame(ctx);
	return temp4;
	}
label_33:;
	{
	LINE_NUMBER(778);
	popStackFrame(ctx);
	return (jint(2147483647));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ai_ControlPathfinder_clusterNodeHeuristic_int_int_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:clusterNodeHeuristic", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(784);
	jint temp0 = (jint)SM_mindustry_gen_NodeIndex_cluster_int_R_int(ctx, (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(785);
	jint temp1 = (jint)SM_mindustry_gen_NodeIndex_dir_int_R_int(ctx, (frame[3].i));
	frame[6].i = temp1;
	LINE_NUMBER(786);
	jint temp2 = (jint)SM_mindustry_gen_NodeIndex_portal_int_R_int(ctx, (frame[3].i));
	frame[7].i = temp2;
	LINE_NUMBER(787);
	jint temp3 = (jint)SM_mindustry_gen_NodeIndex_cluster_int_R_int(ctx, (frame[4].i));
	frame[8].i = temp3;
	LINE_NUMBER(788);
	jint temp4 = (jint)SM_mindustry_gen_NodeIndex_dir_int_R_int(ctx, (frame[4].i));
	frame[9].i = temp4;
	LINE_NUMBER(789);
	jint temp5 = (jint)SM_mindustry_gen_NodeIndex_portal_int_R_int(ctx, (frame[4].i));
	frame[10].i = temp5;
	LINE_NUMBER(790);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[5].i));
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK(sp[0].o))->F_portals;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_items;
	frame[11].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i)));
	LINE_NUMBER(791);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[8].i));
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK(sp[0].o))->F_portals;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)))))->F_items;
	frame[12].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[10].i)));
	LINE_NUMBER(794);
	jint temp6 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[11].i));
	jint temp7 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[11].i));
	frame[13].f = ((jfloat((temp6 + temp7))) / (jfloat(2)));
	LINE_NUMBER(795);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jfloat temp8 = ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[6].i) * (jint(2))))))) * (frame[13].f)) + (jfloat((((frame[5].i) % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) * (12))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	jfloat temp9 = temp8 + (jfloat((((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[6].i) * (jint(2))))) * (11))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_nextOffsets;
	frame[14].f = (temp9 + ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[6].i) * (jint(2))))))) / (jfloat(2))));
	LINE_NUMBER(796);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jfloat temp10 = ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[6].i) * (jint(2))) + (jint(1))))))) * (frame[13].f)) + (jfloat((((frame[5].i) / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) * (12))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	jfloat temp11 = temp10 + (jfloat((((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[6].i) * (jint(2))) + (jint(1))))) * (11))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_nextOffsets;
	frame[15].f = (temp11 + ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[6].i) * (jint(2))) + (jint(1))))))) / (jfloat(2))));
	LINE_NUMBER(798);
	jint temp12 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[12].i));
	jint temp13 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[12].i));
	frame[16].f = ((jfloat((temp12 + temp13))) / (jfloat(2)));
	LINE_NUMBER(799);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jfloat temp14 = ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[9].i) * (jint(2))))))) * (frame[16].f)) + (jfloat((((frame[8].i) % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) * (12))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	jfloat temp15 = temp14 + (jfloat((((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[9].i) * (jint(2))))) * (11))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_nextOffsets;
	frame[17].f = (temp15 + ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[9].i) * (jint(2))))))) / (jfloat(2))));
	LINE_NUMBER(800);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	jfloat temp16 = ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[9].i) * (jint(2))) + (jint(1))))))) * (frame[16].f)) + (jfloat((((frame[8].i) / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) * (12))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	jfloat temp17 = temp16 + (jfloat((((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[9].i) * (jint(2))) + (jint(1))))) * (11))));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_nextOffsets;
	frame[18].f = (temp17 + ((jfloat(((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[9].i) * (jint(2))) + (jint(1))))))) / (jfloat(2))));
	LINE_NUMBER(802);
	jfloat temp18 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[14].f) - (frame[17].f)));
	jfloat temp19 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[15].f) - (frame[18].f)));
	popStackFrame(ctx);
	return (temp18 + temp19);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ControlPathfinder_clusterAstar_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_R_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[33];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:clusterAstar", 33 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(806);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_resultPath;
	frame[5].o = sp[0].o;
	LINE_NUMBER(808);
	if ((frame[3].i) != (frame[4].i)) goto label_2;
	}
	{
	LINE_NUMBER(809);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[5].o));
	LINE_NUMBER(810);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[5].o), (frame[3].i));
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_2:;
	{
	LINE_NUMBER(814);
	frame[6].i = ((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_team);
	LINE_NUMBER(816);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_costs;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	clinit_arc_struct_IntFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap);
	init_arc_struct_IntFloatMap(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_costs = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(817);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_cameFrom;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	clinit_arc_struct_IntIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap);
	init_arc_struct_IntIntMap(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_cameFrom = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(818);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_frontier;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_ai_PathfindQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ai_PathfindQueue);
	init_mindustry_ai_PathfindQueue(ctx, sp[1].o);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_frontier = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(822);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_costs;
	frame[7].o = sp[0].o;
	LINE_NUMBER(823);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_cameFrom;
	frame[8].o = sp[0].o;
	LINE_NUMBER(824);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_frontier;
	frame[9].o = sp[0].o;
	LINE_NUMBER(826);
	((func_arc_struct_IntIntMap_put_int_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_IntIntMap_put_int_int])(ctx, (frame[8].o), (frame[3].i), (frame[3].i));
	LINE_NUMBER(827);
	((func_arc_struct_IntFloatMap_put_int_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_IntFloatMap_put_int_float])(ctx, (frame[7].o), (frame[3].i), (jfloat(0)));
	LINE_NUMBER(828);
	jint temp0 = (jint)((func_mindustry_ai_PathfindQueue_add_int_float_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_ai_PathfindQueue_add_int_float_R_boolean])(ctx, (frame[9].o), (frame[3].i), (jfloat(0)));
	LINE_NUMBER(830);
	frame[10].i = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(832);
	if (((jint)((mindustry_ai_PathfindQueue *) NULL_CHECK((frame[9].o)))->F_size) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(833);
	jint temp0 = (jint)((func_mindustry_ai_PathfindQueue_poll_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_ai_PathfindQueue_poll_R_int])(ctx, (frame[9].o));
	frame[11].i = temp0;
	LINE_NUMBER(835);
	if ((frame[11].i) != (frame[4].i)) goto label_20;
	}
	{
	LINE_NUMBER(836);
	frame[10].i = (jint(1));
	LINE_NUMBER(837);
	goto label_17;
	}
label_20:;
	{
	LINE_NUMBER(840);
	jint temp0 = (jint)SM_mindustry_gen_NodeIndex_cluster_int_R_int(ctx, (frame[11].i));
	frame[12].i = temp0;
	jint temp1 = (jint)SM_mindustry_gen_NodeIndex_dir_int_R_int(ctx, (frame[11].i));
	frame[13].i = temp1;
	jint temp2 = (jint)SM_mindustry_gen_NodeIndex_portal_int_R_int(ctx, (frame[11].i));
	frame[14].i = temp2;
	LINE_NUMBER(841);
	frame[15].i = ((frame[12].i) % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth));
	frame[16].i = ((frame[12].i) / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth));
	LINE_NUMBER(844);
	if ((frame[15].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) goto label_16;
	}
	{
	if ((frame[16].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cheight)) goto label_16;
	}
	INST_ILOAD(15);
	if ((--sp)->i < 0) goto label_16;
	INST_ILOAD(16);
	if ((--sp)->i >= 0) goto label_28;
	goto label_16;
label_28:;
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[6].i), (frame[2].i), (frame[12].i));
	frame[17].o = sp[0].o;
	LINE_NUMBER(847);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[17].o)))->F_portalConnections;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[13].i))) == nullptr) goto label_30;
	}
	{
	jint temp0 = frame[14].i;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[17].o)))->F_portalConnections;
	if (temp0 < (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[13].i)))))->length)) goto label_31;
	}
label_30:;
	INST_ACONST_NULL();
	goto label_32;
label_31:;
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[17].o)))->F_portalConnections;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[13].i))), (frame[14].i));
	sp += 1;
	}
label_32:;
	{
	sp -= 1;
	frame[18].o = sp[0].o;
	LINE_NUMBER(850);
	if ((frame[18].o) == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(851);
	((func_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq])(ctx, (frame[0].o), (frame[1].o), (frame[6].i), (frame[2].i), (frame[11].i), (frame[4].i), (frame[15].i), (frame[16].i), (frame[18].o));
	}
label_34:;
	{
	LINE_NUMBER(855);
	jint temp0 = frame[15].i;
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[19].i = (temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[13].i)))))->F_x));
	jint temp1 = frame[16].i;
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[20].i = (temp1 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[13].i)))))->F_y));
	LINE_NUMBER(856);
	if ((frame[19].i) < 0) goto label_38;
	}
	INST_ILOAD(20);
	if ((--sp)->i < 0) goto label_38;
	{
	if ((frame[19].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) goto label_38;
	}
	{
	if ((frame[20].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cheight)) goto label_38;
	}
	{
	LINE_NUMBER(857);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[6].i), (frame[2].i), (frame[19].i), (frame[20].i));
	frame[21].o = sp[0].o;
	LINE_NUMBER(858);
	frame[22].i = (((frame[13].i) + (jint(2))) % (jint(4)));
	LINE_NUMBER(859);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[21].o)))->F_portalConnections;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[22].i))) == nullptr) goto label_42;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[21].o)))->F_portalConnections;
	if ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[22].i)))))->length) > (frame[14].i)) goto label_43;
	}
label_42:;
	INST_ACONST_NULL();
	goto label_44;
label_43:;
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[21].o)))->F_portalConnections;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[22].i))), (frame[14].i));
	sp += 1;
	}
label_44:;
	{
	sp -= 1;
	frame[23].o = sp[0].o;
	LINE_NUMBER(860);
	if ((frame[23].o) == nullptr) goto label_38;
	}
	{
	LINE_NUMBER(861);
	((func_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq])(ctx, (frame[0].o), (frame[1].o), (frame[6].i), (frame[2].i), (frame[11].i), (frame[4].i), (frame[19].i), (frame[20].i), (frame[23].o));
	}
label_38:;
	LINE_NUMBER(864);
	goto label_16;
label_17:;
	{
	LINE_NUMBER(868);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_costs = (jref) (jobject(nullptr));
	LINE_NUMBER(869);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_cameFrom = (jref) (jobject(nullptr));
	LINE_NUMBER(870);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_frontier = (jref) (jobject(nullptr));
	LINE_NUMBER(872);
	if ((frame[10].i) == 0) goto label_50;
	}
	{
	LINE_NUMBER(873);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[5].o));
	LINE_NUMBER(875);
	frame[11].i = (frame[4].i);
	}
label_53:;
	{
	LINE_NUMBER(876);
	if ((frame[11].i) == (frame[3].i)) goto label_54;
	}
	{
	LINE_NUMBER(877);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[5].o), (frame[11].i));
	LINE_NUMBER(878);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_get_int_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_IntIntMap_get_int_R_int])(ctx, (frame[8].o), (frame[11].i));
	frame[11].i = temp0;
	goto label_53;
	}
label_54:;
	{
	LINE_NUMBER(881);
	((func_arc_struct_IntSeq_reverse) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_IntSeq_reverse])(ctx, (frame[5].o));
	LINE_NUMBER(883);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_50:;
	{
	LINE_NUMBER(885);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:checkEdges", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(889);
	frame[9].i = (jint(0));
	}
label_1:;
	{
	if ((frame[9].i) >= ((jint)((arc_struct_LongSeq *) NULL_CHECK((frame[8].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(890);
	sp[0].o = (jobject)((arc_struct_LongSeq *) NULL_CHECK((frame[8].o)))->F_items;
	frame[10].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[9].i)));
	LINE_NUMBER(891);
	jfloat temp0 = (jfloat)SM_mindustry_gen_IntraEdge_cost_long_R_float(ctx, (frame[10].l));
	frame[12].f = temp0;
	LINE_NUMBER(892);
	jint temp1 = (jint)SM_mindustry_gen_IntraEdge_dir_long_R_int(ctx, (frame[10].l));
	frame[13].i = temp1;
	jint temp2 = (jint)SM_mindustry_gen_IntraEdge_portal_long_R_int(ctx, (frame[10].l));
	frame[14].i = temp2;
	LINE_NUMBER(893);
	jint temp3 = (jint)((func_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int])(ctx, (frame[0].o), (frame[6].i), (frame[7].i), (frame[13].i), (frame[14].i));
	frame[15].i = temp3;
	LINE_NUMBER(895);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_costs;
	jfloat temp4 = (jfloat)((func_arc_struct_IntFloatMap_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_R_float])(ctx, sp[0].o, (frame[4].i));
	frame[16].f = (temp4 + (frame[12].f));
	LINE_NUMBER(897);
	jfloat temp5 = frame[16].f;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_costs;
	jfloat temp6 = (jfloat)((func_arc_struct_IntFloatMap_get_int_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_float_R_float])(ctx, sp[0].o, (frame[15].i), (jfloat(std::numeric_limits<float>::infinity())));
	if ((floatCompare(temp5, temp6, 1)) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_costs;
	((func_arc_struct_IntFloatMap_put_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_put_int_float])(ctx, sp[0].o, (frame[15].i), (frame[16].f));
	LINE_NUMBER(900);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_frontier;
	jint temp0 = frame[15].i;
	jfloat temp1 = frame[16].f;
	jfloat temp2 = (jfloat)((func_mindustry_ai_ControlPathfinder_clusterNodeHeuristic_int_int_int_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_clusterNodeHeuristic_int_int_int_int_R_float])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[15].i), (frame[5].i));
	jint temp3 = (jint)((func_mindustry_ai_PathfindQueue_add_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_PathfindQueue_add_int_float_R_boolean])(ctx, sp[0].o, temp0, (temp1 + temp2));
	LINE_NUMBER(901);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_cameFrom;
	((func_arc_struct_IntIntMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_put_int_int])(ctx, sp[0].o, (frame[15].i), (frame[4].i));
	}
label_10:;
	{
	LINE_NUMBER(889);
	INST_IINC(9, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(904);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_updateFields_mindustry_ai_ControlPathfinder$FieldCache_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[36];
	auto stack = &frame[32];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:updateFields", 36 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(907);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[1].o)))->F_frontier;
	frame[4].o = sp[0].o;
	LINE_NUMBER(908);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[1].o)))->F_fields;
	frame[5].o = sp[0].o;
	LINE_NUMBER(909);
	frame[6].i = ((jint)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[1].o)))->F_goalPos);
	LINE_NUMBER(910);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[1].o)))->F_cost;
	frame[7].o = sp[0].o;
	LINE_NUMBER(911);
	frame[8].i = ((jint)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[1].o)))->F_team);
	LINE_NUMBER(913);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	frame[9].l = temp0;
	LINE_NUMBER(914);
	frame[11].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(917);
	if (((jint)((arc_struct_IntQueue *) NULL_CHECK((frame[4].o)))->F_size) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(918);
	jint temp0 = (jint)((func_arc_struct_IntQueue_removeLast_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_IntQueue_removeLast_R_int])(ctx, (frame[4].o));
	frame[12].i = temp0;
	LINE_NUMBER(919);
	frame[13].i = ((frame[12].i) % (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	frame[14].i = ((frame[12].i) / (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	LINE_NUMBER(920);
	frame[15].i = (((frame[13].i) / (12)) + (((frame[14].i) / (12)) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)));
	LINE_NUMBER(923);
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, (frame[5].o), (frame[15].i));
	frame[16].o = (checkCast(ctx, getArrayClass(&class_int, 1), sp[0].o));
	LINE_NUMBER(924);
	if ((frame[16].o) != nullptr) goto label_15;
	}
	goto label_7;
label_15:;
	{
	LINE_NUMBER(926);
	frame[17].i = ((jint)ARRAY_ACCESS(jint, (frame[16].o), (((frame[13].i) % (12)) + (((frame[14].i) % (12)) * (12)))));
	LINE_NUMBER(928);
	if ((frame[17].i) == (jint(-1))) goto label_17;
	}
	{
	LINE_NUMBER(929);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[18].o = sp[0].o;
	frame[19].i = (((jarray) nullCheck(ctx, (frame[18].o)))->length);
	frame[20].i = (jint(0));
	}
label_19:;
	{
	if ((frame[20].i) >= (frame[19].i)) goto label_17;
	}
	{
	frame[21].o = ((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (frame[20].i)));
	LINE_NUMBER(932);
	frame[22].i = ((frame[13].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[21].o)))->F_x));
	frame[23].i = ((frame[14].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[21].o)))->F_y));
	LINE_NUMBER(933);
	frame[24].i = ((frame[22].i) / (12));
	frame[25].i = ((frame[23].i) / (12));
	LINE_NUMBER(935);
	if ((frame[24].i) < 0) goto label_25;
	}
	INST_ILOAD(25);
	if ((--sp)->i < 0) goto label_25;
	{
	if ((frame[22].i) >= (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)) goto label_25;
	}
	{
	if ((frame[23].i) < (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wheight)) goto label_26;
	}
	goto label_25;
label_26:;
	{
	LINE_NUMBER(937);
	frame[26].i = ((frame[24].i) + ((frame[25].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)));
	LINE_NUMBER(939);
	if ((frame[26].i) != (frame[15].i)) goto label_28;
	}
	INST_ALOAD(16);
	goto label_29;
label_28:;
	{
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, (frame[5].o), (frame[26].i));
	sp[0].o = checkCast(ctx, getArrayClass(&class_int, 1), sp[0].o);
	sp += 1;
	}
label_29:;
	{
	sp -= 1;
	frame[27].o = sp[0].o;
	LINE_NUMBER(942);
	if ((frame[27].o) != nullptr) goto label_31;
	}
	goto label_25;
label_31:;
	{
	LINE_NUMBER(944);
	frame[28].i = (((frame[12].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[21].o)))->F_x)) + (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[21].o)))->F_y) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)));
	LINE_NUMBER(947);
	if ((frame[28].i) != (frame[6].i)) goto label_33;
	}
	goto label_25;
label_33:;
	{
	LINE_NUMBER(949);
	if (((frame[22].i) - ((frame[24].i) * (12))) < 0) goto label_25;
	}
	{
	if (((frame[23].i) - ((frame[25].i) * (12))) >= 0) goto label_34;
	}
	goto label_25;
label_34:;
	{
	LINE_NUMBER(951);
	frame[29].i = (((frame[22].i) - ((frame[24].i) * (12))) + (((frame[23].i) - ((frame[25].i) * (12))) * (12)));
	LINE_NUMBER(953);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK(sp[1].o))->F_tiles;
	jint temp1 = (jint)((func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int) resolveInterfaceMethod(ctx, &class_mindustry_ai_Pathfinder$PathCost, INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int, sp[0].o))(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[28].i))));
	frame[30].i = temp1;
	LINE_NUMBER(954);
	frame[31].i = ((jint)ARRAY_ACCESS(jint, (frame[27].o), (frame[29].i)));
	LINE_NUMBER(957);
	if ((frame[31].i) == 0) goto label_38;
	}
	{
	if ((frame[31].i) <= ((frame[17].i) + (frame[30].i))) goto label_25;
	}
label_38:;
	{
	if ((frame[30].i) == (jint(-1))) goto label_25;
	}
	{
	LINE_NUMBER(958);
	((func_arc_struct_IntQueue_addFirst_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_IntQueue_addFirst_int])(ctx, (frame[4].o), (frame[28].i));
	LINE_NUMBER(959);
	ARRAY_ACCESS(jint, (frame[27].o), (frame[29].i)) = ((frame[17].i) + (frame[30].i));
	}
label_25:;
	{
	LINE_NUMBER(929);
	INST_IINC(20, 1);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(965);
	if ((longCompare((frame[2].l), (jlong(0)))) < 0) goto label_41;
	}
	{
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	if (temp0 < (200)) goto label_41;
	}
	{
	LINE_NUMBER(966);
	frame[11].i = (jint(0));
	LINE_NUMBER(967);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceNanos_long_R_long(ctx, (frame[9].l));
	if ((longCompare(temp0, (frame[2].l))) < 0) goto label_41;
	}
	LINE_NUMBER(968);
	popStackFrame(ctx);
	INST_RETURN();
label_41:;
	LINE_NUMBER(971);
	goto label_7;
label_8:;
	LINE_NUMBER(972);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:addFlowCluster", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(975);
	((func_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), ((frame[2].i) % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)), ((frame[2].i) / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)), (frame[3].i));
	LINE_NUMBER(976);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:addFlowCluster", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(980);
	if ((frame[2].i) < 0) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[2].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) goto label_1;
	}
	{
	if ((frame[3].i) < ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cheight)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(982);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[1].o)))->F_fields;
	frame[5].o = sp[0].o;
	LINE_NUMBER(983);
	frame[6].i = ((frame[2].i) + ((frame[3].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)));
	LINE_NUMBER(985);
	jint temp0 = (jint)((func_arc_struct_IntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_IntMap_containsKey_int_R_boolean])(ctx, (frame[5].o), (frame[6].i));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(986);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject) createArray(ctx, &class_int, (144));
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(988);
	if ((frame[4].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(989);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= (jint(4))) goto label_5;
	}
	{
	LINE_NUMBER(990);
	jint temp0 = frame[2].i;
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_nextOffsets;
	frame[8].i = (temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[7].i) * (jint(2))))));
	jint temp1 = frame[3].i;
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_nextOffsets;
	frame[9].i = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[7].i) * (jint(2))) + (jint(1))))));
	LINE_NUMBER(992);
	if ((frame[8].i) < 0) goto label_13;
	}
	INST_ILOAD(9);
	if ((--sp)->i < 0) goto label_13;
	{
	if ((frame[8].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) goto label_13;
	}
	{
	if ((frame[9].i) < ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cheight)) goto label_14;
	}
	goto label_13;
label_14:;
	{
	LINE_NUMBER(994);
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, (frame[5].o), ((frame[8].i) + ((frame[9].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth))));
	frame[10].o = (checkCast(ctx, getArrayClass(&class_int, 1), sp[0].o));
	LINE_NUMBER(996);
	if ((frame[10].o) != nullptr) goto label_16;
	}
	goto label_13;
label_16:;
	{
	LINE_NUMBER(999);
	frame[11].i = (((frame[7].i) + (jint(2))) % (jint(4)));
	LINE_NUMBER(1000);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[12].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[11].i) * (jint(2)))));
	LINE_NUMBER(1001);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_moveDirs;
	frame[13].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[11].i) * (jint(2))) + (jint(1)))));
	LINE_NUMBER(1002);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	frame[14].i = (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[11].i) * (jint(2))))) * (11));
	LINE_NUMBER(1003);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_offsets;
	frame[15].i = (((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[11].i) * (jint(2))) + (jint(1))))) * (11));
	LINE_NUMBER(1006);
	frame[16].i = (jint(0));
	}
label_22:;
	{
	if ((frame[16].i) >= (12)) goto label_13;
	}
	{
	LINE_NUMBER(1007);
	frame[17].i = ((frame[14].i) + ((frame[12].i) * (frame[16].i)));
	frame[18].i = ((frame[15].i) + ((frame[13].i) * (frame[16].i)));
	LINE_NUMBER(1010);
	if (((jint)ARRAY_ACCESS(jint, (frame[10].o), ((frame[17].i) + ((frame[18].i) * (12))))) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(1011);
	frame[19].i = ((frame[17].i) + ((frame[8].i) * (12)));
	frame[20].i = ((frame[18].i) + ((frame[9].i) * (12)));
	LINE_NUMBER(1014);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[1].o)))->F_frontier;
	((func_arc_struct_IntQueue_addFirst_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_addFirst_int])(ctx, sp[0].o, ((frame[19].i) + ((frame[20].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth))));
	LINE_NUMBER(1016);
	if ((clinit_mindustry_ai_ControlPathfinder(ctx), (jint)SF_mindustry_ai_ControlPathfinder_showDebug) == 0) goto label_26;
	}
	{
	LINE_NUMBER(1017);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_21);
		proxy->F_field1 = (frame[20].i);
		proxy->F_field0 = (frame[19].i);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(1006);
	INST_IINC(16, 1);
	goto label_22;
	}
label_13:;
	{
	LINE_NUMBER(989);
	INST_IINC(7, 1);
	goto label_9;
	}
label_5:;
	LINE_NUMBER(1024);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_initializePathRequest_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[32];
	auto stack = &frame[26];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:initializePathRequest", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(1027);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost])(ctx, (frame[0].o), (frame[3].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1029);
	frame[9].i = ((frame[6].i) + ((frame[7].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)));
	LINE_NUMBER(1031);
	jint temp0 = (jint)((func_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	frame[10].i = temp0;
	LINE_NUMBER(1032);
	jint temp1 = (jint)((func_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[6].i), (frame[7].i));
	frame[11].i = temp1;
	LINE_NUMBER(1034);
	if ((frame[11].i) != (jint(2147483647))) goto label_5;
	}
	{
	LINE_NUMBER(1035);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_notFound = (jint(1));
	LINE_NUMBER(1036);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_oldCache = (jref) (jobject(nullptr));
	LINE_NUMBER(1038);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(1041);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_clusterAstar_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_R_arc_struct_IntSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_clusterAstar_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_R_arc_struct_IntSeq])(ctx, (frame[0].o), (frame[1].o), (frame[3].i), (frame[10].i), (frame[11].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1044);
	if ((frame[12].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1045);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_notFound = (jint(1));
	LINE_NUMBER(1047);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_oldCache = (jref) (jobject(nullptr));
	LINE_NUMBER(1048);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_fields;
	jlong temp0 = (jlong)SM_mindustry_gen_FieldIndex_get_int_int_int_R_long(ctx, (frame[9].i), (frame[3].i), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_LongMap_get_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_get_long_R_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[13].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$FieldCache, sp[0].o));
	LINE_NUMBER(1053);
	frame[14].i = (jint(1));
	LINE_NUMBER(1056);
	if ((frame[13].o) != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(1057);
	clinit_mindustry_ai_ControlPathfinder$FieldCache(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder$FieldCache);
	init_mindustry_ai_ControlPathfinder$FieldCache_mindustry_ai_Pathfinder$PathCost_int_int_int(ctx, sp[0].o, (frame[8].o), (frame[3].i), (frame[2].i), (frame[9].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(1058);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_fields;
	sp[0].o = (jobject)((func_arc_struct_LongMap_put_long_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_put_long_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jlong)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[13].o)))->F_mapKey), (frame[13].o));
	LINE_NUMBER(1059);
	frame[15].o = (frame[13].o);
	LINE_NUMBER(1061);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_22);
		proxy->F_field1 = (jref) (frame[15].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1062);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[13].o)))->F_frontier;
	((func_arc_struct_IntQueue_addFirst_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_addFirst_int])(ctx, sp[0].o, (frame[9].i));
	LINE_NUMBER(1063);
	frame[14].i = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(1066);
	if ((frame[12].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(1067);
	frame[15].i = ((frame[4].i) / (12));
	frame[16].i = ((frame[5].i) / (12));
	LINE_NUMBER(1069);
	((func_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean])(ctx, (frame[0].o), (frame[13].o), (frame[15].i), (frame[16].i), (frame[14].i));
	LINE_NUMBER(1071);
	frame[17].i = (jint(-1));
	}
label_28:;
	{
	if ((frame[17].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[12].o)))->F_size)) goto label_23;
	}
	{
	LINE_NUMBER(1073);
	if ((frame[17].i) != (jint(-1))) goto label_30;
	}
	INST_ILOAD(10);
	goto label_31;
label_30:;
	{
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[12].o)))->F_items;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[17].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_31:;
	{
	sp -= 1;
	frame[18].i = sp[0].i;
	LINE_NUMBER(1074);
	jint temp0 = (jint)SM_mindustry_gen_NodeIndex_cluster_int_R_int(ctx, (frame[18].i));
	frame[19].i = temp0;
	LINE_NUMBER(1075);
	jint temp1 = (jint)SM_mindustry_gen_NodeIndex_dir_int_R_int(ctx, (frame[18].i));
	frame[20].i = temp1;
	LINE_NUMBER(1076);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[21].i = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[20].i)))))->F_x);
	LINE_NUMBER(1077);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[22].i = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[20].i)))))->F_y);
	LINE_NUMBER(1078);
	frame[23].i = (((frame[19].i) % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) + (frame[21].i));
	LINE_NUMBER(1079);
	frame[24].i = (((frame[19].i) / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) + (frame[22].i));
	LINE_NUMBER(1081);
	((func_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean])(ctx, (frame[0].o), (frame[13].o), (frame[19].i), (frame[14].i));
	LINE_NUMBER(1084);
	if ((frame[23].i) < 0) goto label_40;
	}
	INST_ILOAD(24);
	if ((--sp)->i < 0) goto label_40;
	{
	if ((frame[23].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)) goto label_40;
	}
	{
	if ((frame[24].i) >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cheight)) goto label_40;
	}
	{
	LINE_NUMBER(1085);
	frame[25].i = ((frame[23].i) + ((frame[24].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)));
	LINE_NUMBER(1087);
	((func_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean])(ctx, (frame[0].o), (frame[13].o), (frame[25].i), (frame[14].i));
	}
label_40:;
	{
	LINE_NUMBER(1071);
	INST_IINC(17, 1);
	goto label_28;
	}
label_23:;
	LINE_NUMBER(1091);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:idToCost", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1094);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_costTypes;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ai_Pathfinder$PathCost, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_ControlPathfinder_isNearObstacle_mindustry_gen_Unit_int_int_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:isNearObstacle", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1098);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pathCost;
	jint temp1 = (jint)SM_mindustry_ai_ControlPathfinder_raycast_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_R_boolean(ctx, temp0, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:getPathPosition", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1114);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1115);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[5].o)))->F_dest;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1116);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	ARRAY_ACCESS(jbyte, (frame[4].o), (jint(0))) = ((jint)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[5].o)))->F_unreachable);
	}
label_3:;
	{
	LINE_NUMBER(1117);
	popStackFrame(ctx);
	return ((jint)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[5].o)))->F_move);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:getPathPosition", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1122);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1123);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[6].o)))->F_dest;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1124);
	if ((frame[5].o) == nullptr) goto label_3;
	}
	{
	ARRAY_ACCESS(jbyte, (frame[5].o), (jint(0))) = ((jint)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[6].o)))->F_unreachable);
	}
label_3:;
	{
	LINE_NUMBER(1125);
	popStackFrame(ctx);
	return ((jint)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[6].o)))->F_move);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:getPathPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1129);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[57];
	auto stack = &frame[45];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:getPathPosition", 57 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1133);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_unreachable = (jint(0));
	LINE_NUMBER(1134);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_move = (jint(0));
	LINE_NUMBER(1135);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(1136);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_dest;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(1138);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	frame[4].i = ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pathCostId);
	LINE_NUMBER(1139);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost])(ctx, (frame[0].o), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1143);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	frame[7].i = ((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id);
	LINE_NUMBER(1144);
	jint temp0 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, (frame[1].o));
	frame[8].i = temp0;
	LINE_NUMBER(1145);
	jint temp1 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, (frame[1].o));
	frame[9].i = temp1;
	LINE_NUMBER(1146);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_packArray_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_packArray_int_int_R_int])(ctx, sp[0].o, (frame[8].i), (frame[9].i));
	frame[10].i = temp2;
	LINE_NUMBER(1147);
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x));
	frame[11].i = temp3;
	LINE_NUMBER(1148);
	jint temp4 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y));
	frame[12].i = temp4;
	LINE_NUMBER(1149);
	jint temp5 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x));
	frame[13].i = temp5;
	LINE_NUMBER(1150);
	jint temp6 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	frame[14].i = temp6;
	LINE_NUMBER(1151);
	frame[15].i = ((frame[13].i) + ((frame[14].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)));
	LINE_NUMBER(1152);
	if ((frame[6].o) != nullptr) goto label_25;
	}
	INST_ICONST(0);
	goto label_26;
label_25:;
	{
	sp[0].o = frame[5].o;
	jint temp0 = frame[7].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK(sp[1].o))->F_tiles;
	jint temp1 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[6].o));
	jint temp2 = (jint)((func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int) resolveInterfaceMethod(ctx, &class_mindustry_ai_Pathfinder$PathCost, INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int, sp[0].o))(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp1)));
	sp[0].i = temp2;
	sp += 1;
	}
label_26:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(1153);
	frame[17].i = ((frame[11].i) + ((frame[12].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)));
	LINE_NUMBER(1156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	jint temp2 = (jint)((func_mindustry_core_World_isInMapArea_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isInMapArea_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	if (temp2 != 0) goto label_29;
	}
	{
	LINE_NUMBER(1157);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_move = (jint(0));
	LINE_NUMBER(1158);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_unreachable = (jint(1));
	LINE_NUMBER(1159);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(1162);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_unitRequests;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[18].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$PathRequest, sp[0].o));
	LINE_NUMBER(1164);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r3;
	((func_mindustry_gen_Unit_hitboxTile_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitboxTile_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1166);
	jfloat temp0 = jfloat(8.0f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r3;
	frame[19].f = (temp0 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height));
	LINE_NUMBER(1168);
	if ((frame[18].o) == nullptr) goto label_36;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	if (((jint)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tileChanges) == ((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastWorldUpdate)) goto label_37;
	}
label_36:;
	INST_ICONST(-1);
	goto label_38;
label_37:;
	INST_ALOAD(18);
	sp[-1].i = ((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[-1].o))->F_lastRaycastTile;
label_38:;
	{
	sp -= 1;
	frame[20].i = sp[0].i;
	LINE_NUMBER(1169);
	if ((frame[18].o) == nullptr) goto label_40;
	}
	{
	if (((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastRaycastResult) == 0) goto label_40;
	}
	INST_ICONST(1);
	goto label_41;
label_40:;
	INST_ICONST(0);
label_41:;
	{
	sp -= 1;
	frame[21].i = sp[0].i;
	LINE_NUMBER(1172);
	if ((frame[20].i) == (frame[10].i)) goto label_43;
	}
	{
	LINE_NUMBER(1174);
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[1].o), (frame[2].o), (jfloat(20.0f)));
	if (temp0 == 0) goto label_45;
	}
	{
	LINE_NUMBER(1175);
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_raycastRect_int_float_float_float_float_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_float_R_boolean(ctx, (frame[16].i), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), (frame[7].i), (frame[5].o), (frame[8].i), (frame[9].i), (frame[13].i), (frame[14].i), (frame[19].f));
	if (temp0 != 0) goto label_47;
	}
	INST_ICONST(1);
	goto label_48;
label_47:;
	INST_ICONST(0);
	goto label_48;
label_45:;
	{
	LINE_NUMBER(1176);
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_raycast_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_R_boolean(ctx, (frame[7].i), (frame[5].o), (frame[8].i), (frame[9].i), (frame[13].i), (frame[14].i));
	if (temp0 != 0) goto label_49;
	}
	INST_ICONST(1);
	goto label_48;
label_49:;
	INST_ICONST(0);
label_48:;
	{
	sp -= 1;
	frame[21].i = sp[0].i;
	LINE_NUMBER(1178);
	if ((frame[18].o) == nullptr) goto label_43;
	}
	{
	LINE_NUMBER(1179);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastRaycastTile = (frame[10].i);
	LINE_NUMBER(1180);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastRaycastResult = (frame[21].i);
	LINE_NUMBER(1181);
	sp[0].o = frame[18].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_lastWorldUpdate = ((jint)((mindustry_core_World *) NULL_CHECK(sp[1].o))->F_tileChanges);
	}
label_43:;
	{
	LINE_NUMBER(1186);
	if ((frame[21].i) == 0) goto label_54;
	}
	{
	LINE_NUMBER(1187);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_dest;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(1188);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_move = (jint(1));
	LINE_NUMBER(1189);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_54:;
	{
	LINE_NUMBER(1192);
	frame[22].i = (jint(0));
	LINE_NUMBER(1194);
	if ((frame[18].o) == nullptr) goto label_59;
	}
	{
	jint temp0 = (jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_destination;
	sp[0].i = temp0;
	sp += 1;
	goto label_60;
	}
label_59:;
	INST_ILOAD(17);
label_60:;
	{
	sp -= 1;
	jlong temp0 = (jlong)SM_mindustry_gen_FieldIndex_get_int_int_int_R_long(ctx, sp[0].i, (frame[4].i), (frame[7].i));
	frame[23].l = temp0;
	LINE_NUMBER(1197);
	if ((frame[18].o) == nullptr) goto label_62;
	}
	{
	if (((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_destination) == (frame[17].i)) goto label_63;
	}
	{
	jlong temp0 = (jlong)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastRecomputeTime;
	LINE_NUMBER(1199);
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, temp0);
	if ((longCompare(temp1, (jlong(1000ll)))) >= 0) goto label_62;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (jfloat((frame[11].i))), (jfloat((frame[12].i))), (jfloat((((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_destination) % (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)))), (jfloat((((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_destination) / (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)))));
	if ((floatCompare(temp0, (jfloat(4.0f)), 1)) > 0) goto label_62;
	}
label_63:;
	{
	LINE_NUMBER(1200);
	sp[0].o = frame[18].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_lastUpdateId = ((jlong)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_updateId);
	LINE_NUMBER(1202);
	frame[25].o = (frame[6].o);
	LINE_NUMBER(1204);
	frame[26].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1206);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_fields;
	sp[0].o = (jobject)((func_arc_struct_LongMap_get_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_get_long_R_java_lang_Object])(ctx, sp[0].o, (frame[23].l));
	frame[26].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$FieldCache, sp[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1208);
	goto label_67;
label_2:;
	LINE_NUMBER(1207);
	INST_ASTORE(27);
label_67:;
	{
	LINE_NUMBER(1209);
	if ((frame[26].o) != nullptr) goto label_68;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_oldCache;
	frame[26].o = sp[0].o;
	}
label_68:;
	{
	LINE_NUMBER(1211);
	if ((frame[26].o) == nullptr) goto label_69;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_69;
	{
	LINE_NUMBER(1212);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_oldCache;
	frame[27].o = sp[0].o;
	LINE_NUMBER(1213);
	if ((frame[27].o) == nullptr) goto label_72;
	}
	INST_ALOAD(27);
	goto label_73;
label_72:;
	INST_ALOAD(26);
label_73:;
	{
	sp -= 1;
	frame[28].o = sp[0].o;
	LINE_NUMBER(1214);
	if ((frame[27].o) != nullptr) goto label_75;
	}
	INST_ICONST(1);
	goto label_76;
label_75:;
	INST_ICONST(0);
label_76:;
	{
	sp -= 1;
	frame[29].i = sp[0].i;
	LINE_NUMBER(1216);
	sp[0].o = frame[26].o;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_oldCache;
	if (sp[0].o == sp[1].o) goto label_78;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[26].o)))->F_frontier;
	jint temp0 = (jint)((func_arc_struct_IntQueue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_78;
	}
	INST_ALOAD(27);
	if ((--sp)->o == nullptr) goto label_78;
	{
	LINE_NUMBER(1217);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_oldCache = (jref) (jobject(nullptr));
	}
label_78:;
	{
	LINE_NUMBER(1220);
	sp[0].o = frame[26].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK(sp[0].o))->F_lastUpdateId = ((jlong)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_updateId);
	LINE_NUMBER(1221);
	frame[30].i = (30);
	LINE_NUMBER(1222);
	frame[31].i = (jint(0));
	LINE_NUMBER(1223);
	frame[32].i = (jint(0));
	LINE_NUMBER(1225);
	if ((frame[10].i) != (frame[15].i)) goto label_84;
	}
	{
	LINE_NUMBER(1226);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastTargetTile = (jref) (frame[6].o);
	goto label_86;
	}
label_84:;
	{
	LINE_NUMBER(1228);
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[25].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[25].o));
	if (temp0 != ((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastTile)) goto label_87;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastTargetTile;
	if (sp[0].o != nullptr) goto label_86;
	}
label_87:;
	{
	LINE_NUMBER(1229);
	frame[33].i = (jint(0));
	}
label_88:;
	{
	LINE_NUMBER(1232);
	jint temp0 = frame[31].i;
	INST_IINC(31, 1);
	if (temp0 >= (frame[30].i)) goto label_89;
	}
	{
	LINE_NUMBER(1233);
	jint temp0 = (jint)((func_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int])(ctx, (frame[0].o), (frame[28].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y), (frame[29].i));
	frame[34].i = temp0;
	LINE_NUMBER(1235);
	frame[35].o = (jobject(nullptr));
	LINE_NUMBER(1236);
	frame[36].i = (jint(0));
	LINE_NUMBER(1237);
	frame[37].i = (jint(0));
	}
label_94:;
	{
	if ((frame[37].i) >= (jint(4))) goto label_95;
	}
	{
	LINE_NUMBER(1238);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[38].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[37].i)));
	LINE_NUMBER(1239);
	frame[39].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[38].o)))->F_x));
	frame[40].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[38].o)))->F_y));
	LINE_NUMBER(1241);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[39].i), (frame[40].i));
	frame[41].o = sp[0].o;
	LINE_NUMBER(1243);
	if ((frame[41].o) != nullptr) goto label_101;
	}
	goto label_102;
label_101:;
	{
	LINE_NUMBER(1245);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_packArray_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_packArray_int_int_R_int])(ctx, sp[0].o, (frame[39].i), (frame[40].i));
	frame[42].i = temp0;
	LINE_NUMBER(1246);
	jint temp1 = (jint)((func_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int])(ctx, (frame[0].o), (frame[28].o), (frame[39].i), (frame[40].i), (frame[29].i));
	frame[43].i = temp1;
	frame[44].i = ((frame[43].i) - (frame[34].i));
	LINE_NUMBER(1248);
	if ((frame[44].i) > (jint(2))) goto label_106;
	}
	INST_ILOAD(43);
	if ((--sp)->i > 0) goto label_107;
label_106:;
	{
	LINE_NUMBER(1249);
	frame[33].i = (jint(1));
	}
label_107:;
	{
	LINE_NUMBER(1252);
	if ((frame[34].i) == 0) goto label_108;
	}
	{
	if ((frame[43].i) >= (frame[34].i)) goto label_102;
	}
label_108:;
	{
	if ((frame[43].i) == (jint(-1))) goto label_102;
	}
	INST_ILOAD(43);
	if ((--sp)->i == 0) goto label_109;
	INST_ALOAD(35);
	if ((--sp)->o == nullptr) goto label_110;
	{
	if ((frame[43].i) < (frame[36].i)) goto label_110;
	}
label_109:;
	{
	if ((frame[42].i) == (frame[15].i)) goto label_110;
	}
	{
	if ((frame[42].i) != (frame[17].i)) goto label_102;
	}
label_110:;
	{
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_passable_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(ctx, (frame[7].i), (frame[5].o), (frame[42].i));
	if (temp0 == 0) goto label_102;
	}
	{
	LINE_NUMBER(1253);
	frame[35].o = (frame[41].o);
	LINE_NUMBER(1254);
	frame[36].i = (frame[43].i);
	LINE_NUMBER(1256);
	if ((frame[42].i) == (frame[17].i)) goto label_95;
	}
	{
	if ((frame[42].i) != (frame[15].i)) goto label_102;
	}
	LINE_NUMBER(1257);
	goto label_95;
label_102:;
	{
	LINE_NUMBER(1237);
	INST_IINC(37, 1);
	goto label_94;
	}
label_95:;
	{
	LINE_NUMBER(1264);
	if ((frame[35].o) == nullptr) goto label_89;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canDrown) == 0) goto label_115;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_dangerous_R_boolean) ((void **) nullCheck(ctx, (frame[35].o))->vtable)[VTABLE_mindustry_world_Tile_dangerous_R_boolean])(ctx, (frame[35].o));
	if (temp0 == 0) goto label_115;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_dangerous_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_dangerous_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_89;
	}
label_115:;
	{
	LINE_NUMBER(1267);
	if ((frame[33].i) == 0) goto label_116;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_dangerous_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_dangerous_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_117;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_116;
label_117:;
	{
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_raycastRect_int_float_float_float_float_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_float_R_boolean(ctx, (frame[16].i), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), (jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[35].o)))->F_x) * (8)))), (jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[35].o)))->F_y) * (8)))), (frame[7].i), (frame[5].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[25].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[25].o)))->F_y), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[35].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[35].o)))->F_y), (frame[19].f));
	if (temp0 == 0) goto label_116;
	}
	{
	LINE_NUMBER(1270);
	if ((frame[6].o) != (frame[25].o)) goto label_119;
	}
	{
	LINE_NUMBER(1271);
	frame[32].i = (jint(1));
	LINE_NUMBER(1272);
	frame[22].i = (jint(1));
	}
label_119:;
	{
	LINE_NUMBER(1274);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[35].o);
	LINE_NUMBER(1276);
	goto label_89;
	}
label_116:;
	{
	LINE_NUMBER(1279);
	frame[6].o = (frame[35].o);
	LINE_NUMBER(1280);
	frame[22].i = (jint(1));
	LINE_NUMBER(1282);
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[35].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[35].o));
	frame[37].i = temp0;
	LINE_NUMBER(1284);
	if ((frame[37].i) == (frame[17].i)) goto label_89;
	}
	{
	if ((frame[37].i) != (frame[15].i)) goto label_126;
	}
	LINE_NUMBER(1285);
	goto label_89;
label_126:;
	LINE_NUMBER(1292);
	goto label_88;
label_89:;
	{
	LINE_NUMBER(1294);
	sp[0].o = frame[18].o;
	sp += 1;
	if ((frame[22].i) == 0) goto label_128;
	}
	INST_ALOAD(6);
	goto label_129;
label_128:;
	INST_ACONST_NULL();
label_129:;
	{
	sp -= 2;
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_lastTargetTile = (jref) sp[1].o;
	LINE_NUMBER(1295);
	if ((clinit_mindustry_ai_ControlPathfinder(ctx), (jint)SF_mindustry_ai_ControlPathfinder_showDebug) == 0) goto label_86;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_86;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jlong temp0 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[0].o);
	if ((longCompare((temp0 % (jlong(30ll))), (jlong(0)))) != 0) goto label_86;
	}
	{
	LINE_NUMBER(1296);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_placeBlock;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[6].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[6].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (jfloat(1)));
	}
label_86:;
	{
	LINE_NUMBER(1300);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastTargetTile;
	if (sp[0].o == nullptr) goto label_69;
	}
	{
	LINE_NUMBER(1301);
	if ((clinit_mindustry_ai_ControlPathfinder(ctx), (jint)SF_mindustry_ai_ControlPathfinder_showDebug) == 0) goto label_133;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jlong temp0 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[0].o);
	if ((longCompare((temp0 % (jlong(30ll))), (jlong(0)))) != 0) goto label_133;
	}
	{
	LINE_NUMBER(1302);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_breakBlock;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastTargetTile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastTargetTile;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (jfloat(1)));
	}
label_133:;
	{
	LINE_NUMBER(1304);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_dest;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastTargetTile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastTargetTile;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(1305);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_move = (jint(1));
	LINE_NUMBER(1306);
	sp[0].o = frame[18].o;
	sp += 1;
	if ((frame[32].i) == 0) goto label_137;
	}
	INST_ICONST(-1);
	goto label_138;
label_137:;
	INST_ALOAD(25);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[0].o);
	sp++;
label_138:;
	{
	sp -= 2;
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_lastTile = sp[1].i;
	LINE_NUMBER(1307);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_69:;
	LINE_NUMBER(1310);
	goto label_140;
label_62:;
	{
	LINE_NUMBER(1312);
	frame[25].o = (jobject(nullptr));
	LINE_NUMBER(1313);
	if ((frame[18].o) == nullptr) goto label_142;
	}
	{
	LINE_NUMBER(1314);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_lastUpdateId = (jlong(-1000ll));
	LINE_NUMBER(1316);
	frame[26].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_fields;
	jlong temp0 = (jlong)SM_mindustry_gen_FieldIndex_get_int_int_int_R_long(ctx, ((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_destination), (frame[4].i), (frame[7].i));
	sp[0].o = (jobject)((func_arc_struct_LongMap_get_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_get_long_R_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[26].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$FieldCache, sp[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1320);
	goto label_145;
label_6:;
	LINE_NUMBER(1319);
	INST_ASTORE(27);
label_145:;
	{
	LINE_NUMBER(1322);
	if ((frame[26].o) == nullptr) goto label_146;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[26].o)))->F_frontier;
	jint temp0 = (jint)((func_arc_struct_IntQueue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_146;
	}
	{
	LINE_NUMBER(1323);
	frame[25].o = (frame[26].o);
	goto label_142;
	}
label_146:;
	{
	LINE_NUMBER(1324);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_oldCache;
	if (sp[0].o == nullptr) goto label_148;
	}
	{
	LINE_NUMBER(1325);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_oldCache;
	frame[25].o = sp[0].o;
	goto label_142;
	}
label_148:;
	{
	LINE_NUMBER(1327);
	frame[25].o = (frame[26].o);
	}
label_142:;
	{
	LINE_NUMBER(1332);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_unitRequests;
	sp[1].o = frame[1].o;
	clinit_mindustry_ai_ControlPathfinder$PathRequest(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder$PathRequest);
	init_mindustry_ai_ControlPathfinder$PathRequest_mindustry_gen_Unit_int_int_int(ctx, sp[2].o, (frame[1].o), (frame[7].i), (frame[4].i), (frame[17].i));
	frame[18].o = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1333);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_oldCache = (jref) (frame[25].o);
	LINE_NUMBER(1335);
	frame[26].o = (frame[18].o);
	LINE_NUMBER(1336);
	sp[0].o = frame[18].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK(sp[0].o))->F_lastRecomputeTime = temp0;
	LINE_NUMBER(1339);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_23);
		proxy->F_field1 = (jref) (frame[26].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1344);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_move = (jint(0));
	LINE_NUMBER(1345);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_140:;
	{
	LINE_NUMBER(1348);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_move = (jint(0));
	LINE_NUMBER(1349);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK(sp[0].o))->F_unreachable = ((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[18].o)))->F_notFound);
	LINE_NUMBER(1350);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_ControlPathfinder_pathResult;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:recalculatePath", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1354);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_team;
	jint temp1 = (jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_costId;
	sp[2].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_unit;
	jint temp2 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_unit;
	jint temp3 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, sp[2].o);
	((func_mindustry_ai_ControlPathfinder_initializePathRequest_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_initializePathRequest_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_destination) % (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)), (((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_destination) / (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)));
	LINE_NUMBER(1355);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:getCost", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ArrayIndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1359);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[1].o)))->F_fields;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (((frame[2].i) / (12)) + (((frame[3].i) / (12)) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth))));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_int, 1), sp[0].o));
	LINE_NUMBER(1360);
	if ((frame[5].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(1361);
	if ((frame[4].i) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ArrayIndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1363);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_24);
		proxy->F_field3 = (frame[3].i);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1364);
	jint temp0 = jint(0);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ArrayIndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1366);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[5].o), (((frame[2].i) % (12)) + (((frame[3].i) % (12)) * (12))));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1367);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1370);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_ControlPathfinder_raycast_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_R_boolean(jcontext ctx, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5) {
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:raycast", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(1375);
	frame[6].i = (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth);
	frame[7].i = (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wheight);
	LINE_NUMBER(1376);
	frame[8].i = (frame[2].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[4].i) - (frame[8].i)));
	frame[9].i = temp0;
	if ((frame[8].i) >= (frame[4].i)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(1377);
	frame[11].i = (frame[3].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[5].i) - (frame[11].i)));
	frame[12].i = temp0;
	if ((frame[11].i) >= (frame[5].i)) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(-1);
label_11:;
	{
	sp -= 1;
	frame[13].i = sp[0].i;
	LINE_NUMBER(1378);
	frame[15].i = ((frame[9].i) - (frame[12].i));
	}
label_13:;
	{
	LINE_NUMBER(1380);
	if ((frame[8].i) < 0) goto label_14;
	}
	INST_ILOAD(11);
	if ((--sp)->i < 0) goto label_14;
	{
	if ((frame[8].i) >= (frame[6].i)) goto label_14;
	}
	{
	if ((frame[11].i) >= (frame[7].i)) goto label_14;
	}
	{
	LINE_NUMBER(1381);
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_avoid_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(ctx, (frame[0].i), (frame[1].o), ((frame[8].i) + ((frame[11].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth))));
	if (temp0 == 0) goto label_16;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_16:;
	{
	LINE_NUMBER(1382);
	if ((frame[8].i) != (frame[4].i)) goto label_17;
	}
	{
	if ((frame[11].i) != (frame[5].i)) goto label_17;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(1385);
	frame[14].i = ((jint(2)) * (frame[15].i));
	LINE_NUMBER(1386);
	if ((frame[14].i) <= (-(frame[12].i))) goto label_19;
	}
	{
	LINE_NUMBER(1387);
	frame[15].i = ((frame[15].i) - (frame[12].i));
	LINE_NUMBER(1388);
	frame[8].i = ((frame[8].i) + (frame[10].i));
	}
label_19:;
	{
	LINE_NUMBER(1391);
	if ((frame[14].i) >= (frame[9].i)) goto label_13;
	}
	{
	LINE_NUMBER(1392);
	frame[15].i = ((frame[15].i) + (frame[9].i));
	LINE_NUMBER(1393);
	frame[11].i = ((frame[11].i) + (frame[13].i));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1397);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ai_ControlPathfinder_raycastFastAvoid_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:raycastFastAvoid", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(1402);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[6].i = temp0;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[7].i = temp1;
	LINE_NUMBER(1403);
	frame[8].i = (frame[2].i);
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[4].i) - (frame[8].i)));
	frame[9].i = temp2;
	if ((frame[8].i) >= (frame[4].i)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(1404);
	frame[11].i = (frame[3].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[5].i) - (frame[11].i)));
	frame[12].i = temp0;
	if ((frame[11].i) >= (frame[5].i)) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(-1);
label_11:;
	{
	sp -= 1;
	frame[13].i = sp[0].i;
	LINE_NUMBER(1405);
	frame[14].i = ((frame[9].i) - (frame[12].i));
	}
label_13:;
	{
	LINE_NUMBER(1407);
	if ((frame[8].i) < 0) goto label_14;
	}
	INST_ILOAD(11);
	if ((--sp)->i < 0) goto label_14;
	{
	if ((frame[8].i) >= (frame[6].i)) goto label_14;
	}
	{
	if ((frame[11].i) >= (frame[7].i)) goto label_14;
	}
	{
	LINE_NUMBER(1408);
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_avoid_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(ctx, (frame[0].i), (frame[1].o), ((frame[8].i) + ((frame[11].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth))));
	if (temp0 == 0) goto label_16;
	}
	{
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[8].i), (frame[11].i));
	popStackFrame(ctx);
	return temp0;
	}
label_16:;
	{
	LINE_NUMBER(1409);
	if ((frame[8].i) != (frame[4].i)) goto label_17;
	}
	{
	if ((frame[11].i) != (frame[5].i)) goto label_17;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(1412);
	if ((((jint(2)) * (frame[14].i)) + (frame[12].i)) <= ((frame[9].i) - ((jint(2)) * (frame[14].i)))) goto label_18;
	}
	{
	LINE_NUMBER(1413);
	frame[14].i = ((frame[14].i) - (frame[12].i));
	LINE_NUMBER(1414);
	frame[8].i = ((frame[8].i) + (frame[10].i));
	goto label_13;
	}
label_18:;
	{
	LINE_NUMBER(1416);
	frame[14].i = ((frame[14].i) + (frame[9].i));
	LINE_NUMBER(1417);
	frame[11].i = ((frame[11].i) + (frame[13].i));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1421);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_ControlPathfinder_overlap_int_int_mindustry_ai_Pathfinder$PathCost_int_int_float_float_float_float_float_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2, jint param3, jint param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:overlap", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	{
	LINE_NUMBER(1425);
	if ((frame[3].i) < 0) goto label_1;
	}
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[3].i) >= (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)) goto label_1;
	}
	{
	if ((frame[4].i) < (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wheight)) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1426);
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_nearPassable_int_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(ctx, (frame[0].i), (frame[1].i), (frame[2].o), ((frame[3].i) + ((frame[4].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth))));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(1427);
	jint temp0 = (jint)SM_arc_math_geom_Intersector_intersectSegmentRectangleFast_float_float_float_float_float_float_float_float_R_boolean(ctx, (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), ((jfloat(((frame[3].i) * (8)))) - ((frame[9].f) / (jfloat(2)))), ((jfloat(((frame[4].i) * (8)))) - ((frame[9].f) / (jfloat(2)))), (frame[9].f), (frame[9].f));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(1429);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_ControlPathfinder_raycastRect_int_float_float_float_float_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_float_R_boolean(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5, jobject param6, jint param7, jint param8, jint param9, jint param10, jfloat param11) {
	jtype frame[32];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:raycastRect", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	frame[6].o = param6;
	frame[7].i = param7;
	frame[8].i = param8;
	frame[9].i = param9;
	frame[10].i = param10;
	frame[11].f = param11;
	{
	LINE_NUMBER(1433);
	frame[12].i = (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth);
	frame[13].i = (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wheight);
	LINE_NUMBER(1434);
	frame[14].i = (frame[7].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[9].i) - (frame[14].i)));
	frame[15].i = temp0;
	if ((frame[14].i) >= (frame[9].i)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(1435);
	frame[17].i = (frame[8].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[10].i) - (frame[17].i)));
	frame[18].i = temp0;
	if ((frame[17].i) >= (frame[10].i)) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(-1);
label_11:;
	{
	sp -= 1;
	frame[19].i = sp[0].i;
	LINE_NUMBER(1436);
	frame[21].i = ((frame[15].i) - (frame[18].i));
	}
label_13:;
	{
	LINE_NUMBER(1438);
	if ((frame[14].i) < 0) goto label_14;
	}
	INST_ILOAD(17);
	if ((--sp)->i < 0) goto label_14;
	{
	if ((frame[14].i) >= (frame[12].i)) goto label_14;
	}
	{
	if ((frame[17].i) >= (frame[13].i)) goto label_14;
	}
	{
	LINE_NUMBER(1439);
	jint temp0 = frame[0].i;
	jint temp1 = frame[5].i;
	sp[0].o = frame[6].o;
	jint temp2 = (frame[14].i) + ((frame[17].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	LINE_NUMBER(1440);
	jint temp3 = (jint)SM_mindustry_ai_ControlPathfinder_nearPassable_int_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(ctx, temp0, temp1, sp[0].o, temp2);
	if (temp3 == 0) goto label_17;
	}
	{
	jint temp0 = frame[0].i;
	jint temp1 = frame[5].i;
	sp[0].o = frame[6].o;
	jint temp2 = (frame[14].i) + (jint(1));
	jint temp3 = frame[17].i;
	jfloat temp4 = frame[1].f;
	jfloat temp5 = frame[2].f;
	jfloat temp6 = frame[3].f;
	jfloat temp7 = frame[4].f;
	jfloat temp8 = frame[11].f;
	LINE_NUMBER(1441);
	jint temp9 = (jint)SM_mindustry_ai_ControlPathfinder_overlap_int_int_mindustry_ai_Pathfinder$PathCost_int_int_float_float_float_float_float_R_boolean(ctx, temp0, temp1, sp[0].o, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
	if (temp9 != 0) goto label_17;
	}
	{
	jint temp0 = frame[0].i;
	jint temp1 = frame[5].i;
	sp[0].o = frame[6].o;
	jint temp2 = (frame[14].i) - (jint(1));
	jint temp3 = frame[17].i;
	jfloat temp4 = frame[1].f;
	jfloat temp5 = frame[2].f;
	jfloat temp6 = frame[3].f;
	jfloat temp7 = frame[4].f;
	jfloat temp8 = frame[11].f;
	LINE_NUMBER(1442);
	jint temp9 = (jint)SM_mindustry_ai_ControlPathfinder_overlap_int_int_mindustry_ai_Pathfinder$PathCost_int_int_float_float_float_float_float_R_boolean(ctx, temp0, temp1, sp[0].o, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
	if (temp9 != 0) goto label_17;
	}
	{
	jint temp0 = frame[0].i;
	jint temp1 = frame[5].i;
	sp[0].o = frame[6].o;
	jint temp2 = frame[14].i;
	jint temp3 = (frame[17].i) + (jint(1));
	jfloat temp4 = frame[1].f;
	jfloat temp5 = frame[2].f;
	jfloat temp6 = frame[3].f;
	jfloat temp7 = frame[4].f;
	jfloat temp8 = frame[11].f;
	LINE_NUMBER(1443);
	jint temp9 = (jint)SM_mindustry_ai_ControlPathfinder_overlap_int_int_mindustry_ai_Pathfinder$PathCost_int_int_float_float_float_float_float_R_boolean(ctx, temp0, temp1, sp[0].o, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
	if (temp9 != 0) goto label_17;
	}
	{
	jint temp0 = frame[0].i;
	jint temp1 = frame[5].i;
	sp[0].o = frame[6].o;
	jint temp2 = frame[14].i;
	jint temp3 = (frame[17].i) - (jint(1));
	jfloat temp4 = frame[1].f;
	jfloat temp5 = frame[2].f;
	jfloat temp6 = frame[3].f;
	jfloat temp7 = frame[4].f;
	jfloat temp8 = frame[11].f;
	LINE_NUMBER(1444);
	jint temp9 = (jint)SM_mindustry_ai_ControlPathfinder_overlap_int_int_mindustry_ai_Pathfinder$PathCost_int_int_float_float_float_float_float_R_boolean(ctx, temp0, temp1, sp[0].o, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
	if (temp9 == 0) goto label_22;
	}
label_17:;
	{
	LINE_NUMBER(1445);
	popStackFrame(ctx);
	return (jint(1));
	}
label_22:;
	{
	LINE_NUMBER(1447);
	if ((frame[14].i) != (frame[9].i)) goto label_23;
	}
	{
	if ((frame[17].i) != (frame[10].i)) goto label_23;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_23:;
	{
	LINE_NUMBER(1450);
	frame[20].i = ((jint(2)) * (frame[21].i));
	LINE_NUMBER(1451);
	if ((frame[20].i) <= (-(frame[18].i))) goto label_25;
	}
	{
	LINE_NUMBER(1452);
	frame[21].i = ((frame[21].i) - (frame[18].i));
	LINE_NUMBER(1453);
	frame[14].i = ((frame[14].i) + (frame[16].i));
	}
label_25:;
	{
	LINE_NUMBER(1456);
	if ((frame[20].i) >= (frame[15].i)) goto label_13;
	}
	{
	LINE_NUMBER(1457);
	frame[21].i = ((frame[21].i) + (frame[15].i));
	LINE_NUMBER(1458);
	frame[17].i = ((frame[17].i) + (frame[19].i));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1462);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_ControlPathfinder_avoid_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:avoid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1466);
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_cost_int_mindustry_ai_Pathfinder$PathCost_int_R_int(ctx, (frame[0].i), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(1467);
	if ((frame[3].i) == (jint(-1))) goto label_2;
	}
	{
	if ((frame[3].i) < (jint(2))) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_ControlPathfinder_passable_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:passable", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1471);
	sp[0].o = frame[1].o;
	jint temp0 = frame[0].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK(sp[1].o))->F_tiles;
	jint temp1 = (jint)((func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int) resolveInterfaceMethod(ctx, &class_mindustry_ai_Pathfinder$PathCost, INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int, sp[0].o))(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	frame[3].i = temp1;
	LINE_NUMBER(1472);
	if ((frame[3].i) == (jint(-1))) goto label_2;
	}
	{
	if ((frame[3].i) >= (7000)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_ControlPathfinder_nearPassable_int_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:nearPassable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1476);
	sp[0].o = frame[2].o;
	jint temp0 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK(sp[1].o))->F_tiles;
	jint temp1 = (jint)((func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int) resolveInterfaceMethod(ctx, &class_mindustry_ai_Pathfinder$PathCost, INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int, sp[0].o))(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	frame[4].i = temp1;
	LINE_NUMBER(1477);
	if ((frame[4].i) == (jint(-1))) goto label_2;
	}
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (50), ((frame[0].i) + (jint(1))));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (7000));
	if (temp0 >= temp2) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_ControlPathfinder_solid_int_mindustry_ai_Pathfinder$PathCost_int_int_R_boolean(jcontext ctx, jint param0, jobject param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:solid", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1481);
	if ((frame[2].i) < 0) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_1;
	{
	if ((frame[2].i) >= (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth)) goto label_1;
	}
	{
	if ((frame[3].i) >= (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wheight)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_solid_int_mindustry_ai_Pathfinder$PathCost_int_boolean_R_boolean(ctx, (frame[0].i), (frame[1].o), ((frame[2].i) + ((frame[3].i) * (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth))), (jint(1)));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_ControlPathfinder_solid_int_mindustry_ai_Pathfinder$PathCost_int_boolean_R_boolean(jcontext ctx, jint param0, jobject param1, jint param2, jbool param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:solid", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1485);
	jint temp0 = (jint)SM_mindustry_ai_ControlPathfinder_cost_int_mindustry_ai_Pathfinder$PathCost_int_R_int(ctx, (frame[0].i), (frame[1].o), (frame[2].i));
	frame[4].i = temp0;
	LINE_NUMBER(1486);
	if ((frame[4].i) == (jint(-1))) goto label_2;
	}
	{
	if ((frame[4].i) < (7000)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_ai_ControlPathfinder_cost_int_mindustry_ai_Pathfinder$PathCost_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:cost", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1490);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, (frame[0].i));
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1491);
	frame[3].i = ((frame[2].i) % (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	frame[4].i = ((frame[2].i) / (clinit_mindustry_ai_Pathfinder(ctx), (jint)SF_mindustry_ai_Pathfinder_wwidth));
	LINE_NUMBER(1492);
	jint temp0 = frame[3].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (temp0 < ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX)) goto label_5;
	}
	{
	jint temp0 = frame[4].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (temp0 < ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY)) goto label_5;
	}
	{
	jint temp0 = frame[3].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp1 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (temp0 > (temp1 + ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth))) goto label_5;
	}
	{
	jint temp0 = frame[4].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp1 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (temp0 <= (temp1 + ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight))) goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(1493);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(1496);
	sp[0].o = frame[1].o;
	jint temp0 = frame[0].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder *) NULL_CHECK(sp[1].o))->F_tiles;
	jint temp1 = (jint)((func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int) resolveInterfaceMethod(ctx, &class_mindustry_ai_Pathfinder$PathCost, INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int, sp[0].o))(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:clusterChanged", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1500);
	frame[5].i = ((frame[3].i) + ((frame[4].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)));
	LINE_NUMBER(1502);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_threadPathRequests;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$PathRequest, sp[0].o));
	LINE_NUMBER(1503);
	jlong temp0 = (jlong)SM_mindustry_gen_FieldIndex_get_int_int_int_R_long(ctx, ((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[7].o)))->F_destination), (frame[2].i), (frame[1].i));
	frame[8].l = temp0;
	LINE_NUMBER(1504);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_fields;
	sp[0].o = (jobject)((func_arc_struct_LongMap_get_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_get_long_R_java_lang_Object])(ctx, sp[0].o, (frame[8].l));
	frame[10].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$FieldCache, sp[0].o));
	LINE_NUMBER(1505);
	if ((frame[10].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[10].o)))->F_fields;
	jint temp0 = (jint)((func_arc_struct_IntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_containsKey_int_R_boolean])(ctx, sp[0].o, (frame[5].i));
	if (temp0 != 0) goto label_8;
	}
label_7:;
	{
	if (((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[7].o)))->F_notFound) == 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(1506);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_invalidRequests;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[7].o));
	}
label_9:;
	LINE_NUMBER(1508);
	goto label_2;
label_3:;
	LINE_NUMBER(1510);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_updateClustersComplete_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:updateClustersComplete", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1513);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clusters;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(1514);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clusters;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(1515);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1516);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(1517);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(1518);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1519);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[1].i)));
	LINE_NUMBER(1520);
	if ((frame[6].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1521);
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[2].i), (frame[4].i), ((frame[1].i) % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)), ((frame[1].i) / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)));
	LINE_NUMBER(1522);
	((func_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int])(ctx, (frame[0].o), (frame[2].i), (frame[4].i), ((frame[1].i) % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)), ((frame[1].i) / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)));
	}
label_10:;
	{
	LINE_NUMBER(1516);
	INST_IINC(4, 1);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1513);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1528);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_updateClustersInner_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:updateClustersInner", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1531);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clusters;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(1532);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clusters;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(1533);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1534);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(1535);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(1536);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1537);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[1].i)));
	LINE_NUMBER(1538);
	if ((frame[6].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1539);
	((func_mindustry_ai_ControlPathfinder_updateInnerEdges_int_int_int_int_mindustry_ai_ControlPathfinder$Cluster) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_updateInnerEdges_int_int_int_int_mindustry_ai_ControlPathfinder$Cluster])(ctx, (frame[0].o), (frame[2].i), (frame[4].i), ((frame[1].i) % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)), ((frame[1].i) / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)), (frame[6].o));
	LINE_NUMBER(1540);
	((func_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int])(ctx, (frame[0].o), (frame[2].i), (frame[4].i), ((frame[1].i) % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)), ((frame[1].i) / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth)));
	}
label_10:;
	{
	LINE_NUMBER(1534);
	INST_IINC(4, 1);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1531);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1546);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:run", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1550);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	frame[1].l = (temp0 + (jlong(1000ll)));
	}
label_9:;
	{
	LINE_NUMBER(1553);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	if (((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_invalidated) == 0) goto label_4;
	}
label_10:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1555);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPlaying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPlaying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(1556);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_arc_util_TaskQueue_run) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_run])(ctx, sp[0].o);
	LINE_NUMBER(1558);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clustersToUpdate;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_arc_func_Intc_2(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_arc_func_Intc_2 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_arc_func_Intc_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSet_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1565);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clustersToInnerUpdate;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_arc_func_Intc_3(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_arc_func_Intc_3 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_arc_func_Intc_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSet_each_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_each_arc_func_Intc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1570);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clustersToInnerUpdate;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(1571);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clustersToUpdate;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(1574);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, (frame[1].l));
	if ((longCompare(temp0, (jlong(1000ll)))) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(1575);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(1577);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_invalidRequests;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(1578);
	jint temp0 = (jint)((func_arc_struct_ObjectSet$ObjectSetIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectSet$ObjectSetIterator_hasNext_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1579);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet$ObjectSetIterator_next_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectSet$ObjectSetIterator_next_R_java_lang_Object])(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$PathRequest, sp[0].o));
	LINE_NUMBER(1582);
	if (((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[4].o)))->F_invalidated) == 0) goto label_23;
	}
	{
	LINE_NUMBER(1583);
	((func_arc_struct_ObjectSet$ObjectSetIterator_remove) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectSet$ObjectSetIterator_remove])(ctx, (frame[3].o));
	LINE_NUMBER(1584);
	goto label_20;
	}
label_23:;
	{
	LINE_NUMBER(1587);
	jlong temp0 = (jlong)SM_mindustry_gen_FieldIndex_get_int_int_int_R_long(ctx, ((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[4].o)))->F_destination), ((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[4].o)))->F_costId), ((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[4].o)))->F_team));
	frame[5].l = temp0;
	LINE_NUMBER(1589);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_fields;
	sp[0].o = (jobject)((func_arc_struct_LongMap_get_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_get_long_R_java_lang_Object])(ctx, sp[0].o, (frame[5].l));
	frame[7].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$FieldCache, sp[0].o));
	LINE_NUMBER(1591);
	if ((frame[7].o) == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(1593);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[7].o)))->F_frontier;
	jint temp0 = (jint)((func_arc_struct_IntQueue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntQueue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(1596);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_fields;
	sp[0].o = (jobject)((func_arc_struct_LongMap_remove_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_remove_long_R_java_lang_Object])(ctx, sp[0].o, ((jlong)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[7].o)))->F_mapKey));
	LINE_NUMBER(1597);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_25);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1600);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_threadPathRequests;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_34:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$PathRequest, sp[0].o));
	LINE_NUMBER(1601);
	if (((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[9].o)))->F_destination) != ((jint)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[4].o)))->F_destination)) goto label_37;
	}
	{
	LINE_NUMBER(1602);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[9].o)))->F_oldCache = (jref) (frame[7].o);
	LINE_NUMBER(1604);
	if ((frame[9].o) == (frame[4].o)) goto label_37;
	}
	{
	LINE_NUMBER(1605);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_26);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_37:;
	LINE_NUMBER(1608);
	goto label_34;
label_35:;
	{
	LINE_NUMBER(1611);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_27);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1613);
	((func_arc_struct_ObjectSet$ObjectSetIterator_remove) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectSet$ObjectSetIterator_remove])(ctx, (frame[3].o));
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(1616);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_28);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1617);
	((func_arc_struct_ObjectSet$ObjectSetIterator_remove) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectSet$ObjectSetIterator_remove])(ctx, (frame[3].o));
	}
label_30:;
	LINE_NUMBER(1619);
	goto label_20;
label_17:;
	{
	LINE_NUMBER(1623);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_fields;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_LongMap_eachValue_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_eachValue_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1631);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(33ll)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1635);
	{ popExceptionFrames(frameRef, 1); goto label_43; }
label_2:;
	LINE_NUMBER(1632);
	INST_ASTORE(3);
	popExceptionFrame(frameRef);
	LINE_NUMBER(1634);
	popStackFrame(ctx);
	INST_RETURN();
label_43:;
	LINE_NUMBER(1643);
	goto label_9;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(1636);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1637);
	if (((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_invalidated) != 0) goto label_45;
	}
	{
	LINE_NUMBER(1638);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	goto label_47;
	}
label_45:;
	LINE_NUMBER(1641);
	popStackFrame(ctx);
	INST_RETURN();
label_47:;
	LINE_NUMBER(1643);
	goto label_9;

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$run$6_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$run$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1624);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1625);
	((func_mindustry_ai_ControlPathfinder_updateFields_mindustry_ai_ControlPathfinder$FieldCache_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_updateFields_mindustry_ai_ControlPathfinder$FieldCache_long])(ctx, (frame[0].o), (frame[1].o), (clinit_mindustry_ai_ControlPathfinder(ctx), (jlong)SF_mindustry_ai_ControlPathfinder_maxUpdate));
	}
label_1:;
	LINE_NUMBER(1627);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$run$5_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$run$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1616);
	((func_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$run$4_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$run$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1611);
	((func_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$run$3_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$run$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1605);
	((func_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$run$2_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$run$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1597);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_fieldList;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$run$1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$run$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1567);
	((func_mindustry_ai_ControlPathfinder_updateClustersInner_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_updateClustersInner_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1568);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$run$0_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$run$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1559);
	((func_mindustry_ai_ControlPathfinder_updateClustersComplete_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_updateClustersComplete_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1562);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clustersToInnerUpdate;
	jint temp0 = (jint)((func_arc_struct_IntSet_remove_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_remove_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1563);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$getCost$0_mindustry_ai_ControlPathfinder$FieldCache_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$getCost$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1363);
	((func_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), ((frame[2].i) / (12)), ((frame[3].i) / (12)), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$getPathPosition$0_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$getPathPosition$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1340);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_threadPathRequests;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1341);
	((func_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$initializePathRequest$0_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$initializePathRequest$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_fieldList;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$addFlowCluster$0_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$addFlowCluster$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1017);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_placeBlock;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, (jfloat(((frame[0].i) * (8)))), (jfloat(((frame[1].i) * (8)))), (jfloat(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$queueClusterUpdate$0_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$queueClusterUpdate$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clustersToUpdate;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((frame[1].i) + ((frame[2].i) * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_cwidth))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_ControlPathfinder_lambda$updateSingleTile$0_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$updateSingleTile$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK((frame[0].o)))->F_clustersToInnerUpdate;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$8(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$checkEvents$8", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	{
	LINE_NUMBER(262);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[0].i = ((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id);
	LINE_NUMBER(263);
	frame[1].i = (jint(0));
	LINE_NUMBER(265);
	jfloat temp0 = jfloat(120.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_29);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (frame[0].i);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(346);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$9_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[28];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$checkEvents$9", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(266);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(268);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_clusters;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))) == nullptr) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_clusters;
	if (((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))), (frame[1].i))) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(269);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	if (temp0 >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_cwidth)) goto label_6;
	}
	{
	LINE_NUMBER(270);
	frame[3].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[3].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	if (temp0 >= ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_cheight)) goto label_11;
	}
	{
	LINE_NUMBER(272);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_clusters;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))), (frame[1].i));
	jint temp0 = frame[3].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_controlPath;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((temp0 * ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[1].o))->F_cwidth)) + (frame[2].i))));
	LINE_NUMBER(273);
	if ((frame[4].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(274);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(0.5f)));
	LINE_NUMBER(275);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_gray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(276);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(278);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((jfloat((((frame[2].i) * (12)) * (8)))) - (jfloat(4.0f))), ((jfloat((((frame[3].i) * (12)) * (8)))) - (jfloat(4.0f))), (jfloat(96.0f)), (jfloat(96.0f)));
	LINE_NUMBER(281);
	frame[5].i = (jint(0));
	}
label_20:;
	{
	if ((frame[5].i) >= (jint(4))) goto label_14;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[4].o)))->F_portals;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(283);
	if ((frame[6].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(285);
	frame[7].i = (jint(0));
	}
label_25:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_23;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[6].o)))->F_items;
	frame[8].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i)));
	LINE_NUMBER(287);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[8].i));
	frame[9].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[8].i));
	frame[10].i = temp1;
	LINE_NUMBER(288);
	jint temp2 = 8;
	jint temp3 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[9].i) - (frame[10].i)));
	frame[11].f = (jfloat((temp2 * (temp3 + (jint(1))))));
	frame[12].f = (jfloat(8.0f));
	LINE_NUMBER(290);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[1].o = frame[4].o;
	jint temp4 = frame[2].i;
	jint temp5 = frame[3].i;
	jint temp6 = frame[5].i;
	jint temp7 = frame[7].i;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, temp4, temp5, temp6, temp7, sp[2].o);
	LINE_NUMBER(292);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_brown;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(293);
	jint temp8 = 30;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp9 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Lines_ellipse_int_float_float_float_float_float(ctx, temp8, temp9, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), ((frame[11].f) / (jfloat(2))), ((frame[12].f) / (jfloat(2))), (((jfloat((frame[5].i))) * (jfloat(90.0f))) - (jfloat(90.0f))));
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[4].o)))->F_portalConnections;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))) != nullptr) goto label_35;
	}
	INST_ACONST_NULL();
	goto label_36;
label_35:;
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$Cluster *) NULL_CHECK((frame[4].o)))->F_portalConnections;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))), (frame[7].i));
	sp += 1;
	}
label_36:;
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	LINE_NUMBER(297);
	if ((frame[13].o) == nullptr) goto label_38;
	}
	{
	LINE_NUMBER(298);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_forest;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(299);
	frame[14].i = (jint(0));
	}
label_41:;
	{
	if ((frame[14].i) >= ((jint)((arc_struct_LongSeq *) NULL_CHECK((frame[13].o)))->F_size)) goto label_38;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((arc_struct_LongSeq *) NULL_CHECK((frame[13].o)))->F_items;
	frame[15].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[14].i)));
	LINE_NUMBER(302);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[1].o = frame[4].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = (jint)SM_mindustry_gen_IntraEdge_dir_long_R_int(ctx, (frame[15].l));
	jint temp3 = (jint)SM_mindustry_gen_IntraEdge_portal_long_R_int(ctx, (frame[15].l));
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v2;
	((func_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	LINE_NUMBER(305);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[17].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[18].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(306);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	frame[19].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	frame[20].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(307);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[17].f), (frame[18].f), (frame[19].f), (frame[20].f));
	LINE_NUMBER(299);
	INST_IINC(14, 1);
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(285);
	INST_IINC(7, 1);
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(281);
	INST_IINC(5, 1);
	goto label_20;
	}
label_14:;
	{
	LINE_NUMBER(270);
	INST_IINC(3, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(269);
	INST_IINC(2, 1);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(319);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_fieldList;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_50:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_51;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$FieldCache, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(321);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[0].o);
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp0);
	frame[4].i = temp1;
	LINE_NUMBER(322);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp2 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[0].o);
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp2);
	frame[5].i = temp3;
	LINE_NUMBER(323);
	frame[6].i = (-100);
	LINE_NUMBER(324);
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[3].o)))->F_fields;
	sp[0].o = (jobject)((func_arc_struct_IntMap_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_55:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_56;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_arc_struct_IntMap$Entry, sp[0].o));
	LINE_NUMBER(325);
	jint temp0 = (jint)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[8].o)))->F_key;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	frame[9].i = (temp0 % ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_cwidth));
	jint temp1 = (jint)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[8].o)))->F_key;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	frame[10].i = (temp1 / ((jint)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_cwidth));
	LINE_NUMBER(326);
	frame[11].i = (jint(0));
	}
label_60:;
	{
	if ((frame[11].i) >= (12)) goto label_61;
	}
	{
	LINE_NUMBER(327);
	frame[12].i = (jint(0));
	}
label_63:;
	{
	if ((frame[12].i) >= (12)) goto label_64;
	}
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[8].o)))->F_value;
	frame[13].i = ((jint)ARRAY_ACCESS(jint, (checkCast(ctx, getArrayClass(&class_int, 1), sp[0].o)), ((frame[12].i) + ((frame[11].i) * (12)))));
	LINE_NUMBER(329);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(1));
	LINE_NUMBER(330);
	jfloat temp0 = jfloat(0.8f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, ((jfloat((frame[13].i))) * (jfloat(3.0f))), (jfloat(1)), (jfloat(1)));
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(331);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(0.5f)));
	LINE_NUMBER(332);
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, (jfloat((((frame[12].i) + ((frame[9].i) * (12))) * (8)))), (jfloat((((frame[11].i) + ((frame[10].i) * (12))) * (8)))), (jfloat(4.0f)));
	LINE_NUMBER(333);
	if ((frame[4].i) != ((frame[12].i) + ((frame[9].i) * (12)))) goto label_71;
	}
	{
	if ((frame[5].i) != ((frame[11].i) + ((frame[10].i) * (12)))) goto label_71;
	}
	{
	LINE_NUMBER(334);
	frame[6].i = (frame[13].i);
	}
label_71:;
	{
	LINE_NUMBER(327);
	INST_IINC(12, 1);
	goto label_63;
	}
label_64:;
	{
	LINE_NUMBER(326);
	INST_IINC(11, 1);
	goto label_60;
	}
label_61:;
	LINE_NUMBER(338);
	goto label_55;
label_56:;
	{
	LINE_NUMBER(339);
	if ((frame[6].i) <= (-100)) goto label_1;
	}
	{
	LINE_NUMBER(340);
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[3].o)))->F_cost;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	jint temp1 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_pathfinder;
	jint temp2 = (jint)((func_mindustry_ai_Pathfinder_get_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_get_int_int_R_int])(ctx, sp[1].o, (frame[4].i), (frame[5].i));
	jint temp3 = (jint)((func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int) resolveInterfaceMethod(ctx, &class_mindustry_ai_Pathfinder$PathCost, INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int, sp[0].o))(ctx, sp[0].o, temp1, temp2);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 / \u0001"_j.string, 2, boxInteger(ctx, temp0), boxInteger(ctx, temp3));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp4 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp5 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color(ctx, sp[0].o, temp4, temp5, sp[1].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(342);
	goto label_74;
label_2:;
	INST_ASTORE(4);
label_74:;
	LINE_NUMBER(343);
	goto label_50;
label_51:;
	LINE_NUMBER(344);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$3(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$checkEvents$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	{
	LINE_NUMBER(240);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_unitRequests;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$PathRequest, sp[0].o));
	LINE_NUMBER(242);
	jlong temp0 = (jlong)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_lastUpdateId;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if ((longCompare(temp0, (((jlong)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_updateId) - (jlong(10ll))))) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAdded_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isAdded_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(243);
	((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[1].o)))->F_invalidated = (jint(1));
	LINE_NUMBER(245);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(246);
	jfloat temp0 = jfloat(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_31);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_5:;
	LINE_NUMBER(248);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(250);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_fieldList;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_ai_ControlPathfinder$FieldCache, sp[0].o));
	LINE_NUMBER(252);
	jlong temp0 = (jlong)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[1].o)))->F_lastUpdateId;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if ((longCompare(temp0, (((jlong)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_updateId) - (jlong(30ll))))) > 0) goto label_11;
	}
	{
	LINE_NUMBER(254);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_32);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	jfloat temp0 = jfloat(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_java_lang_Runnable_33);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_11:;
	LINE_NUMBER(257);
	goto label_8;
label_9:;
	LINE_NUMBER(258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$7_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$checkEvents$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(255);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_fieldList;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$6_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$checkEvents$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(254);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_fields;
	sp[0].o = (jobject)((func_arc_struct_LongMap_remove_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_remove_long_R_java_lang_Object])(ctx, sp[0].o, ((jlong)((mindustry_ai_ControlPathfinder$FieldCache *) NULL_CHECK((frame[0].o)))->F_mapKey));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$5_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$checkEvents$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(246);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_unitRequests;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathRequest *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$4_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$checkEvents$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(245);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[0].o = (jobject)((mindustry_ai_ControlPathfinder *) NULL_CHECK(sp[0].o))->F_threadPathRequests;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$2_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$checkEvents$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(235);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[0].o)))->F_tile;
	((func_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$1_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$checkEvents$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(228);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	((func_mindustry_ai_ControlPathfinder_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_stop])(ctx, sp[0].o);
	LINE_NUMBER(230);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder);
	init_mindustry_ai_ControlPathfinder(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	SF_mindustry_Vars_controlPath = sp[0].o;
	LINE_NUMBER(231);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	((func_mindustry_ai_ControlPathfinder_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_start])(ctx, sp[0].o);
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$checkEvents$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(225);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	((func_mindustry_ai_ControlPathfinder_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_stop])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ai_ControlPathfinder_lambda$static$3_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$static$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != (frame[0].i)) goto label_2;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_teamPassable_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
label_3:;
	INST_ICONST(-1);
	goto label_4;
label_1:;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_liquid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_5;
	}
	INST_SIPUSH(6000);
	goto label_6;
label_5:;
	INST_ICONST(1);
label_6:;
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 == (frame[0].i)) goto label_7;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_7;
	}
	(sp++)->i = jint(1000000);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(67);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_nearGround_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_nearSolid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_11;
	}
label_10:;
	INST_BIPUSH(6);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	INST_IADD();
label_4:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_ai_ControlPathfinder_lambda$static$2_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$static$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_legSolid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	LINE_NUMBER(58);
	jint temp0 = jint(1);
	LINE_NUMBER(57);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_nearDeep_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_4;
	}
	INST_BIPUSH(8);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(58);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_deep_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_7;
	}
	INST_SIPUSH(6000);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(59);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_nearLegSolid_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_10;
	}
	INST_ICONST(3);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	INST_IADD();
label_2:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_ai_ControlPathfinder_lambda$static$1_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$static$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(49);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != (frame[0].i)) goto label_2;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_teamPassable_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
label_3:;
	INST_ICONST(-1);
	goto label_4;
label_1:;
	{
	LINE_NUMBER(51);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 == (frame[0].i)) goto label_5;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_5;
	}
	(sp++)->i = jint(1000000);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	jint temp0 = sp[0].i + (jint(1));
	LINE_NUMBER(53);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_nearSolid_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_8;
	}
	INST_BIPUSH(6);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	INST_IADD();
label_4:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_ai_ControlPathfinder_lambda$static$0_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:lambda$static$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(35);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_allDeep_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != (frame[0].i)) goto label_4;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_teamPassable_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 != 0) goto label_3;
	}
label_5:;
	INST_ICONST(-1);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 == (frame[0].i)) goto label_6;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_team_int_R_int(ctx, (frame[1].i));
	if (temp0 == 0) goto label_6;
	}
	{
	jint temp0 = (jint)SM_mindustry_gen_PathTile_solid_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_6;
	}
	(sp++)->i = jint(1000000);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	jint temp0 = sp[0].i + (jint(1));
	LINE_NUMBER(41);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_nearSolid_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_9;
	}
	INST_BIPUSH(6);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(42);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_nearLiquid_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_12;
	}
	INST_BIPUSH(8);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(43);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_deep_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_15;
	}
	INST_SIPUSH(6000);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(44);
	jint temp1 = (jint)SM_mindustry_gen_PathTile_damages_int_R_boolean(ctx, (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_18;
	}
	INST_BIPUSH(50);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	INST_IADD();
label_2:;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_ai_ControlPathfinder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ai_ControlPathfinder_wallImpassableCap = jint(1000000);
	SF_mindustry_ai_ControlPathfinder_solidCap = jint(7000);
	SF_mindustry_ai_ControlPathfinder_costIdGround = jint(0);
	SF_mindustry_ai_ControlPathfinder_costIdHover = jint(1);
	SF_mindustry_ai_ControlPathfinder_costIdLegs = jint(2);
	SF_mindustry_ai_ControlPathfinder_costIdNaval = jint(3);
	SF_mindustry_ai_ControlPathfinder_updateStepInterval = jint(200);
	SF_mindustry_ai_ControlPathfinder_updateFPS = jint(30);
	SF_mindustry_ai_ControlPathfinder_updateInterval = jint(33);
	SF_mindustry_ai_ControlPathfinder_invalidateCheckInterval = jint(1000);
	SF_mindustry_ai_ControlPathfinder_clusterSize = jint(12);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/ControlPathfinder:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_ControlPathfinder(ctx);
	{
	LINE_NUMBER(33);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_4(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_4 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_4);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_costGround = sp[0].o;
	LINE_NUMBER(47);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_5(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_5 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_5);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_costHover = sp[0].o;
	LINE_NUMBER(55);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_6(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_6 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_6);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_costLegs = sp[0].o;
	LINE_NUMBER(61);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_7(ctx);
		auto proxy = (mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_7 *) gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder_invoke_mindustry_ai_Pathfinder$PathCost_7);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_costNaval = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ai_Pathfinder$PathCost, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_ControlPathfinder_costGround;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_ControlPathfinder_costHover;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_ControlPathfinder_costLegs;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_ControlPathfinder_costNaval;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_costTypes = sp[0].o;
	LINE_NUMBER(82);
	jlong temp4 = (jlong)SM_arc_util_Time_millisToNanos_long_R_long(ctx, (jlong(12ll)));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_maxUpdate = temp4;
	LINE_NUMBER(86);
	clinit_mindustry_ai_ControlPathfinder$PathfindResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_ControlPathfinder$PathfindResult);
	init_mindustry_ai_ControlPathfinder$PathfindResult(ctx, sp[0].o);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_pathResult = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(0));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_offsets = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(0));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_moveDirs = sp[0].o;
	LINE_NUMBER(104);
	sp[0].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(-1));
	clinit_mindustry_ai_ControlPathfinder(ctx);
	SF_mindustry_ai_ControlPathfinder_nextOffsets = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_ControlPathfinder;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Field thread
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[37]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getCluster
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getCluster
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method clusterAstar
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[21]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getPathPosition
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[29]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method getPathPosition
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[30]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ai_ControlPathfinder[] {
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
	(void *) M_mindustry_ai_ControlPathfinder_run,
	(void *) M_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile,
	(void *) M_mindustry_ai_ControlPathfinder_updateSingleTile_mindustry_world_Tile,
	(void *) M_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int,
	(void *) M_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2,
	(void *) M_mindustry_ai_ControlPathfinder_start,
	(void *) M_mindustry_ai_ControlPathfinder_stop,
	(void *) M_mindustry_ai_ControlPathfinder_getCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster,
	(void *) M_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster,
	(void *) M_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster,
	(void *) M_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster,
	(void *) M_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster,
	(void *) M_mindustry_ai_ControlPathfinder_updateInnerEdges_int_int_int_int_mindustry_ai_ControlPathfinder$Cluster,
	(void *) M_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster,
	(void *) M_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float,
	(void *) M_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int,
	(void *) M_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int,
	(void *) M_mindustry_ai_ControlPathfinder_clusterNodeHeuristic_int_int_int_int_R_float,
	(void *) M_mindustry_ai_ControlPathfinder_clusterAstar_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_R_arc_struct_IntSeq,
	(void *) M_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq,
	(void *) M_mindustry_ai_ControlPathfinder_updateFields_mindustry_ai_ControlPathfinder$FieldCache_long,
	(void *) M_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean,
	(void *) M_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean,
	(void *) M_mindustry_ai_ControlPathfinder_initializePathRequest_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int,
	(void *) M_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost,
	(void *) M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean,
	(void *) M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean,
	(void *) M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult,
	(void *) M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult,
	(void *) M_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest,
	(void *) M_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int,
	(void *) M_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int,
	(void *) M_mindustry_ai_ControlPathfinder_updateClustersComplete_int,
	(void *) M_mindustry_ai_ControlPathfinder_updateClustersInner_int,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$run$6_mindustry_ai_ControlPathfinder$FieldCache,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$run$5_mindustry_ai_ControlPathfinder$PathRequest,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$run$4_mindustry_ai_ControlPathfinder$PathRequest,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$run$3_mindustry_ai_ControlPathfinder$PathRequest,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$run$2_mindustry_ai_ControlPathfinder$FieldCache,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$run$1_int,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$run$0_int,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$getCost$0_mindustry_ai_ControlPathfinder$FieldCache_int_int,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$getPathPosition$0_mindustry_ai_ControlPathfinder$PathRequest,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$initializePathRequest$0_mindustry_ai_ControlPathfinder$FieldCache,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$queueClusterUpdate$0_int_int,
	(void *) M_mindustry_ai_ControlPathfinder_lambda$updateSingleTile$0_int,
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
	{ "run", "()V" },
	{ "updateTile", "(Lmindustry/world/Tile;)V" },
	{ "updateSingleTile", "(Lmindustry/world/Tile;)V" },
	{ "queueClusterUpdate", "(II)V" },
	{ "portalToVec", "(Lmindustry/ai/ControlPathfinder$Cluster;IIIILarc/math/geom/Vec2;)V" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "getCluster", "(IIII)Lmindustry/ai/ControlPathfinder$Cluster;" },
	{ "getCluster", "(III)Lmindustry/ai/ControlPathfinder$Cluster;" },
	{ "getCreateCluster", "(IIII)Lmindustry/ai/ControlPathfinder$Cluster;" },
	{ "getCreateCluster", "(III)Lmindustry/ai/ControlPathfinder$Cluster;" },
	{ "updateCluster", "(IIII)Lmindustry/ai/ControlPathfinder$Cluster;" },
	{ "updateInnerEdges", "(IIIILmindustry/ai/ControlPathfinder$Cluster;)V" },
	{ "updateInnerEdges", "(ILmindustry/ai/Pathfinder$PathCost;IILmindustry/ai/ControlPathfinder$Cluster;)V" },
	{ "innerAstar", "(ILmindustry/ai/Pathfinder$PathCost;IIIIIIIIII)F" },
	{ "makeNodeIndex", "(IIII)I" },
	{ "findClosestNode", "(IIII)I" },
	{ "clusterNodeHeuristic", "(IIII)F" },
	{ "clusterAstar", "(Lmindustry/ai/ControlPathfinder$PathRequest;III)Larc/struct/IntSeq;" },
	{ "checkEdges", "(Lmindustry/ai/ControlPathfinder$PathRequest;IIIIIILarc/struct/LongSeq;)V" },
	{ "updateFields", "(Lmindustry/ai/ControlPathfinder$FieldCache;J)V" },
	{ "addFlowCluster", "(Lmindustry/ai/ControlPathfinder$FieldCache;IZ)V" },
	{ "addFlowCluster", "(Lmindustry/ai/ControlPathfinder$FieldCache;IIZ)V" },
	{ "initializePathRequest", "(Lmindustry/ai/ControlPathfinder$PathRequest;IIIIII)V" },
	{ "idToCost", "(I)Lmindustry/ai/Pathfinder$PathCost;" },
	{ "getPathPosition", "(Lmindustry/gen/Unit;Larc/math/geom/Vec2;Larc/math/geom/Vec2;[Z)Z" },
	{ "getPathPosition", "(Lmindustry/gen/Unit;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;[Z)Z" },
	{ "getPathPosition", "(Lmindustry/gen/Unit;Larc/math/geom/Vec2;)Lmindustry/ai/ControlPathfinder$PathfindResult;" },
	{ "getPathPosition", "(Lmindustry/gen/Unit;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Lmindustry/ai/ControlPathfinder$PathfindResult;" },
	{ "recalculatePath", "(Lmindustry/ai/ControlPathfinder$PathRequest;)V" },
	{ "getCost", "(Lmindustry/ai/ControlPathfinder$FieldCache;IIZ)I" },
	{ "clusterChanged", "(IIII)V" },
	{ "updateClustersComplete", "(I)V" },
	{ "updateClustersInner", "(I)V" },
	{ "lambda$run$6", "(Lmindustry/ai/ControlPathfinder$FieldCache;)V" },
	{ "lambda$run$5", "(Lmindustry/ai/ControlPathfinder$PathRequest;)V" },
	{ "lambda$run$4", "(Lmindustry/ai/ControlPathfinder$PathRequest;)V" },
	{ "lambda$run$3", "(Lmindustry/ai/ControlPathfinder$PathRequest;)V" },
	{ "lambda$run$2", "(Lmindustry/ai/ControlPathfinder$FieldCache;)V" },
	{ "lambda$run$1", "(I)V" },
	{ "lambda$run$0", "(I)V" },
	{ "lambda$getCost$0", "(Lmindustry/ai/ControlPathfinder$FieldCache;II)V" },
	{ "lambda$getPathPosition$0", "(Lmindustry/ai/ControlPathfinder$PathRequest;)V" },
	{ "lambda$initializePathRequest$0", "(Lmindustry/ai/ControlPathfinder$FieldCache;)V" },
	{ "lambda$queueClusterUpdate$0", "(II)V" },
	{ "lambda$updateSingleTile$0", "(I)V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static jclass innerClasses[] {
	&class_mindustry_ai_ControlPathfinder$Cluster,
	&class_mindustry_ai_ControlPathfinder$PathRequest,
	&class_mindustry_ai_ControlPathfinder$FieldCache,
	&class_mindustry_ai_ControlPathfinder$PathfindResult,
	&class_mindustry_ai_ControlPathfinder$NodeIndexStruct,
	&class_mindustry_ai_ControlPathfinder$IntraEdgeStruct,
	&class_mindustry_ai_ControlPathfinder$FieldIndexStruct,
};

static FieldMetadata fields[] {
	{ "wallImpassableCap", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_wallImpassableCap, "I", 26 },
	{ "solidCap", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_solidCap, "I", 26 },
	{ "initialized", &class_boolean, (intptr_t) &SF_mindustry_ai_ControlPathfinder_initialized, "Z", 10 },
	{ "showDebug", &class_boolean, (intptr_t) &SF_mindustry_ai_ControlPathfinder_showDebug, "Z", 9 },
	{ "costGround", &class_mindustry_ai_Pathfinder$PathCost, (intptr_t) &SF_mindustry_ai_ControlPathfinder_costGround, "Lmindustry/ai/Pathfinder$PathCost;", 25 },
	{ "costHover", &class_mindustry_ai_Pathfinder$PathCost, (intptr_t) &SF_mindustry_ai_ControlPathfinder_costHover, "Lmindustry/ai/Pathfinder$PathCost;", 25 },
	{ "costLegs", &class_mindustry_ai_Pathfinder$PathCost, (intptr_t) &SF_mindustry_ai_ControlPathfinder_costLegs, "Lmindustry/ai/Pathfinder$PathCost;", 25 },
	{ "costNaval", &class_mindustry_ai_Pathfinder$PathCost, (intptr_t) &SF_mindustry_ai_ControlPathfinder_costNaval, "Lmindustry/ai/Pathfinder$PathCost;", 25 },
	{ "costIdGround", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_costIdGround, "I", 25 },
	{ "costIdHover", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_costIdHover, "I", 25 },
	{ "costIdLegs", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_costIdLegs, "I", 25 },
	{ "costIdNaval", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_costIdNaval, "I", 25 },
	{ "costTypes", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_ControlPathfinder_costTypes, "Larc/struct/Seq;", 25 },
	{ "maxUpdate", &class_long, (intptr_t) &SF_mindustry_ai_ControlPathfinder_maxUpdate, "J", 26 },
	{ "updateStepInterval", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_updateStepInterval, "I", 26 },
	{ "updateFPS", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_updateFPS, "I", 26 },
	{ "updateInterval", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_updateInterval, "I", 26 },
	{ "invalidateCheckInterval", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_invalidateCheckInterval, "I", 26 },
	{ "pathResult", &class_mindustry_ai_ControlPathfinder$PathfindResult, (intptr_t) &SF_mindustry_ai_ControlPathfinder_pathResult, "Lmindustry/ai/ControlPathfinder$PathfindResult;", 26 },
	{ "clusterSize", &class_int, (intptr_t) &SF_mindustry_ai_ControlPathfinder_clusterSize, "I", 24 },
	{ "offsets", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_ai_ControlPathfinder_offsets, "[I", 24 },
	{ "moveDirs", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_ai_ControlPathfinder_moveDirs, "[I", 24 },
	{ "nextOffsets", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_ai_ControlPathfinder_nextOffsets, "[I", 24 },
	{ "clusters", getArrayClass(&class_mindustry_ai_ControlPathfinder$Cluster, 3), offsetof(mindustry_ai_ControlPathfinder, F_clusters), "[[[Lmindustry/ai/ControlPathfinder$Cluster;", 16 },
	{ "cwidth", &class_int, offsetof(mindustry_ai_ControlPathfinder, F_cwidth), "I", 16 },
	{ "cheight", &class_int, offsetof(mindustry_ai_ControlPathfinder, F_cheight), "I", 16 },
	{ "usedEdges", &class_arc_struct_IntSet, offsetof(mindustry_ai_ControlPathfinder, F_usedEdges), "Larc/struct/IntSet;", 16 },
	{ "queue", &class_arc_util_TaskQueue, offsetof(mindustry_ai_ControlPathfinder, F_queue), "Larc/util/TaskQueue;", 16 },
	{ "unitRequests", &class_arc_struct_ObjectMap, offsetof(mindustry_ai_ControlPathfinder, F_unitRequests), "Larc/struct/ObjectMap;", 16 },
	{ "threadPathRequests", &class_arc_struct_Seq, offsetof(mindustry_ai_ControlPathfinder, F_threadPathRequests), "Larc/struct/Seq;", 16 },
	{ "fields", &class_arc_struct_LongMap, offsetof(mindustry_ai_ControlPathfinder, F_fields), "Larc/struct/LongMap;", 16 },
	{ "fieldList", &class_arc_struct_Seq, offsetof(mindustry_ai_ControlPathfinder, F_fieldList), "Larc/struct/Seq;", 16 },
	{ "innerCosts", &class_arc_struct_IntFloatMap, offsetof(mindustry_ai_ControlPathfinder, F_innerCosts), "Larc/struct/IntFloatMap;", 16 },
	{ "innerFrontier", &class_mindustry_ai_PathfindQueue, offsetof(mindustry_ai_ControlPathfinder, F_innerFrontier), "Lmindustry/ai/PathfindQueue;", 16 },
	{ "clustersToUpdate", &class_arc_struct_IntSet, offsetof(mindustry_ai_ControlPathfinder, F_clustersToUpdate), "Larc/struct/IntSet;", 16 },
	{ "clustersToInnerUpdate", &class_arc_struct_IntSet, offsetof(mindustry_ai_ControlPathfinder, F_clustersToInnerUpdate), "Larc/struct/IntSet;", 16 },
	{ "invalidRequests", &class_arc_struct_ObjectSet, offsetof(mindustry_ai_ControlPathfinder, F_invalidRequests), "Larc/struct/ObjectSet;", 16 },
	{ "thread", &class_java_lang_Thread, offsetof(mindustry_ai_ControlPathfinder, F_thread), "Ljava/lang/Thread;", 0 },
	{ "invalidated", &class_boolean, offsetof(mindustry_ai_ControlPathfinder, F_invalidated), "Z", 64 },
};

static MethodMetadata methods[] {
	{ "checkEvents", (intptr_t) SM_mindustry_ai_ControlPathfinder_checkEvents, 0, "()V", 8 },
	{ "<init>", (intptr_t) init_mindustry_ai_ControlPathfinder, 0, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile, VTABLE_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "updateSingleTile", (intptr_t) M_mindustry_ai_ControlPathfinder_updateSingleTile_mindustry_world_Tile, VTABLE_mindustry_ai_ControlPathfinder_updateSingleTile_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "queueClusterUpdate", (intptr_t) M_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int, VTABLE_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int, "(II)V", 0 },
	{ "portalToVec", (intptr_t) M_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2, VTABLE_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2, "(Lmindustry/ai/ControlPathfinder$Cluster;IIIILarc/math/geom/Vec2;)V", 0 },
	{ "start", (intptr_t) M_mindustry_ai_ControlPathfinder_start, VTABLE_mindustry_ai_ControlPathfinder_start, "()V", 2 },
	{ "stop", (intptr_t) M_mindustry_ai_ControlPathfinder_stop, VTABLE_mindustry_ai_ControlPathfinder_stop, "()V", 2 },
	{ "getCluster", (intptr_t) M_mindustry_ai_ControlPathfinder_getCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster, VTABLE_mindustry_ai_ControlPathfinder_getCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster, "(IIII)Lmindustry/ai/ControlPathfinder$Cluster;", 0 },
	{ "getCluster", (intptr_t) M_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster, VTABLE_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster, "(III)Lmindustry/ai/ControlPathfinder$Cluster;", 0 },
	{ "getCreateCluster", (intptr_t) M_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster, VTABLE_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster, "(IIII)Lmindustry/ai/ControlPathfinder$Cluster;", 0 },
	{ "getCreateCluster", (intptr_t) M_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster, VTABLE_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster, "(III)Lmindustry/ai/ControlPathfinder$Cluster;", 0 },
	{ "updateCluster", (intptr_t) M_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster, VTABLE_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster, "(IIII)Lmindustry/ai/ControlPathfinder$Cluster;", 0 },
	{ "updateInnerEdges", (intptr_t) M_mindustry_ai_ControlPathfinder_updateInnerEdges_int_int_int_int_mindustry_ai_ControlPathfinder$Cluster, VTABLE_mindustry_ai_ControlPathfinder_updateInnerEdges_int_int_int_int_mindustry_ai_ControlPathfinder$Cluster, "(IIIILmindustry/ai/ControlPathfinder$Cluster;)V", 0 },
	{ "updateInnerEdges", (intptr_t) M_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster, VTABLE_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster, "(ILmindustry/ai/Pathfinder$PathCost;IILmindustry/ai/ControlPathfinder$Cluster;)V", 0 },
	{ "heuristic", (intptr_t) SM_mindustry_ai_ControlPathfinder_heuristic_int_int_R_float, 0, "(II)F", 10 },
	{ "tcost", (intptr_t) SM_mindustry_ai_ControlPathfinder_tcost_int_mindustry_ai_Pathfinder$PathCost_int_R_int, 0, "(ILmindustry/ai/Pathfinder$PathCost;I)I", 10 },
	{ "tileCost", (intptr_t) SM_mindustry_ai_ControlPathfinder_tileCost_int_mindustry_ai_Pathfinder$PathCost_int_int_R_float, 0, "(ILmindustry/ai/Pathfinder$PathCost;II)F", 10 },
	{ "innerAstar", (intptr_t) M_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float, VTABLE_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float, "(ILmindustry/ai/Pathfinder$PathCost;IIIIIIIIII)F", 0 },
	{ "makeNodeIndex", (intptr_t) M_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int, VTABLE_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int, "(IIII)I", 0 },
	{ "findClosestNode", (intptr_t) M_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int, VTABLE_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int, "(IIII)I", 2 },
	{ "clusterNodeHeuristic", (intptr_t) M_mindustry_ai_ControlPathfinder_clusterNodeHeuristic_int_int_int_int_R_float, VTABLE_mindustry_ai_ControlPathfinder_clusterNodeHeuristic_int_int_int_int_R_float, "(IIII)F", 2 },
	{ "clusterAstar", (intptr_t) M_mindustry_ai_ControlPathfinder_clusterAstar_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_R_arc_struct_IntSeq, VTABLE_mindustry_ai_ControlPathfinder_clusterAstar_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_R_arc_struct_IntSeq, "(Lmindustry/ai/ControlPathfinder$PathRequest;III)Larc/struct/IntSeq;", 0 },
	{ "checkEdges", (intptr_t) M_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq, VTABLE_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq, "(Lmindustry/ai/ControlPathfinder$PathRequest;IIIIIILarc/struct/LongSeq;)V", 2 },
	{ "updateFields", (intptr_t) M_mindustry_ai_ControlPathfinder_updateFields_mindustry_ai_ControlPathfinder$FieldCache_long, VTABLE_mindustry_ai_ControlPathfinder_updateFields_mindustry_ai_ControlPathfinder$FieldCache_long, "(Lmindustry/ai/ControlPathfinder$FieldCache;J)V", 2 },
	{ "addFlowCluster", (intptr_t) M_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean, VTABLE_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean, "(Lmindustry/ai/ControlPathfinder$FieldCache;IZ)V", 2 },
	{ "addFlowCluster", (intptr_t) M_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean, VTABLE_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean, "(Lmindustry/ai/ControlPathfinder$FieldCache;IIZ)V", 2 },
	{ "initializePathRequest", (intptr_t) M_mindustry_ai_ControlPathfinder_initializePathRequest_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int, VTABLE_mindustry_ai_ControlPathfinder_initializePathRequest_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int, "(Lmindustry/ai/ControlPathfinder$PathRequest;IIIIII)V", 2 },
	{ "idToCost", (intptr_t) M_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost, VTABLE_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost, "(I)Lmindustry/ai/Pathfinder$PathCost;", 2 },
	{ "isNearObstacle", (intptr_t) SM_mindustry_ai_ControlPathfinder_isNearObstacle_mindustry_gen_Unit_int_int_int_int_R_boolean, 0, "(Lmindustry/gen/Unit;IIII)Z", 9 },
	{ "getPathPosition", (intptr_t) M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean, VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean, "(Lmindustry/gen/Unit;Larc/math/geom/Vec2;Larc/math/geom/Vec2;[Z)Z", 131073 },
	{ "getPathPosition", (intptr_t) M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean, VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean, "(Lmindustry/gen/Unit;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;[Z)Z", 131073 },
	{ "getPathPosition", (intptr_t) M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult, VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult, "(Lmindustry/gen/Unit;Larc/math/geom/Vec2;)Lmindustry/ai/ControlPathfinder$PathfindResult;", 1 },
	{ "getPathPosition", (intptr_t) M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult, VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult, "(Lmindustry/gen/Unit;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Lmindustry/ai/ControlPathfinder$PathfindResult;", 1 },
	{ "recalculatePath", (intptr_t) M_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest, VTABLE_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest, "(Lmindustry/ai/ControlPathfinder$PathRequest;)V", 2 },
	{ "getCost", (intptr_t) M_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int, VTABLE_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int, "(Lmindustry/ai/ControlPathfinder$FieldCache;IIZ)I", 2 },
	{ "raycast", (intptr_t) SM_mindustry_ai_ControlPathfinder_raycast_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_R_boolean, 0, "(ILmindustry/ai/Pathfinder$PathCost;IIII)Z", 10 },
	{ "raycastFastAvoid", (intptr_t) SM_mindustry_ai_ControlPathfinder_raycastFastAvoid_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_R_int, 0, "(ILmindustry/ai/Pathfinder$PathCost;IIII)I", 9 },
	{ "overlap", (intptr_t) SM_mindustry_ai_ControlPathfinder_overlap_int_int_mindustry_ai_Pathfinder$PathCost_int_int_float_float_float_float_float_R_boolean, 0, "(IILmindustry/ai/Pathfinder$PathCost;IIFFFFF)Z", 10 },
	{ "raycastRect", (intptr_t) SM_mindustry_ai_ControlPathfinder_raycastRect_int_float_float_float_float_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_float_R_boolean, 0, "(IFFFFILmindustry/ai/Pathfinder$PathCost;IIIIF)Z", 10 },
	{ "avoid", (intptr_t) SM_mindustry_ai_ControlPathfinder_avoid_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean, 0, "(ILmindustry/ai/Pathfinder$PathCost;I)Z", 10 },
	{ "passable", (intptr_t) SM_mindustry_ai_ControlPathfinder_passable_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean, 0, "(ILmindustry/ai/Pathfinder$PathCost;I)Z", 10 },
	{ "nearPassable", (intptr_t) SM_mindustry_ai_ControlPathfinder_nearPassable_int_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean, 0, "(IILmindustry/ai/Pathfinder$PathCost;I)Z", 10 },
	{ "solid", (intptr_t) SM_mindustry_ai_ControlPathfinder_solid_int_mindustry_ai_Pathfinder$PathCost_int_int_R_boolean, 0, "(ILmindustry/ai/Pathfinder$PathCost;II)Z", 10 },
	{ "solid", (intptr_t) SM_mindustry_ai_ControlPathfinder_solid_int_mindustry_ai_Pathfinder$PathCost_int_boolean_R_boolean, 0, "(ILmindustry/ai/Pathfinder$PathCost;IZ)Z", 10 },
	{ "cost", (intptr_t) SM_mindustry_ai_ControlPathfinder_cost_int_mindustry_ai_Pathfinder$PathCost_int_R_int, 0, "(ILmindustry/ai/Pathfinder$PathCost;I)I", 10 },
	{ "clusterChanged", (intptr_t) M_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int, VTABLE_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int, "(IIII)V", 2 },
	{ "updateClustersComplete", (intptr_t) M_mindustry_ai_ControlPathfinder_updateClustersComplete_int, VTABLE_mindustry_ai_ControlPathfinder_updateClustersComplete_int, "(I)V", 2 },
	{ "updateClustersInner", (intptr_t) M_mindustry_ai_ControlPathfinder_updateClustersInner_int, VTABLE_mindustry_ai_ControlPathfinder_updateClustersInner_int, "(I)V", 2 },
	{ "run", (intptr_t) M_mindustry_ai_ControlPathfinder_run, VTABLE_mindustry_ai_ControlPathfinder_run, "()V", 1 },
	{ "lambda$run$6", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$run$6_mindustry_ai_ControlPathfinder$FieldCache, VTABLE_mindustry_ai_ControlPathfinder_lambda$run$6_mindustry_ai_ControlPathfinder$FieldCache, "(Lmindustry/ai/ControlPathfinder$FieldCache;)V", 4098 },
	{ "lambda$run$5", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$run$5_mindustry_ai_ControlPathfinder$PathRequest, VTABLE_mindustry_ai_ControlPathfinder_lambda$run$5_mindustry_ai_ControlPathfinder$PathRequest, "(Lmindustry/ai/ControlPathfinder$PathRequest;)V", 4098 },
	{ "lambda$run$4", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$run$4_mindustry_ai_ControlPathfinder$PathRequest, VTABLE_mindustry_ai_ControlPathfinder_lambda$run$4_mindustry_ai_ControlPathfinder$PathRequest, "(Lmindustry/ai/ControlPathfinder$PathRequest;)V", 4098 },
	{ "lambda$run$3", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$run$3_mindustry_ai_ControlPathfinder$PathRequest, VTABLE_mindustry_ai_ControlPathfinder_lambda$run$3_mindustry_ai_ControlPathfinder$PathRequest, "(Lmindustry/ai/ControlPathfinder$PathRequest;)V", 4098 },
	{ "lambda$run$2", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$run$2_mindustry_ai_ControlPathfinder$FieldCache, VTABLE_mindustry_ai_ControlPathfinder_lambda$run$2_mindustry_ai_ControlPathfinder$FieldCache, "(Lmindustry/ai/ControlPathfinder$FieldCache;)V", 4098 },
	{ "lambda$run$1", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$run$1_int, VTABLE_mindustry_ai_ControlPathfinder_lambda$run$1_int, "(I)V", 4098 },
	{ "lambda$run$0", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$run$0_int, VTABLE_mindustry_ai_ControlPathfinder_lambda$run$0_int, "(I)V", 4098 },
	{ "lambda$getCost$0", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$getCost$0_mindustry_ai_ControlPathfinder$FieldCache_int_int, VTABLE_mindustry_ai_ControlPathfinder_lambda$getCost$0_mindustry_ai_ControlPathfinder$FieldCache_int_int, "(Lmindustry/ai/ControlPathfinder$FieldCache;II)V", 4098 },
	{ "lambda$getPathPosition$0", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$getPathPosition$0_mindustry_ai_ControlPathfinder$PathRequest, VTABLE_mindustry_ai_ControlPathfinder_lambda$getPathPosition$0_mindustry_ai_ControlPathfinder$PathRequest, "(Lmindustry/ai/ControlPathfinder$PathRequest;)V", 4098 },
	{ "lambda$initializePathRequest$0", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$initializePathRequest$0_mindustry_ai_ControlPathfinder$FieldCache, VTABLE_mindustry_ai_ControlPathfinder_lambda$initializePathRequest$0_mindustry_ai_ControlPathfinder$FieldCache, "(Lmindustry/ai/ControlPathfinder$FieldCache;)V", 4098 },
	{ "lambda$addFlowCluster$0", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$addFlowCluster$0_int_int, 0, "(II)V", 4106 },
	{ "lambda$queueClusterUpdate$0", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$queueClusterUpdate$0_int_int, VTABLE_mindustry_ai_ControlPathfinder_lambda$queueClusterUpdate$0_int_int, "(II)V", 4098 },
	{ "lambda$updateSingleTile$0", (intptr_t) M_mindustry_ai_ControlPathfinder_lambda$updateSingleTile$0_int, VTABLE_mindustry_ai_ControlPathfinder_lambda$updateSingleTile$0_int, "(I)V", 4098 },
	{ "lambda$checkEvents$8", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$8, 0, "()V", 4106 },
	{ "lambda$checkEvents$9", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$9_int_int, 0, "(II)V", 4106 },
	{ "lambda$checkEvents$3", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$3, 0, "()V", 4106 },
	{ "lambda$checkEvents$7", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$7_mindustry_ai_ControlPathfinder$FieldCache, 0, "(Lmindustry/ai/ControlPathfinder$FieldCache;)V", 4106 },
	{ "lambda$checkEvents$6", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$6_mindustry_ai_ControlPathfinder$FieldCache, 0, "(Lmindustry/ai/ControlPathfinder$FieldCache;)V", 4106 },
	{ "lambda$checkEvents$5", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$5_mindustry_ai_ControlPathfinder$PathRequest, 0, "(Lmindustry/ai/ControlPathfinder$PathRequest;)V", 4106 },
	{ "lambda$checkEvents$4", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$4_mindustry_ai_ControlPathfinder$PathRequest, 0, "(Lmindustry/ai/ControlPathfinder$PathRequest;)V", 4106 },
	{ "lambda$checkEvents$2", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$2_mindustry_game_EventType$TileChangeEvent, 0, "(Lmindustry/game/EventType$TileChangeEvent;)V", 4106 },
	{ "lambda$checkEvents$1", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$1_mindustry_game_EventType$WorldLoadEvent, 0, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4106 },
	{ "lambda$checkEvents$0", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$0_mindustry_game_EventType$ResetEvent, 0, "(Lmindustry/game/EventType$ResetEvent;)V", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$static$3_int_int_R_int, 0, "(II)I", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$static$2_int_int_R_int, 0, "(II)I", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$static$1_int_int_R_int, 0, "(II)I", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_ai_ControlPathfinder_lambda$static$0_int_int_R_int, 0, "(II)I", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_ControlPathfinder, 0, "()V", 8 },
};

Class class_mindustry_ai_ControlPathfinder{
		.nativeName = (intptr_t) "mindustry/ai/ControlPathfinder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_ControlPathfinder),
		.classVtable = (intptr_t) vtable_mindustry_ai_ControlPathfinder,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_ControlPathfinder,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_ControlPathfinder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 7,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 39,
		.nativeFields = (intptr_t) fields,
		.methodCount = 78,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 57,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_ControlPathfinder = registerClass(&class_mindustry_ai_ControlPathfinder);

}
