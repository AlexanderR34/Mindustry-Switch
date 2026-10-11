#include "mindustry/logic/LExecutor_FlushMessageI.h"
#include "java/lang/StringBuilder.h"
#include "arc/Core.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/logic/GlobalVars.h"
#include "mindustry/core/UI.h"
#include "mindustry/logic/MessageType.h"
#include "mindustry/logic/LExecutor_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LExecutor_FlushMessageI.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_logic_LExecutor$FlushMessageI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$FlushMessageI *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_duration)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_duration)->clazz)->markFunction)((jobject) self->F_duration, mark, depth + 1);
	if (self->F_outSuccess)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outSuccess)->clazz)->markFunction)((jobject) self->F_outSuccess, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$FlushMessageI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$FlushMessageI_mindustry_logic_MessageType_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$FlushMessageI:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$FlushMessageI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1921);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1918);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_announce;
	((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1922);
	((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(1923);
	((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_duration = (jref) (frame[2].o);
	LINE_NUMBER(1924);
	((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_outSuccess = (jref) (frame[3].o);
	LINE_NUMBER(1925);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$FlushMessageI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$FlushMessageI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$FlushMessageI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1927);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1918);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_announce;
	((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(1928);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$FlushMessageI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$FlushMessageI:run", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1933);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_outSuccess;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(1)));
	LINE_NUMBER(1934);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_mission;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(1935);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(1936);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(1939);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_announce;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	LINE_NUMBER(1940);
	jint temp0 = (jint)((func_mindustry_core_UI_hasAnnouncement_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_hasAnnouncement_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
label_5:;
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_notify;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	LINE_NUMBER(1941);
	jint temp0 = (jint)((func_mindustry_ui_fragments_HudFragment_hasToast_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_hasToast_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
label_8:;
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_toast;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	LINE_NUMBER(1942);
	jint temp0 = (jint)((func_mindustry_core_UI_hasAnnouncement_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_hasAnnouncement_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(1945);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_outSuccess;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_logicVars;
	sp[1].o = (jobject)((func_mindustry_logic_GlobalVars_waitVar_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_waitVar_R_mindustry_logic_LVar])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(1946);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_counter;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = (((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval) - (jdouble(1)));
	LINE_NUMBER(1947);
	((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_yield = (jint(1));
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(1950);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_outSuccess;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(0)));
	}
label_15:;
	LINE_NUMBER(1952);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(1955);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1956);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1957);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1958);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1959);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	frame[2].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(1963);
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$MessageType;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_logic_MessageType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_MessageType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_21;
		case 2: goto label_22;
		case 3: goto label_23;
		case 4: goto label_24;
		default: goto label_25;
	}
	}
label_21:;
	{
	LINE_NUMBER(1964);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudfrag;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_info;
	((func_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment_showToast_arc_scene_style_Drawable_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(1965);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_duration;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[2].o);
	((func_mindustry_core_UI_announce_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_announce_java_lang_String_float])(ctx, sp[0].o, sp[1].o, temp0);
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(1966);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$FlushMessageI *) NULL_CHECK((frame[0].o)))->F_duration;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[2].o);
	((func_mindustry_core_UI_showInfoToast_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoToast_java_lang_String_float])(ctx, sp[0].o, sp[1].o, temp0);
	goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(1968);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_mission = (jref) (frame[2].o);
	}
label_25:;
	{
	LINE_NUMBER(1971);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(1972);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$FlushMessageI[] {
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
	(void *) M_mindustry_logic_LExecutor$FlushMessageI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "type", &class_mindustry_logic_MessageType, offsetof(mindustry_logic_LExecutor$FlushMessageI, F_type), "Lmindustry/logic/MessageType;", 1 },
	{ "duration", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$FlushMessageI, F_duration), "Lmindustry/logic/LVar;", 1 },
	{ "outSuccess", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$FlushMessageI, F_outSuccess), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$FlushMessageI_mindustry_logic_MessageType_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/MessageType;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$FlushMessageI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$FlushMessageI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$FlushMessageI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$FlushMessageI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$FlushMessageI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$FlushMessageI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$FlushMessageI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$FlushMessageI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$FlushMessageI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$FlushMessageI = registerClass(&class_mindustry_logic_LExecutor$FlushMessageI);

}

