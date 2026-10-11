#include "arc/graphics/g2d/Font_Glyph.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/Font.h"
#include "java/lang/Character.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/Font_Glyph.h"

extern "C" {


void mark_arc_graphics_g2d_Font$Glyph(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_Font$Glyph *) object;
	if (self->F_kerning)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_kerning)->clazz)->markFunction)((jobject) self->F_kerning, mark, depth + 1);
}

void clinit_arc_graphics_g2d_Font$Glyph(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$Glyph:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font$Glyph(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(464);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(476);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_page = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_Font$Glyph_getKerning_char_R_int(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$Glyph:getKerning", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_kerning;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_kerning;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (9)))));
	LINE_NUMBER(481);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[1].i) & (511))));
	}
label_1:;
	{
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$Glyph_setKerning_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$Glyph:setKerning", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_kerning;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_byte, 1), (128));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_kerning = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_kerning;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (9)))));
	LINE_NUMBER(489);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_kerning;
	jint temp0 = bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (9));
	sp[1].o = (jobject) createArray(ctx, &class_byte, (512));
	frame[3].o = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(490);
	ARRAY_ACCESS(jbyte, (frame[3].o), ((frame[1].i) & (511))) = (jbyte((frame[2].i)));
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font$Glyph_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$Glyph:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)SM_java_lang_Character_toString_char_R_java_lang_String(ctx, (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[0].o)))->F_id))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_Font$Glyph[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_g2d_Font$Glyph_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_g2d_Font$Glyph_getKerning_char_R_int,
	(void *) M_arc_graphics_g2d_Font$Glyph_setKerning_int_int,
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
	{ "getKerning", "(C)I" },
	{ "setKerning", "(II)V" },
};

static FieldMetadata fields[] {
	{ "id", &class_int, offsetof(arc_graphics_g2d_Font$Glyph, F_id), "I", 1 },
	{ "srcX", &class_int, offsetof(arc_graphics_g2d_Font$Glyph, F_srcX), "I", 1 },
	{ "srcY", &class_int, offsetof(arc_graphics_g2d_Font$Glyph, F_srcY), "I", 1 },
	{ "width", &class_int, offsetof(arc_graphics_g2d_Font$Glyph, F_width), "I", 1 },
	{ "height", &class_int, offsetof(arc_graphics_g2d_Font$Glyph, F_height), "I", 1 },
	{ "u", &class_float, offsetof(arc_graphics_g2d_Font$Glyph, F_u), "F", 1 },
	{ "v", &class_float, offsetof(arc_graphics_g2d_Font$Glyph, F_v), "F", 1 },
	{ "u2", &class_float, offsetof(arc_graphics_g2d_Font$Glyph, F_u2), "F", 1 },
	{ "v2", &class_float, offsetof(arc_graphics_g2d_Font$Glyph, F_v2), "F", 1 },
	{ "xoffset", &class_int, offsetof(arc_graphics_g2d_Font$Glyph, F_xoffset), "I", 1 },
	{ "yoffset", &class_int, offsetof(arc_graphics_g2d_Font$Glyph, F_yoffset), "I", 1 },
	{ "xadvance", &class_int, offsetof(arc_graphics_g2d_Font$Glyph, F_xadvance), "I", 1 },
	{ "kerning", getArrayClass(&class_byte, 2), offsetof(arc_graphics_g2d_Font$Glyph, F_kerning), "[[B", 1 },
	{ "fixedWidth", &class_boolean, offsetof(arc_graphics_g2d_Font$Glyph, F_fixedWidth), "Z", 1 },
	{ "page", &class_int, offsetof(arc_graphics_g2d_Font$Glyph, F_page), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font$Glyph, 0, "()V", 1 },
	{ "getKerning", (intptr_t) M_arc_graphics_g2d_Font$Glyph_getKerning_char_R_int, VTABLE_arc_graphics_g2d_Font$Glyph_getKerning_char_R_int, "(C)I", 1 },
	{ "setKerning", (intptr_t) M_arc_graphics_g2d_Font$Glyph_setKerning_int_int, VTABLE_arc_graphics_g2d_Font$Glyph_setKerning_int_int, "(II)V", 1 },
	{ "toString", (intptr_t) M_arc_graphics_g2d_Font$Glyph_toString_R_java_lang_String, VTABLE_arc_graphics_g2d_Font$Glyph_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_graphics_g2d_Font$Glyph{
		.nativeName = (intptr_t) "arc/graphics/g2d/Font$Glyph",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_Font$Glyph),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_Font$Glyph,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_Font$Glyph,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_Font$Glyph,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_Font,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_Font$Glyph = registerClass(&class_arc_graphics_g2d_Font$Glyph);

}

