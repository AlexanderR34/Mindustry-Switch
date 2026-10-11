#include "mindustry/logic/GlobalVars.h"
#include "java/lang/Integer.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/logic/GlobalVars_VarEntry.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Throwable.h"
#include "arc/graphics/Colors.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Log.h"
#include "mindustry/type/Liquid.h"
#include "arc/Files.h"
#include "java/io/DataInputStream.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/logic/GlobalVars.h"
#include "arc/func/Cons2.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/logic/GlobalVars_invoke_arc_func_Cons2_1.h"
#include "java/lang/Object.h"
#include "arc/audio/Music.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Double.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "arc/struct/OrderedMap.h"
#include "arc/math/Rand.h"
#include "mindustry/logic/LStatement.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "java/lang/Float.h"
#include "arc/files/Fi.h"
#include "java/io/InputStream.h"
#include "java/lang/Short.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "mindustry/mod/DataManager.h"
#include "java/io/IOException.h"
#include "mindustry/core/Control.h"
#include "java/lang/Number.h"
#include "java/lang/AutoCloseable.h"
#include "mindustry/type/Weather.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/StatusEffect.h"
#include "java/io/ByteArrayInputStream.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "java/lang/Enum.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/legacy/LegacyBlock.h"
#include "arc/util/Strings.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {

jint SF_mindustry_logic_GlobalVars_ctrlProcessor;
jint SF_mindustry_logic_GlobalVars_ctrlPlayer;
jint SF_mindustry_logic_GlobalVars_ctrlCommand;
jobject SF_mindustry_logic_GlobalVars_lookableContent;
jobject SF_mindustry_logic_GlobalVars_writableLookableContent;
jobject SF_mindustry_logic_GlobalVars_rand;
jobject SF_mindustry_logic_GlobalVars_varTime;
jobject SF_mindustry_logic_GlobalVars_varTick;
jobject SF_mindustry_logic_GlobalVars_varSecond;
jobject SF_mindustry_logic_GlobalVars_varMinute;
jobject SF_mindustry_logic_GlobalVars_varWave;
jobject SF_mindustry_logic_GlobalVars_varWaveTime;
jobject SF_mindustry_logic_GlobalVars_varMapW;
jobject SF_mindustry_logic_GlobalVars_varMapH;
jobject SF_mindustry_logic_GlobalVars_varWait;
jobject SF_mindustry_logic_GlobalVars_varServer;
jobject SF_mindustry_logic_GlobalVars_varClient;
jobject SF_mindustry_logic_GlobalVars_varClientLocale;
jobject SF_mindustry_logic_GlobalVars_varClientUnit;
jobject SF_mindustry_logic_GlobalVars_varClientName;
jobject SF_mindustry_logic_GlobalVars_varClientTeam;
jobject SF_mindustry_logic_GlobalVars_varClientMobile;
jobject SF_mindustry_logic_GlobalVars_varClientMusicPlaying;
jobject SF_mindustry_logic_GlobalVars_varClientCurrentMusic;

void mark_mindustry_logic_GlobalVars(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_GlobalVars_lookableContent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_lookableContent)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_lookableContent, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_writableLookableContent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_writableLookableContent)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_writableLookableContent, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_rand)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_rand, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varTime)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varTime, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varTick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varTick)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varTick, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varSecond)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varSecond)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varSecond, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varMinute)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varMinute)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varMinute, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varWave)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varWave)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varWave, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varWaveTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varWaveTime)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varWaveTime, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varMapW)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varMapW)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varMapW, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varMapH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varMapH)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varMapH, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varWait)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varWait)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varWait, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varServer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varServer)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varServer, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varClient)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varClient)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varClient, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varClientLocale)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varClientLocale)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varClientLocale, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varClientUnit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varClientUnit)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varClientUnit, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varClientName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varClientName)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varClientName, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varClientTeam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varClientTeam)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varClientTeam, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varClientMobile)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varClientMobile)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varClientMobile, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varClientMusicPlaying)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varClientMusicPlaying)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varClientMusicPlaying, mark, depth + 1);
		if (SF_mindustry_logic_GlobalVars_varClientCurrentMusic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_GlobalVars_varClientCurrentMusic)->clazz)->markFunction)((jobject) SF_mindustry_logic_GlobalVars_varClientCurrentMusic, mark, depth + 1);
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
	auto self = (mindustry_logic_GlobalVars *) object;
	if (self->F_vars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vars)->clazz)->markFunction)((jobject) self->F_vars, mark, depth + 1);
	if (self->F_varEntries)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_varEntries)->clazz)->markFunction)((jobject) self->F_varEntries, mark, depth + 1);
	if (self->F_privilegedNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_privilegedNames)->clazz)->markFunction)((jobject) self->F_privilegedNames, mark, depth + 1);
	if (self->F_logicIdToContent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_logicIdToContent)->clazz)->markFunction)((jobject) self->F_logicIdToContent, mark, depth + 1);
	if (self->F_contentIdToLogicId)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentIdToLogicId)->clazz)->markFunction)((jobject) self->F_contentIdToLogicId, mark, depth + 1);
}

