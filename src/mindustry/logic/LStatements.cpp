#include "mindustry/logic/LStatements.h"
#include "mindustry/logic/LStatements_WriteStatement.h"
#include "mindustry/logic/LStatements_WaitStatement.h"
#include "mindustry/logic/LStatements_PlayMusicStatement.h"
#include "mindustry/logic/LStatements_UnitLocateStatement.h"
#include "mindustry/logic/LStatements_RadarStatement.h"
#include "mindustry/logic/LStatements_LookupStatement.h"
#include "mindustry/logic/LStatements_WeatherSetStatement.h"
#include "mindustry/logic/LStatements_CutsceneStatement.h"
#include "mindustry/logic/LStatements_SetRuleStatement.h"
#include "mindustry/logic/LStatements_PlaySoundStatement.h"
#include "mindustry/logic/LStatements_PrintFlushStatement.h"
#include "mindustry/logic/LStatements_FetchStatement.h"
#include "mindustry/logic/LStatements_SetStatement.h"
#include "mindustry/logic/LStatements_ReadStatement.h"
#include "mindustry/logic/LStatements_DrawFlushStatement.h"
#include "mindustry/logic/LStatements_GetLinkStatement.h"
#include "mindustry/logic/LStatements_UnpackColorStatement.h"
#include "mindustry/logic/LStatements_ApplyStatusStatement.h"
#include "mindustry/logic/LStatements_UnitBindStatement.h"
#include "mindustry/logic/LStatements_UnitControlStatement.h"
#include "mindustry/logic/LStatements_SetPropStatement.h"
#include "mindustry/logic/LStatements_LocalePrintStatement.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LStatements_OperationStatement.h"
#include "mindustry/logic/LStatements_SpawnBulletStatement.h"
#include "mindustry/logic/LStatements_EndStatement.h"
#include "mindustry/logic/LStatements_SelectStatement.h"
#include "mindustry/logic/LStatements_GetFlagStatement.h"
#include "mindustry/logic/LStatements_WeatherSenseStatement.h"
#include "mindustry/logic/LStatements_JumpStatement.h"
#include "mindustry/logic/LStatements_PackColorStatement.h"
#include "mindustry/logic/LStatements_StopStatement.h"
#include "mindustry/logic/LStatements_QueryStatement.h"
#include "mindustry/logic/LStatements_SetMarkerStatement.h"
#include "mindustry/logic/LStatements_SensorStatement.h"
#include "mindustry/logic/LStatements_EffectStatement.h"
#include "mindustry/logic/LStatements_UnitRadarStatement.h"
#include "mindustry/logic/LStatements_ExplosionStatement.h"
#include "mindustry/logic/LStatements_ControlStatement.h"
#include "mindustry/logic/LStatements_FlushMessageStatement.h"
#include "mindustry/logic/LStatements_CommentStatement.h"
#include "mindustry/logic/LStatements_PrintCharStatement.h"
#include "mindustry/logic/LStatements_SyncStatement.h"
#include "mindustry/logic/LStatements_MakeMarkerStatement.h"
#include "mindustry/logic/LStatements_ClientDataStatement.h"
#include "mindustry/logic/LStatements_SetRateStatement.h"
#include "mindustry/logic/LStatements_PrintStatement.h"
#include "mindustry/logic/LStatements_SpawnWaveStatement.h"
#include "mindustry/logic/LStatements_SetBlockStatement.h"
#include "mindustry/logic/LStatements_SetFlagStatement.h"
#include "mindustry/logic/LStatements_InvalidStatement.h"
#include "mindustry/logic/LStatements_DrawStatement.h"
#include "mindustry/logic/LStatements_GetBlockStatement.h"
#include "mindustry/logic/LStatements_FormatStatement.h"
#include "mindustry/logic/LStatements_SpawnUnitStatement.h"

extern "C" {


void mark_mindustry_logic_LStatements(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements *) object;
}

