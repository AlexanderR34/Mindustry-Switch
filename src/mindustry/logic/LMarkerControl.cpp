#include "mindustry/logic/LMarkerControl.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LMarkerControl.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_logic_LMarkerControl_remove;
jobject SF_mindustry_logic_LMarkerControl_world;
jobject SF_mindustry_logic_LMarkerControl_minimap;
jobject SF_mindustry_logic_LMarkerControl_light;
jobject SF_mindustry_logic_LMarkerControl_autoscale;
jobject SF_mindustry_logic_LMarkerControl_pos;
jobject SF_mindustry_logic_LMarkerControl_endPos;
jobject SF_mindustry_logic_LMarkerControl_drawLayer;
jobject SF_mindustry_logic_LMarkerControl_color;
jobject SF_mindustry_logic_LMarkerControl_radius;
jobject SF_mindustry_logic_LMarkerControl_stroke;
jobject SF_mindustry_logic_LMarkerControl_outline;
jobject SF_mindustry_logic_LMarkerControl_rotation;
jobject SF_mindustry_logic_LMarkerControl_shape;
jobject SF_mindustry_logic_LMarkerControl_arc;
jobject SF_mindustry_logic_LMarkerControl_flushText;
jobject SF_mindustry_logic_LMarkerControl_fontSize;
jobject SF_mindustry_logic_LMarkerControl_textHeight;
jobject SF_mindustry_logic_LMarkerControl_textAlign;
jobject SF_mindustry_logic_LMarkerControl_lineAlign;
jobject SF_mindustry_logic_LMarkerControl_labelFlags;
jobject SF_mindustry_logic_LMarkerControl_texture;
jobject SF_mindustry_logic_LMarkerControl_textureSize;
jobject SF_mindustry_logic_LMarkerControl_posi;
jobject SF_mindustry_logic_LMarkerControl_uvi;
jobject SF_mindustry_logic_LMarkerControl_colori;
jobject SF_mindustry_logic_LMarkerControl_all;
jobject SF_mindustry_logic_LMarkerControl_$VALUES;

void mark_mindustry_logic_LMarkerControl(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LMarkerControl_remove)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_remove)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_remove, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_world)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_world)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_world, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_minimap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_minimap)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_minimap, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_light)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_light)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_light, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_autoscale)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_autoscale)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_autoscale, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_pos)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_pos)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_pos, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_endPos)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_endPos)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_endPos, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_drawLayer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_drawLayer)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_drawLayer, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_color)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_color)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_color, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_radius)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_radius)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_radius, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_stroke)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_stroke)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_stroke, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_outline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_outline)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_outline, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_rotation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_rotation)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_rotation, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_shape)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_shape)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_shape, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_arc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_arc)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_arc, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_flushText)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_flushText)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_flushText, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_fontSize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_fontSize)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_fontSize, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_textHeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_textHeight)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_textHeight, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_textAlign)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_textAlign)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_textAlign, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_lineAlign)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_lineAlign)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_lineAlign, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_labelFlags)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_labelFlags)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_labelFlags, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_texture)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_texture)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_texture, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_textureSize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_textureSize)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_textureSize, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_posi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_posi)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_posi, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_uvi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_uvi)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_uvi, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_colori)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_colori)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_colori, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_all, mark, depth + 1);
		if (SF_mindustry_logic_LMarkerControl_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LMarkerControl_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_LMarkerControl_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_LMarkerControl *) object;
	if (self->F_params)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_params)->clazz)->markFunction)((jobject) self->F_params, mark, depth + 1);
}

