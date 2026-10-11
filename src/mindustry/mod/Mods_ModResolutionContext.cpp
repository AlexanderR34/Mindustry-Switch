#include "mindustry/mod/Mods_ModResolutionContext.h"
#include "java/lang/Object.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/mod/Mods_ModResolutionContext.h"
#include "arc/struct/OrderedMap.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/OrderedSet.h"
#include "arc/struct/ObjectMap.h"

extern "C" {


void mark_mindustry_mod_Mods$ModResolutionContext(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_Mods$ModResolutionContext *) object;
	if (self->F_dependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dependencies)->clazz)->markFunction)((jobject) self->F_dependencies, mark, depth + 1);
	if (self->F_visited)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_visited)->clazz)->markFunction)((jobject) self->F_visited, mark, depth + 1);
	if (self->F_ordered)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ordered)->clazz)->markFunction)((jobject) self->F_ordered, mark, depth + 1);
	if (self->F_invalid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_invalid)->clazz)->markFunction)((jobject) self->F_invalid, mark, depth + 1);
}

void clinit_mindustry_mod_Mods$ModResolutionContext(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_Mods$ModResolutionContext(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModResolutionContext:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$ModResolutionContext(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1501);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1502);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_mod_Mods$ModResolutionContext *) NULL_CHECK(sp[0].o))->F_dependencies = (jref) sp[1].o;
	LINE_NUMBER(1503);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_mod_Mods$ModResolutionContext *) NULL_CHECK(sp[0].o))->F_visited = (jref) sp[1].o;
	LINE_NUMBER(1504);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedSet);
	init_arc_struct_OrderedSet(ctx, sp[1].o);
	((mindustry_mod_Mods$ModResolutionContext *) NULL_CHECK(sp[0].o))->F_ordered = (jref) sp[1].o;
	LINE_NUMBER(1505);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((mindustry_mod_Mods$ModResolutionContext *) NULL_CHECK(sp[0].o))->F_invalid = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_Mods$ModResolutionContext[] {
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
	{ "dependencies", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_Mods$ModResolutionContext, F_dependencies), "Larc/struct/ObjectMap;", 17 },
	{ "visited", &class_arc_struct_ObjectSet, offsetof(mindustry_mod_Mods$ModResolutionContext, F_visited), "Larc/struct/ObjectSet;", 17 },
	{ "ordered", &class_arc_struct_OrderedSet, offsetof(mindustry_mod_Mods$ModResolutionContext, F_ordered), "Larc/struct/OrderedSet;", 17 },
	{ "invalid", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_Mods$ModResolutionContext, F_invalid), "Larc/struct/ObjectMap;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_Mods$ModResolutionContext, 0, "()V", 1 },
};

Class class_mindustry_mod_Mods$ModResolutionContext{
		.nativeName = (intptr_t) "mindustry/mod/Mods$ModResolutionContext",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_Mods$ModResolutionContext),
		.classVtable = (intptr_t) vtable_mindustry_mod_Mods$ModResolutionContext,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Mods$ModResolutionContext,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_Mods$ModResolutionContext,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_mod_Mods,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_Mods$ModResolutionContext = registerClass(&class_mindustry_mod_Mods$ModResolutionContext);

}

