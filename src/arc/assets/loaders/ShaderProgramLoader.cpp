#include "arc/assets/loaders/ShaderProgramLoader.h"
#include "arc/assets/loaders/ShaderProgramLoader_ShaderProgramParameter.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "java/lang/StringBuilder.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "arc/util/Log.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/assets/AssetManager.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/assets/loaders/AsynchronousAssetLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/assets/loaders/ShaderProgramLoader.h"
#include "arc/struct/Seq.h"

extern "C" {


void mark_arc_assets_loaders_ShaderProgramLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_AsynchronousAssetLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_assets_loaders_ShaderProgramLoader *) object;
	if (self->F_vertexFileSuffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertexFileSuffix)->clazz)->markFunction)((jobject) self->F_vertexFileSuffix, mark, depth + 1);
	if (self->F_fragmentFileSuffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fragmentFileSuffix)->clazz)->markFunction)((jobject) self->F_fragmentFileSuffix, mark, depth + 1);
}

void clinit_arc_assets_loaders_ShaderProgramLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_arc_assets_loaders_ShaderProgramLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/ShaderProgramLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_ShaderProgramLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	init_arc_assets_loaders_AsynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(24);
	((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_vertexFileSuffix = (jref) (((jobject) createStringLiteral(ctx, u8".vert"_j)));
	LINE_NUMBER(25);
	((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_fragmentFileSuffix = (jref) (((jobject) createStringLiteral(ctx, u8".frag"_j)));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_loaders_ShaderProgramLoader_arc_assets_loaders_FileHandleResolver_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/ShaderProgramLoader:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_ShaderProgramLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(32);
	init_arc_assets_loaders_AsynchronousAssetLoader_arc_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(24);
	((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_vertexFileSuffix = (jref) (((jobject) createStringLiteral(ctx, u8".vert"_j)));
	LINE_NUMBER(25);
	((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_fragmentFileSuffix = (jref) (((jobject) createStringLiteral(ctx, u8".frag"_j)));
	LINE_NUMBER(33);
	((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_vertexFileSuffix = (jref) (frame[2].o);
	LINE_NUMBER(34);
	((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_fragmentFileSuffix = (jref) (frame[3].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_ShaderProgramLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/ShaderProgramLoader:getDependencies", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_ShaderProgramLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/ShaderProgramLoader:loadAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_ShaderProgramLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/ShaderProgramLoader:loadSync", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(48);
	frame[5].o = (jobject(nullptr));
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(49);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) NULL_CHECK((frame[4].o)))->F_vertexFile;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) NULL_CHECK((frame[4].o)))->F_vertexFile;
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) NULL_CHECK((frame[4].o)))->F_fragmentFile;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) NULL_CHECK((frame[4].o)))->F_fragmentFile;
	frame[6].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(53);
	if ((frame[5].o) != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_fragmentFileSuffix;
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(54);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	sp[2].o = (jobject)((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_fragmentFileSuffix;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, (temp1 - temp2));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_vertexFileSuffix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(56);
	if ((frame[6].o) != nullptr) goto label_8;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_vertexFileSuffix;
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(57);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	sp[2].o = (jobject)((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_vertexFileSuffix;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, (temp1 - temp2));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_assets_loaders_ShaderProgramLoader *) NULL_CHECK((frame[0].o)))->F_fragmentFileSuffix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(59);
	if ((frame[5].o) != nullptr) goto label_10;
	}
	INST_ALOAD(3);
	goto label_11;
label_10:;
	{
	sp[0].o = (jobject)((func_arc_assets_loaders_ShaderProgramLoader_resolve_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_ShaderProgramLoader_resolve_java_lang_String_R_arc_files_Fi])(ctx, (frame[0].o), (frame[5].o));
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(60);
	if ((frame[6].o) != nullptr) goto label_13;
	}
	INST_ALOAD(3);
	goto label_14;
label_13:;
	{
	sp[0].o = (jobject)((func_arc_assets_loaders_ShaderProgramLoader_resolve_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_ShaderProgramLoader_resolve_java_lang_String_R_arc_files_Fi])(ctx, (frame[0].o), (frame[6].o));
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(62);
	jint temp0 = (jint)((func_arc_files_Fi_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_files_Fi_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (frame[8].o));
	if (temp0 == 0) goto label_17;
	}
	INST_ALOAD(9);
	goto label_18;
label_17:;
	INST_ALOAD(8);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_18:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(63);
	if ((frame[4].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) NULL_CHECK((frame[4].o)))->F_prependVertexCode;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) NULL_CHECK((frame[4].o)))->F_prependVertexCode;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[9].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) NULL_CHECK((frame[4].o)))->F_prependFragmentCode;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) NULL_CHECK((frame[4].o)))->F_prependFragmentCode;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[10].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(68);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[9].o), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(69);
	if ((frame[4].o) == nullptr) goto label_24;
	}
	{
	if (((jint)((arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter *) NULL_CHECK((frame[4].o)))->F_logOnCompileFailure) == 0) goto label_25;
	}
