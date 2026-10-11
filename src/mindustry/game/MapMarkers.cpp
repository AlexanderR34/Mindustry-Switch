#include "mindustry/game/MapMarkers.h"
#include "arc/struct/IntMap.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/DataOutput.h"
#include "java/lang/String.h"
#include "arc/func/Intf.h"
#include "arc/struct/IntMap_Entries.h"
#include "mindustry/game/MapMarkers.h"
#include "arc/struct/Seq.h"
#include "mindustry/game/MapMarkers_invoke_mindustry_game_MapMarkers_MarkerSetter_6.h"
#include "mindustry/game/MapMarkers_invoke_mindustry_game_MapMarkers_MarkerSetter_7.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/game/MapMarkers_invoke_mindustry_game_MapMarkers_MarkerSetter_8.h"
#include "mindustry/game/MapMarkers_invoke_mindustry_game_MapMarkers_MarkerSetter_9.h"
#include "mindustry/game/MapMarkers_invoke_arc_func_Intf_5.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/game/MapMarkers_invoke_arc_func_Intf_4.h"
#include "java/util/Iterator.h"
#include "mindustry/game/MapMarkers_invoke_arc_func_Intf_3.h"
#include "java/lang/annotation/Annotation.h"
#include "java/io/DataInputStream.h"
#include "mindustry/io/JsonIO.h"
#include "arc/util/Nullable.h"
#include "arc/struct/IntMap_Entry.h"
#include "java/io/DataInput.h"
#include "mindustry/game/MapMarkers_invoke_mindustry_game_MapMarkers_MarkerSetter_10.h"
#include "java/lang/Object.h"
#include "mindustry/game/MapMarkers_MarkerSetter.h"
#include "mindustry/game/MapMarkers_invoke_mindustry_game_MapMarkers_MarkerSetter_11.h"
#include "java/io/DataOutputStream.h"
#include "java/lang/Class.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_mindustry_game_MapMarkers(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapMarkers *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
	if (self->F_worldMarkers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_worldMarkers)->clazz)->markFunction)((jobject) self->F_worldMarkers, mark, depth + 1);
	if (self->F_mapMarkers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mapMarkers)->clazz)->markFunction)((jobject) self->F_mapMarkers, mark, depth + 1);
	if (self->F_lightMarkers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightMarkers)->clazz)->markFunction)((jobject) self->F_lightMarkers, mark, depth + 1);
}

void clinit_mindustry_game_MapMarkers(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_MapMarkers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapMarkers(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[1].o);
	((mindustry_game_MapMarkers *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_game_MapMarkers *) NULL_CHECK(sp[0].o))->F_worldMarkers = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_game_MapMarkers *) NULL_CHECK(sp[0].o))->F_mapMarkers = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_game_MapMarkers *) NULL_CHECK(sp[0].o))->F_lightMarkers = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapMarkers_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_worldMarkers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_mapMarkers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_lightMarkers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_map;
	((func_arc_struct_IntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(28);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_worldMarkers;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapMarkers_invoke_arc_func_Intf_3(ctx);
		auto proxy = (mindustry_game_MapMarkers_invoke_arc_func_Intf_3 *) gcAlloc(ctx, &class_mindustry_game_MapMarkers_invoke_arc_func_Intf_3);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_6(ctx);
		auto proxy = (mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_6 *) gcAlloc(ctx, &class_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_6);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_mapMarkers;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapMarkers_invoke_arc_func_Intf_4(ctx);
		auto proxy = (mindustry_game_MapMarkers_invoke_arc_func_Intf_4 *) gcAlloc(ctx, &class_mindustry_game_MapMarkers_invoke_arc_func_Intf_4);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_7(ctx);
		auto proxy = (mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_7 *) gcAlloc(ctx, &class_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_7);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_lightMarkers;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapMarkers_invoke_arc_func_Intf_5(ctx);
		auto proxy = (mindustry_game_MapMarkers_invoke_arc_func_Intf_5 *) gcAlloc(ctx, &class_mindustry_game_MapMarkers_invoke_arc_func_Intf_5);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_8(ctx);
		auto proxy = (mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_8 *) gcAlloc(ctx, &class_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_8);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapMarkers_remove_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o));
	LINE_NUMBER(38);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_worldMarkers;
	jint temp0 = (jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[2].o)))->F_world;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_9(ctx);
		auto proxy = (mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_9 *) gcAlloc(ctx, &class_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_9);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_mapMarkers;
	jint temp1 = (jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[2].o)))->F_minimap;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_10(ctx);
		auto proxy = (mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_10 *) gcAlloc(ctx, &class_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_10);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_lightMarkers;
	jint temp2 = (jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[2].o)))->F_light;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_11(ctx);
		auto proxy = (mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_11 *) gcAlloc(ctx, &class_mindustry_game_MapMarkers_invoke_mindustry_game_MapMarkers$MarkerSetter_11);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter])(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	}