void init_mindustry_logic_GlobalVars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_GlobalVars(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_logic_GlobalVars *) NULL_CHECK(sp[0].o))->F_vars = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_logic_GlobalVars *) NULL_CHECK(sp[0].o))->F_varEntries = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_logic_GlobalVars *) NULL_CHECK(sp[0].o))->F_privilegedNames = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_GlobalVars_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	printf("[GlobalVars] GlobalVars::init starting...\n"); fflush(stdout);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:init", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	((func_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"sectionProcessor"_j))));
	LINE_NUMBER(44);
	((func_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@this"_j))));
	LINE_NUMBER(45);
	((func_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@thisx"_j))));
	LINE_NUMBER(46);
	((func_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@thisy"_j))));
	LINE_NUMBER(47);
	((func_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@links"_j))));
	LINE_NUMBER(48);
	((func_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@ipt"_j))));
	LINE_NUMBER(50);
	((func_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"sectionGeneral"_j))));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"the end"_j))), (jobject(nullptr)), (jint(0)), (jint(1)));
	printf("[GlobalVars] sectionGeneral loaded\n"); fflush(stdout);
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"false"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(1)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"null"_j))), (jobject(nullptr)), (jint(0)), (jint(1)));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@pi"_j));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(3.1415927f)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\u03c0"_j));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(3.1415927f)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (jint(1)));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@e"_j));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(2.7182817f)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@degToRad"_j));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(0.017453292f)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@radToDeg"_j));
	sp[2].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(57.295776f)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(65);
	((func_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"sectionMap"_j))));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@time"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varTime = sp[0].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@tick"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varTick = sp[0].o;
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@second"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varSecond = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@minute"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varMinute = sp[0].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@waveNumber"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varWave = sp[0].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@waveTime"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varWaveTime = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@mapw"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varMapW = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@maph"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varMapH = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@wait"_j))), (jobject(nullptr)), (jint(1)), (jint(1)));
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varWait = sp[0].o;
	LINE_NUMBER(79);
	((func_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"sectionNetwork"_j))));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@server"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varServer = sp[0].o;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@client"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varClient = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@clientLocale"_j))), (jobject(nullptr)), (jint(1)));
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varClientLocale = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@clientUnit"_j))), (jobject(nullptr)), (jint(1)));
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varClientUnit = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@clientName"_j))), (jobject(nullptr)), (jint(1)));
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varClientName = sp[0].o;
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@clientTeam"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varClientTeam = sp[0].o;
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@clientMobile"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varClientMobile = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@clientMusicPlaying"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varClientMusicPlaying = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@clientCurrentMusic"_j))), (jobject(nullptr)), (jint(1)));
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_varClientCurrentMusic = sp[0].o;
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ctrlProcessor"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(1)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ctrlPlayer"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(2)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@ctrlCommand"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(3)));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(99);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	if (sp[0].o == nullptr) goto label_52;
	}
	{
	LINE_NUMBER(100);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = ((jobject) &class_arc_audio_Sound);
	clinit_arc_struct_Seq(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[2].o, (((jobject) &class_arc_audio_Sound)));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getAll_java_lang_Class_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_54:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_52;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_audio_Sound, sp[0].o));
	LINE_NUMBER(101);
	sp[0].o = frame[2].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_56;
	}
	{
	sp[0].o = (jobject)((arc_audio_Sound *) NULL_CHECK((frame[2].o)))->F_file;
	if (sp[0].o == nullptr) goto label_56;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_audio_Sound *) NULL_CHECK((frame[2].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@sfx-\u0001"_j.string, 1, (frame[3].o));
	jint temp0 = (jint)SM_mindustry_gen_Sounds_getSoundId_arc_audio_Sound_R_int(ctx, (frame[2].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_56:;
	LINE_NUMBER(105);
	goto label_54;
label_52:;
	{
	printf("[GlobalVars] sounds loaded\n"); fflush(stdout);
	LINE_NUMBER(110);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_59:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_60;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[4].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(110);
	INST_IINC(3, 1);
	goto label_59;
	}
label_60:;
	{
	printf("[GlobalVars] teams loaded\n"); fflush(stdout);
	LINE_NUMBER(114);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_63:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_64;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[2].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(116);
	goto label_63;
	}
label_64:;
	{
	printf("[GlobalVars] items loaded\n"); fflush(stdout);
	LINE_NUMBER(118);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_67:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_68;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[2].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(120);
	goto label_67;
	}
label_68:;
	{
	printf("[GlobalVars] liquids loaded\n"); fflush(stdout);
	LINE_NUMBER(122);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_71:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_72;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(124);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[2].o)))->F_name;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_java_lang_String_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_java_lang_String_R_mindustry_type_Item])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o != nullptr) goto label_74;
	}
	INST_ICONST(1);
	goto label_75;