void clinit_mindustry_logic_LStatements(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LStatements(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements[] {
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
	&class_mindustry_logic_LStatements$LocalePrintStatement,
	&class_mindustry_logic_LStatements$MakeMarkerStatement,
	&class_mindustry_logic_LStatements$SetMarkerStatement,
	&class_mindustry_logic_LStatements$PlayMusicStatement,
	&class_mindustry_logic_LStatements$PlaySoundStatement,
	&class_mindustry_logic_LStatements$SetPropStatement,
	&class_mindustry_logic_LStatements$SetFlagStatement,
	&class_mindustry_logic_LStatements$GetFlagStatement,
	&class_mindustry_logic_LStatements$ClientDataStatement,
	&class_mindustry_logic_LStatements$SyncStatement,
	&class_mindustry_logic_LStatements$FetchStatement,
	&class_mindustry_logic_LStatements$SetRateStatement,
	&class_mindustry_logic_LStatements$ExplosionStatement,
	&class_mindustry_logic_LStatements$EffectStatement,
	&class_mindustry_logic_LStatements$CutsceneStatement,
	&class_mindustry_logic_LStatements$FlushMessageStatement,
	&class_mindustry_logic_LStatements$SetRuleStatement,
	&class_mindustry_logic_LStatements$SpawnWaveStatement,
	&class_mindustry_logic_LStatements$WeatherSetStatement,
	&class_mindustry_logic_LStatements$WeatherSenseStatement,
	&class_mindustry_logic_LStatements$ApplyStatusStatement,
	&class_mindustry_logic_LStatements$SpawnBulletStatement,
	&class_mindustry_logic_LStatements$SpawnUnitStatement,
	&class_mindustry_logic_LStatements$SetBlockStatement,
	&class_mindustry_logic_LStatements$GetBlockStatement,
	&class_mindustry_logic_LStatements$QueryStatement,
	&class_mindustry_logic_LStatements$UnitLocateStatement,
	&class_mindustry_logic_LStatements$UnitRadarStatement,
	&class_mindustry_logic_LStatements$UnitControlStatement,
	&class_mindustry_logic_LStatements$UnitBindStatement,
	&class_mindustry_logic_LStatements$JumpStatement,
	&class_mindustry_logic_LStatements$EndStatement,
	&class_mindustry_logic_LStatements$UnpackColorStatement,
	&class_mindustry_logic_LStatements$PackColorStatement,
	&class_mindustry_logic_LStatements$LookupStatement,
	&class_mindustry_logic_LStatements$StopStatement,
	&class_mindustry_logic_LStatements$WaitStatement,
	&class_mindustry_logic_LStatements$SelectStatement,
	&class_mindustry_logic_LStatements$OperationStatement,
	&class_mindustry_logic_LStatements$SetStatement,
	&class_mindustry_logic_LStatements$SensorStatement,
	&class_mindustry_logic_LStatements$RadarStatement,
	&class_mindustry_logic_LStatements$ControlStatement,
	&class_mindustry_logic_LStatements$GetLinkStatement,
	&class_mindustry_logic_LStatements$PrintFlushStatement,
	&class_mindustry_logic_LStatements$DrawFlushStatement,
	&class_mindustry_logic_LStatements$FormatStatement,
	&class_mindustry_logic_LStatements$PrintCharStatement,
	&class_mindustry_logic_LStatements$PrintStatement,
	&class_mindustry_logic_LStatements$DrawStatement,
	&class_mindustry_logic_LStatements$WriteStatement,
	&class_mindustry_logic_LStatements$ReadStatement,
	&class_mindustry_logic_LStatements$InvalidStatement,
	&class_mindustry_logic_LStatements$CommentStatement,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements, 0, "()V", 1 },
};

Class class_mindustry_logic_LStatements{
		.nativeName = (intptr_t) "mindustry/logic/LStatements",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LStatements),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 54,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements = registerClass(&class_mindustry_logic_LStatements);

}
