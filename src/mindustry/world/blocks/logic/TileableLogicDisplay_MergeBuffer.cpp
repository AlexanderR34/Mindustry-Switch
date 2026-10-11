#include "mindustry/world/blocks/logic/TileableLogicDisplay_MergeBuffer.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_MergeBuffer.h"

extern "C" {


void mark_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer_arc_graphics_gl_FrameBuffer_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$MergeBuffer:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(105);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(106);
	((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[0].o)))->F_buffer = (jref) (frame[1].o);
	LINE_NUMBER(107);
	((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].i);
	LINE_NUMBER(108);
	((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].i);
	LINE_NUMBER(109);
	((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[0].o)))->F_width = (frame[4].i);
	LINE_NUMBER(110);
	((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[0].o)))->F_height = (frame[5].i);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/TileableLogicDisplay$MergeBuffer:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"MergeBuffer{x=\u0001, y=\u0001, width=\u0001, height=\u0001}"_j.string, 4, boxInteger(ctx, ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[0].o)))->F_x)), boxInteger(ctx, ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[0].o)))->F_y)), boxInteger(ctx, ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[0].o)))->F_width)), boxInteger(ctx, ((jint)((mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer *) NULL_CHECK((frame[0].o)))->F_height)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer_toString_R_java_lang_String,
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
	{ "buffer", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer, F_buffer), "Larc/graphics/gl/FrameBuffer;", 0 },
	{ "x", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer, F_x), "I", 0 },
	{ "y", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer, F_y), "I", 0 },
	{ "width", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer, F_width), "I", 0 },
	{ "height", &class_int, offsetof(mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer, F_height), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer_arc_graphics_gl_FrameBuffer_int_int_int_int, 0, "(Larc/graphics/gl/FrameBuffer;IIII)V", 0 },
	{ "toString", (intptr_t) M_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer_toString_R_java_lang_String, VTABLE_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/TileableLogicDisplay$MergeBuffer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_logic_TileableLogicDisplay,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer = registerClass(&class_mindustry_world_blocks_logic_TileableLogicDisplay$MergeBuffer);

}