label_74:;
	INST_ICONST(0);
label_75:;
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_legacy_LegacyBlock)) != 0) goto label_76;
	}
	INST_ICONST(1);
	goto label_77;
label_76:;
	INST_ICONST(0);
label_77:;
	INST_IAND();
	if ((--sp)->i == 0) goto label_78;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[2].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
label_78:;
	LINE_NUMBER(127);
	goto label_71;
label_72:;
	{
	printf("[GlobalVars] blocks loaded\n"); fflush(stdout);
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_80:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_81;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(130);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[2].o)))->F_internal) != 0) goto label_83;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[2].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
label_83:;
	LINE_NUMBER(133);
	goto label_80;
label_81:;
	{
	printf("[GlobalVars] units loaded\n"); fflush(stdout);
	LINE_NUMBER(135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_weathers_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_weathers_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_85:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_86;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Weather, sp[0].o));
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[2].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(137);
	goto label_85;
	}
label_86:;
	{
	printf("[GlobalVars] weathers loaded\n"); fflush(stdout);
	LINE_NUMBER(139);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_statusEffects_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_89:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_90;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[2].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@status-\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(141);
	goto label_89;
	}
label_90:;
	{
	printf("[GlobalVars] statusEffects loaded\n"); fflush(stdout);
	LINE_NUMBER(143);
	sp[0].o = (jobject)SM_arc_graphics_Colors_getColors_R_arc_struct_OrderedMap(ctx);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_93:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_94;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[2].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Character_isUpperCase_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_96;
	}
	goto label_93;
label_96:;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[2].o)))->F_key;
	sp[1].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@color\u0001"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[2].o)))->F_value;
	jdouble temp0 = (jdouble)((func_arc_graphics_Color_toDoubleBits_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_Color, sp[2].o)))->vtable)[VTABLE_arc_graphics_Color_toDoubleBits_R_double])(ctx, (checkCast(ctx, &class_arc_graphics_Color, sp[2].o)));
	sp[2].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(148);
	goto label_93;
	}
label_94:;
	{
	printf("[GlobalVars] colors loaded\n"); fflush(stdout);
	LINE_NUMBER(151);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAccess_all;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_98:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_99;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_logic_LAccess_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_logic_LAccess_name_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(151);
	INST_IINC(3, 1);
	goto label_98;
	}
