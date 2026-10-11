#include "arc/graphics/VertexAttribute.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/VertexAttribute.h"

extern "C" {

jobject SF_arc_graphics_VertexAttribute_position;
jobject SF_arc_graphics_VertexAttribute_position3;
jobject SF_arc_graphics_VertexAttribute_packedPosition;
jobject SF_arc_graphics_VertexAttribute_texCoords;
jobject SF_arc_graphics_VertexAttribute_packedTexCoords;
jobject SF_arc_graphics_VertexAttribute_normal;
jobject SF_arc_graphics_VertexAttribute_packedNormal;
jobject SF_arc_graphics_VertexAttribute_color;
jobject SF_arc_graphics_VertexAttribute_mixColor;

void mark_arc_graphics_VertexAttribute(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_VertexAttribute_position)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_VertexAttribute_position)->clazz)->markFunction)((jobject) SF_arc_graphics_VertexAttribute_position, mark, depth + 1);
		if (SF_arc_graphics_VertexAttribute_position3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_VertexAttribute_position3)->clazz)->markFunction)((jobject) SF_arc_graphics_VertexAttribute_position3, mark, depth + 1);
		if (SF_arc_graphics_VertexAttribute_packedPosition)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_VertexAttribute_packedPosition)->clazz)->markFunction)((jobject) SF_arc_graphics_VertexAttribute_packedPosition, mark, depth + 1);
		if (SF_arc_graphics_VertexAttribute_texCoords)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_VertexAttribute_texCoords)->clazz)->markFunction)((jobject) SF_arc_graphics_VertexAttribute_texCoords, mark, depth + 1);
		if (SF_arc_graphics_VertexAttribute_packedTexCoords)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_VertexAttribute_packedTexCoords)->clazz)->markFunction)((jobject) SF_arc_graphics_VertexAttribute_packedTexCoords, mark, depth + 1);
		if (SF_arc_graphics_VertexAttribute_normal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_VertexAttribute_normal)->clazz)->markFunction)((jobject) SF_arc_graphics_VertexAttribute_normal, mark, depth + 1);
		if (SF_arc_graphics_VertexAttribute_packedNormal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_VertexAttribute_packedNormal)->clazz)->markFunction)((jobject) SF_arc_graphics_VertexAttribute_packedNormal, mark, depth + 1);
		if (SF_arc_graphics_VertexAttribute_color)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_VertexAttribute_color)->clazz)->markFunction)((jobject) SF_arc_graphics_VertexAttribute_color, mark, depth + 1);
		if (SF_arc_graphics_VertexAttribute_mixColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_VertexAttribute_mixColor)->clazz)->markFunction)((jobject) SF_arc_graphics_VertexAttribute_mixColor, mark, depth + 1);
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
	auto self = (arc_graphics_VertexAttribute *) object;
	if (self->F_alias)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_alias)->clazz)->markFunction)((jobject) self->F_alias, mark, depth + 1);
}

