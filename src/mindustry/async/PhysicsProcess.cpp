#include "mindustry/async/PhysicsProcess.h"
#include "mindustry/async/AsyncProcess.h"
#include "mindustry/net/Net.h"
#include "java/util/concurrent/ExecutionException.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/Future.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/Runnable.h"
#include "mindustry/async/PhysicsProcess_PhysicRef.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/async/PhysicsProcess_invoke_java_lang_Runnable_1.h"
#include "arc/struct/Seq.h"
#include "mindustry/async/PhysicsProcess_PhysicsWorld_PhysicsBody.h"
#include "java/lang/Throwable.h"
#include "mindustry/async/PhysicsProcess_PhysicsWorld.h"
#include "mindustry/async/PhysicsProcess.h"
#include "java/util/concurrent/ExecutorService.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "mindustry/core/PerfCounter.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/Object.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jint SF_mindustry_async_PhysicsProcess_mobileIterations;
jint SF_mindustry_async_PhysicsProcess_desktopIterations;
jint SF_mindustry_async_PhysicsProcess_layers;
jint SF_mindustry_async_PhysicsProcess_layerGround;
jint SF_mindustry_async_PhysicsProcess_layerLegs;
jint SF_mindustry_async_PhysicsProcess_layerFlying;
jint SF_mindustry_async_PhysicsProcess_layerUnderwater;
volatile jlong SF_mindustry_async_PhysicsProcess_maxPhysicsTime;

void mark_mindustry_async_PhysicsProcess(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_async_PhysicsProcess *) object;
	if (self->F_physics)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_physics)->clazz)->markFunction)((jobject) self->F_physics, mark, depth + 1);
	if (self->F_refs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_refs)->clazz)->markFunction)((jobject) self->F_refs, mark, depth + 1);
	if (self->F_futures)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_futures)->clazz)->markFunction)((jobject) self->F_futures, mark, depth + 1);
	if (self->F_pendingAdds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pendingAdds)->clazz)->markFunction)((jobject) self->F_pendingAdds, mark, depth + 1);
}

void init_mindustry_async_PhysicsProcess(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_async_PhysicsProcess(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (20), (((jobject) &class_mindustry_async_PhysicsProcess$PhysicRef)));
	((mindustry_async_PhysicsProcess *) NULL_CHECK(sp[0].o))->F_refs = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (jint(4)), (((jobject) &class_java_util_concurrent_Future)));
	((mindustry_async_PhysicsProcess *) NULL_CHECK(sp[0].o))->F_futures = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (20), (((jobject) &class_mindustry_async_PhysicsProcess$PhysicRef)));
	((mindustry_async_PhysicsProcess *) NULL_CHECK(sp[0].o))->F_pendingAdds = (jref) sp[1].o;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_physics) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hasPhysicsRef) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_physics;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_async_PhysicsProcess_init) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_PhysicsProcess_init])(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(37);
	((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hasPhysicsRef = (jint(1));
	LINE_NUMBER(39);
	clinit_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody);
	init_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(40);
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[2].o)))->F_x = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(41);
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[2].o)))->F_y = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(42);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_mass_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_mass_R_float])(ctx, (frame[1].o));
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[0].o))->F_mass = temp0;
	LINE_NUMBER(43);
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK((frame[2].o)))->F_radius = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) * (jfloat(0.6f)));
	LINE_NUMBER(45);
	clinit_mindustry_async_PhysicsProcess$PhysicRef(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_async_PhysicsProcess$PhysicRef);
	init_mindustry_async_PhysicsProcess$PhysicRef_mindustry_gen_Unit_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_refs;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_pendingAdds;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_PhysicsProcess_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess:begin", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_physics;
	if (sp[0].o != nullptr) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(55);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(57);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_unitPhysicsWait;
	((func_mindustry_core_PerfCounter_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_begin])(ctx, sp[0].o);
	LINE_NUMBER(60);
	frame[2].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_futures;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_12;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_ExecutionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_futures;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_java_util_concurrent_Future, 1), sp[0].o)), (frame[2].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_java_util_concurrent_Future, 1), sp[0].o)), (frame[2].i))));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(65);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(63);
	frame[3].o = sp[0].o;
	LINE_NUMBER(64);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(60);
	INST_IINC(2, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_futures;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(69);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_unitPhysicsWait;
	((func_mindustry_core_PerfCounter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_end])(ctx, sp[0].o);
	LINE_NUMBER(70);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_unitPhysicsAsync;
	((func_mindustry_core_PerfCounter_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_add_long])(ctx, sp[0].o, (clinit_mindustry_async_PhysicsProcess(ctx), (jlong)SF_mindustry_async_PhysicsProcess_maxPhysicsTime));
	LINE_NUMBER(71);
	clinit_mindustry_async_PhysicsProcess(ctx);
	SF_mindustry_async_PhysicsProcess_maxPhysicsTime = (jlong(0));
	LINE_NUMBER(74);
	frame[2].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_pendingAdds;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_20;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_pendingAdds;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_async_PhysicsProcess$PhysicRef, 1), sp[0].o)), (frame[2].i)));
	LINE_NUMBER(76);
	if (((jint)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[3].o)))->F_lastLayer) < 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_physics;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[3].o)))->F_lastLayer));
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[3].o)))->F_body;
	((func_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody])(ctx, sp[0].o, sp[1].o);
	}