label_99:;
	{
	printf("[GlobalVars] laccess loaded\n"); fflush(stdout);
	LINE_NUMBER(155);
	clinit_mindustry_logic_LStatement(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LStatement_nameToAlign;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_GlobalVars_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_logic_GlobalVars_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_logic_GlobalVars_invoke_arc_func_Cons2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	printf("[GlobalVars] nameToAlign loaded\n"); fflush(stdout);
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_mindustry_ctype_UnlockableContent, 1), (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_logic_GlobalVars *) NULL_CHECK(sp[0].o))->F_logicIdToContent = (jref) sp[1].o;
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_logic_GlobalVars *) NULL_CHECK(sp[0].o))->F_contentIdToLogicId = (jref) sp[1].o;
	LINE_NUMBER(160);
	((func_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"sectionLookup"_j))));
	LINE_NUMBER(162);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logicids.dat"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_107;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(165);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	sp[1].o = (jobject)((func_arc_files_Fi_readByteStream_R_java_io_ByteArrayInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readByteStream_R_java_io_ByteArrayInputStream])(ctx, (frame[1].o));
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(166);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_writableLookableContent;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_108:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_1;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[2].o));
	frame[7].i = temp0;
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_logicIdToContent;
	jint temp1 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[6].o));
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ctype_UnlockableContent, (frame[7].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_contentIdToLogicId;
	jint temp2 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[6].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[1].o, (frame[6].o));
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ctype_ContentType_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ctype_ContentType_name_R_java_lang_String])(ctx, (frame[6].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001Count"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, (frame[7].i));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(174);
	frame[8].i = (jint(0));
	}
label_114:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_115;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[2].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, (frame[6].o), (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o));
	LINE_NUMBER(178);
	if ((frame[10].o) == nullptr) goto label_119;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_logicIdToContent;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[6].o));
	ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)), (frame[8].i)) = (frame[10].o);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_contentIdToLogicId;
	jint temp1 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[6].o));
	ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp1)), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[10].o)))->F_id)) = (frame[8].i);
	}
label_119:;
	{
	LINE_NUMBER(174);
	INST_IINC(8, 1);
	goto label_114;
	}
label_115:;
	{
	LINE_NUMBER(166);
	INST_IINC(5, 1);
	goto label_108;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(184);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	goto label_9;
	}
label_2:;
	LINE_NUMBER(165);
	INST_ASTORE(3);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_122;
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_122:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(187);
	goto label_107;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(184);
	frame[2].o = sp[0].o;
	LINE_NUMBER(186);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, (((jobject) createStringLiteral(ctx, u8"Error reading logic ID mapping"_j))), (frame[2].o));
	}
label_107:;
	printf("[GlobalVars] GlobalVars::init finished!\n"); fflush(stdout);
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_GlobalVars_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varTime;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = ((((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_tick) / (jdouble(60.0))) * (jdouble(1000.0)));
	LINE_NUMBER(196);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varTick;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = ((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_tick);
	LINE_NUMBER(199);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varSecond;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_tick) / (jdouble(60.0)));
	LINE_NUMBER(200);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varMinute;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = ((((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_tick) / (jdouble(60.0))) / (jdouble(60.0)));
	LINE_NUMBER(203);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varWave;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (jdouble(((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave)));
	LINE_NUMBER(204);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varWaveTime;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (jdouble((((jfloat)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wavetime) / (jfloat(60.0f)))));
	LINE_NUMBER(206);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varMapW;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (jdouble(temp0));
	LINE_NUMBER(207);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varMapH;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (jdouble(temp1));
	LINE_NUMBER(210);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varServer;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_net;
	jint temp2 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp2 != 0) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
label_9:;
	INST_DCONST(1);
	goto label_11;
label_10:;
	INST_DCONST(0);
label_11:;
	{
	sp -= 2;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = sp[1].d;
	LINE_NUMBER(211);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varClient;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_13;
	}
	INST_DCONST(1);
	goto label_14;
label_13:;
	INST_DCONST(0);
label_14:;
	{
	sp -= 2;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = sp[1].d;
	LINE_NUMBER(214);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(215);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varClientLocale;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_locale_R_java_lang_String])(ctx, sp[1].o);
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval = (jref) sp[1].o;
	LINE_NUMBER(216);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varClientUnit;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval = (jref) sp[1].o;
	LINE_NUMBER(217);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varClientName;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_name_R_java_lang_String])(ctx, sp[1].o);
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval = (jref) sp[1].o;
	LINE_NUMBER(218);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varClientTeam;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (jdouble(((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id)));
	LINE_NUMBER(219);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varClientMobile;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_22;
	}
	INST_DCONST(1);
	goto label_23;
label_22:;
	INST_DCONST(0);
