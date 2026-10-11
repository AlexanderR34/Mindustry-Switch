#include "mindustry/graphics/Shaders.h"
#include "mindustry/graphics/Shaders_SurfaceShader.h"
#include "mindustry/graphics/Shaders_FogShader.h"
#include "mindustry/graphics/Shaders_PlanetShader.h"
#include "mindustry/core/FileTree.h"
#include "mindustry/graphics/Shaders_MeshShader.h"
#include "arc/files/Fi.h"
#include "mindustry/graphics/Shaders_CloudShader.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/String.h"
#include "mindustry/graphics/Shaders_UnitArmorShader.h"
#include "mindustry/graphics/Shaders_SpaceShader.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/graphics/Shaders_BlockBuildShader.h"
#include "mindustry/graphics/Shaders_ShieldShader.h"
#include "java/lang/Throwable.h"
#include "mindustry/graphics/Shaders_DarknessShader.h"
#include "mindustry/graphics/Shaders_LightShader.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/graphics/Shaders_AtmosphereShader.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/graphics/Shaders_PlanetGridShader.h"
#include "arc/util/Nullable.h"
#include "mindustry/graphics/Shaders_ShockwaveShader.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Shaders_BuildBeamShader.h"
#include "mindustry/graphics/Shaders_LoadShader.h"
#include "mindustry/graphics/Shaders_1.h"
#include "mindustry/Vars.h"
#include "mindustry/graphics/Shaders_UnitBuildShader.h"

extern "C" {

jobject SF_mindustry_graphics_Shaders_blockbuild;
jobject SF_mindustry_graphics_Shaders_shield;
jobject SF_mindustry_graphics_Shaders_buildBeam;
jobject SF_mindustry_graphics_Shaders_build;
jobject SF_mindustry_graphics_Shaders_armor;
jobject SF_mindustry_graphics_Shaders_darkness;
jobject SF_mindustry_graphics_Shaders_fog;
jobject SF_mindustry_graphics_Shaders_light;
jobject SF_mindustry_graphics_Shaders_water;
jobject SF_mindustry_graphics_Shaders_mud;
jobject SF_mindustry_graphics_Shaders_tar;
jobject SF_mindustry_graphics_Shaders_slag;
jobject SF_mindustry_graphics_Shaders_cryofluid;
jobject SF_mindustry_graphics_Shaders_space;
jobject SF_mindustry_graphics_Shaders_caustics;
jobject SF_mindustry_graphics_Shaders_arkycite;
jobject SF_mindustry_graphics_Shaders_planet;
jobject SF_mindustry_graphics_Shaders_clouds;
jobject SF_mindustry_graphics_Shaders_planetGrid;
jobject SF_mindustry_graphics_Shaders_atmosphere;
jobject SF_mindustry_graphics_Shaders_shockwave;
jobject SF_mindustry_graphics_Shaders_mesh;
jobject SF_mindustry_graphics_Shaders_unlit;
jobject SF_mindustry_graphics_Shaders_unlitWhite;
jobject SF_mindustry_graphics_Shaders_screenspace;

void mark_mindustry_graphics_Shaders(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_Shaders_blockbuild)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_blockbuild)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_blockbuild, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_shield)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_shield)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_shield, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_buildBeam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_buildBeam)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_buildBeam, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_build)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_build)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_build, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_armor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_armor)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_armor, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_darkness)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_darkness)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_darkness, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_fog)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_fog)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_fog, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_light)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_light)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_light, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_water)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_water)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_water, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_mud)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_mud)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_mud, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_tar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_tar)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_tar, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_slag)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_slag)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_slag, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_cryofluid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_cryofluid)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_cryofluid, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_space)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_space)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_space, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_caustics)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_caustics)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_caustics, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_arkycite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_arkycite)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_arkycite, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_planet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_planet)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_planet, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_clouds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_clouds)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_clouds, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_planetGrid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_planetGrid)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_planetGrid, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_atmosphere)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_atmosphere)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_atmosphere, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_shockwave)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_shockwave)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_shockwave, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_mesh)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_mesh)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_mesh, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_unlit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_unlit)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_unlit, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_unlitWhite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_unlitWhite)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_unlitWhite, mark, depth + 1);
		if (SF_mindustry_graphics_Shaders_screenspace)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Shaders_screenspace)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Shaders_screenspace, mark, depth + 1);
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
	auto self = (mindustry_graphics_Shaders *) object;
}