label_2:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_MapMarkers_has_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker])(ctx, (frame[0].o), (frame[1].i));
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_game_MapMarkers_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_map;
	popStackFrame(ctx);
	return ((jint)((arc_struct_IntMap *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapMarkers_write_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_map;
	SM_mindustry_io_JsonIO_writeBytes_java_lang_Object_java_lang_Class_java_io_DataOutputStream(ctx, sp[0].o, (((jobject) &class_mindustry_game_MapObjectives$ObjectiveMarker)), (checkCast(ctx, &class_java_io_DataOutputStream, (frame[1].o))));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapMarkers_read_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_worldMarkers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_mapMarkers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_lightMarkers;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_readBytes_java_lang_Class_java_lang_Class_java_io_DataInputStream_R_java_lang_Object(ctx, (((jobject) &class_arc_struct_IntMap)), (((jobject) &class_mindustry_game_MapObjectives$ObjectiveMarker)), (checkCast(ctx, &class_java_io_DataInputStream, (frame[1].o))));
	if (!sp[1].o) {
		clinit_arc_struct_IntMap(ctx);
		sp[1].o = gcAlloc(ctx, &class_arc_struct_IntMap);
		init_arc_struct_IntMap(ctx, sp[1].o);
	}
	((mindustry_game_MapMarkers *) NULL_CHECK(sp[0].o))->F_map = (jref) (checkCast(ctx, &class_arc_struct_IntMap, sp[1].o));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_map;
	if (!sp[0].o || ((arc_struct_IntMap *) sp[0].o)->F_size == 0 || !((arc_struct_IntMap *) sp[0].o)->F_keyTable) {
		popStackFrame(ctx);
		return;
	}
	sp[0].o = (jobject)((func_arc_struct_IntMap_entries_R_arc_struct_IntMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_entries_R_arc_struct_IntMap$Entries])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_IntMap$Entries_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap$Entries_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_IntMap$Entry, sp[0].o));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	frame[4].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o));
	LINE_NUMBER(70);
	if (((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[4].o)))->F_world) == (jint(-1))) goto label_9;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_worldMarkers;
	sp[1].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[1].o, (frame[4].o));
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK(sp[0].o))->F_world = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(71);
	if (((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[4].o)))->F_minimap) == (jint(-1))) goto label_10;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_mapMarkers;
	sp[1].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[1].o, (frame[4].o));
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK(sp[0].o))->F_minimap = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(72);
	if (((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[4].o)))->F_light) == (jint(-1))) goto label_11;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_lightMarkers;
	sp[1].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[1].o, (frame[4].o));
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK(sp[0].o))->F_light = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1)));
	}
label_11:;
	LINE_NUMBER(73);
	goto label_5;
label_6:;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:updateMarker", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[2].o));
	if (temp0 == (jint(-1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	INST_ILOAD(3);
	sp -= 2; if (sp[0].i != sp[1].i) goto label_3;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(83);
	if ((frame[3].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[1].o));
	sp[1].o = checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[1].o);
	jint temp0 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[2].o));
	((func_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int) resolveInterfaceMethod(ctx, &class_mindustry_game_MapMarkers$MarkerSetter, INDEX_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(85);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, temp1);
	LINE_NUMBER(86);
	((func_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int) resolveInterfaceMethod(ctx, &class_mindustry_game_MapMarkers$MarkerSetter, INDEX_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int, (frame[5].o)))(ctx, (frame[5].o), (frame[2].o), (jint(-1)));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(88);
	((func_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int) resolveInterfaceMethod(ctx, &class_mindustry_game_MapMarkers$MarkerSetter, INDEX_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int, (frame[5].o)))(ctx, (frame[5].o), (frame[2].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[2].o));
	}
label_8:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:setMarker", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(96);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[3].o));
	if (temp0 == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(97);
	jint temp0 = (jint)((func_arc_func_Intf_get_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intf, INDEX_arc_func_Intf_get_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[3].o));
	frame[7].i = temp0;
	LINE_NUMBER(98);
	if ((frame[6].i) == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(100);
	((func_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int) resolveInterfaceMethod(ctx, &class_mindustry_game_MapMarkers$MarkerSetter, INDEX_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int, (frame[5].o)))(ctx, (frame[5].o), (frame[2].o), (frame[7].i));
	LINE_NUMBER(101);
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, (frame[1].o), (frame[7].i), (frame[2].o));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[1].o));
	((func_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int) resolveInterfaceMethod(ctx, &class_mindustry_game_MapMarkers$MarkerSetter, INDEX_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[1].o)), (frame[7].i));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[7].i));
	}
label_8:;
	LINE_NUMBER(107);
	goto label_10;