label_24:;
	{
	jint temp0 = (jint)((func_arc_graphics_gl_Shader_isCompiled_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_graphics_gl_Shader_isCompiled_R_boolean])(ctx, (frame[11].o));
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(70);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Shader "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" failed to compile:\n"_j))));
	sp[1].o = (jobject)((func_arc_graphics_gl_Shader_getLog_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_graphics_gl_Shader_getLog_R_java_lang_String])(ctx, (frame[11].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (frame[11].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_ShaderProgramLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/ShaderProgramLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((func_arc_assets_loaders_ShaderProgramLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_ShaderProgramLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_graphics_gl_Shader])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_assets_loaders_ShaderProgramLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/ShaderProgramLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(23);
	((func_arc_assets_loaders_ShaderProgramLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_ShaderProgramLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_loaders_ShaderProgramLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/ShaderProgramLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((func_arc_assets_loaders_ShaderProgramLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_assets_loaders_ShaderProgramLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_assets_loaders_ShaderProgramLoader[] {
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
	(void *) M_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi,
	(void *) M_arc_assets_loaders_ShaderProgramLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_arc_assets_loaders_ShaderProgramLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_arc_assets_loaders_ShaderProgramLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_arc_assets_loaders_ShaderProgramLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_struct_Seq,
	(void *) M_arc_assets_loaders_ShaderProgramLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter,
	(void *) M_arc_assets_loaders_ShaderProgramLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_graphics_gl_Shader,
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
	{ "resolve", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;" },
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/ShaderProgramLoader$ShaderProgramParameter;)Larc/struct/Seq;" },
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/ShaderProgramLoader$ShaderProgramParameter;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/ShaderProgramLoader$ShaderProgramParameter;)Larc/graphics/gl/Shader;" },
};

static jclass innerClasses[] {
	&class_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter,
};

static FieldMetadata fields[] {
	{ "vertexFileSuffix", &class_java_lang_String, offsetof(arc_assets_loaders_ShaderProgramLoader, F_vertexFileSuffix), "Ljava/lang/String;", 2 },
	{ "fragmentFileSuffix", &class_java_lang_String, offsetof(arc_assets_loaders_ShaderProgramLoader, F_fragmentFileSuffix), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_ShaderProgramLoader_arc_assets_loaders_FileHandleResolver, 0, "(Larc/assets/loaders/FileHandleResolver;)V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_loaders_ShaderProgramLoader_arc_assets_loaders_FileHandleResolver_java_lang_String_java_lang_String, 0, "(Larc/assets/loaders/FileHandleResolver;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_ShaderProgramLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_struct_Seq, VTABLE_arc_assets_loaders_ShaderProgramLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/ShaderProgramLoader$ShaderProgramParameter;)Larc/struct/Seq;", 1 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_ShaderProgramLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, VTABLE_arc_assets_loaders_ShaderProgramLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/ShaderProgramLoader$ShaderProgramParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_ShaderProgramLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_graphics_gl_Shader, VTABLE_arc_assets_loaders_ShaderProgramLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_ShaderProgramLoader$ShaderProgramParameter_R_arc_graphics_gl_Shader, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/ShaderProgramLoader$ShaderProgramParameter;)Larc/graphics/gl/Shader;", 1 },
	{ "loadSync", (intptr_t) M_arc_assets_loaders_ShaderProgramLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_arc_assets_loaders_ShaderProgramLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_arc_assets_loaders_ShaderProgramLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_arc_assets_loaders_ShaderProgramLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_arc_assets_loaders_ShaderProgramLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_arc_assets_loaders_ShaderProgramLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 4161 },
};

Class class_arc_assets_loaders_ShaderProgramLoader{
		.nativeName = (intptr_t) "arc/assets/loaders/ShaderProgramLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(arc_assets_loaders_ShaderProgramLoader),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_ShaderProgramLoader,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_ShaderProgramLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_assets_loaders_ShaderProgramLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_ShaderProgramLoader = registerClass(&class_arc_assets_loaders_ShaderProgramLoader);

}