label_23:;
	{
	sp -= 2;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = sp[1].d;
	LINE_NUMBER(220);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varClientMusicPlaying;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_sound;
	jint temp0 = (jint)((func_mindustry_audio_SoundControl_isPlaying_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_audio_SoundControl_isPlaying_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_25;
	}
	INST_DCONST(1);
	goto label_26;
label_25:;
	INST_DCONST(0);
label_26:;
	{
	sp -= 2;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = sp[1].d;
	LINE_NUMBER(222);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[0].o = (jobject)((func_mindustry_audio_SoundControl_getCurrent_R_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_getCurrent_R_arc_audio_Music])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(223);
	if ((frame[1].o) == nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)((arc_audio_Music *) NULL_CHECK((frame[1].o)))->F_file;
	if (sp[0].o != nullptr) goto label_30;
	}
label_29:;
	INST_ACONST_NULL();
	goto label_31;
label_30:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[1].o = (jobject)((arc_audio_Music *) NULL_CHECK((frame[1].o)))->F_file;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAudioName_arc_files_Fi_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAudioName_arc_files_Fi_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_31:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(224);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varClientCurrentMusic;
	sp += 1;
	if ((frame[1].o) == nullptr) goto label_33;
	}
	{
	sp[0].o = (jobject)((arc_audio_Music *) NULL_CHECK((frame[1].o)))->F_file;
	if (sp[0].o != nullptr) goto label_34;
	}
label_33:;
	INST_ACONST_NULL();
	goto label_35;
label_34:;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_36;
	{
	sp[0].o = (jobject)((arc_audio_Music *) NULL_CHECK((frame[1].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_35;
	}
label_36:;
	INST_ALOAD(2);
label_35:;
	sp -= 2;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval = (jref) sp[1].o;
label_16:;
	LINE_NUMBER(226);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_GlobalVars_waitVar_R_mindustry_logic_LVar(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:waitVar", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	clinit_mindustry_logic_GlobalVars(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_GlobalVars_varWait;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_GlobalVars_getEntries_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:getEntries", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_varEntries;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_GlobalVars_lookupContent_mindustry_ctype_ContentType_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:lookupContent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(239);
	sp[0].o = frame[1].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(240);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	if ((frame[2].i) >= (256)) goto label_3;
	}
	{
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ACONST_NULL();
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_logicIdToContent;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(244);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_6;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_6;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i));
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ACONST_NULL();
label_7:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_mindustry_logic_GlobalVars_lookupLogicId_mindustry_ctype_UnlockableContent_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:lookupLogicId", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_contentIdToLogicId;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(250);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id) < 0) goto label_2;
	}
	{
	if (((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[2].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ICONST(-1);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_GlobalVars_get_java_lang_String_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LVar, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_GlobalVars_get_java_lang_String_boolean_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(263);
	if ((frame[2].i) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_privilegedNames;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"null"_j))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LVar, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LVar, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_GlobalVars_set_java_lang_String_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_get_java_lang_String_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_get_java_lang_String_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (frame[2].d);
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:put", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_logic_LVar, sp[0].o));
	LINE_NUMBER(280);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to add global logic variable '@', as it already exists."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_2:;
	{
	LINE_NUMBER(285);
	clinit_mindustry_logic_LVar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LVar);
	init_mindustry_logic_LVar_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(286);
	((mindustry_logic_LVar *) NULL_CHECK((frame[6].o)))->F_constant = (jint(1));
	LINE_NUMBER(287);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Number)) == 0) goto label_7;
	}
	{
	frame[7].o = (checkCast(ctx, &class_java_lang_Number, (frame[2].o)));
	LINE_NUMBER(288);
	((mindustry_logic_LVar *) NULL_CHECK((frame[6].o)))->F_isobj = (jint(0));
	LINE_NUMBER(289);
	sp[0].o = frame[6].o;
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (frame[7].o));
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = temp0;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(291);
	((mindustry_logic_LVar *) NULL_CHECK((frame[6].o)))->F_isobj = (jint(1));
	LINE_NUMBER(292);
	((mindustry_logic_LVar *) NULL_CHECK((frame[6].o)))->F_objval = (jref) (frame[2].o);
	}