label_23:;
	{
	LINE_NUMBER(74);
	INST_IINC(2, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_pendingAdds;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_refs;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_25:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_async_PhysicsProcess$PhysicRef, sp[0].o));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[3].o)))->F_entity;
	frame[4].o = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[3].o)))->F_body;
	jfloat temp0 = ((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[1].o))->F_x) - ((jfloat)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[3].o)))->F_startX);
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[3].o)))->F_body;
	((func_mindustry_gen_Velc_move_float_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Velc, INDEX_mindustry_gen_Velc_move_float_float, sp[0].o))(ctx, sp[0].o, temp0, (((jfloat)((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[1].o))->F_y) - ((jfloat)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[3].o)))->F_startY)));
	LINE_NUMBER(86);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_refs;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_async_PhysicsProcess$PhysicRef, 1), sp[0].o));
	LINE_NUMBER(90);
	frame[3].i = (jint(0));
	}
label_31:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_refs;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_32;
	}
	{
	LINE_NUMBER(91);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_entity;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAdded_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isAdded_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_entity;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_hasPhysicsRef = (jint(0));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_refs;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(96);
	INST_IINC(3, -1);
	LINE_NUMBER(98);
	if (((jint)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_lastLayer) < 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_physics;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_lastLayer));
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_body;
	((func_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody])(ctx, sp[0].o, sp[1].o);
	goto label_40;
	}
label_35:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_entity;
	jint temp0 = (jint)((func_mindustry_gen_Unit_collisionLayer_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_collisionLayer_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(102);
	if ((frame[5].i) == ((jint)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_lastLayer)) goto label_42;
	}
	{
	LINE_NUMBER(103);
	if (((jint)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_lastLayer) < 0) goto label_44;
	}
	{
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_physics;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_lastLayer));
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_body;
	((func_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody])(ctx, sp[0].o, sp[1].o);
	}
label_44:;
	{
	LINE_NUMBER(104);
	((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_lastLayer = (frame[5].i);
	LINE_NUMBER(105);
	if ((frame[5].i) < 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_physics;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i));
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_body;
	((func_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody])(ctx, sp[0].o, sp[1].o);
	}
label_42:;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_body;
	sp[2].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_entity;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[1].o))->F_x = temp0;
	((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK(sp[0].o))->F_startX = temp0;
	LINE_NUMBER(109);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_body;
	sp[2].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_entity;
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y;
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[1].o))->F_y = temp3;
	((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK(sp[0].o))->F_startY = temp3;
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_body;
	sp += 1;
	if ((frame[1].i) != 0) goto label_48;
	}
	{
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess$PhysicRef *) NULL_CHECK((frame[4].o)))->F_entity;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isLocal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isLocal_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_49;
	}
label_48:;
	INST_ICONST(1);
	goto label_50;
label_49:;
	INST_ICONST(0);
label_50:;
	sp -= 2;
	((mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody *) NULL_CHECK(sp[0].o))->F_local = sp[1].i;
label_40:;
	{
	LINE_NUMBER(90);
	INST_IINC(3, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_futures;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(116);
	frame[3].i = (jint(0));
	}
label_52:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_53;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_physics;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_futures;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mainExecutor;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_async_PhysicsProcess_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_async_PhysicsProcess_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_async_PhysicsProcess_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[1].o))(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	INST_IINC(3, 1);
	goto label_52;
	}