jobject SM_mindustry_logic_LMarkerControl_values_R_Array1_mindustry_logic_LMarkerControl(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LMarkerControl:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LMarkerControl(ctx);
	{
	LINE_NUMBER(3);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LMarkerControl_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_LMarkerControl, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LMarkerControl_valueOf_java_lang_String_R_mindustry_logic_LMarkerControl(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LMarkerControl:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LMarkerControl(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_LMarkerControl)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LMarkerControl, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LMarkerControl:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LMarkerControl(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(35);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(36);
	((mindustry_logic_LMarkerControl *) NULL_CHECK((frame[0].o)))->F_params = (jref) (frame[3].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LMarkerControl_$values_R_Array1_mindustry_logic_LMarkerControl(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LMarkerControl:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LMarkerControl(ctx);
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_LMarkerControl, (26));
	jint temp0 = jint(0);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_remove;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_world;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_minimap;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_light;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_autoscale;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_pos;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_endPos;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_drawLayer;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_color;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_radius;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_stroke;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_outline;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_rotation;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_shape;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_arc;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_flushText;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_fontSize;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_textHeight;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_textAlign;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_lineAlign;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_labelFlags;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_texture;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_textureSize;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_posi;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_uvi;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_colori;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LMarkerControl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[8];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LMarkerControl:<clinit>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LMarkerControl(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"remove"_j));
	jint temp0 = jint(0);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_remove = sp[0].o;
	LINE_NUMBER(5);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"world"_j));
	jint temp1 = jint(1);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"truefalse"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_world = sp[0].o;
	LINE_NUMBER(6);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"minimap"_j));
	jint temp2 = jint(2);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"truefalse"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_minimap = sp[0].o;
	LINE_NUMBER(7);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"light"_j));
	jint temp3 = jint(3);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"truefalse"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_light = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"autoscale"_j));
	jint temp4 = jint(4);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"truefalse"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp4, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_autoscale = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pos"_j));
	jint temp5 = jint(5);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp5, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_pos = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"endPos"_j));
	jint temp6 = 6;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp6, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_endPos = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"drawLayer"_j));
	jint temp7 = 7;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"layer"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp7, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_drawLayer = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"color"_j));
	jint temp8 = 8;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"color"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp8, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_color = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"radius"_j));
	jint temp9 = 9;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"radius"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp9, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_radius = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stroke"_j));
	jint temp10 = 10;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"stroke"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp10, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_stroke = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"outline"_j));
	jint temp11 = 11;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"outline"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp11, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_outline = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rotation"_j));
	jint temp12 = 12;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"rotation"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp12, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_rotation = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shape"_j));
	jint temp13 = 13;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"sides"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"fill"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"outline"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp13, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_shape = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"arc"_j));
	jint temp14 = 14;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"start"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"end"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp14, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_arc = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"flushText"_j));
	jint temp15 = 15;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"fetch"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp15, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_flushText = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fontSize"_j));
	jint temp16 = 16;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"size"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp16, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_fontSize = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"textHeight"_j));
	jint temp17 = 17;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"height"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp17, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_textHeight = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"textAlign"_j));
	jint temp18 = 18;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"align"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp18, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_textAlign = sp[0].o;
	LINE_NUMBER(23);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lineAlign"_j));
	jint temp19 = 19;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"align"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp19, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_lineAlign = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"labelFlags"_j));
	jint temp20 = 20;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"background"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"outline"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp20, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_labelFlags = sp[0].o;
	LINE_NUMBER(25);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"texture"_j));
	jint temp21 = 21;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"printFlush"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"name"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp21, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_texture = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"textureSize"_j));
	jint temp22 = 22;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"width"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"height"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp22, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_textureSize = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"posi"_j));
	jint temp23 = 23;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"index"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp23, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_posi = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uvi"_j));
	jint temp24 = 24;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"index"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp24, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_uvi = sp[0].o;
	LINE_NUMBER(29);
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LMarkerControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"colori"_j));
	jint temp25 = 25;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"index"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"color"_j)));
	init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp25, sp[2].o);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_colori = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_mindustry_logic_LMarkerControl_$values_R_Array1_mindustry_logic_LMarkerControl(ctx);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_$VALUES = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)SM_mindustry_logic_LMarkerControl_values_R_Array1_mindustry_logic_LMarkerControl(ctx);
	clinit_mindustry_logic_LMarkerControl(ctx);
	SF_mindustry_logic_LMarkerControl_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LMarkerControl[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "remove", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_remove, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "world", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_world, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "minimap", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_minimap, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "light", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_light, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "autoscale", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_autoscale, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "pos", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_pos, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "endPos", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_endPos, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "drawLayer", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_drawLayer, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "color", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_color, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "radius", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_radius, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "stroke", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_stroke, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "outline", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_outline, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "rotation", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_rotation, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "shape", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_shape, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "arc", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_arc, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "flushText", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_flushText, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "fontSize", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_fontSize, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "textHeight", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_textHeight, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "textAlign", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_textAlign, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "lineAlign", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_lineAlign, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "labelFlags", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_labelFlags, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "texture", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_texture, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "textureSize", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_textureSize, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "posi", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_posi, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "uvi", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_uvi, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "colori", &class_mindustry_logic_LMarkerControl, (intptr_t) &SF_mindustry_logic_LMarkerControl_colori, "Lmindustry/logic/LMarkerControl;", 16409 },
	{ "params", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_logic_LMarkerControl, F_params), "[Ljava/lang/String;", 17 },
	{ "all", getArrayClass(&class_mindustry_logic_LMarkerControl, 1), (intptr_t) &SF_mindustry_logic_LMarkerControl_all, "[Lmindustry/logic/LMarkerControl;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_LMarkerControl, 1), (intptr_t) &SF_mindustry_logic_LMarkerControl_$VALUES, "[Lmindustry/logic/LMarkerControl;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_LMarkerControl_values_R_Array1_mindustry_logic_LMarkerControl, 0, "()[Lmindustry/logic/LMarkerControl;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_LMarkerControl_valueOf_java_lang_String_R_mindustry_logic_LMarkerControl, 0, "(Ljava/lang/String;)Lmindustry/logic/LMarkerControl;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_LMarkerControl_java_lang_String_int_Array1_java_lang_String, 0, "(Ljava/lang/String;I[Ljava/lang/String;)V", 130 },
	{ "$values", (intptr_t) SM_mindustry_logic_LMarkerControl_$values_R_Array1_mindustry_logic_LMarkerControl, 0, "()[Lmindustry/logic/LMarkerControl;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LMarkerControl, 0, "()V", 8 },
};

Class class_mindustry_logic_LMarkerControl{
		.nativeName = (intptr_t) "mindustry/logic/LMarkerControl",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_LMarkerControl),
		.classVtable = (intptr_t) vtable_mindustry_logic_LMarkerControl,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LMarkerControl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LMarkerControl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 29,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LMarkerControl = registerClass(&class_mindustry_logic_LMarkerControl);

}
