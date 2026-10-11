#include "mindustry/game/Objectives_OnSector.h"
#include "mindustry/game/Objectives_OnSector.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/game/Objectives.h"
#include "mindustry/type/Sector.h"
#include "mindustry/game/Objectives_Objective.h"
#include "mindustry/type/SectorPreset.h"

extern "C" {


void mark_mindustry_game_Objectives$OnSector(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Objectives$OnSector *) object;
	if (self->F_preset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_preset)->clazz)->markFunction)((jobject) self->F_preset, mark, depth + 1);
}

void clinit_mindustry_game_Objectives$OnSector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$OnSector:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Objectives$OnSector(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(94);
	((mindustry_game_Objectives$OnSector *) NULL_CHECK((frame[0].o)))->F_preset = (jref) (frame[1].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Objectives$OnSector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$OnSector:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Objectives$OnSector(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(97);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Objectives$OnSector_complete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$OnSector:complete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_game_Objectives$OnSector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Objectives$OnSector_display_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$OnSector:display", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"requirement.onsector"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_game_Objectives$OnSector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[3].o))->F_localizedName;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Objectives$OnSector_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$OnSector:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_game_Objectives$OnSector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"onSector: \u0001"_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Objectives$OnSector[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_Objectives$OnSector_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_Objectives$OnSector_complete_R_boolean,
	(void *) M_mindustry_game_Objectives$OnSector_display_R_java_lang_String,
	(void *) M_mindustry_game_Objectives$Objective_build_arc_scene_ui_layout_Table,
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
	{ "complete", "()Z" },
	{ "display", "()Ljava/lang/String;" },
	{ "build", "(Larc/scene/ui/layout/Table;)V" },
};

static jclass interfaces[] { &class_mindustry_game_Objectives$Objective, };

static FieldMetadata fields[] {
	{ "preset", &class_mindustry_type_SectorPreset, offsetof(mindustry_game_Objectives$OnSector, F_preset), "Lmindustry/type/SectorPreset;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset, 0, "(Lmindustry/type/SectorPreset;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_Objectives$OnSector, 0, "()V", 4 },
	{ "complete", (intptr_t) M_mindustry_game_Objectives$OnSector_complete_R_boolean, VTABLE_mindustry_game_Objectives$OnSector_complete_R_boolean, "()Z", 1 },
	{ "display", (intptr_t) M_mindustry_game_Objectives$OnSector_display_R_java_lang_String, VTABLE_mindustry_game_Objectives$OnSector_display_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_mindustry_game_Objectives$OnSector_toString_R_java_lang_String, VTABLE_mindustry_game_Objectives$OnSector_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_game_Objectives$OnSector{
		.nativeName = (intptr_t) "mindustry/game/Objectives$OnSector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Objectives$OnSector),
		.classVtable = (intptr_t) vtable_mindustry_game_Objectives$OnSector,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Objectives$OnSector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Objectives$OnSector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_Objectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Objectives$OnSector = registerClass(&class_mindustry_game_Objectives$OnSector);

}

