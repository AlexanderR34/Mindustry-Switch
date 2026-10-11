#include "mindustry/world/ColorMapper.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "java/util/Iterator.h"
#include "mindustry/world/ColorMapper.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "arc/struct/IntMap.h"
#include "arc/graphics/Color.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_world_ColorMapper_color2block;

void mark_mindustry_world_ColorMapper(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_ColorMapper_color2block)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_ColorMapper_color2block)->clazz)->markFunction)((jobject) SF_mindustry_world_ColorMapper_color2block, mark, depth + 1);
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
	auto self = (mindustry_world_ColorMapper *) object;
}

void init_mindustry_world_ColorMapper(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ColorMapper:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_ColorMapper(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_ColorMapper_get_int_R_mindustry_world_Block(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ColorMapper:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_ColorMapper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(12);
	clinit_mindustry_world_ColorMapper(ctx);
	sp[0].o = (jobject)SF_mindustry_world_ColorMapper_color2block;
	jint temp0 = frame[0].i;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_ColorMapper_load(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ColorMapper:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_ColorMapper(ctx);
	{
	LINE_NUMBER(16);
	clinit_mindustry_world_ColorMapper(ctx);
	sp[0].o = (jobject)SF_mindustry_world_ColorMapper_color2block;
	((func_arc_struct_IntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(18);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(19);
	clinit_mindustry_world_ColorMapper(ctx);
	sp[0].o = (jobject)SF_mindustry_world_ColorMapper_color2block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_mapColor;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, (frame[1].o));
	LINE_NUMBER(20);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(22);
	clinit_mindustry_world_ColorMapper(ctx);
	sp[0].o = (jobject)SF_mindustry_world_ColorMapper_color2block;
	jint temp0 = (jint)SM_arc_graphics_Color_rgba8888_float_float_float_float_R_int(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_ColorMapper(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/ColorMapper:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_ColorMapper(ctx);
	{
	LINE_NUMBER(9);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	clinit_mindustry_world_ColorMapper(ctx);
	SF_mindustry_world_ColorMapper_color2block = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_ColorMapper[] {
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
	{ "color2block", &class_arc_struct_IntMap, (intptr_t) &SF_mindustry_world_ColorMapper_color2block, "Larc/struct/IntMap;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_ColorMapper, 0, "()V", 1 },
	{ "get", (intptr_t) SM_mindustry_world_ColorMapper_get_int_R_mindustry_world_Block, 0, "(I)Lmindustry/world/Block;", 9 },
	{ "load", (intptr_t) SM_mindustry_world_ColorMapper_load, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_ColorMapper, 0, "()V", 8 },
};

Class class_mindustry_world_ColorMapper{
		.nativeName = (intptr_t) "mindustry/world/ColorMapper",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_ColorMapper),
		.classVtable = (intptr_t) vtable_mindustry_world_ColorMapper,
		.staticInitializer = (intptr_t) clinit_mindustry_world_ColorMapper,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_ColorMapper,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_ColorMapper = registerClass(&class_mindustry_world_ColorMapper);

}
