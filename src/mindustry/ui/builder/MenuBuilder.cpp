#include "mindustry/ui/builder/MenuBuilder.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "mindustry/ui/builder/MenuBuilder.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/gen/Player.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ui/builder/UiBuilder_TableBuilder.h"
#include "mindustry/ui/builder/UiDslParser.h"
#include "mindustry/gen/Call.h"
#include "mindustry/net/NetConnection.h"

extern "C" {


void mark_mindustry_ui_builder_MenuBuilder(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_builder_MenuBuilder *) object;
	if (self->F_title)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_title)->clazz)->markFunction)((jobject) self->F_title, mark, depth + 1);
	if (self->F_ui)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ui)->clazz)->markFunction)((jobject) self->F_ui, mark, depth + 1);
}

void clinit_mindustry_ui_builder_MenuBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_MenuBuilder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_hideOnClick = (jint(1));
	LINE_NUMBER(14);
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_hideExisting = (jint(1));
	LINE_NUMBER(16);
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_fillScreen = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_MenuBuilder_of_mindustry_ui_builder_UiBuilder$NodeBuilder_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:of", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_MenuBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(26);
	clinit_mindustry_ui_builder_MenuBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_MenuBuilder);
	init_mindustry_ui_builder_MenuBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(27);
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[1].o)))->F_ui = (jref) (frame[0].o);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_MenuBuilder_of_java_lang_String_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:of", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_MenuBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	clinit_mindustry_ui_builder_MenuBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_MenuBuilder);
	init_mindustry_ui_builder_MenuBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(34);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_mindustry_ui_builder_UiDslParser_parse_java_lang_String_R_mindustry_ui_builder_UiBuilder$TableBuilder(ctx, (frame[0].o));
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK(sp[0].o))->F_ui = (jref) sp[1].o;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_builder_MenuBuilder_show_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:show", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	jint temp0 = (jint)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_id;
	jlong temp1 = (jlong)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_token;
	sp[1].o = (jobject)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_title;
	jint temp2 = (jint)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_hideOnClick;
	jint temp3 = (jint)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_hideExisting;
	jint temp4 = (jint)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_fillScreen;
	sp[2].o = (jobject)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_ui;
	SM_mindustry_gen_Call_menuBuilder_mindustry_net_NetConnection_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, sp[0].o, temp0, temp1, sp[1].o, temp2, temp3, temp4, sp[2].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_builder_MenuBuilder_showAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:showAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_id;
	jlong temp1 = (jlong)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_token;
	sp[0].o = (jobject)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_title;
	jint temp2 = (jint)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_hideOnClick;
	jint temp3 = (jint)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_hideExisting;
	jint temp4 = (jint)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_fillScreen;
	sp[1].o = (jobject)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_ui;
	SM_mindustry_gen_Call_menuBuilder_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, temp0, temp1, sp[0].o, temp2, temp3, temp4, sp[1].o);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_builder_MenuBuilder_update_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	jint temp0 = (jint)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_id;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_ui;
	SM_mindustry_gen_Call_menuBuilderUpdate_mindustry_net_NetConnection_int_java_lang_String_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_MenuBuilder_hideExisting_boolean_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:hideExisting", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(54);
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_hideExisting = (frame[1].i);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_MenuBuilder_token_long_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:token", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(59);
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_token = (frame[1].l);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_MenuBuilder_title_java_lang_String_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:title", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_title = (jref) (frame[1].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_MenuBuilder_hideOnClick_boolean_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:hideOnClick", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(69);
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_hideOnClick = (frame[1].i);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_MenuBuilder_fillScreen_boolean_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:fillScreen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_fillScreen = (frame[1].i);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_MenuBuilder_id_int_R_mindustry_ui_builder_MenuBuilder(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/MenuBuilder:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(79);
	((mindustry_ui_builder_MenuBuilder *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_builder_MenuBuilder;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field title
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_builder_MenuBuilder[] {
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
	(void *) M_mindustry_ui_builder_MenuBuilder_show_mindustry_gen_Player,
	(void *) M_mindustry_ui_builder_MenuBuilder_showAll,
	(void *) M_mindustry_ui_builder_MenuBuilder_update_mindustry_gen_Player_java_lang_String,
	(void *) M_mindustry_ui_builder_MenuBuilder_hideExisting_boolean_R_mindustry_ui_builder_MenuBuilder,
	(void *) M_mindustry_ui_builder_MenuBuilder_token_long_R_mindustry_ui_builder_MenuBuilder,
	(void *) M_mindustry_ui_builder_MenuBuilder_title_java_lang_String_R_mindustry_ui_builder_MenuBuilder,
	(void *) M_mindustry_ui_builder_MenuBuilder_hideOnClick_boolean_R_mindustry_ui_builder_MenuBuilder,
	(void *) M_mindustry_ui_builder_MenuBuilder_fillScreen_boolean_R_mindustry_ui_builder_MenuBuilder,
	(void *) M_mindustry_ui_builder_MenuBuilder_id_int_R_mindustry_ui_builder_MenuBuilder,
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
	{ "show", "(Lmindustry/gen/Player;)V" },
	{ "showAll", "()V" },
	{ "update", "(Lmindustry/gen/Player;Ljava/lang/String;)V" },
	{ "hideExisting", "(Z)Lmindustry/ui/builder/MenuBuilder;" },
	{ "token", "(J)Lmindustry/ui/builder/MenuBuilder;" },
	{ "title", "(Ljava/lang/String;)Lmindustry/ui/builder/MenuBuilder;" },
	{ "hideOnClick", "(Z)Lmindustry/ui/builder/MenuBuilder;" },
	{ "fillScreen", "(Z)Lmindustry/ui/builder/MenuBuilder;" },
	{ "id", "(I)Lmindustry/ui/builder/MenuBuilder;" },
};

static FieldMetadata fields[] {
	{ "title", &class_java_lang_String, offsetof(mindustry_ui_builder_MenuBuilder, F_title), "Ljava/lang/String;", 1 },
	{ "hideOnClick", &class_boolean, offsetof(mindustry_ui_builder_MenuBuilder, F_hideOnClick), "Z", 1 },
	{ "hideExisting", &class_boolean, offsetof(mindustry_ui_builder_MenuBuilder, F_hideExisting), "Z", 1 },
	{ "fillScreen", &class_boolean, offsetof(mindustry_ui_builder_MenuBuilder, F_fillScreen), "Z", 1 },
	{ "token", &class_long, offsetof(mindustry_ui_builder_MenuBuilder, F_token), "J", 1 },
	{ "id", &class_int, offsetof(mindustry_ui_builder_MenuBuilder, F_id), "I", 1 },
	{ "ui", &class_mindustry_ui_builder_UiBuilder$NodeBuilder, offsetof(mindustry_ui_builder_MenuBuilder, F_ui), "Lmindustry/ui/builder/UiBuilder$NodeBuilder;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_MenuBuilder, 0, "()V", 1 },
	{ "of", (intptr_t) SM_mindustry_ui_builder_MenuBuilder_of_mindustry_ui_builder_UiBuilder$NodeBuilder_R_mindustry_ui_builder_MenuBuilder, 0, "(Lmindustry/ui/builder/UiBuilder$NodeBuilder;)Lmindustry/ui/builder/MenuBuilder;", 9 },
	{ "of", (intptr_t) SM_mindustry_ui_builder_MenuBuilder_of_java_lang_String_R_mindustry_ui_builder_MenuBuilder, 0, "(Ljava/lang/String;)Lmindustry/ui/builder/MenuBuilder;", 9 },
	{ "show", (intptr_t) M_mindustry_ui_builder_MenuBuilder_show_mindustry_gen_Player, VTABLE_mindustry_ui_builder_MenuBuilder_show_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "showAll", (intptr_t) M_mindustry_ui_builder_MenuBuilder_showAll, VTABLE_mindustry_ui_builder_MenuBuilder_showAll, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_ui_builder_MenuBuilder_update_mindustry_gen_Player_java_lang_String, VTABLE_mindustry_ui_builder_MenuBuilder_update_mindustry_gen_Player_java_lang_String, "(Lmindustry/gen/Player;Ljava/lang/String;)V", 1 },
	{ "hideExisting", (intptr_t) M_mindustry_ui_builder_MenuBuilder_hideExisting_boolean_R_mindustry_ui_builder_MenuBuilder, VTABLE_mindustry_ui_builder_MenuBuilder_hideExisting_boolean_R_mindustry_ui_builder_MenuBuilder, "(Z)Lmindustry/ui/builder/MenuBuilder;", 1 },
	{ "token", (intptr_t) M_mindustry_ui_builder_MenuBuilder_token_long_R_mindustry_ui_builder_MenuBuilder, VTABLE_mindustry_ui_builder_MenuBuilder_token_long_R_mindustry_ui_builder_MenuBuilder, "(J)Lmindustry/ui/builder/MenuBuilder;", 1 },
	{ "title", (intptr_t) M_mindustry_ui_builder_MenuBuilder_title_java_lang_String_R_mindustry_ui_builder_MenuBuilder, VTABLE_mindustry_ui_builder_MenuBuilder_title_java_lang_String_R_mindustry_ui_builder_MenuBuilder, "(Ljava/lang/String;)Lmindustry/ui/builder/MenuBuilder;", 1 },
	{ "hideOnClick", (intptr_t) M_mindustry_ui_builder_MenuBuilder_hideOnClick_boolean_R_mindustry_ui_builder_MenuBuilder, VTABLE_mindustry_ui_builder_MenuBuilder_hideOnClick_boolean_R_mindustry_ui_builder_MenuBuilder, "(Z)Lmindustry/ui/builder/MenuBuilder;", 1 },
	{ "fillScreen", (intptr_t) M_mindustry_ui_builder_MenuBuilder_fillScreen_boolean_R_mindustry_ui_builder_MenuBuilder, VTABLE_mindustry_ui_builder_MenuBuilder_fillScreen_boolean_R_mindustry_ui_builder_MenuBuilder, "(Z)Lmindustry/ui/builder/MenuBuilder;", 1 },
	{ "id", (intptr_t) M_mindustry_ui_builder_MenuBuilder_id_int_R_mindustry_ui_builder_MenuBuilder, VTABLE_mindustry_ui_builder_MenuBuilder_id_int_R_mindustry_ui_builder_MenuBuilder, "(I)Lmindustry/ui/builder/MenuBuilder;", 1 },
};

Class class_mindustry_ui_builder_MenuBuilder{
		.nativeName = (intptr_t) "mindustry/ui/builder/MenuBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_MenuBuilder),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_MenuBuilder,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_MenuBuilder,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_MenuBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_MenuBuilder = registerClass(&class_mindustry_ui_builder_MenuBuilder);

}