void clinit_mindustry_graphics_Shaders(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_Shaders(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Shaders_init(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders(ctx);
	{
	LINE_NUMBER(40);
	clinit_mindustry_graphics_Shaders$MeshShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$MeshShader);
	init_mindustry_graphics_Shaders$MeshShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_mesh = sp[0].o;
	LINE_NUMBER(41);
	clinit_mindustry_graphics_Shaders$BlockBuildShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$BlockBuildShader);
	init_mindustry_graphics_Shaders$BlockBuildShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_blockbuild = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(43);
	clinit_mindustry_graphics_Shaders$ShieldShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$ShieldShader);
	init_mindustry_graphics_Shaders$ShieldShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_shield = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(48);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(44);
	frame[0].o = sp[0].o;
	LINE_NUMBER(46);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_shield = (jobject(nullptr));
	LINE_NUMBER(47);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(49);
	clinit_mindustry_graphics_Shaders$FogShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$FogShader);
	init_mindustry_graphics_Shaders$FogShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_fog = sp[0].o;
	LINE_NUMBER(50);
	clinit_mindustry_graphics_Shaders$BuildBeamShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$BuildBeamShader);
	init_mindustry_graphics_Shaders$BuildBeamShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_buildBeam = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_graphics_Shaders$UnitBuildShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$UnitBuildShader);
	init_mindustry_graphics_Shaders$UnitBuildShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_build = sp[0].o;
	LINE_NUMBER(52);
	clinit_mindustry_graphics_Shaders$UnitArmorShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$UnitArmorShader);
	init_mindustry_graphics_Shaders$UnitArmorShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_armor = sp[0].o;
	LINE_NUMBER(53);
	clinit_mindustry_graphics_Shaders$DarknessShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$DarknessShader);
	init_mindustry_graphics_Shaders$DarknessShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_darkness = sp[0].o;
	LINE_NUMBER(54);
	clinit_mindustry_graphics_Shaders$LightShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$LightShader);
	init_mindustry_graphics_Shaders$LightShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_light = sp[0].o;
	LINE_NUMBER(55);
	clinit_mindustry_graphics_Shaders$SurfaceShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$SurfaceShader);
	init_mindustry_graphics_Shaders$SurfaceShader_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"water"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_water = sp[0].o;
	LINE_NUMBER(56);
	clinit_mindustry_graphics_Shaders$SurfaceShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$SurfaceShader);
	init_mindustry_graphics_Shaders$SurfaceShader_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arkycite"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_arkycite = sp[0].o;
	LINE_NUMBER(57);
	clinit_mindustry_graphics_Shaders$SurfaceShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$SurfaceShader);
	init_mindustry_graphics_Shaders$SurfaceShader_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mud"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_mud = sp[0].o;
	LINE_NUMBER(58);
	clinit_mindustry_graphics_Shaders$SurfaceShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$SurfaceShader);
	init_mindustry_graphics_Shaders$SurfaceShader_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tar"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_tar = sp[0].o;
	LINE_NUMBER(59);
	clinit_mindustry_graphics_Shaders$SurfaceShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$SurfaceShader);
	init_mindustry_graphics_Shaders$SurfaceShader_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slag"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_slag = sp[0].o;
	LINE_NUMBER(60);
	clinit_mindustry_graphics_Shaders$SurfaceShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$SurfaceShader);
	init_mindustry_graphics_Shaders$SurfaceShader_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cryofluid"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_cryofluid = sp[0].o;
	LINE_NUMBER(61);
	clinit_mindustry_graphics_Shaders$SpaceShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$SpaceShader);
	init_mindustry_graphics_Shaders$SpaceShader_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"space"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_space = sp[0].o;
	LINE_NUMBER(62);
	clinit_mindustry_graphics_Shaders$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$1);
	init_mindustry_graphics_Shaders$1_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"caustics"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_caustics = sp[0].o;
	LINE_NUMBER(68);
	clinit_mindustry_graphics_Shaders$PlanetShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$PlanetShader);
	init_mindustry_graphics_Shaders$PlanetShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_planet = sp[0].o;
	LINE_NUMBER(69);
	clinit_mindustry_graphics_Shaders$CloudShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$CloudShader);
	init_mindustry_graphics_Shaders$CloudShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_clouds = sp[0].o;
	LINE_NUMBER(70);
	clinit_mindustry_graphics_Shaders$PlanetGridShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$PlanetGridShader);
	init_mindustry_graphics_Shaders$PlanetGridShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_planetGrid = sp[0].o;
	LINE_NUMBER(71);
	clinit_mindustry_graphics_Shaders$AtmosphereShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$AtmosphereShader);
	init_mindustry_graphics_Shaders$AtmosphereShader(ctx, sp[0].o);
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_atmosphere = sp[0].o;
	LINE_NUMBER(72);
	clinit_mindustry_graphics_Shaders$LoadShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$LoadShader);
	init_mindustry_graphics_Shaders$LoadShader_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"planet"_j))), (((jobject) createStringLiteral(ctx, u8"unlit"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_unlit = sp[0].o;
	LINE_NUMBER(73);
	clinit_mindustry_graphics_Shaders$LoadShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$LoadShader);
	init_mindustry_graphics_Shaders$LoadShader_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"planet"_j))), (((jobject) createStringLiteral(ctx, u8"unlitwhite"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_unlitWhite = sp[0].o;
	LINE_NUMBER(74);
	clinit_mindustry_graphics_Shaders$LoadShader(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Shaders$LoadShader);
	init_mindustry_graphics_Shaders$LoadShader_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"screenspace"_j))), (((jobject) createStringLiteral(ctx, u8"screenspace"_j))));
	clinit_mindustry_graphics_Shaders(ctx);
	SF_mindustry_graphics_Shaders_screenspace = sp[0].o;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_Shaders_getShaderFi_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders:getShaderFi", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(486);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"shaders/\u0001"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_graphics_Shaders;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field shield
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_graphics_Shaders[] {
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

static jclass innerClasses[] {
	&class_mindustry_graphics_Shaders$MeshShader,
	&class_mindustry_graphics_Shaders$BlockBuildShader,
	&class_mindustry_graphics_Shaders$ShieldShader,
	&class_mindustry_graphics_Shaders$FogShader,
	&class_mindustry_graphics_Shaders$BuildBeamShader,
	&class_mindustry_graphics_Shaders$UnitBuildShader,
	&class_mindustry_graphics_Shaders$UnitArmorShader,
	&class_mindustry_graphics_Shaders$DarknessShader,
	&class_mindustry_graphics_Shaders$LightShader,
	&class_mindustry_graphics_Shaders$SurfaceShader,
	&class_mindustry_graphics_Shaders$SpaceShader,
	&class_mindustry_graphics_Shaders$PlanetShader,
	&class_mindustry_graphics_Shaders$CloudShader,
	&class_mindustry_graphics_Shaders$PlanetGridShader,
	&class_mindustry_graphics_Shaders$AtmosphereShader,
	&class_mindustry_graphics_Shaders$LoadShader,
	&class_mindustry_graphics_Shaders$ShockwaveShader,
};

static FieldMetadata fields[] {
	{ "blockbuild", &class_mindustry_graphics_Shaders$BlockBuildShader, (intptr_t) &SF_mindustry_graphics_Shaders_blockbuild, "Lmindustry/graphics/Shaders$BlockBuildShader;", 9 },
	{ "shield", &class_mindustry_graphics_Shaders$ShieldShader, (intptr_t) &SF_mindustry_graphics_Shaders_shield, "Lmindustry/graphics/Shaders$ShieldShader;", 9 },
	{ "buildBeam", &class_mindustry_graphics_Shaders$BuildBeamShader, (intptr_t) &SF_mindustry_graphics_Shaders_buildBeam, "Lmindustry/graphics/Shaders$BuildBeamShader;", 9 },
	{ "build", &class_mindustry_graphics_Shaders$UnitBuildShader, (intptr_t) &SF_mindustry_graphics_Shaders_build, "Lmindustry/graphics/Shaders$UnitBuildShader;", 9 },
	{ "armor", &class_mindustry_graphics_Shaders$UnitArmorShader, (intptr_t) &SF_mindustry_graphics_Shaders_armor, "Lmindustry/graphics/Shaders$UnitArmorShader;", 9 },
	{ "darkness", &class_mindustry_graphics_Shaders$DarknessShader, (intptr_t) &SF_mindustry_graphics_Shaders_darkness, "Lmindustry/graphics/Shaders$DarknessShader;", 9 },
	{ "fog", &class_mindustry_graphics_Shaders$FogShader, (intptr_t) &SF_mindustry_graphics_Shaders_fog, "Lmindustry/graphics/Shaders$FogShader;", 9 },
	{ "light", &class_mindustry_graphics_Shaders$LightShader, (intptr_t) &SF_mindustry_graphics_Shaders_light, "Lmindustry/graphics/Shaders$LightShader;", 9 },
	{ "water", &class_mindustry_graphics_Shaders$SurfaceShader, (intptr_t) &SF_mindustry_graphics_Shaders_water, "Lmindustry/graphics/Shaders$SurfaceShader;", 9 },
	{ "mud", &class_mindustry_graphics_Shaders$SurfaceShader, (intptr_t) &SF_mindustry_graphics_Shaders_mud, "Lmindustry/graphics/Shaders$SurfaceShader;", 9 },
	{ "tar", &class_mindustry_graphics_Shaders$SurfaceShader, (intptr_t) &SF_mindustry_graphics_Shaders_tar, "Lmindustry/graphics/Shaders$SurfaceShader;", 9 },
	{ "slag", &class_mindustry_graphics_Shaders$SurfaceShader, (intptr_t) &SF_mindustry_graphics_Shaders_slag, "Lmindustry/graphics/Shaders$SurfaceShader;", 9 },
	{ "cryofluid", &class_mindustry_graphics_Shaders$SurfaceShader, (intptr_t) &SF_mindustry_graphics_Shaders_cryofluid, "Lmindustry/graphics/Shaders$SurfaceShader;", 9 },
	{ "space", &class_mindustry_graphics_Shaders$SurfaceShader, (intptr_t) &SF_mindustry_graphics_Shaders_space, "Lmindustry/graphics/Shaders$SurfaceShader;", 9 },
	{ "caustics", &class_mindustry_graphics_Shaders$SurfaceShader, (intptr_t) &SF_mindustry_graphics_Shaders_caustics, "Lmindustry/graphics/Shaders$SurfaceShader;", 9 },
	{ "arkycite", &class_mindustry_graphics_Shaders$SurfaceShader, (intptr_t) &SF_mindustry_graphics_Shaders_arkycite, "Lmindustry/graphics/Shaders$SurfaceShader;", 9 },
	{ "planet", &class_mindustry_graphics_Shaders$PlanetShader, (intptr_t) &SF_mindustry_graphics_Shaders_planet, "Lmindustry/graphics/Shaders$PlanetShader;", 9 },
	{ "clouds", &class_mindustry_graphics_Shaders$CloudShader, (intptr_t) &SF_mindustry_graphics_Shaders_clouds, "Lmindustry/graphics/Shaders$CloudShader;", 9 },
	{ "planetGrid", &class_mindustry_graphics_Shaders$PlanetGridShader, (intptr_t) &SF_mindustry_graphics_Shaders_planetGrid, "Lmindustry/graphics/Shaders$PlanetGridShader;", 9 },
	{ "atmosphere", &class_mindustry_graphics_Shaders$AtmosphereShader, (intptr_t) &SF_mindustry_graphics_Shaders_atmosphere, "Lmindustry/graphics/Shaders$AtmosphereShader;", 9 },
	{ "shockwave", &class_mindustry_graphics_Shaders$ShockwaveShader, (intptr_t) &SF_mindustry_graphics_Shaders_shockwave, "Lmindustry/graphics/Shaders$ShockwaveShader;", 9 },
	{ "mesh", &class_mindustry_graphics_Shaders$MeshShader, (intptr_t) &SF_mindustry_graphics_Shaders_mesh, "Lmindustry/graphics/Shaders$MeshShader;", 9 },
	{ "unlit", &class_arc_graphics_gl_Shader, (intptr_t) &SF_mindustry_graphics_Shaders_unlit, "Larc/graphics/gl/Shader;", 9 },
	{ "unlitWhite", &class_arc_graphics_gl_Shader, (intptr_t) &SF_mindustry_graphics_Shaders_unlitWhite, "Larc/graphics/gl/Shader;", 9 },
	{ "screenspace", &class_arc_graphics_gl_Shader, (intptr_t) &SF_mindustry_graphics_Shaders_screenspace, "Larc/graphics/gl/Shader;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Shaders, 0, "()V", 1 },
	{ "init", (intptr_t) SM_mindustry_graphics_Shaders_init, 0, "()V", 9 },
	{ "getShaderFi", (intptr_t) SM_mindustry_graphics_Shaders_getShaderFi_java_lang_String_R_arc_files_Fi, 0, "(Ljava/lang/String;)Larc/files/Fi;", 9 },
};

Class class_mindustry_graphics_Shaders{
		.nativeName = (intptr_t) "mindustry/graphics/Shaders",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Shaders),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Shaders,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Shaders,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_graphics_Shaders,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 17,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 25,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Shaders = registerClass(&class_mindustry_graphics_Shaders);

}
