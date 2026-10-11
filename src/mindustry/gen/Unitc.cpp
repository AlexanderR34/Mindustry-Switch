#include "mindustry/gen/Unitc.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/Settable.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/ui/Displayable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/String.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/gen/Syncc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Shieldc.h"
#include "mindustry/gen/Teamc.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/gen/Weaponsc.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/graphics/Trail.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_gen_Unitc(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Unitc *) object;
}

void clinit_mindustry_gen_Unitc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Unitc;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method trail
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method dockedType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method lastDrownFloor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_gen_Unitc[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "applyDynamicStatus", "()Lmindustry/entities/units/StatusEntry;" },
	{ "apply", "(Lmindustry/type/StatusEffect;F)V" },
	{ "apply", "(Lmindustry/type/StatusEffect;)V" },
	{ "unapply", "(Lmindustry/type/StatusEffect;)V" },
	{ "statusDamageMultiplier", "(F)V" },
	{ "statusReloadMultiplier", "(F)V" },
	{ "statusArmor", "(F)V" },
	{ "statusBuildSpeed", "(F)V" },
	{ "statusDrag", "(F)V" },
	{ "statusMaxHealth", "(F)V" },
	{ "statusSpeed", "(F)V" },
	{ "statusColor", "()Larc/graphics/Color;" },
	{ "statusBits", "()Larc/struct/Bits;" },
	{ "disarmed", "()Z" },
	{ "hasEffect", "(Lmindustry/type/StatusEffect;)Z" },
	{ "isBoss", "()Z" },
	{ "isGrounded", "()Z" },
	{ "isImmune", "(Lmindustry/type/StatusEffect;)Z" },
	{ "armorOverride", "()F" },
	{ "buildSpeedMultiplier", "()F" },
	{ "damageMultiplier", "()F" },
	{ "dragMultiplier", "()F" },
	{ "getDuration", "(Lmindustry/type/StatusEffect;)F" },
	{ "healthMultiplier", "()F" },
	{ "reloadMultiplier", "()F" },
	{ "speedMultiplier", "()F" },
	{ "armorOverride", "(F)V" },
	{ "buildSpeedMultiplier", "(F)V" },
	{ "clearStatuses", "()V" },
	{ "damageMultiplier", "(F)V" },
	{ "disarmed", "(Z)V" },
	{ "dragMultiplier", "(F)V" },
	{ "draw", "()V" },
	{ "healthMultiplier", "(F)V" },
	{ "reloadMultiplier", "(F)V" },
	{ "setDuration", "(Lmindustry/type/StatusEffect;F)V" },
	{ "speedMultiplier", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "buildPlan", "()Lmindustry/entities/units/BuildPlan;" },
	{ "shouldSkip", "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Building;)Z" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "clearBuilding", "()V" },
	{ "isBuilding", "()Z" },
	{ "plans", "()Larc/struct/Queue;" },
	{ "activelyBuilding", "()Z" },
	{ "canBuild", "()Z" },
	{ "updateBuilding", "()Z" },
	{ "buildAlpha", "()F" },
	{ "buildAlpha", "(F)V" },
	{ "drawBuilding", "()V" },
	{ "drawBuildingBeam", "(FF)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "drawPlanTop", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "plans", "(Larc/struct/Queue;)V" },
	{ "removeBuild", "(IIZ)V" },
	{ "updateBuildLogic", "()V" },
	{ "updateBuilding", "(Z)V" },
	{ "validatePlans", "()V" },
	{ "clipSize", "()F" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "isValid", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "hitSize", "()F" },
	{ "collides", "(Lmindustry/gen/Hitboxc;)Z" },
	{ "deltaAngle", "()F" },
	{ "deltaLen", "()F" },
	{ "deltaX", "()F" },
	{ "deltaY", "()F" },
	{ "lastX", "()F" },
	{ "lastY", "()F" },
	{ "collision", "(Lmindustry/gen/Hitboxc;FF)V" },
	{ "deltaX", "(F)V" },
	{ "deltaY", "(F)V" },
	{ "getCollisions", "(Larc/func/Cons;)V" },
	{ "hitSize", "(F)V" },
	{ "hitboxTile", "(Larc/math/geom/Rect;)V" },
	{ "lastX", "(F)V" },
	{ "lastY", "(F)V" },
	{ "updateLastPosition", "()V" },
	{ "acceptsItem", "(Lmindustry/type/Item;)Z" },
	{ "hasItem", "()Z" },
	{ "itemTime", "()F" },
	{ "itemCapacity", "()I" },
	{ "maxAccepted", "(Lmindustry/type/Item;)I" },
	{ "item", "()Lmindustry/type/Item;" },
	{ "stack", "()Lmindustry/type/ItemStack;" },
	{ "addItem", "(Lmindustry/type/Item;)V" },
	{ "addItem", "(Lmindustry/type/Item;I)V" },
	{ "clearItem", "()V" },
	{ "itemTime", "(F)V" },
	{ "stack", "(Lmindustry/type/ItemStack;)V" },
	{ "mineTile", "()Lmindustry/world/Tile;" },
	{ "canMine", "()Z" },
	{ "canMine", "(Lmindustry/type/Item;)Z" },
	{ "mining", "()Z" },
	{ "offloadImmediately", "()Z" },
	{ "validMine", "(Lmindustry/world/Tile;)Z" },
	{ "validMine", "(Lmindustry/world/Tile;Z)Z" },
	{ "mineTimer", "()F" },
	{ "getMineResult", "(Lmindustry/world/Tile;)Lmindustry/type/Item;" },
	{ "mineTile", "(Lmindustry/world/Tile;)V" },
	{ "mineTimer", "(F)V" },
	{ "solidity", "()Lmindustry/entities/EntityCollisions$SolidPred;" },
	{ "canPassOn", "()Z" },
	{ "canPass", "(II)Z" },
	{ "vel", "()Larc/math/geom/Vec2;" },
	{ "ignoreSolids", "()Z" },
	{ "moving", "()Z" },
	{ "drag", "()F" },
	{ "drag", "(F)V" },
	{ "move", "(Larc/math/geom/Vec2;)V" },
	{ "move", "(FF)V" },
	{ "vel", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(FF)V" },
	{ "hasPhysicsRef", "()Z" },
	{ "mass", "()F" },
	{ "hasPhysicsRef", "(Z)V" },
	{ "impulse", "(Larc/math/geom/Vec2;)V" },
	{ "impulse", "(FF)V" },
	{ "impulseNet", "(Larc/math/geom/Vec2;)V" },
	{ "shield", "()F" },
	{ "shield", "(F)V" },
	{ "shieldAlpha", "()F" },
	{ "shieldAlpha", "(F)V" },
	{ "armor", "()F" },
	{ "armor", "(F)V" },
	{ "rawDamage", "(F)V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "aim", "(FF)V" },
	{ "aim", "(FFZ)V" },
	{ "mounts", "()[Lmindustry/entities/units/WeaponMount;" },
	{ "mounts", "([Lmindustry/entities/units/WeaponMount;)V" },
	{ "canShoot", "()Z" },
	{ "isRotate", "()Z" },
	{ "isShooting", "()Z" },
	{ "aimX", "()F" },
	{ "aimY", "()F" },
	{ "aim", "(Larc/math/geom/Position;)V" },
	{ "aimX", "(F)V" },
	{ "aimY", "(F)V" },
	{ "controlWeapons", "(ZZ)V" },
	{ "controlWeapons", "(Z)V" },
	{ "isShooting", "(Z)V" },
	{ "setWeaponRotation", "(F)V" },
	{ "setupWeapons", "(Lmindustry/type/UnitType;)V" },
	{ "range", "()F" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "physicSize", "()F" },
	{ "getControllerName", "()Ljava/lang/String;" },
	{ "speed", "()F" },
	{ "collisionLayer", "()I" },
	{ "prefRotation", "()F" },
	{ "allowCommand", "()Z" },
	{ "isCommandable", "()Z" },
	{ "canLand", "()Z" },
	{ "destroy", "()V" },
	{ "unloaded", "()V" },
	{ "movePref", "(Larc/math/geom/Vec2;)V" },
	{ "hasTarget", "()Z" },
	{ "hasTarget", "(Z)V" },
	{ "trail", "()Lmindustry/graphics/Trail;" },
	{ "dockedType", "()Lmindustry/type/UnitType;" },
	{ "lastDrownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "getPlayer", "()Lmindustry/gen/Player;" },
	{ "canDrown", "()Z" },
	{ "canTarget", "(Lmindustry/gen/Teamc;)Z" },
	{ "checkTarget", "(ZZ)Z" },
	{ "hasWeapons", "()Z" },
	{ "hittable", "()Z" },
	{ "inRange", "(Larc/math/geom/Position;)Z" },
	{ "isAI", "()Z" },
	{ "isEnemy", "()Z" },
	{ "isFlying", "()Z" },
	{ "isMissile", "()Z" },
	{ "isPathImpassable", "(II)Z" },
	{ "isPlayer", "()Z" },
	{ "killable", "()Z" },
	{ "playerControllable", "()Z" },
	{ "shouldUpdateController", "()Z" },
	{ "spawnedByCore", "()Z" },
	{ "targetable", "(Lmindustry/game/Team;)Z" },
	{ "flag", "()D" },
	{ "ammof", "()F" },
	{ "bounds", "()F" },
	{ "drownTime", "()F" },
	{ "elevation", "()F" },
	{ "floorSpeedMultiplier", "()F" },
	{ "healTime", "()F" },
	{ "shadowAlpha", "()F" },
	{ "splashTimer", "()F" },
	{ "cap", "()I" },
	{ "count", "()I" },
	{ "lastFogPos", "()I" },
	{ "lastCommanded", "()Ljava/lang/String;" },
	{ "command", "()Lmindustry/ai/types/CommandAI;" },
	{ "abilities", "()[Lmindustry/entities/abilities/Ability;" },
	{ "controller", "()Lmindustry/entities/units/UnitController;" },
	{ "type", "()Lmindustry/type/UnitType;" },
	{ "drownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "abilities", "([Lmindustry/entities/abilities/Ability;)V" },
	{ "aimLook", "(Larc/math/geom/Position;)V" },
	{ "aimLook", "(FF)V" },
	{ "approach", "(Larc/math/geom/Vec2;)V" },
	{ "controller", "(Lmindustry/entities/units/UnitController;)V" },
	{ "dockedType", "(Lmindustry/type/UnitType;)V" },
	{ "drownTime", "(F)V" },
	{ "elevation", "(F)V" },
	{ "flag", "(D)V" },
	{ "healTime", "(F)V" },
	{ "landed", "()V" },
	{ "lastCommanded", "(Ljava/lang/String;)V" },
	{ "lastDrownFloor", "(Lmindustry/world/blocks/environment/Floor;)V" },
	{ "lastFogPos", "(I)V" },
	{ "lookAt", "(Larc/math/geom/Position;)V" },
	{ "lookAt", "(F)V" },
	{ "lookAt", "(FF)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;F)V" },
	{ "resetController", "()V" },
	{ "rotateMove", "(Larc/math/geom/Vec2;)V" },
	{ "set", "(Lmindustry/type/UnitType;Lmindustry/entities/units/UnitController;)V" },
	{ "setType", "(Lmindustry/type/UnitType;)V" },
	{ "shadowAlpha", "(F)V" },
	{ "spawnedByCore", "(Z)V" },
	{ "splashTimer", "(F)V" },
	{ "trail", "(Lmindustry/graphics/Trail;)V" },
	{ "type", "(Lmindustry/type/UnitType;)V" },
	{ "updateBoosting", "(Z)V" },
	{ "updateBoosting", "(ZZ)V" },
	{ "updateDrowning", "()V" },
	{ "wobble", "()V" },
};

static jclass interfaces[] { &class_mindustry_gen_Builderc, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Healthc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Itemsc, &class_mindustry_gen_Minerc, &class_mindustry_gen_Physicsc, &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Shieldc, &class_mindustry_gen_Statusc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Velc, &class_mindustry_gen_Weaponsc, &class_mindustry_logic_Ranged, &class_mindustry_logic_Senseable, &class_mindustry_logic_Settable, &class_mindustry_ui_Displayable, };

static MethodMetadata methods[] {
	{ "icon", 0, INDEX_mindustry_gen_Unitc_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1025 },
	{ "physicSize", 0, INDEX_mindustry_gen_Unitc_physicSize_R_float, "()F", 1025 },
	{ "getControllerName", 0, INDEX_mindustry_gen_Unitc_getControllerName_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "speed", 0, INDEX_mindustry_gen_Unitc_speed_R_float, "()F", 1025 },
	{ "collisionLayer", 0, INDEX_mindustry_gen_Unitc_collisionLayer_R_int, "()I", 1025 },
	{ "prefRotation", 0, INDEX_mindustry_gen_Unitc_prefRotation_R_float, "()F", 1025 },
	{ "allowCommand", 0, INDEX_mindustry_gen_Unitc_allowCommand_R_boolean, "()Z", 1025 },
	{ "isCommandable", 0, INDEX_mindustry_gen_Unitc_isCommandable_R_boolean, "()Z", 1025 },
	{ "canLand", 0, INDEX_mindustry_gen_Unitc_canLand_R_boolean, "()Z", 1025 },
	{ "destroy", 0, INDEX_mindustry_gen_Unitc_destroy, "()V", 1025 },
	{ "unloaded", 0, INDEX_mindustry_gen_Unitc_unloaded, "()V", 1025 },
	{ "movePref", 0, INDEX_mindustry_gen_Unitc_movePref_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1025 },
	{ "hasTarget", 0, INDEX_mindustry_gen_Unitc_hasTarget_R_boolean, "()Z", 1025 },
	{ "hasTarget", 0, INDEX_mindustry_gen_Unitc_hasTarget_boolean, "(Z)V", 1025 },
	{ "trail", 0, INDEX_mindustry_gen_Unitc_trail_R_mindustry_graphics_Trail, "()Lmindustry/graphics/Trail;", 1025 },
	{ "dockedType", 0, INDEX_mindustry_gen_Unitc_dockedType_R_mindustry_type_UnitType, "()Lmindustry/type/UnitType;", 1025 },
	{ "lastDrownFloor", 0, INDEX_mindustry_gen_Unitc_lastDrownFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1025 },
	{ "getPlayer", 0, INDEX_mindustry_gen_Unitc_getPlayer_R_mindustry_gen_Player, "()Lmindustry/gen/Player;", 1025 },
	{ "canDrown", 0, INDEX_mindustry_gen_Unitc_canDrown_R_boolean, "()Z", 1025 },
	{ "canShoot", 0, INDEX_mindustry_gen_Unitc_canShoot_R_boolean, "()Z", 1025 },
	{ "canTarget", 0, INDEX_mindustry_gen_Unitc_canTarget_mindustry_gen_Teamc_R_boolean, "(Lmindustry/gen/Teamc;)Z", 1025 },
	{ "checkTarget", 0, INDEX_mindustry_gen_Unitc_checkTarget_boolean_boolean_R_boolean, "(ZZ)Z", 1025 },
	{ "collides", 0, INDEX_mindustry_gen_Unitc_collides_mindustry_gen_Hitboxc_R_boolean, "(Lmindustry/gen/Hitboxc;)Z", 1025 },
	{ "displayable", 0, INDEX_mindustry_gen_Unitc_displayable_R_boolean, "()Z", 1025 },
	{ "hasWeapons", 0, INDEX_mindustry_gen_Unitc_hasWeapons_R_boolean, "()Z", 1025 },
	{ "hittable", 0, INDEX_mindustry_gen_Unitc_hittable_R_boolean, "()Z", 1025 },
	{ "inFogTo", 0, INDEX_mindustry_gen_Unitc_inFogTo_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1025 },
	{ "inRange", 0, INDEX_mindustry_gen_Unitc_inRange_arc_math_geom_Position_R_boolean, "(Larc/math/geom/Position;)Z", 1025 },
	{ "isAI", 0, INDEX_mindustry_gen_Unitc_isAI_R_boolean, "()Z", 1025 },
	{ "isEnemy", 0, INDEX_mindustry_gen_Unitc_isEnemy_R_boolean, "()Z", 1025 },
	{ "isFlying", 0, INDEX_mindustry_gen_Unitc_isFlying_R_boolean, "()Z", 1025 },
	{ "isGrounded", 0, INDEX_mindustry_gen_Unitc_isGrounded_R_boolean, "()Z", 1025 },
	{ "isMissile", 0, INDEX_mindustry_gen_Unitc_isMissile_R_boolean, "()Z", 1025 },
	{ "isPathImpassable", 0, INDEX_mindustry_gen_Unitc_isPathImpassable_int_int_R_boolean, "(II)Z", 1025 },
	{ "isPlayer", 0, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, "()Z", 1025 },
	{ "isSyncHidden", 0, INDEX_mindustry_gen_Unitc_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1025 },
	{ "killable", 0, INDEX_mindustry_gen_Unitc_killable_R_boolean, "()Z", 1025 },
	{ "playerControllable", 0, INDEX_mindustry_gen_Unitc_playerControllable_R_boolean, "()Z", 1025 },
	{ "shouldUpdateController", 0, INDEX_mindustry_gen_Unitc_shouldUpdateController_R_boolean, "()Z", 1025 },
	{ "spawnedByCore", 0, INDEX_mindustry_gen_Unitc_spawnedByCore_R_boolean, "()Z", 1025 },
	{ "targetable", 0, INDEX_mindustry_gen_Unitc_targetable_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1025 },
	{ "flag", 0, INDEX_mindustry_gen_Unitc_flag_R_double, "()D", 1025 },
	{ "sense", 0, INDEX_mindustry_gen_Unitc_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1025 },
	{ "sense", 0, INDEX_mindustry_gen_Unitc_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1025 },
	{ "ammof", 0, INDEX_mindustry_gen_Unitc_ammof_R_float, "()F", 1025 },
	{ "bounds", 0, INDEX_mindustry_gen_Unitc_bounds_R_float, "()F", 1025 },
	{ "clipSize", 0, INDEX_mindustry_gen_Unitc_clipSize_R_float, "()F", 1025 },
	{ "drownTime", 0, INDEX_mindustry_gen_Unitc_drownTime_R_float, "()F", 1025 },
	{ "elevation", 0, INDEX_mindustry_gen_Unitc_elevation_R_float, "()F", 1025 },
	{ "floorSpeedMultiplier", 0, INDEX_mindustry_gen_Unitc_floorSpeedMultiplier_R_float, "()F", 1025 },
	{ "healTime", 0, INDEX_mindustry_gen_Unitc_healTime_R_float, "()F", 1025 },
	{ "range", 0, INDEX_mindustry_gen_Unitc_range_R_float, "()F", 1025 },
	{ "shadowAlpha", 0, INDEX_mindustry_gen_Unitc_shadowAlpha_R_float, "()F", 1025 },
	{ "splashTimer", 0, INDEX_mindustry_gen_Unitc_splashTimer_R_float, "()F", 1025 },
	{ "cap", 0, INDEX_mindustry_gen_Unitc_cap_R_int, "()I", 1025 },
	{ "count", 0, INDEX_mindustry_gen_Unitc_count_R_int, "()I", 1025 },
	{ "itemCapacity", 0, INDEX_mindustry_gen_Unitc_itemCapacity_R_int, "()I", 1025 },
	{ "lastFogPos", 0, INDEX_mindustry_gen_Unitc_lastFogPos_R_int, "()I", 1025 },
	{ "senseObject", 0, INDEX_mindustry_gen_Unitc_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1025 },
	{ "lastCommanded", 0, INDEX_mindustry_gen_Unitc_lastCommanded_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "toString", 0, INDEX_mindustry_gen_Unitc_toString_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "command", 0, INDEX_mindustry_gen_Unitc_command_R_mindustry_ai_types_CommandAI, "()Lmindustry/ai/types/CommandAI;", 1025 },
	{ "abilities", 0, INDEX_mindustry_gen_Unitc_abilities_R_Array1_mindustry_entities_abilities_Ability, "()[Lmindustry/entities/abilities/Ability;", 1025 },
	{ "controller", 0, INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController, "()Lmindustry/entities/units/UnitController;", 1025 },
	{ "type", 0, INDEX_mindustry_gen_Unitc_type_R_mindustry_type_UnitType, "()Lmindustry/type/UnitType;", 1025 },
	{ "drownFloor", 0, INDEX_mindustry_gen_Unitc_drownFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1025 },
	{ "abilities", 0, INDEX_mindustry_gen_Unitc_abilities_Array1_mindustry_entities_abilities_Ability, "([Lmindustry/entities/abilities/Ability;)V", 1025 },
	{ "add", 0, INDEX_mindustry_gen_Unitc_add, "()V", 1025 },
	{ "afterRead", 0, INDEX_mindustry_gen_Unitc_afterRead, "()V", 1025 },
	{ "afterReadAll", 0, INDEX_mindustry_gen_Unitc_afterReadAll, "()V", 1025 },
	{ "afterSync", 0, INDEX_mindustry_gen_Unitc_afterSync, "()V", 1025 },
	{ "aimLook", 0, INDEX_mindustry_gen_Unitc_aimLook_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1025 },
	{ "aimLook", 0, INDEX_mindustry_gen_Unitc_aimLook_float_float, "(FF)V", 1025 },
	{ "approach", 0, INDEX_mindustry_gen_Unitc_approach_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1025 },
	{ "collision", 0, INDEX_mindustry_gen_Unitc_collision_mindustry_gen_Hitboxc_float_float, "(Lmindustry/gen/Hitboxc;FF)V", 1025 },
	{ "controller", 0, INDEX_mindustry_gen_Unitc_controller_mindustry_entities_units_UnitController, "(Lmindustry/entities/units/UnitController;)V", 1025 },
	{ "display", 0, INDEX_mindustry_gen_Unitc_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1025 },
	{ "dockedType", 0, INDEX_mindustry_gen_Unitc_dockedType_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1025 },
	{ "draw", 0, INDEX_mindustry_gen_Unitc_draw, "()V", 1025 },
	{ "drownTime", 0, INDEX_mindustry_gen_Unitc_drownTime_float, "(F)V", 1025 },
	{ "elevation", 0, INDEX_mindustry_gen_Unitc_elevation_float, "(F)V", 1025 },
	{ "flag", 0, INDEX_mindustry_gen_Unitc_flag_double, "(D)V", 1025 },
	{ "handleSyncHidden", 0, INDEX_mindustry_gen_Unitc_handleSyncHidden, "()V", 1025 },
	{ "heal", 0, INDEX_mindustry_gen_Unitc_heal_float, "(F)V", 1025 },
	{ "healTime", 0, INDEX_mindustry_gen_Unitc_healTime_float, "(F)V", 1025 },
	{ "kill", 0, INDEX_mindustry_gen_Unitc_kill, "()V", 1025 },
	{ "killed", 0, INDEX_mindustry_gen_Unitc_killed, "()V", 1025 },
	{ "landed", 0, INDEX_mindustry_gen_Unitc_landed, "()V", 1025 },
	{ "lastCommanded", 0, INDEX_mindustry_gen_Unitc_lastCommanded_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "lastDrownFloor", 0, INDEX_mindustry_gen_Unitc_lastDrownFloor_mindustry_world_blocks_environment_Floor, "(Lmindustry/world/blocks/environment/Floor;)V", 1025 },
	{ "lastFogPos", 0, INDEX_mindustry_gen_Unitc_lastFogPos_int, "(I)V", 1025 },
	{ "lookAt", 0, INDEX_mindustry_gen_Unitc_lookAt_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1025 },
	{ "lookAt", 0, INDEX_mindustry_gen_Unitc_lookAt_float, "(F)V", 1025 },
	{ "lookAt", 0, INDEX_mindustry_gen_Unitc_lookAt_float_float, "(FF)V", 1025 },
	{ "moveAt", 0, INDEX_mindustry_gen_Unitc_moveAt_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1025 },
	{ "moveAt", 0, INDEX_mindustry_gen_Unitc_moveAt_arc_math_geom_Vec2_float, "(Larc/math/geom/Vec2;F)V", 1025 },
	{ "remove", 0, INDEX_mindustry_gen_Unitc_remove, "()V", 1025 },
	{ "resetController", 0, INDEX_mindustry_gen_Unitc_resetController, "()V", 1025 },
	{ "rotateMove", 0, INDEX_mindustry_gen_Unitc_rotateMove_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1025 },
	{ "set", 0, INDEX_mindustry_gen_Unitc_set_mindustry_type_UnitType_mindustry_entities_units_UnitController, "(Lmindustry/type/UnitType;Lmindustry/entities/units/UnitController;)V", 1025 },
	{ "setProp", 0, INDEX_mindustry_gen_Unitc_setProp_mindustry_ctype_UnlockableContent_double, "(Lmindustry/ctype/UnlockableContent;D)V", 1025 },
	{ "setProp", 0, INDEX_mindustry_gen_Unitc_setProp_mindustry_logic_LAccess_double, "(Lmindustry/logic/LAccess;D)V", 1025 },
	{ "setProp", 0, INDEX_mindustry_gen_Unitc_setProp_mindustry_logic_LAccess_java_lang_Object, "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V", 1025 },
	{ "setType", 0, INDEX_mindustry_gen_Unitc_setType_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1025 },
	{ "shadowAlpha", 0, INDEX_mindustry_gen_Unitc_shadowAlpha_float, "(F)V", 1025 },
	{ "spawnedByCore", 0, INDEX_mindustry_gen_Unitc_spawnedByCore_boolean, "(Z)V", 1025 },
	{ "splashTimer", 0, INDEX_mindustry_gen_Unitc_splashTimer_float, "(F)V", 1025 },
	{ "trail", 0, INDEX_mindustry_gen_Unitc_trail_mindustry_graphics_Trail, "(Lmindustry/graphics/Trail;)V", 1025 },
	{ "type", 0, INDEX_mindustry_gen_Unitc_type_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1025 },
	{ "update", 0, INDEX_mindustry_gen_Unitc_update, "()V", 1025 },
	{ "updateBoosting", 0, INDEX_mindustry_gen_Unitc_updateBoosting_boolean, "(Z)V", 1025 },
	{ "updateBoosting", 0, INDEX_mindustry_gen_Unitc_updateBoosting_boolean_boolean, "(ZZ)V", 1025 },
	{ "updateDrowning", 0, INDEX_mindustry_gen_Unitc_updateDrowning, "()V", 1025 },
	{ "wobble", 0, INDEX_mindustry_gen_Unitc_wobble, "()V", 1025 },
};

Class class_mindustry_gen_Unitc{
		.nativeName = (intptr_t) "mindustry/gen/Unitc",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Unitc),
		.classVtable = (intptr_t) vtable_mindustry_gen_Unitc,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Unitc,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Unitc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 20,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 114,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 339,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Unitc = registerClass(&class_mindustry_gen_Unitc);

}
