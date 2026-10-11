#include "mindustry/net/WorldReloader.h"
#include "mindustry/net/Net.h"
#include "arc/struct/Seq_SeqIterable.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/Rules.h"
#include "mindustry/net/WorldReloader.h"
#include "java/lang/Iterable.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/core/Logic.h"
#include "mindustry/gen/Player.h"
#include "mindustry/core/NetServer.h"
#include "arc/struct/Seq.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"
#include "mindustry/core/GameState.h"
#include "mindustry/net/NetConnection.h"

extern "C" {


void mark_mindustry_net_WorldReloader(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_WorldReloader *) object;
	if (self->F_players)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_players)->clazz)->markFunction)((jobject) self->F_players, mark, depth + 1);
}

void clinit_mindustry_net_WorldReloader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_WorldReloader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/WorldReloader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_WorldReloader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_WorldReloader *) NULL_CHECK(sp[0].o))->F_players = (jref) sp[1].o;
	LINE_NUMBER(12);
	((mindustry_net_WorldReloader *) NULL_CHECK((frame[0].o)))->F_wasServer = (jint(0));
	LINE_NUMBER(13);
	((mindustry_net_WorldReloader *) NULL_CHECK((frame[0].o)))->F_began = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_WorldReloader_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/WorldReloader:begin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	if (((jint)((mindustry_net_WorldReloader *) NULL_CHECK((frame[0].o)))->F_began) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[1].o);
	((mindustry_net_WorldReloader *) NULL_CHECK(sp[0].o))->F_wasServer = temp0;
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_net_WorldReloader *) NULL_CHECK((frame[0].o)))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(24);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(25);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_net_WorldReloader *) NULL_CHECK((frame[0].o)))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(28);
	((func_mindustry_gen_Player_clearUnit) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_clearUnit])(ctx, (frame[2].o));
	LINE_NUMBER(29);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(31);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	LINE_NUMBER(33);
	SM_mindustry_gen_Call_worldDataBegin(ctx);
	goto label_12;
	}
label_2:;
	{
	LINE_NUMBER(35);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(36);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_reset])(ctx, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(38);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_reset])(ctx, sp[0].o);
	}
label_12:;
	{
	LINE_NUMBER(41);
	((mindustry_net_WorldReloader *) NULL_CHECK((frame[0].o)))->F_began = (jint(1));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_WorldReloader_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/WorldReloader:end", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	if (((jint)((mindustry_net_WorldReloader *) NULL_CHECK((frame[0].o)))->F_wasServer) == 0) goto label_1;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_net_WorldReloader *) NULL_CHECK((frame[0].o)))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_con;
	if (sp[0].o != nullptr) goto label_5;
	}
	goto label_3;
label_5:;
	{
	LINE_NUMBER(51);
	frame[3].i = ((jint)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_admin);
	LINE_NUMBER(52);
	((func_mindustry_gen_Player_reset) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_reset])(ctx, (frame[2].o));
	LINE_NUMBER(53);
	((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_admin = (frame[3].i);
	LINE_NUMBER(54);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) == 0) goto label_9;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_netServer;
	sp[2].o = frame[2].o;
	clinit_arc_struct_Seq$SeqIterable(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_struct_Seq$SeqIterable);
	sp[4].o = (jobject)((mindustry_net_WorldReloader *) NULL_CHECK((frame[0].o)))->F_players;
	init_arc_struct_Seq$SeqIterable_arc_struct_Seq(ctx, sp[3].o, sp[4].o);
	sp[1].o = (jobject)((func_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(57);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	((func_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(58);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_net_WorldReloader[] {
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
	(void *) M_mindustry_net_WorldReloader_begin,
	(void *) M_mindustry_net_WorldReloader_end,
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
	{ "begin", "()V" },
	{ "end", "()V" },
};

static FieldMetadata fields[] {
	{ "players", &class_arc_struct_Seq, offsetof(mindustry_net_WorldReloader, F_players), "Larc/struct/Seq;", 0 },
	{ "wasServer", &class_boolean, offsetof(mindustry_net_WorldReloader, F_wasServer), "Z", 0 },
	{ "began", &class_boolean, offsetof(mindustry_net_WorldReloader, F_began), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_WorldReloader, 0, "()V", 1 },
	{ "begin", (intptr_t) M_mindustry_net_WorldReloader_begin, VTABLE_mindustry_net_WorldReloader_begin, "()V", 1 },
	{ "end", (intptr_t) M_mindustry_net_WorldReloader_end, VTABLE_mindustry_net_WorldReloader_end, "()V", 1 },
};

Class class_mindustry_net_WorldReloader{
		.nativeName = (intptr_t) "mindustry/net/WorldReloader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_WorldReloader),
		.classVtable = (intptr_t) vtable_mindustry_net_WorldReloader,
		.staticInitializer = (intptr_t) clinit_mindustry_net_WorldReloader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_WorldReloader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_WorldReloader = registerClass(&class_mindustry_net_WorldReloader);

}