void init_arc_graphics_VertexAttribute_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/VertexAttribute:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_VertexAttribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(42);
	init_arc_graphics_VertexAttribute_int_int_boolean_java_lang_String(ctx, (frame[0].o), (frame[1].i), (5126), (jint(0)), (frame[2].o));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_VertexAttribute_int_int_boolean_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/VertexAttribute:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_VertexAttribute(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(54);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(55);
	((arc_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_components = (frame[1].i);
	LINE_NUMBER(56);
	((arc_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_type = (frame[2].i);
	LINE_NUMBER(57);
	((arc_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_normalized = (frame[3].i);
	LINE_NUMBER(58);
	((arc_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_alias = (jref) (frame[4].o);
	LINE_NUMBER(61);
	frame[5].i = (jint(0));
	LINE_NUMBER(62);
	switch((frame[2].i)) {
		case 5120: goto label_7;
		case 5121: goto label_7;
		case 5122: goto label_8;
		case 5123: goto label_8;
		case 5126: goto label_9;
		case 5131: goto label_8;
		case 5132: goto label_9;
		case 33640: goto label_7;
		case 36255: goto label_7;
		default: goto label_10;
	}
	}
label_9:;
	{
	LINE_NUMBER(65);
	frame[5].i = ((jint(4)) * (frame[1].i));
	LINE_NUMBER(66);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(71);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(72);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(76);
	frame[5].i = ((jint(2)) * (frame[1].i));
	}
label_10:;
	{
	LINE_NUMBER(79);
	((arc_graphics_VertexAttribute *) NULL_CHECK((frame[0].o)))->F_size = (frame[5].i);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_VertexAttribute(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/VertexAttribute:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_VertexAttribute(ctx);
	{
	LINE_NUMBER(15);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_java_lang_String(ctx, sp[0].o, (jint(2)), (((jobject) createStringLiteral(ctx, u8"a_position"_j))));
	clinit_arc_graphics_VertexAttribute(ctx);
	SF_arc_graphics_VertexAttribute_position = sp[0].o;
	LINE_NUMBER(16);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_java_lang_String(ctx, sp[0].o, (jint(3)), (((jobject) createStringLiteral(ctx, u8"a_position"_j))));
	clinit_arc_graphics_VertexAttribute(ctx);
	SF_arc_graphics_VertexAttribute_position3 = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_int_boolean_java_lang_String(ctx, sp[0].o, (jint(2)), (5123), (jint(1)), (((jobject) createStringLiteral(ctx, u8"a_position"_j))));
	clinit_arc_graphics_VertexAttribute(ctx);
	SF_arc_graphics_VertexAttribute_packedPosition = sp[0].o;
	LINE_NUMBER(18);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_java_lang_String(ctx, sp[0].o, (jint(2)), (((jobject) createStringLiteral(ctx, u8"a_texCoord0"_j))));
	clinit_arc_graphics_VertexAttribute(ctx);
	SF_arc_graphics_VertexAttribute_texCoords = sp[0].o;
	LINE_NUMBER(19);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_int_boolean_java_lang_String(ctx, sp[0].o, (jint(2)), (5123), (jint(1)), (((jobject) createStringLiteral(ctx, u8"a_texCoord0"_j))));
	clinit_arc_graphics_VertexAttribute(ctx);
	SF_arc_graphics_VertexAttribute_packedTexCoords = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_java_lang_String(ctx, sp[0].o, (jint(3)), (((jobject) createStringLiteral(ctx, u8"a_normal"_j))));
	clinit_arc_graphics_VertexAttribute(ctx);
	SF_arc_graphics_VertexAttribute_normal = sp[0].o;
	LINE_NUMBER(21);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_int_boolean_java_lang_String(ctx, sp[0].o, (jint(4)), (jint(36255)), (jint(1)), (((jobject) createStringLiteral(ctx, u8"a_normal"_j))));
	clinit_arc_graphics_VertexAttribute(ctx);
	SF_arc_graphics_VertexAttribute_packedNormal = sp[0].o;
	LINE_NUMBER(22);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_int_boolean_java_lang_String(ctx, sp[0].o, (jint(4)), (5121), (jint(1)), (((jobject) createStringLiteral(ctx, u8"a_color"_j))));
	clinit_arc_graphics_VertexAttribute(ctx);
	SF_arc_graphics_VertexAttribute_color = sp[0].o;
	LINE_NUMBER(23);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_int_boolean_java_lang_String(ctx, sp[0].o, (jint(4)), (5121), (jint(1)), (((jobject) createStringLiteral(ctx, u8"a_mix_color"_j))));
	clinit_arc_graphics_VertexAttribute(ctx);
	SF_arc_graphics_VertexAttribute_mixColor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_VertexAttribute[] {
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
	{ "position", &class_arc_graphics_VertexAttribute, (intptr_t) &SF_arc_graphics_VertexAttribute_position, "Larc/graphics/VertexAttribute;", 25 },
	{ "position3", &class_arc_graphics_VertexAttribute, (intptr_t) &SF_arc_graphics_VertexAttribute_position3, "Larc/graphics/VertexAttribute;", 25 },
	{ "packedPosition", &class_arc_graphics_VertexAttribute, (intptr_t) &SF_arc_graphics_VertexAttribute_packedPosition, "Larc/graphics/VertexAttribute;", 25 },
	{ "texCoords", &class_arc_graphics_VertexAttribute, (intptr_t) &SF_arc_graphics_VertexAttribute_texCoords, "Larc/graphics/VertexAttribute;", 25 },
	{ "packedTexCoords", &class_arc_graphics_VertexAttribute, (intptr_t) &SF_arc_graphics_VertexAttribute_packedTexCoords, "Larc/graphics/VertexAttribute;", 25 },
	{ "normal", &class_arc_graphics_VertexAttribute, (intptr_t) &SF_arc_graphics_VertexAttribute_normal, "Larc/graphics/VertexAttribute;", 25 },
	{ "packedNormal", &class_arc_graphics_VertexAttribute, (intptr_t) &SF_arc_graphics_VertexAttribute_packedNormal, "Larc/graphics/VertexAttribute;", 25 },
	{ "color", &class_arc_graphics_VertexAttribute, (intptr_t) &SF_arc_graphics_VertexAttribute_color, "Larc/graphics/VertexAttribute;", 25 },
	{ "mixColor", &class_arc_graphics_VertexAttribute, (intptr_t) &SF_arc_graphics_VertexAttribute_mixColor, "Larc/graphics/VertexAttribute;", 25 },
	{ "components", &class_int, offsetof(arc_graphics_VertexAttribute, F_components), "I", 17 },
	{ "normalized", &class_boolean, offsetof(arc_graphics_VertexAttribute, F_normalized), "Z", 17 },
	{ "type", &class_int, offsetof(arc_graphics_VertexAttribute, F_type), "I", 17 },
	{ "alias", &class_java_lang_String, offsetof(arc_graphics_VertexAttribute, F_alias), "Ljava/lang/String;", 17 },
	{ "size", &class_int, offsetof(arc_graphics_VertexAttribute, F_size), "I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_VertexAttribute_int_java_lang_String, 0, "(ILjava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_VertexAttribute_int_int_boolean_java_lang_String, 0, "(IIZLjava/lang/String;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_VertexAttribute, 0, "()V", 8 },
};

Class class_arc_graphics_VertexAttribute{
		.nativeName = (intptr_t) "arc/graphics/VertexAttribute",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_VertexAttribute),
		.classVtable = (intptr_t) vtable_arc_graphics_VertexAttribute,
		.staticInitializer = (intptr_t) clinit_arc_graphics_VertexAttribute,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_VertexAttribute,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_VertexAttribute = registerClass(&class_arc_graphics_VertexAttribute);

}
