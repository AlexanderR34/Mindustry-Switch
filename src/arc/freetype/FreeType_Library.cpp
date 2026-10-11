#include "arc/freetype/FreeType_Library.h"
#include "arc/util/Disposable.h"
#include "java/lang/StringBuilder.h"
#include "arc/struct/LongMap.h"
#include "java/util/Iterator.h"
#include "arc/freetype/FreeType_Library.h"
#include "arc/util/Buffers.h"
#include "arc/files/Fi.h"
#include "arc/freetype/FreeType.h"
#include "arc/freetype/FreeType_Pointer.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "arc/freetype/FreeType_Face.h"
#include "java/lang/String.h"
#include "arc/struct/LongMap_Values.h"
#include "java/nio/Buffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/freetype/FreeType_Stroker.h"

extern "C" {


void mark_arc_freetype_FreeType$Library(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_freetype_FreeType$Pointer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_freetype_FreeType$Library *) object;
	if (self->F_fontData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontData)->clazz)->markFunction)((jobject) self->F_fontData, mark, depth + 1);
}

void clinit_arc_freetype_FreeType$Library(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreeType$Pointer(ctx);
}

void init_arc_freetype_FreeType$Library_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Library:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeType$Library(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(139);
	init_arc_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongMap);
	init_arc_struct_LongMap(ctx, sp[1].o);
	((arc_freetype_FreeType$Library *) NULL_CHECK(sp[0].o))->F_fontData = (jref) sp[1].o;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeType$Library_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Library:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	SM_arc_freetype_FreeType$Library_doneFreeType_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_freetype_FreeType$Library *) NULL_CHECK((frame[0].o)))->F_fontData;
	sp[0].o = (jobject)((func_arc_struct_LongMap_values_R_arc_struct_LongMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_values_R_arc_struct_LongMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_LongMap$Values_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap$Values_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_nio_ByteBuffer, sp[0].o));
	LINE_NUMBER(170);
	jint temp0 = (jint)SM_arc_util_Buffers_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(171);
	SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, (frame[2].o));
	}
label_5:;
	LINE_NUMBER(172);
	goto label_2;