label_10:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[6].o));
	LINE_NUMBER(296);
	if ((frame[3].i) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_privilegedNames;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
label_13:;
	{
	LINE_NUMBER(298);
	if ((frame[4].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_varEntries;
	clinit_mindustry_logic_GlobalVars$VarEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_GlobalVars$VarEntry);
	init_mindustry_logic_GlobalVars$VarEntry_java_lang_String_java_lang_String_java_lang_String_boolean(ctx, sp[1].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))), (((jobject) createStringLiteral(ctx, u8""_j))), (frame[3].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_GlobalVars_remove_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[1].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_logic_LVar, sp[0].o));
	LINE_NUMBER(307);
	if ((frame[2].o) != (frame[1].o)) goto label_2;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[1].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(310);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_GlobalVars_remove_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_vars;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:putEntry", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:putEntry", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:putEntryOnly", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((mindustry_logic_GlobalVars *) NULL_CHECK((frame[0].o)))->F_varEntries;
	clinit_mindustry_logic_GlobalVars$VarEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_GlobalVars$VarEntry);
	init_mindustry_logic_GlobalVars$VarEntry_java_lang_String_java_lang_String_java_lang_String_boolean(ctx, sp[1].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))), (((jobject) createStringLiteral(ctx, u8""_j))), (jint(0)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_GlobalVars_lambda$init$0_java_lang_String_java_lang_Integer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:lambda$init$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_GlobalVars(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_logic_GlobalVars_ctrlProcessor = jint(1);
	SF_mindustry_logic_GlobalVars_ctrlPlayer = jint(2);
	SF_mindustry_logic_GlobalVars_ctrlCommand = jint(3);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/GlobalVars:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_GlobalVars(ctx);
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ctype_ContentType, (jint(5)));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_team;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_lookableContent = sp[0].o;
	LINE_NUMBER(26);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ctype_ContentType, (jint(4)));
	jint temp5 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = jint(1);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = jint(2);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = jint(3);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_writableLookableContent = sp[0].o;
	LINE_NUMBER(28);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_logic_GlobalVars(ctx);
	SF_mindustry_logic_GlobalVars_rand = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_GlobalVars;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method lookupContent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_logic_GlobalVars[] {
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
	(void *) M_mindustry_logic_GlobalVars_init,
	(void *) M_mindustry_logic_GlobalVars_update,
	(void *) M_mindustry_logic_GlobalVars_waitVar_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_GlobalVars_getEntries_R_arc_struct_Seq,
	(void *) M_mindustry_logic_GlobalVars_lookupContent_mindustry_ctype_ContentType_int_R_java_lang_Object,
	(void *) M_mindustry_logic_GlobalVars_lookupLogicId_mindustry_ctype_UnlockableContent_R_int,
	(void *) M_mindustry_logic_GlobalVars_get_java_lang_String_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_GlobalVars_get_java_lang_String_boolean_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_GlobalVars_set_java_lang_String_double,
	(void *) M_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_GlobalVars_remove_mindustry_logic_LVar,
	(void *) M_mindustry_logic_GlobalVars_remove_java_lang_String,
	(void *) M_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar,
	(void *) M_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String,
	(void *) M_mindustry_logic_GlobalVars_lambda$init$0_java_lang_String_java_lang_Integer,
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
	{ "update", "()V" },
	{ "waitVar", "()Lmindustry/logic/LVar;" },
	{ "getEntries", "()Larc/struct/Seq;" },
	{ "lookupContent", "(Lmindustry/ctype/ContentType;I)Ljava/lang/Object;" },
	{ "lookupLogicId", "(Lmindustry/ctype/UnlockableContent;)I" },
	{ "get", "(Ljava/lang/String;)Lmindustry/logic/LVar;" },
	{ "get", "(Ljava/lang/String;Z)Lmindustry/logic/LVar;" },
	{ "set", "(Ljava/lang/String;D)V" },
	{ "put", "(Ljava/lang/String;Ljava/lang/Object;Z)Lmindustry/logic/LVar;" },
	{ "put", "(Ljava/lang/String;Ljava/lang/Object;ZZ)Lmindustry/logic/LVar;" },
	{ "remove", "(Lmindustry/logic/LVar;)V" },
	{ "remove", "(Ljava/lang/String;)V" },
	{ "put", "(Ljava/lang/String;Ljava/lang/Object;)Lmindustry/logic/LVar;" },
	{ "putEntry", "(Ljava/lang/String;Ljava/lang/Object;)Lmindustry/logic/LVar;" },
	{ "putEntry", "(Ljava/lang/String;Ljava/lang/Object;Z)Lmindustry/logic/LVar;" },
	{ "putEntryOnly", "(Ljava/lang/String;)V" },
	{ "lambda$init$0", "(Ljava/lang/String;Ljava/lang/Integer;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_logic_GlobalVars$VarEntry,
};

static FieldMetadata fields[] {
	{ "ctrlProcessor", &class_int, (intptr_t) &SF_mindustry_logic_GlobalVars_ctrlProcessor, "I", 25 },
	{ "ctrlPlayer", &class_int, (intptr_t) &SF_mindustry_logic_GlobalVars_ctrlPlayer, "I", 25 },
	{ "ctrlCommand", &class_int, (intptr_t) &SF_mindustry_logic_GlobalVars_ctrlCommand, "I", 25 },
	{ "lookableContent", getArrayClass(&class_mindustry_ctype_ContentType, 1), (intptr_t) &SF_mindustry_logic_GlobalVars_lookableContent, "[Lmindustry/ctype/ContentType;", 25 },
	{ "writableLookableContent", getArrayClass(&class_mindustry_ctype_ContentType, 1), (intptr_t) &SF_mindustry_logic_GlobalVars_writableLookableContent, "[Lmindustry/ctype/ContentType;", 25 },
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_mindustry_logic_GlobalVars_rand, "Larc/math/Rand;", 25 },
	{ "varTime", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varTime, "Lmindustry/logic/LVar;", 10 },
	{ "varTick", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varTick, "Lmindustry/logic/LVar;", 10 },
	{ "varSecond", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varSecond, "Lmindustry/logic/LVar;", 10 },
	{ "varMinute", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varMinute, "Lmindustry/logic/LVar;", 10 },
	{ "varWave", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varWave, "Lmindustry/logic/LVar;", 10 },
	{ "varWaveTime", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varWaveTime, "Lmindustry/logic/LVar;", 10 },
	{ "varMapW", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varMapW, "Lmindustry/logic/LVar;", 10 },
	{ "varMapH", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varMapH, "Lmindustry/logic/LVar;", 10 },
	{ "varWait", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varWait, "Lmindustry/logic/LVar;", 10 },
	{ "varServer", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varServer, "Lmindustry/logic/LVar;", 10 },
	{ "varClient", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varClient, "Lmindustry/logic/LVar;", 10 },
	{ "varClientLocale", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varClientLocale, "Lmindustry/logic/LVar;", 10 },
	{ "varClientUnit", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varClientUnit, "Lmindustry/logic/LVar;", 10 },
	{ "varClientName", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varClientName, "Lmindustry/logic/LVar;", 10 },
	{ "varClientTeam", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varClientTeam, "Lmindustry/logic/LVar;", 10 },
	{ "varClientMobile", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varClientMobile, "Lmindustry/logic/LVar;", 10 },
	{ "varClientMusicPlaying", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varClientMusicPlaying, "Lmindustry/logic/LVar;", 10 },
	{ "varClientCurrentMusic", &class_mindustry_logic_LVar, (intptr_t) &SF_mindustry_logic_GlobalVars_varClientCurrentMusic, "Lmindustry/logic/LVar;", 10 },
	{ "vars", &class_arc_struct_ObjectMap, offsetof(mindustry_logic_GlobalVars, F_vars), "Larc/struct/ObjectMap;", 2 },
	{ "varEntries", &class_arc_struct_Seq, offsetof(mindustry_logic_GlobalVars, F_varEntries), "Larc/struct/Seq;", 2 },
	{ "privilegedNames", &class_arc_struct_ObjectSet, offsetof(mindustry_logic_GlobalVars, F_privilegedNames), "Larc/struct/ObjectSet;", 2 },
	{ "logicIdToContent", getArrayClass(&class_mindustry_ctype_UnlockableContent, 2), offsetof(mindustry_logic_GlobalVars, F_logicIdToContent), "[[Lmindustry/ctype/UnlockableContent;", 2 },
	{ "contentIdToLogicId", getArrayClass(&class_int, 2), offsetof(mindustry_logic_GlobalVars, F_contentIdToLogicId), "[[I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_GlobalVars, 0, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_logic_GlobalVars_init, VTABLE_mindustry_logic_GlobalVars_init, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_logic_GlobalVars_update, VTABLE_mindustry_logic_GlobalVars_update, "()V", 1 },
	{ "waitVar", (intptr_t) M_mindustry_logic_GlobalVars_waitVar_R_mindustry_logic_LVar, VTABLE_mindustry_logic_GlobalVars_waitVar_R_mindustry_logic_LVar, "()Lmindustry/logic/LVar;", 1 },
	{ "getEntries", (intptr_t) M_mindustry_logic_GlobalVars_getEntries_R_arc_struct_Seq, VTABLE_mindustry_logic_GlobalVars_getEntries_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "lookupContent", (intptr_t) M_mindustry_logic_GlobalVars_lookupContent_mindustry_ctype_ContentType_int_R_java_lang_Object, VTABLE_mindustry_logic_GlobalVars_lookupContent_mindustry_ctype_ContentType_int_R_java_lang_Object, "(Lmindustry/ctype/ContentType;I)Ljava/lang/Object;", 1 },
	{ "lookupLogicId", (intptr_t) M_mindustry_logic_GlobalVars_lookupLogicId_mindustry_ctype_UnlockableContent_R_int, VTABLE_mindustry_logic_GlobalVars_lookupLogicId_mindustry_ctype_UnlockableContent_R_int, "(Lmindustry/ctype/UnlockableContent;)I", 1 },
	{ "get", (intptr_t) M_mindustry_logic_GlobalVars_get_java_lang_String_R_mindustry_logic_LVar, VTABLE_mindustry_logic_GlobalVars_get_java_lang_String_R_mindustry_logic_LVar, "(Ljava/lang/String;)Lmindustry/logic/LVar;", 1 },
	{ "get", (intptr_t) M_mindustry_logic_GlobalVars_get_java_lang_String_boolean_R_mindustry_logic_LVar, VTABLE_mindustry_logic_GlobalVars_get_java_lang_String_boolean_R_mindustry_logic_LVar, "(Ljava/lang/String;Z)Lmindustry/logic/LVar;", 1 },
	{ "set", (intptr_t) M_mindustry_logic_GlobalVars_set_java_lang_String_double, VTABLE_mindustry_logic_GlobalVars_set_java_lang_String_double, "(Ljava/lang/String;D)V", 1 },
	{ "put", (intptr_t) M_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar, VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar, "(Ljava/lang/String;Ljava/lang/Object;Z)Lmindustry/logic/LVar;", 1 },
	{ "put", (intptr_t) M_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar, VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_boolean_boolean_R_mindustry_logic_LVar, "(Ljava/lang/String;Ljava/lang/Object;ZZ)Lmindustry/logic/LVar;", 1 },
	{ "remove", (intptr_t) M_mindustry_logic_GlobalVars_remove_mindustry_logic_LVar, VTABLE_mindustry_logic_GlobalVars_remove_mindustry_logic_LVar, "(Lmindustry/logic/LVar;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_logic_GlobalVars_remove_java_lang_String, VTABLE_mindustry_logic_GlobalVars_remove_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "put", (intptr_t) M_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar, VTABLE_mindustry_logic_GlobalVars_put_java_lang_String_java_lang_Object_R_mindustry_logic_LVar, "(Ljava/lang/String;Ljava/lang/Object;)Lmindustry/logic/LVar;", 1 },
	{ "putEntry", (intptr_t) M_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar, VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_R_mindustry_logic_LVar, "(Ljava/lang/String;Ljava/lang/Object;)Lmindustry/logic/LVar;", 1 },
	{ "putEntry", (intptr_t) M_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar, VTABLE_mindustry_logic_GlobalVars_putEntry_java_lang_String_java_lang_Object_boolean_R_mindustry_logic_LVar, "(Ljava/lang/String;Ljava/lang/Object;Z)Lmindustry/logic/LVar;", 1 },
	{ "putEntryOnly", (intptr_t) M_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String, VTABLE_mindustry_logic_GlobalVars_putEntryOnly_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "lambda$init$0", (intptr_t) M_mindustry_logic_GlobalVars_lambda$init$0_java_lang_String_java_lang_Integer, VTABLE_mindustry_logic_GlobalVars_lambda$init$0_java_lang_String_java_lang_Integer, "(Ljava/lang/String;Ljava/lang/Integer;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_GlobalVars, 0, "()V", 8 },
};

Class class_mindustry_logic_GlobalVars{
		.nativeName = (intptr_t) "mindustry/logic/GlobalVars",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_GlobalVars),
		.classVtable = (intptr_t) vtable_mindustry_logic_GlobalVars,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_GlobalVars,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_GlobalVars,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 29,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_GlobalVars = registerClass(&class_mindustry_logic_GlobalVars);

}
