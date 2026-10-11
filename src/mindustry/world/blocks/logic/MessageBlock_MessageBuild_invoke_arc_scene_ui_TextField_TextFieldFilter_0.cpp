#include "mindustry/world/blocks/logic/MessageBlock_MessageBuild_invoke_arc_scene_ui_TextField_TextFieldFilter_0.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TextField.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "mindustry/world/blocks/logic/MessageBlock_MessageBuild.h"
#include "mindustry/world/blocks/logic/MessageBlock_MessageBuild_invoke_arc_scene_ui_TextField_TextFieldFilter_0.h"

extern "C" {


void mark_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0_acceptChar_arc_scene_ui_TextField_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0:acceptChar", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0 *) self;
	auto object = ((func_mindustry_world_blocks_logic_MessageBlock$MessageBuild_lambda$buildConfiguration$1_arc_scene_ui_TextField_char_R_boolean) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild_lambda$buildConfiguration$1_arc_scene_ui_TextField_char_R_boolean])(ctx, (jobject) proxy->F_field0, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0[] {
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
	(void *) M_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0_acceptChar_arc_scene_ui_TextField_char_R_boolean,
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
	{ "acceptChar", "(Larc/scene/ui/TextField;C)Z" },
};

static jclass interfaces[] { &class_arc_scene_ui_TextField$TextFieldFilter, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_world_blocks_logic_MessageBlock$MessageBuild, offsetof(mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0, F_field0), "Lmindustry/world/blocks/logic/MessageBlock$MessageBuild;", 0 },
};

static MethodMetadata methods[] {
	{ "acceptChar", (intptr_t) M_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0_acceptChar_arc_scene_ui_TextField_char_R_boolean, VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0_acceptChar_arc_scene_ui_TextField_char_R_boolean, "(Larc/scene/ui/TextField;C)Z", 0 },
};

Class class_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0 = registerClass(&class_mindustry_world_blocks_logic_MessageBlock$MessageBuild_invoke_arc_scene_ui_TextField$TextFieldFilter_0);

}

