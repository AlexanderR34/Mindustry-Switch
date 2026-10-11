#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Connector_1.h"
#include "mindustry/gen/Tex.h"
#include "java/lang/Object.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Connector_1.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/Button_ButtonStyle.h"

extern "C" {


void mark_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_Button$ButtonStyle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1 *) object;
	if (self->F_this$2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$2)->clazz)->markFunction)((jobject) self->F_this$2, mark, depth + 1);
}

void clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Button$ButtonStyle(ctx);
}

void init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(475);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1 *) NULL_CHECK((frame[0].o)))->F_val$findParent = (frame[2].i);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1 *) NULL_CHECK((frame[0].o)))->F_this$2 = (jref) (frame[1].o);
	init_arc_scene_ui_Button$ButtonStyle(ctx, (frame[0].o));
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1 *) NULL_CHECK((frame[0].o)))->F_val$findParent) == 0) goto label_2;
	}
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_buttonSideLeftDown;
	goto label_3;
label_2:;
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_buttonSideRightDown;
label_3:;
	{
	sp -= 2;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down = (jref) sp[1].o;
	LINE_NUMBER(477);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1 *) NULL_CHECK((frame[0].o)))->F_val$findParent) == 0) goto label_5;
	}
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_buttonSideLeft;
	goto label_6;
label_5:;
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_buttonSideRight;
label_6:;
	{
	sp -= 2;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	LINE_NUMBER(478);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1 *) NULL_CHECK((frame[0].o)))->F_val$findParent) == 0) goto label_8;
	}
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_buttonSideLeftOver;
	goto label_9;
label_8:;
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_buttonSideRightOver;
label_9:;
	{
	sp -= 2;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_over = (jref) sp[1].o;
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1[] {
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

static FieldMetadata fields[] {
	{ "val$findParent", &class_boolean, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1, F_val$findParent), "Z", 4112 },
	{ "this$2", &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1, F_this$2), "Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_boolean, 0, "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;Z)V", 0 },
};

Class class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1",
		.parentClass = (intptr_t) &class_arc_scene_ui_Button$ButtonStyle,
		.size = sizeof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1 = registerClass(&class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector$1);

}