label_2:;
	{
	LINE_NUMBER(108);
	if ((frame[6].i) == (jint(-1))) goto label_10;
	}
	{
	LINE_NUMBER(109);
	((func_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int) resolveInterfaceMethod(ctx, &class_mindustry_game_MapMarkers$MarkerSetter, INDEX_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int, (frame[5].o)))(ctx, (frame[5].o), (frame[2].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[2].o));
	}
label_10:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(116);
	if ((frame[2].i) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[1].o));
	((func_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int) resolveInterfaceMethod(ctx, &class_mindustry_game_MapMarkers$MarkerSetter, INDEX_mindustry_game_MapMarkers$MarkerSetter_set_mindustry_game_MapObjectives$ObjectiveMarker_int, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[1].o)), (frame[2].i));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	}
label_1:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapMarkers_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_game_MapMarkers *) NULL_CHECK((frame[0].o)))->F_worldMarkers;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_MapMarkers_lambda$remove$2_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:lambda$remove$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapMarkers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(41);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_light = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_MapMarkers_lambda$remove$1_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:lambda$remove$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapMarkers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(40);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_minimap = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_MapMarkers_lambda$remove$0_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:lambda$remove$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapMarkers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(39);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_world = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_MapMarkers_lambda$add$5_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:lambda$add$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapMarkers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(32);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_light = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_game_MapMarkers_lambda$add$4_mindustry_game_MapObjectives$ObjectiveMarker_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:lambda$add$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapMarkers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_light);
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_MapMarkers_lambda$add$3_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:lambda$add$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapMarkers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(31);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_minimap = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_game_MapMarkers_lambda$add$2_mindustry_game_MapObjectives$ObjectiveMarker_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:lambda$add$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapMarkers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_minimap);
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_MapMarkers_lambda$add$1_mindustry_game_MapObjectives$ObjectiveMarker_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:lambda$add$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapMarkers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(30);
	((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_world = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_game_MapMarkers_lambda$add$0_mindustry_game_MapObjectives$ObjectiveMarker_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapMarkers:lambda$add$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapMarkers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_world);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapMarkers;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method iterator
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapMarkers[] {
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
	(void *) M_mindustry_game_MapMarkers_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_mindustry_game_MapMarkers_clear,
	(void *) M_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker,
	(void *) M_mindustry_game_MapMarkers_remove_int,
	(void *) M_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker,
	(void *) M_mindustry_game_MapMarkers_has_int_R_boolean,
	(void *) M_mindustry_game_MapMarkers_size_R_int,
	(void *) M_mindustry_game_MapMarkers_write_java_io_DataOutput,
	(void *) M_mindustry_game_MapMarkers_read_java_io_DataInput,
	(void *) M_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter,
	(void *) M_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter,
	(void *) M_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "clear", "()V" },
	{ "add", "(ILmindustry/game/MapObjectives$ObjectiveMarker;)V" },
	{ "remove", "(I)V" },
	{ "get", "(I)Lmindustry/game/MapObjectives$ObjectiveMarker;" },
	{ "has", "(I)Z" },
	{ "size", "()I" },
	{ "write", "(Ljava/io/DataOutput;)V" },
	{ "read", "(Ljava/io/DataInput;)V" },
	{ "updateMarker", "(Larc/struct/Seq;Lmindustry/game/MapObjectives$ObjectiveMarker;ZLarc/func/Intf;Lmindustry/game/MapMarkers$MarkerSetter;)V" },
	{ "setMarker", "(Larc/struct/Seq;Lmindustry/game/MapObjectives$ObjectiveMarker;Lmindustry/game/MapObjectives$ObjectiveMarker;Larc/func/Intf;Lmindustry/game/MapMarkers$MarkerSetter;)V" },
	{ "remove", "(Larc/struct/Seq;ILmindustry/game/MapMarkers$MarkerSetter;)V" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_mindustry_game_MapMarkers$MarkerSetter,
};

static FieldMetadata fields[] {
	{ "map", &class_arc_struct_IntMap, offsetof(mindustry_game_MapMarkers, F_map), "Larc/struct/IntMap;", 2 },
	{ "worldMarkers", &class_arc_struct_Seq, offsetof(mindustry_game_MapMarkers, F_worldMarkers), "Larc/struct/Seq;", 1 },
	{ "mapMarkers", &class_arc_struct_Seq, offsetof(mindustry_game_MapMarkers, F_mapMarkers), "Larc/struct/Seq;", 1 },
	{ "lightMarkers", &class_arc_struct_Seq, offsetof(mindustry_game_MapMarkers, F_lightMarkers), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapMarkers, 0, "()V", 1 },
	{ "clear", (intptr_t) M_mindustry_game_MapMarkers_clear, VTABLE_mindustry_game_MapMarkers_clear, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker, VTABLE_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker, "(ILmindustry/game/MapObjectives$ObjectiveMarker;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_game_MapMarkers_remove_int, VTABLE_mindustry_game_MapMarkers_remove_int, "(I)V", 1 },
	{ "get", (intptr_t) M_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker, VTABLE_mindustry_game_MapMarkers_get_int_R_mindustry_game_MapObjectives$ObjectiveMarker, "(I)Lmindustry/game/MapObjectives$ObjectiveMarker;", 1 },
	{ "has", (intptr_t) M_mindustry_game_MapMarkers_has_int_R_boolean, VTABLE_mindustry_game_MapMarkers_has_int_R_boolean, "(I)Z", 1 },
	{ "size", (intptr_t) M_mindustry_game_MapMarkers_size_R_int, VTABLE_mindustry_game_MapMarkers_size_R_int, "()I", 1 },
	{ "write", (intptr_t) M_mindustry_game_MapMarkers_write_java_io_DataOutput, VTABLE_mindustry_game_MapMarkers_write_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "read", (intptr_t) M_mindustry_game_MapMarkers_read_java_io_DataInput, VTABLE_mindustry_game_MapMarkers_read_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "updateMarker", (intptr_t) M_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter, VTABLE_mindustry_game_MapMarkers_updateMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_boolean_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter, "(Larc/struct/Seq;Lmindustry/game/MapObjectives$ObjectiveMarker;ZLarc/func/Intf;Lmindustry/game/MapMarkers$MarkerSetter;)V", 1 },
	{ "setMarker", (intptr_t) M_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter, VTABLE_mindustry_game_MapMarkers_setMarker_arc_struct_Seq_mindustry_game_MapObjectives$ObjectiveMarker_mindustry_game_MapObjectives$ObjectiveMarker_arc_func_Intf_mindustry_game_MapMarkers$MarkerSetter, "(Larc/struct/Seq;Lmindustry/game/MapObjectives$ObjectiveMarker;Lmindustry/game/MapObjectives$ObjectiveMarker;Larc/func/Intf;Lmindustry/game/MapMarkers$MarkerSetter;)V", 2 },
	{ "remove", (intptr_t) M_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter, VTABLE_mindustry_game_MapMarkers_remove_arc_struct_Seq_int_mindustry_game_MapMarkers$MarkerSetter, "(Larc/struct/Seq;ILmindustry/game/MapMarkers$MarkerSetter;)V", 2 },
	{ "iterator", (intptr_t) M_mindustry_game_MapMarkers_iterator_R_java_util_Iterator, VTABLE_mindustry_game_MapMarkers_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 131073 },
	{ "lambda$remove$2", (intptr_t) SM_mindustry_game_MapMarkers_lambda$remove$2_mindustry_game_MapObjectives$ObjectiveMarker_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V", 4106 },
	{ "lambda$remove$1", (intptr_t) SM_mindustry_game_MapMarkers_lambda$remove$1_mindustry_game_MapObjectives$ObjectiveMarker_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V", 4106 },
	{ "lambda$remove$0", (intptr_t) SM_mindustry_game_MapMarkers_lambda$remove$0_mindustry_game_MapObjectives$ObjectiveMarker_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V", 4106 },
	{ "lambda$add$5", (intptr_t) SM_mindustry_game_MapMarkers_lambda$add$5_mindustry_game_MapObjectives$ObjectiveMarker_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V", 4106 },
	{ "lambda$add$4", (intptr_t) SM_mindustry_game_MapMarkers_lambda$add$4_mindustry_game_MapObjectives$ObjectiveMarker_R_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;)I", 4106 },
	{ "lambda$add$3", (intptr_t) SM_mindustry_game_MapMarkers_lambda$add$3_mindustry_game_MapObjectives$ObjectiveMarker_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V", 4106 },
	{ "lambda$add$2", (intptr_t) SM_mindustry_game_MapMarkers_lambda$add$2_mindustry_game_MapObjectives$ObjectiveMarker_R_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;)I", 4106 },
	{ "lambda$add$1", (intptr_t) SM_mindustry_game_MapMarkers_lambda$add$1_mindustry_game_MapObjectives$ObjectiveMarker_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;I)V", 4106 },
	{ "lambda$add$0", (intptr_t) SM_mindustry_game_MapMarkers_lambda$add$0_mindustry_game_MapObjectives$ObjectiveMarker_R_int, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;)I", 4106 },
};

Class class_mindustry_game_MapMarkers{
		.nativeName = (intptr_t) "mindustry/game/MapMarkers",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_MapMarkers),
		.classVtable = (intptr_t) vtable_mindustry_game_MapMarkers,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapMarkers,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapMarkers,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapMarkers = registerClass(&class_mindustry_game_MapMarkers);

}