label_53:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_async_PhysicsProcess_shouldProcess_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess:shouldProcess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_async_PhysicsProcess_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_physics;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_refs;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_futures;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(132);
	((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_physics = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_async_PhysicsProcess_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess:init", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	((func_mindustry_async_PhysicsProcess_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_async_PhysicsProcess_reset])(ctx, (frame[0].o));
	LINE_NUMBER(140);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_async_PhysicsProcess$PhysicsWorld, (jint(4)));
	((mindustry_async_PhysicsProcess *) NULL_CHECK(sp[0].o))->F_physics = (jref) sp[1].o;
	LINE_NUMBER(142);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	if ((frame[2].i) >= (jint(4))) goto label_5;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_async_PhysicsProcess *) NULL_CHECK((frame[0].o)))->F_physics;
	jint temp0 = frame[2].i;
	clinit_mindustry_async_PhysicsProcess$PhysicsWorld(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_async_PhysicsProcess$PhysicsWorld);
	init_mindustry_async_PhysicsProcess$PhysicsWorld_arc_math_geom_Rect(ctx, sp[1].o, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(142);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_async_PhysicsProcess(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_async_PhysicsProcess_mobileIterations = jint(1);
	SF_mindustry_async_PhysicsProcess_desktopIterations = jint(1);
	SF_mindustry_async_PhysicsProcess_layers = jint(4);
	SF_mindustry_async_PhysicsProcess_layerGround = jint(0);
	SF_mindustry_async_PhysicsProcess_layerLegs = jint(1);
	SF_mindustry_async_PhysicsProcess_layerFlying = jint(2);
	SF_mindustry_async_PhysicsProcess_layerUnderwater = jint(3);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/PhysicsProcess:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_async_PhysicsProcess(ctx);
	{
	LINE_NUMBER(31);
	clinit_mindustry_async_PhysicsProcess(ctx);
	SF_mindustry_async_PhysicsProcess_maxPhysicsTime = (jlong(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_async_PhysicsProcess[] {
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
	(void *) M_mindustry_async_PhysicsProcess_init,
	(void *) M_mindustry_async_PhysicsProcess_reset,
	(void *) M_mindustry_async_PhysicsProcess_begin,
	(void *) M_mindustry_async_AsyncProcess_process,
	(void *) M_mindustry_async_AsyncProcess_end,
	(void *) M_mindustry_async_PhysicsProcess_shouldProcess_R_boolean,
	(void *) M_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit,
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
	{ "init", "()V" },
	{ "reset", "()V" },
	{ "begin", "()V" },
	{ "process", "()V" },
	{ "end", "()V" },
	{ "shouldProcess", "()Z" },
	{ "add", "(Lmindustry/gen/Unit;)V" },
};

static jclass interfaces[] { &class_mindustry_async_AsyncProcess, };

static jclass innerClasses[] {
	&class_mindustry_async_PhysicsProcess$PhysicRef,
	&class_mindustry_async_PhysicsProcess$PhysicsWorld,
};

static FieldMetadata fields[] {
	{ "mobileIterations", &class_int, (intptr_t) &SF_mindustry_async_PhysicsProcess_mobileIterations, "I", 24 },
	{ "desktopIterations", &class_int, (intptr_t) &SF_mindustry_async_PhysicsProcess_desktopIterations, "I", 24 },
	{ "layers", &class_int, (intptr_t) &SF_mindustry_async_PhysicsProcess_layers, "I", 25 },
	{ "layerGround", &class_int, (intptr_t) &SF_mindustry_async_PhysicsProcess_layerGround, "I", 25 },
	{ "layerLegs", &class_int, (intptr_t) &SF_mindustry_async_PhysicsProcess_layerLegs, "I", 25 },
	{ "layerFlying", &class_int, (intptr_t) &SF_mindustry_async_PhysicsProcess_layerFlying, "I", 25 },
	{ "layerUnderwater", &class_int, (intptr_t) &SF_mindustry_async_PhysicsProcess_layerUnderwater, "I", 25 },
	{ "physics", getArrayClass(&class_mindustry_async_PhysicsProcess$PhysicsWorld, 1), offsetof(mindustry_async_PhysicsProcess, F_physics), "[Lmindustry/async/PhysicsProcess$PhysicsWorld;", 2 },
	{ "refs", &class_arc_struct_Seq, offsetof(mindustry_async_PhysicsProcess, F_refs), "Larc/struct/Seq;", 2 },
	{ "futures", &class_arc_struct_Seq, offsetof(mindustry_async_PhysicsProcess, F_futures), "Larc/struct/Seq;", 2 },
	{ "pendingAdds", &class_arc_struct_Seq, offsetof(mindustry_async_PhysicsProcess, F_pendingAdds), "Larc/struct/Seq;", 2 },
	{ "maxPhysicsTime", &class_long, (intptr_t) &SF_mindustry_async_PhysicsProcess_maxPhysicsTime, "J", 74 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_async_PhysicsProcess, 0, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit, VTABLE_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "begin", (intptr_t) M_mindustry_async_PhysicsProcess_begin, VTABLE_mindustry_async_PhysicsProcess_begin, "()V", 1 },
	{ "shouldProcess", (intptr_t) M_mindustry_async_PhysicsProcess_shouldProcess_R_boolean, VTABLE_mindustry_async_PhysicsProcess_shouldProcess_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_mindustry_async_PhysicsProcess_reset, VTABLE_mindustry_async_PhysicsProcess_reset, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_async_PhysicsProcess_init, VTABLE_mindustry_async_PhysicsProcess_init, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_async_PhysicsProcess, 0, "()V", 8 },
};

Class class_mindustry_async_PhysicsProcess{
		.nativeName = (intptr_t) "mindustry/async/PhysicsProcess",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_async_PhysicsProcess),
		.classVtable = (intptr_t) vtable_mindustry_async_PhysicsProcess,
		.staticInitializer = (intptr_t) clinit_mindustry_async_PhysicsProcess,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_async_PhysicsProcess,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_async_PhysicsProcess = registerClass(&class_mindustry_async_PhysicsProcess);

}
