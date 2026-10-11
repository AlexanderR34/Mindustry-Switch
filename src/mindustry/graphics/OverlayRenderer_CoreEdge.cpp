#include "mindustry/graphics/OverlayRenderer_CoreEdge.h"
#include "mindustry/graphics/OverlayRenderer.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Player.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/graphics/OverlayRenderer_CoreEdge.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/Team.h"
#include "arc/util/Nullable.h"
#include "mindustry/Vars.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_graphics_OverlayRenderer$CoreEdge(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_OverlayRenderer$CoreEdge *) object;
	if (self->F_t1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_t1)->clazz)->markFunction)((jobject) self->F_t1, mark, depth + 1);
	if (self->F_t2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_t2)->clazz)->markFunction)((jobject) self->F_t2, mark, depth + 1);
}

void clinit_mindustry_graphics_OverlayRenderer$CoreEdge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_OverlayRenderer$CoreEdge_float_float_float_float_mindustry_game_Team_mindustry_game_Team(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer$CoreEdge:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_OverlayRenderer$CoreEdge(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(283);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(284);
	((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_x1 = (frame[1].f);
	LINE_NUMBER(285);
	((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_y1 = (frame[2].f);
	LINE_NUMBER(286);
	((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_x2 = (frame[3].f);
	LINE_NUMBER(287);
	((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_y2 = (frame[4].f);
	LINE_NUMBER(288);
	((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t1 = (jref) (frame[5].o);
	LINE_NUMBER(289);
	((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t2 = (jref) (frame[6].o);
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_OverlayRenderer$CoreEdge_displayed_R_mindustry_game_Team(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/OverlayRenderer$CoreEdge:displayed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t1;
	sp[1].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t2;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t1;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t2;
	sp += 1;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t2;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t1;
	sp += 1;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t2;
	if (((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t1;
	sp += 1;
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t1;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t2;
	if (temp0 >= ((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id)) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t1;
	if (((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK((frame[0].o)))->F_t1;
	sp += 1;
	goto label_2;
	}
label_6:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_graphics_OverlayRenderer$CoreEdge *) NULL_CHECK(sp[-1].o))->F_t2;
label_2:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_graphics_OverlayRenderer$CoreEdge;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method displayed
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}
}

void *vtable_mindustry_graphics_OverlayRenderer$CoreEdge[] {
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
	(void *) M_mindustry_graphics_OverlayRenderer$CoreEdge_displayed_R_mindustry_game_Team,
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
	{ "displayed", "()Lmindustry/game/Team;" },
};

static FieldMetadata fields[] {
	{ "x1", &class_float, offsetof(mindustry_graphics_OverlayRenderer$CoreEdge, F_x1), "F", 0 },
	{ "y1", &class_float, offsetof(mindustry_graphics_OverlayRenderer$CoreEdge, F_y1), "F", 0 },
	{ "x2", &class_float, offsetof(mindustry_graphics_OverlayRenderer$CoreEdge, F_x2), "F", 0 },
	{ "y2", &class_float, offsetof(mindustry_graphics_OverlayRenderer$CoreEdge, F_y2), "F", 0 },
	{ "t1", &class_mindustry_game_Team, offsetof(mindustry_graphics_OverlayRenderer$CoreEdge, F_t1), "Lmindustry/game/Team;", 0 },
	{ "t2", &class_mindustry_game_Team, offsetof(mindustry_graphics_OverlayRenderer$CoreEdge, F_t2), "Lmindustry/game/Team;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_OverlayRenderer$CoreEdge_float_float_float_float_mindustry_game_Team_mindustry_game_Team, 0, "(FFFFLmindustry/game/Team;Lmindustry/game/Team;)V", 1 },
	{ "displayed", (intptr_t) M_mindustry_graphics_OverlayRenderer$CoreEdge_displayed_R_mindustry_game_Team, VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_displayed_R_mindustry_game_Team, "()Lmindustry/game/Team;", 0 },
};

Class class_mindustry_graphics_OverlayRenderer$CoreEdge{
		.nativeName = (intptr_t) "mindustry/graphics/OverlayRenderer$CoreEdge",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_OverlayRenderer$CoreEdge),
		.classVtable = (intptr_t) vtable_mindustry_graphics_OverlayRenderer$CoreEdge,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_OverlayRenderer$CoreEdge,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_graphics_OverlayRenderer$CoreEdge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_OverlayRenderer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_OverlayRenderer$CoreEdge = registerClass(&class_mindustry_graphics_OverlayRenderer$CoreEdge);

}

