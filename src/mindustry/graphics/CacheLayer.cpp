#include "mindustry/graphics/CacheLayer.h"
#include "arc/math/Mathf.h"
#include "mindustry/graphics/Shaders_SurfaceShader.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/graphics/CacheLayer_ShaderLayer.h"
#include "mindustry/graphics/CacheLayer.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_mindustry_graphics_CacheLayer_water;
jobject SF_mindustry_graphics_CacheLayer_mud;
jobject SF_mindustry_graphics_CacheLayer_cryofluid;
jobject SF_mindustry_graphics_CacheLayer_tar;
jobject SF_mindustry_graphics_CacheLayer_slag;
jobject SF_mindustry_graphics_CacheLayer_arkycite;
jobject SF_mindustry_graphics_CacheLayer_space;
jobject SF_mindustry_graphics_CacheLayer_normal;
jobject SF_mindustry_graphics_CacheLayer_walls;
jobject SF_mindustry_graphics_CacheLayer_all;

void mark_mindustry_graphics_CacheLayer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_CacheLayer_water)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CacheLayer_water)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CacheLayer_water, mark, depth + 1);
		if (SF_mindustry_graphics_CacheLayer_mud)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CacheLayer_mud)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CacheLayer_mud, mark, depth + 1);
		if (SF_mindustry_graphics_CacheLayer_cryofluid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CacheLayer_cryofluid)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CacheLayer_cryofluid, mark, depth + 1);
		if (SF_mindustry_graphics_CacheLayer_tar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CacheLayer_tar)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CacheLayer_tar, mark, depth + 1);
		if (SF_mindustry_graphics_CacheLayer_slag)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CacheLayer_slag)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CacheLayer_slag, mark, depth + 1);
		if (SF_mindustry_graphics_CacheLayer_arkycite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CacheLayer_arkycite)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CacheLayer_arkycite, mark, depth + 1);
		if (SF_mindustry_graphics_CacheLayer_space)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CacheLayer_space)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CacheLayer_space, mark, depth + 1);
		if (SF_mindustry_graphics_CacheLayer_normal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CacheLayer_normal)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CacheLayer_normal, mark, depth + 1);
		if (SF_mindustry_graphics_CacheLayer_walls)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CacheLayer_walls)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CacheLayer_walls, mark, depth + 1);
		if (SF_mindustry_graphics_CacheLayer_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_CacheLayer_all)->clazz)->markFunction)((jobject) SF_mindustry_graphics_CacheLayer_all, mark, depth + 1);
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
	auto self = (mindustry_graphics_CacheLayer *) object;
}