label_3:;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$Library_newFace_arc_files_Fi_int_R_arc_freetype_FreeType$Face(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Library:newFace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_arc_files_Fi_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readBytes_R_Array1_byte])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(177);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_arc_freetype_FreeType$Face) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_arc_freetype_FreeType$Face])(ctx, (frame[0].o), (frame[3].o), (((jarray) nullCheck(ctx, (frame[3].o)))->length), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_arc_freetype_FreeType$Face(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Library:newMemoryFace", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[4].o = sp[0].o;
	LINE_NUMBER(182);
	SM_arc_util_Buffers_copy_Array1_byte_int_java_nio_Buffer_int(ctx, (frame[1].o), (jint(0)), (frame[4].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(183);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face])(ctx, (frame[0].o), (frame[4].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Library:newMemoryFace", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(187);
	jlong temp0 = (jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address;
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	jlong temp2 = (jlong)SM_arc_freetype_FreeType$Library_newMemoryFace_long_java_nio_ByteBuffer_int_int_R_long(ctx, temp0, sp[0].o, temp1, (frame[2].i));
	frame[3].l = temp2;
	LINE_NUMBER(188);
	if ((longCompare((frame[3].l), (jlong(0)))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)SM_arc_util_Buffers_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(190);
	SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(191);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load font, FreeType error code: "_j))));
	jint temp0 = (jint)SM_arc_freetype_FreeType_getLastErrorCode_R_int(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_freetype_FreeType$Library *) NULL_CHECK((frame[0].o)))->F_fontData;
	sp[0].o = (jobject)((func_arc_struct_LongMap_put_long_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongMap_put_long_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].l), (frame[1].o));
	LINE_NUMBER(194);
	clinit_arc_freetype_FreeType$Face(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeType$Face);
	init_arc_freetype_FreeType$Face_long_arc_freetype_FreeType$Library(ctx, sp[0].o, (frame[3].l), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$Library_createStroker_R_arc_freetype_FreeType$Stroker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Library:createStroker", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	jlong temp0 = (jlong)SM_arc_freetype_FreeType$Library_strokerNew_long_R_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	frame[1].l = temp0;
	LINE_NUMBER(200);
	if ((longCompare((frame[1].l), (jlong(0)))) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't create FreeType stroker, FreeType error code: "_j))));
	jint temp0 = (jint)SM_arc_freetype_FreeType_getLastErrorCode_R_int(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(201);
	clinit_arc_freetype_FreeType$Stroker(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeType$Stroker);
	init_arc_freetype_FreeType$Stroker_long(ctx, sp[0].o, (frame[1].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeType$Library[] {
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
	(void *) M_arc_freetype_FreeType$Library_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_freetype_FreeType$Library_newFace_arc_files_Fi_int_R_arc_freetype_FreeType$Face,
	(void *) M_arc_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_arc_freetype_FreeType$Face,
	(void *) M_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face,
	(void *) M_arc_freetype_FreeType$Library_createStroker_R_arc_freetype_FreeType$Stroker,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "newFace", "(Larc/files/Fi;I)Larc/freetype/FreeType$Face;" },
	{ "newMemoryFace", "([BII)Larc/freetype/FreeType$Face;" },
	{ "newMemoryFace", "(Ljava/nio/ByteBuffer;I)Larc/freetype/FreeType$Face;" },
	{ "createStroker", "()Larc/freetype/FreeType$Stroker;" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "fontData", &class_arc_struct_LongMap, offsetof(arc_freetype_FreeType$Library, F_fontData), "Larc/struct/LongMap;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeType$Library_long, 0, "(J)V", 0 },
	{ "doneFreeType", (intptr_t) SM_arc_freetype_FreeType$Library_doneFreeType_long, 0, "(J)V", 266 },
	{ "newMemoryFace", (intptr_t) SM_arc_freetype_FreeType$Library_newMemoryFace_long_java_nio_ByteBuffer_int_int_R_long, 0, "(JLjava/nio/ByteBuffer;II)J", 266 },
	{ "strokerNew", (intptr_t) SM_arc_freetype_FreeType$Library_strokerNew_long_R_long, 0, "(J)J", 266 },
	{ "dispose", (intptr_t) M_arc_freetype_FreeType$Library_dispose, VTABLE_arc_freetype_FreeType$Library_dispose, "()V", 1 },
	{ "newFace", (intptr_t) M_arc_freetype_FreeType$Library_newFace_arc_files_Fi_int_R_arc_freetype_FreeType$Face, VTABLE_arc_freetype_FreeType$Library_newFace_arc_files_Fi_int_R_arc_freetype_FreeType$Face, "(Larc/files/Fi;I)Larc/freetype/FreeType$Face;", 1 },
	{ "newMemoryFace", (intptr_t) M_arc_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_arc_freetype_FreeType$Face, VTABLE_arc_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_arc_freetype_FreeType$Face, "([BII)Larc/freetype/FreeType$Face;", 1 },
	{ "newMemoryFace", (intptr_t) M_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face, VTABLE_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face, "(Ljava/nio/ByteBuffer;I)Larc/freetype/FreeType$Face;", 1 },
	{ "createStroker", (intptr_t) M_arc_freetype_FreeType$Library_createStroker_R_arc_freetype_FreeType$Stroker, VTABLE_arc_freetype_FreeType$Library_createStroker_R_arc_freetype_FreeType$Stroker, "()Larc/freetype/FreeType$Stroker;", 1 },
};

Class class_arc_freetype_FreeType$Library{
		.nativeName = (intptr_t) "arc/freetype/FreeType$Library",
		.parentClass = (intptr_t) &class_arc_freetype_FreeType$Pointer,
		.size = sizeof(arc_freetype_FreeType$Library),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeType$Library,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeType$Library,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeType$Library,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_freetype_FreeType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeType$Library = registerClass(&class_arc_freetype_FreeType$Library);

}

