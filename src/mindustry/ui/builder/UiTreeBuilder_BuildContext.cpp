#include "mindustry/ui/builder/UiTreeBuilder_BuildContext.h"
#include "arc/func/Prov.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/builder/UiTreeBuilder.h"
#include "arc/util/Nullable.h"
#include "mindustry/ui/builder/UiTreeBuilder_BuildContext_invoke_arc_func_Prov_1.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "java/lang/String.h"
#include "mindustry/ui/builder/UiTreeBuilder_BuildContext.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/ObjectMap.h"

extern "C" {


void mark_mindustry_ui_builder_UiTreeBuilder$BuildContext(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_builder_UiTreeBuilder$BuildContext *) object;
	if (self->F_resultListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resultListener)->clazz)->markFunction)((jobject) self->F_resultListener, mark, depth + 1);
	if (self->F_idElements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_idElements)->clazz)->markFunction)((jobject) self->F_idElements, mark, depth + 1);
	if (self->F_buttonGroups)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buttonGroups)->clazz)->markFunction)((jobject) self->F_buttonGroups, mark, depth + 1);
	if (self->F_images)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_images)->clazz)->markFunction)((jobject) self->F_images, mark, depth + 1);
}

void clinit_mindustry_ui_builder_UiTreeBuilder$BuildContext(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_builder_UiTreeBuilder$BuildContext_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder$BuildContext:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder$BuildContext(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(387);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK(sp[0].o))->F_idElements = (jref) sp[1].o;
	LINE_NUMBER(384);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK(sp[0].o))->F_buttonGroups = (jref) sp[1].o;
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK(sp[0].o))->F_images = (jref) sp[1].o;
	LINE_NUMBER(388);
	((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[0].o)))->F_resultListener = (jref) (frame[1].o);
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder$BuildContext:group", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_ui_builder_UiTreeBuilder$BuildContext *) NULL_CHECK((frame[0].o)))->F_buttonGroups;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiTreeBuilder$BuildContext_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_builder_UiTreeBuilder$BuildContext_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiTreeBuilder$BuildContext_invoke_arc_func_Prov_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_ui_ButtonGroup, sp[0].o));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_builder_UiTreeBuilder$BuildContext;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field resultListener
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_builder_UiTreeBuilder$BuildContext[] {
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
	(void *) M_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup,
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
	{ "group", "(Ljava/lang/String;)Larc/scene/ui/ButtonGroup;" },
};

static FieldMetadata fields[] {
	{ "resultListener", &class_arc_func_Cons, offsetof(mindustry_ui_builder_UiTreeBuilder$BuildContext, F_resultListener), "Larc/func/Cons;", 16 },
	{ "idElements", &class_arc_struct_ObjectMap, offsetof(mindustry_ui_builder_UiTreeBuilder$BuildContext, F_idElements), "Larc/struct/ObjectMap;", 16 },
	{ "buttonGroups", &class_arc_struct_ObjectMap, offsetof(mindustry_ui_builder_UiTreeBuilder$BuildContext, F_buttonGroups), "Larc/struct/ObjectMap;", 16 },
	{ "images", &class_arc_struct_ObjectMap, offsetof(mindustry_ui_builder_UiTreeBuilder$BuildContext, F_images), "Larc/struct/ObjectMap;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiTreeBuilder$BuildContext_arc_func_Cons, 0, "(Larc/func/Cons;)V", 0 },
	{ "group", (intptr_t) M_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup, VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup, "(Ljava/lang/String;)Larc/scene/ui/ButtonGroup;", 0 },
};

Class class_mindustry_ui_builder_UiTreeBuilder$BuildContext{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiTreeBuilder$BuildContext",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiTreeBuilder$BuildContext),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiTreeBuilder$BuildContext,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiTreeBuilder$BuildContext,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiTreeBuilder$BuildContext,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_builder_UiTreeBuilder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiTreeBuilder$BuildContext = registerClass(&class_mindustry_ui_builder_UiTreeBuilder$BuildContext);

}

