#include "mindustry/logic/LExecutor_MakeMarkerI.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LMarkerControl.h"
#include "mindustry/logic/LExecutor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/game/MapMarkers.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/game/MapObjectives.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/logic/LExecutor_MakeMarkerI.h"

extern "C" {

jint SF_mindustry_logic_LExecutor$MakeMarkerI_maxMarkers;

void mark_mindustry_logic_LExecutor$MakeMarkerI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$MakeMarkerI *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_replace)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_replace)->clazz)->markFunction)((jobject) self->F_replace, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$MakeMarkerI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_logic_LExecutor$MakeMarkerI_maxMarkers = jint(20000);
}

void init_mindustry_logic_LExecutor$MakeMarkerI_java_lang_String_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$MakeMarkerI:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$MakeMarkerI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(2329);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2326);
	((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (((jobject) createStringLiteral(ctx, u8"shape"_j)));
	LINE_NUMBER(2330);
	((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(2331);
	((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_id = (jref) (frame[2].o);
	LINE_NUMBER(2332);
	((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[3].o);
	LINE_NUMBER(2333);
	((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[4].o);
	LINE_NUMBER(2334);
	((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_replace = (jref) (frame[5].o);
	LINE_NUMBER(2335);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$MakeMarkerI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$MakeMarkerI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$MakeMarkerI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2337);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2326);
	((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (((jobject) createStringLiteral(ctx, u8"shape"_j)));
	LINE_NUMBER(2338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$MakeMarkerI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$MakeMarkerI:run", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2342);
	clinit_mindustry_game_MapObjectives(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives_markerNameToType;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_func_Prov, sp[0].o));
	LINE_NUMBER(2344);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	jint temp0 = (jint)((func_mindustry_game_MapMarkers_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_size_R_int])(ctx, sp[0].o);
	if (temp0 >= (20000)) goto label_2;
	}
	{
	LINE_NUMBER(2345);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_id;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(2346);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_replace;
	jint temp1 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	jint temp0 = (jint)((func_mindustry_game_MapMarkers_has_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_has_int_R_boolean])(ctx, sp[0].o, (frame[3].i));
	if (temp0 != 0) goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(2347);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o));
	LINE_NUMBER(2348);
	sp[0].o = frame[4].o;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_pos;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_x;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_logic_LExecutor$MakeMarkerI *) NULL_CHECK((frame[0].o)))->F_y;
	jdouble temp1 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[2].o);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double])(ctx, sp[0].o, sp[1].o, temp0, temp1, (jdouble(0)));
	LINE_NUMBER(2349);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	((func_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_add_int_mindustry_game_MapObjectives$ObjectiveMarker])(ctx, sp[0].o, (frame[3].i), (frame[4].o));
	}
label_2:;
	LINE_NUMBER(2352);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$MakeMarkerI[] {
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
	(void *) M_mindustry_logic_LExecutor$MakeMarkerI_run_mindustry_logic_LExecutor,
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
	{ "maxMarkers", &class_int, (intptr_t) &SF_mindustry_logic_LExecutor$MakeMarkerI_maxMarkers, "I", 25 },
	{ "type", &class_java_lang_String, offsetof(mindustry_logic_LExecutor$MakeMarkerI, F_type), "Ljava/lang/String;", 1 },
	{ "id", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$MakeMarkerI, F_id), "Lmindustry/logic/LVar;", 1 },
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$MakeMarkerI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$MakeMarkerI, F_y), "Lmindustry/logic/LVar;", 1 },
	{ "replace", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$MakeMarkerI, F_replace), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$MakeMarkerI_java_lang_String_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Ljava/lang/String;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$MakeMarkerI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$MakeMarkerI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$MakeMarkerI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$MakeMarkerI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$MakeMarkerI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$MakeMarkerI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$MakeMarkerI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$MakeMarkerI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$MakeMarkerI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$MakeMarkerI = registerClass(&class_mindustry_logic_LExecutor$MakeMarkerI);

}