void init_mindustry_graphics_CacheLayer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CacheLayer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_CacheLayer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_CacheLayer_add_Array1_mindustry_graphics_CacheLayer(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CacheLayer:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_CacheLayer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(23);
	frame[1].o = (frame[0].o);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(25);
	SM_mindustry_graphics_CacheLayer_add_int_mindustry_graphics_CacheLayer(ctx, (7), (frame[4].o));
	LINE_NUMBER(23);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_CacheLayer_addLast_Array1_mindustry_graphics_CacheLayer(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CacheLayer:addLast", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_CacheLayer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(31);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	frame[1].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) + (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(32);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	frame[2].o = sp[0].o;
	LINE_NUMBER(34);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_CacheLayer, (frame[1].i));
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_all = sp[0].o;
	LINE_NUMBER(35);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jint temp1 = jint(0);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(38);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[3].i;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(39);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	((mindustry_graphics_CacheLayer *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_id = (frame[3].i);
	LINE_NUMBER(38);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_CacheLayer_add_int_mindustry_graphics_CacheLayer(jcontext ctx, jint param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CacheLayer:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_CacheLayer(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(45);
	jint temp0 = frame[0].i;
	jint temp1 = jint(0);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1))));
	frame[0].i = temp2;
	LINE_NUMBER(47);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	frame[2].o = sp[0].o;
	LINE_NUMBER(48);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_CacheLayer, ((((jarray) nullCheck(ctx, sp[0].o))->length) + (jint(1))));
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_all = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = frame[2].o;
	jint temp3 = jint(0);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp3, sp[1].o, (jint(0)), (frame[0].i));
	LINE_NUMBER(51);
	sp[0].o = frame[2].o;
	jint temp4 = frame[0].i;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp4, sp[1].o, ((frame[0].i) + (jint(1))), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[0].i)));
	LINE_NUMBER(53);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)) = (frame[1].o);
	LINE_NUMBER(55);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[3].i;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(56);
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_CacheLayer_all;
	((mindustry_graphics_CacheLayer *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_id = (frame[3].i);
	LINE_NUMBER(55);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_CacheLayer_init(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CacheLayer:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_CacheLayer(ctx);
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_CacheLayer, (9));
	jint temp0 = jint(0);
	clinit_mindustry_graphics_CacheLayer$ShaderLayer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_CacheLayer$ShaderLayer);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Shaders_water;
	init_mindustry_graphics_CacheLayer$ShaderLayer_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_water = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_graphics_CacheLayer$ShaderLayer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_CacheLayer$ShaderLayer);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Shaders_mud;
	init_mindustry_graphics_CacheLayer$ShaderLayer_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_mud = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_graphics_CacheLayer$ShaderLayer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_CacheLayer$ShaderLayer);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Shaders_tar;
	init_mindustry_graphics_CacheLayer$ShaderLayer_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_tar = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_graphics_CacheLayer$ShaderLayer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_CacheLayer$ShaderLayer);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Shaders_slag;
	init_mindustry_graphics_CacheLayer$ShaderLayer_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_slag = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_graphics_CacheLayer$ShaderLayer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_CacheLayer$ShaderLayer);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Shaders_arkycite;
	init_mindustry_graphics_CacheLayer$ShaderLayer_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_arkycite = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_graphics_CacheLayer$ShaderLayer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_CacheLayer$ShaderLayer);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Shaders_cryofluid;
	init_mindustry_graphics_CacheLayer$ShaderLayer_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_cryofluid = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_graphics_CacheLayer$ShaderLayer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_CacheLayer$ShaderLayer);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Shaders_space;
	init_mindustry_graphics_CacheLayer$ShaderLayer_arc_graphics_gl_Shader_boolean(ctx, sp[1].o, sp[2].o, (jint(0)));
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_space = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_CacheLayer);
	init_mindustry_graphics_CacheLayer(ctx, sp[1].o);
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_normal = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_CacheLayer);
	init_mindustry_graphics_CacheLayer(ctx, sp[1].o);
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_walls = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	SM_mindustry_graphics_CacheLayer_addLast_Array1_mindustry_graphics_CacheLayer(ctx, sp[0].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_CacheLayer_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CacheLayer:begin", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_CacheLayer_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CacheLayer:end", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_CacheLayer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/CacheLayer:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_CacheLayer(ctx);
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_CacheLayer, (jint(0)));
	clinit_mindustry_graphics_CacheLayer(ctx);
	SF_mindustry_graphics_CacheLayer_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_CacheLayer[] {
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
	(void *) M_mindustry_graphics_CacheLayer_begin,
	(void *) M_mindustry_graphics_CacheLayer_end,
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
	{ "begin", "()V" },
	{ "end", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_graphics_CacheLayer$ShaderLayer,
};

static FieldMetadata fields[] {
	{ "water", &class_mindustry_graphics_CacheLayer, (intptr_t) &SF_mindustry_graphics_CacheLayer_water, "Lmindustry/graphics/CacheLayer;", 9 },
	{ "mud", &class_mindustry_graphics_CacheLayer, (intptr_t) &SF_mindustry_graphics_CacheLayer_mud, "Lmindustry/graphics/CacheLayer;", 9 },
	{ "cryofluid", &class_mindustry_graphics_CacheLayer, (intptr_t) &SF_mindustry_graphics_CacheLayer_cryofluid, "Lmindustry/graphics/CacheLayer;", 9 },
	{ "tar", &class_mindustry_graphics_CacheLayer, (intptr_t) &SF_mindustry_graphics_CacheLayer_tar, "Lmindustry/graphics/CacheLayer;", 9 },
	{ "slag", &class_mindustry_graphics_CacheLayer, (intptr_t) &SF_mindustry_graphics_CacheLayer_slag, "Lmindustry/graphics/CacheLayer;", 9 },
	{ "arkycite", &class_mindustry_graphics_CacheLayer, (intptr_t) &SF_mindustry_graphics_CacheLayer_arkycite, "Lmindustry/graphics/CacheLayer;", 9 },
	{ "space", &class_mindustry_graphics_CacheLayer, (intptr_t) &SF_mindustry_graphics_CacheLayer_space, "Lmindustry/graphics/CacheLayer;", 9 },
	{ "normal", &class_mindustry_graphics_CacheLayer, (intptr_t) &SF_mindustry_graphics_CacheLayer_normal, "Lmindustry/graphics/CacheLayer;", 9 },
	{ "walls", &class_mindustry_graphics_CacheLayer, (intptr_t) &SF_mindustry_graphics_CacheLayer_walls, "Lmindustry/graphics/CacheLayer;", 9 },
	{ "all", getArrayClass(&class_mindustry_graphics_CacheLayer, 1), (intptr_t) &SF_mindustry_graphics_CacheLayer_all, "[Lmindustry/graphics/CacheLayer;", 9 },
	{ "id", &class_int, offsetof(mindustry_graphics_CacheLayer, F_id), "I", 1 },
	{ "liquid", &class_boolean, offsetof(mindustry_graphics_CacheLayer, F_liquid), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_CacheLayer, 0, "()V", 1 },
	{ "add", (intptr_t) SM_mindustry_graphics_CacheLayer_add_Array1_mindustry_graphics_CacheLayer, 0, "([Lmindustry/graphics/CacheLayer;)V", 137 },
	{ "addLast", (intptr_t) SM_mindustry_graphics_CacheLayer_addLast_Array1_mindustry_graphics_CacheLayer, 0, "([Lmindustry/graphics/CacheLayer;)V", 137 },
	{ "add", (intptr_t) SM_mindustry_graphics_CacheLayer_add_int_mindustry_graphics_CacheLayer, 0, "(ILmindustry/graphics/CacheLayer;)V", 9 },
	{ "init", (intptr_t) SM_mindustry_graphics_CacheLayer_init, 0, "()V", 9 },
	{ "begin", (intptr_t) M_mindustry_graphics_CacheLayer_begin, VTABLE_mindustry_graphics_CacheLayer_begin, "()V", 1 },
	{ "end", (intptr_t) M_mindustry_graphics_CacheLayer_end, VTABLE_mindustry_graphics_CacheLayer_end, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_CacheLayer, 0, "()V", 8 },
};

Class class_mindustry_graphics_CacheLayer{
		.nativeName = (intptr_t) "mindustry/graphics/CacheLayer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_CacheLayer),
		.classVtable = (intptr_t) vtable_mindustry_graphics_CacheLayer,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_CacheLayer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_CacheLayer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_CacheLayer = registerClass(&class_mindustry_graphics_CacheLayer);

}
