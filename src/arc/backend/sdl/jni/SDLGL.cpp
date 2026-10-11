#include "arc/backend/sdl/jni/SDLGL.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/Buffer.h"
#include "java/nio/IntBuffer.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Nullable.h"
#include "java/nio/LongBuffer.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_arc_backend_sdl_jni_SDLGL(jobject object, jint mark, jint depth) {
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
	auto self = (arc_backend_sdl_jni_SDLGL *) object;
}

void clinit_arc_backend_sdl_jni_SDLGL(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_backend_sdl_jni_SDLGL(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/jni/SDLGL:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_jni_SDLGL(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_backend_sdl_jni_SDLGL;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method init
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[115]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[118]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[119]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[120]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[121]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[122]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[123]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[124]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[125]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[126]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[127]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[128]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[129]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[130]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[131]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[132]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[133]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[134]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[135]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[136]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[137]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[138]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[139]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[140]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[141]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[142]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[143]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[144]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[145]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[146]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[147]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[148]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[149]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[150]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[151]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[152]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[153]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[154]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[155]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[156]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[157]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[158]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[159]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[160]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[161]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[162]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[163]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[164]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[165]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[166]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[167]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[168]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[169]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[170]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[171]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[172]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[173]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[174]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[175]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[176]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[177]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[178]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[179]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[180]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[181]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[182]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[183]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[184]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[185]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[186]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[187]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[188]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[189]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[190]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[191]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[192]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[193]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[194]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[195]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[196]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[197]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[198]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[199]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[200]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[201]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[202]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[203]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[204]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[205]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[206]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[207]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[208]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[209]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[210]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[211]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[212]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[213]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[214]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[215]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[216]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[217]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[218]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[219]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[220]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[221]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[222]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[223]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[224]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[225]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[226]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[227]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[228]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[229]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[230]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[231]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[232]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[233]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[234]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_backend_sdl_jni_SDLGL[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_jni_SDLGL, 0, "()V", 1 },
	{ "init", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_init_R_java_lang_String, 0, "()Ljava/lang/String;", 265 },
	{ "glActiveTexture", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glActiveTexture_int, 0, "(I)V", 265 },
	{ "glBindTexture", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBindTexture_int_int, 0, "(II)V", 265 },
	{ "glBlendFunc", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBlendFunc_int_int, 0, "(II)V", 265 },
	{ "glClear", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glClear_int, 0, "(I)V", 265 },
	{ "glClearColor", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glClearColor_float_float_float_float, 0, "(FFFF)V", 265 },
	{ "glClearDepthf", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glClearDepthf_float, 0, "(F)V", 265 },
	{ "glClearStencil", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glClearStencil_int, 0, "(I)V", 265 },
	{ "glColorMask", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glColorMask_boolean_boolean_boolean_boolean, 0, "(ZZZZ)V", 265 },
	{ "glCompressedTexImage2D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIIILjava/nio/Buffer;)V", 265 },
	{ "glCompressedTexSubImage2D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIIIILjava/nio/Buffer;)V", 265 },
	{ "glCopyTexImage2D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCopyTexImage2D_int_int_int_int_int_int_int_int, 0, "(IIIIIIII)V", 265 },
	{ "glCopyTexSubImage2D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCopyTexSubImage2D_int_int_int_int_int_int_int_int, 0, "(IIIIIIII)V", 265 },
	{ "glCullFace", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCullFace_int, 0, "(I)V", 265 },
	{ "glDeleteTexture", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDeleteTexture_int, 0, "(I)V", 265 },
	{ "glDepthFunc", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDepthFunc_int, 0, "(I)V", 265 },
	{ "glDepthMask", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDepthMask_boolean, 0, "(Z)V", 265 },
	{ "glDepthRangef", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDepthRangef_float_float, 0, "(FF)V", 265 },
	{ "glDisable", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDisable_int, 0, "(I)V", 265 },
	{ "glDrawArrays", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDrawArrays_int_int_int, 0, "(III)V", 265 },
	{ "glDrawElements", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDrawElements_int_int_int_java_nio_Buffer, 0, "(IIILjava/nio/Buffer;)V", 265 },
	{ "glEnable", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glEnable_int, 0, "(I)V", 265 },
	{ "glFinish", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glFinish, 0, "()V", 265 },
	{ "glFlush", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glFlush, 0, "()V", 265 },
	{ "glFrontFace", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glFrontFace_int, 0, "(I)V", 265 },
	{ "glGenTexture", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGenTexture_R_int, 0, "()I", 265 },
	{ "glGetError", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetError_R_int, 0, "()I", 265 },
	{ "glGetIntegerv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetIntegerv_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 265 },
	{ "glGetString", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 265 },
	{ "glHint", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glHint_int_int, 0, "(II)V", 265 },
	{ "glLineWidth", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glLineWidth_float, 0, "(F)V", 265 },
	{ "glPixelStorei", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glPixelStorei_int_int, 0, "(II)V", 265 },
	{ "glPolygonOffset", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glPolygonOffset_float_float, 0, "(FF)V", 265 },
	{ "glReadPixels", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glReadPixels_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIILjava/nio/Buffer;)V", 265 },
	{ "glScissor", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glScissor_int_int_int_int, 0, "(IIII)V", 265 },
	{ "glStencilFunc", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glStencilFunc_int_int_int, 0, "(III)V", 265 },
	{ "glStencilMask", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glStencilMask_int, 0, "(I)V", 265 },
	{ "glStencilOp", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glStencilOp_int_int_int, 0, "(III)V", 265 },
	{ "glTexImage2D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIIIILjava/nio/Buffer;)V", 265 },
	{ "glTexParameterf", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTexParameterf_int_int_float, 0, "(IIF)V", 265 },
	{ "glTexSubImage2D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIIIILjava/nio/Buffer;)V", 265 },
	{ "glViewport", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glViewport_int_int_int_int, 0, "(IIII)V", 265 },
	{ "glAttachShader", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glAttachShader_int_int, 0, "(II)V", 265 },
	{ "glBindAttribLocation", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBindAttribLocation_int_int_java_lang_String, 0, "(IILjava/lang/String;)V", 265 },
	{ "glBindBuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBindBuffer_int_int, 0, "(II)V", 265 },
	{ "glBindFramebuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBindFramebuffer_int_int, 0, "(II)V", 265 },
	{ "glBindRenderbuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBindRenderbuffer_int_int, 0, "(II)V", 265 },
	{ "glBlendColor", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBlendColor_float_float_float_float, 0, "(FFFF)V", 265 },
	{ "glBlendEquation", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBlendEquation_int, 0, "(I)V", 265 },
	{ "glBlendEquationSeparate", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBlendEquationSeparate_int_int, 0, "(II)V", 265 },
	{ "glBlendFuncSeparate", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBlendFuncSeparate_int_int_int_int, 0, "(IIII)V", 265 },
	{ "glBufferData", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBufferData_int_int_java_nio_Buffer_int, 0, "(IILjava/nio/Buffer;I)V", 265 },
	{ "glBufferSubData", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBufferSubData_int_int_int_java_nio_Buffer, 0, "(IIILjava/nio/Buffer;)V", 265 },
	{ "glCheckFramebufferStatus", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCheckFramebufferStatus_int_R_int, 0, "(I)I", 265 },
	{ "glCompileShader", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCompileShader_int, 0, "(I)V", 265 },
	{ "glCreateProgram", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCreateProgram_R_int, 0, "()I", 265 },
	{ "glCreateShader", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCreateShader_int_R_int, 0, "(I)I", 265 },
	{ "glDeleteBuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDeleteBuffer_int, 0, "(I)V", 265 },
	{ "glDeleteFramebuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDeleteFramebuffer_int, 0, "(I)V", 265 },
	{ "glDeleteProgram", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDeleteProgram_int, 0, "(I)V", 265 },
	{ "glDeleteRenderbuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDeleteRenderbuffer_int, 0, "(I)V", 265 },
	{ "glDeleteShader", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDeleteShader_int, 0, "(I)V", 265 },
	{ "glDetachShader", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDetachShader_int_int, 0, "(II)V", 265 },
	{ "glDisableVertexAttribArray", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDisableVertexAttribArray_int, 0, "(I)V", 265 },
	{ "glDrawElements", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDrawElements_int_int_int_int, 0, "(IIII)V", 265 },
	{ "glEnableVertexAttribArray", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glEnableVertexAttribArray_int, 0, "(I)V", 265 },
	{ "glFramebufferRenderbuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glFramebufferRenderbuffer_int_int_int_int, 0, "(IIII)V", 265 },
	{ "glFramebufferTexture2D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glFramebufferTexture2D_int_int_int_int_int, 0, "(IIIII)V", 265 },
	{ "glGenBuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGenBuffer_R_int, 0, "()I", 265 },
	{ "glGenerateMipmap", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGenerateMipmap_int, 0, "(I)V", 265 },
	{ "glGenFramebuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGenFramebuffer_R_int, 0, "()I", 265 },
	{ "glGenRenderbuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGenRenderbuffer_R_int, 0, "()I", 265 },
	{ "glGetActiveAttrib", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetActiveAttrib_int_int_java_lang_Object_java_lang_Object_R_java_lang_String, 0, "(IILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", 265 },
	{ "glGetActiveUniform", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniform_int_int_java_lang_Object_java_lang_Object_R_java_lang_String, 0, "(IILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", 265 },
	{ "glGetAttribLocation", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetAttribLocation_int_java_lang_String_R_int, 0, "(ILjava/lang/String;)I", 265 },
	{ "glGetBooleanv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetBooleanv_int_java_nio_Buffer, 0, "(ILjava/nio/Buffer;)V", 265 },
	{ "glGetBufferParameteriv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetBufferParameteriv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glGetFloatv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetFloatv_int_java_nio_FloatBuffer, 0, "(ILjava/nio/FloatBuffer;)V", 265 },
	{ "glGetFramebufferAttachmentParameteriv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer, 0, "(IIILjava/nio/IntBuffer;)V", 265 },
	{ "glGetProgramiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetProgramiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glGetProgramInfoLog", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetProgramInfoLog_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 265 },
	{ "glGetRenderbufferParameteriv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glGetShaderiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetShaderiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glGetShaderInfoLog", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetShaderInfoLog_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 265 },
	{ "glGetShaderPrecisionFormat", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V", 265 },
	{ "glGetTexParameterfv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetTexParameterfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glGetTexParameteriv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetTexParameteriv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glGetUniformfv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetUniformfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glGetUniformiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetUniformiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glGetUniformLocation", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetUniformLocation_int_java_lang_String_R_int, 0, "(ILjava/lang/String;)I", 265 },
	{ "glGetVertexAttribfv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glGetVertexAttribiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glIsBuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsBuffer_int_R_boolean, 0, "(I)Z", 265 },
	{ "glIsEnabled", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsEnabled_int_R_boolean, 0, "(I)Z", 265 },
	{ "glIsFramebuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsFramebuffer_int_R_boolean, 0, "(I)Z", 265 },
	{ "glIsProgram", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsProgram_int_R_boolean, 0, "(I)Z", 265 },
	{ "glIsRenderbuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsRenderbuffer_int_R_boolean, 0, "(I)Z", 265 },
	{ "glIsShader", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsShader_int_R_boolean, 0, "(I)Z", 265 },
	{ "glIsTexture", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsTexture_int_R_boolean, 0, "(I)Z", 265 },
	{ "glLinkProgram", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glLinkProgram_int, 0, "(I)V", 265 },
	{ "glReleaseShaderCompiler", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glReleaseShaderCompiler, 0, "()V", 265 },
	{ "glRenderbufferStorage", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glRenderbufferStorage_int_int_int_int, 0, "(IIII)V", 265 },
	{ "glSampleCoverage", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glSampleCoverage_float_boolean, 0, "(FZ)V", 265 },
	{ "glShaderSource", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glShaderSource_int_java_lang_String, 0, "(ILjava/lang/String;)V", 265 },
	{ "glStencilFuncSeparate", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glStencilFuncSeparate_int_int_int_int, 0, "(IIII)V", 265 },
	{ "glStencilMaskSeparate", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glStencilMaskSeparate_int_int, 0, "(II)V", 265 },
	{ "glStencilOpSeparate", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glStencilOpSeparate_int_int_int_int, 0, "(IIII)V", 265 },
	{ "glTexParameterfv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTexParameterfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glTexParameteri", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTexParameteri_int_int_int, 0, "(III)V", 265 },
	{ "glTexParameteriv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTexParameteriv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glUniform1f", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform1f_int_float, 0, "(IF)V", 265 },
	{ "glUniform1fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform1fv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glUniform1fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform1fv_int_int_Array1_float_int, 0, "(II[FI)V", 265 },
	{ "glUniform1i", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform1i_int_int, 0, "(II)V", 265 },
	{ "glUniform1iv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform1iv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glUniform1iv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform1iv_int_int_Array1_int_int, 0, "(II[II)V", 265 },
	{ "glUniform2f", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform2f_int_float_float, 0, "(IFF)V", 265 },
	{ "glUniform2fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform2fv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glUniform2fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform2fv_int_int_Array1_float_int, 0, "(II[FI)V", 265 },
	{ "glUniform2i", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform2i_int_int_int, 0, "(III)V", 265 },
	{ "glUniform2iv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform2iv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glUniform2iv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform2iv_int_int_Array1_int_int, 0, "(II[II)V", 265 },
	{ "glUniform3f", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform3f_int_float_float_float, 0, "(IFFF)V", 265 },
	{ "glUniform3fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform3fv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glUniform3fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform3fv_int_int_Array1_float_int, 0, "(II[FI)V", 265 },
	{ "glUniform3i", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform3i_int_int_int_int, 0, "(IIII)V", 265 },
	{ "glUniform3iv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform3iv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glUniform3iv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform3iv_int_int_Array1_int_int, 0, "(II[II)V", 265 },
	{ "glUniform4f", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform4f_int_float_float_float_float, 0, "(IFFFF)V", 265 },
	{ "glUniform4fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform4fv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glUniform4fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform4fv_int_int_Array1_float_int, 0, "(II[FI)V", 265 },
	{ "glUniform4i", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform4i_int_int_int_int_int, 0, "(IIIII)V", 265 },
	{ "glUniform4iv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform4iv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glUniform4iv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform4iv_int_int_Array1_int_int, 0, "(II[II)V", 265 },
	{ "glUniformMatrix2fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 265 },
	{ "glUniformMatrix2fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2fv_int_int_boolean_Array1_float_int, 0, "(IIZ[FI)V", 265 },
	{ "glUniformMatrix3fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 265 },
	{ "glUniformMatrix3fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3fv_int_int_boolean_Array1_float_int, 0, "(IIZ[FI)V", 265 },
	{ "glUniformMatrix4fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 265 },
	{ "glUniformMatrix4fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4fv_int_int_boolean_Array1_float_int, 0, "(IIZ[FI)V", 265 },
	{ "glUseProgram", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUseProgram_int, 0, "(I)V", 265 },
	{ "glValidateProgram", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glValidateProgram_int, 0, "(I)V", 265 },
	{ "glVertexAttrib1f", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib1f_int_float, 0, "(IF)V", 265 },
	{ "glVertexAttrib1fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib1fv_int_java_nio_FloatBuffer, 0, "(ILjava/nio/FloatBuffer;)V", 265 },
	{ "glVertexAttrib2f", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib2f_int_float_float, 0, "(IFF)V", 265 },
	{ "glVertexAttrib2fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib2fv_int_java_nio_FloatBuffer, 0, "(ILjava/nio/FloatBuffer;)V", 265 },
	{ "glVertexAttrib3f", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib3f_int_float_float_float, 0, "(IFFF)V", 265 },
	{ "glVertexAttrib3fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib3fv_int_java_nio_FloatBuffer, 0, "(ILjava/nio/FloatBuffer;)V", 265 },
	{ "glVertexAttrib4f", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib4f_int_float_float_float_float, 0, "(IFFFF)V", 265 },
	{ "glVertexAttrib4fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib4fv_int_java_nio_FloatBuffer, 0, "(ILjava/nio/FloatBuffer;)V", 265 },
	{ "glVertexAttribPointer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttribPointer_int_int_int_boolean_int_java_lang_Object, 0, "(IIIZILjava/lang/Object;)V", 265 },
	{ "glVertexAttribPointer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttribPointer_int_int_int_boolean_int_int, 0, "(IIIZII)V", 265 },
	{ "glReadBuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glReadBuffer_int, 0, "(I)V", 265 },
	{ "glDrawRangeElements", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDrawRangeElements_int_int_int_int_int_int, 0, "(IIIIII)V", 265 },
	{ "glDrawRangeElements", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIILjava/nio/Buffer;)V", 265 },
	{ "glTexImage3D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTexImage3D_int_int_int_int_int_int_int_int_int_int, 0, "(IIIIIIIIII)V", 265 },
	{ "glTexImage3D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIIIIILjava/nio/Buffer;)V", 265 },
	{ "glTexSubImage3D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int, 0, "(IIIIIIIIIII)V", 265 },
	{ "glTexSubImage3D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer, 0, "(IIIIIIIIIILjava/nio/Buffer;)V", 265 },
	{ "glCopyTexSubImage3D", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int, 0, "(IIIIIIIII)V", 265 },
	{ "glGenQueries", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGenQueries_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 265 },
	{ "glDeleteQueries", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDeleteQueries_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 265 },
	{ "glIsQuery", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsQuery_int_R_boolean, 0, "(I)Z", 265 },
	{ "glBeginQuery", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBeginQuery_int_int, 0, "(II)V", 265 },
	{ "glEndQuery", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glEndQuery_int, 0, "(I)V", 265 },
	{ "glGetQueryiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetQueryiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glGetQueryObjectuiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetQueryObjectuiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glUnmapBuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUnmapBuffer_int_R_boolean, 0, "(I)Z", 265 },
	{ "glGetBufferPointerv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetBufferPointerv_int_int_R_java_nio_Buffer, 0, "(II)Ljava/nio/Buffer;", 265 },
	{ "glDrawBuffers", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDrawBuffers_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 265 },
	{ "glUniformMatrix2x3fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 265 },
	{ "glUniformMatrix3x2fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 265 },
	{ "glUniformMatrix2x4fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 265 },
	{ "glUniformMatrix4x2fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 265 },
	{ "glUniformMatrix3x4fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 265 },
	{ "glUniformMatrix4x3fv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer, 0, "(IIZLjava/nio/FloatBuffer;)V", 265 },
	{ "glBlitFramebuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int, 0, "(IIIIIIIIII)V", 265 },
	{ "glRenderbufferStorageMultisample", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glRenderbufferStorageMultisample_int_int_int_int_int, 0, "(IIIII)V", 265 },
	{ "glFramebufferTextureLayer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glFramebufferTextureLayer_int_int_int_int_int, 0, "(IIIII)V", 265 },
	{ "glFlushMappedBufferRange", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glFlushMappedBufferRange_int_int_int, 0, "(III)V", 265 },
	{ "glBindVertexArray", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBindVertexArray_int, 0, "(I)V", 265 },
	{ "glDeleteVertexArrays", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDeleteVertexArrays_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 265 },
	{ "glGenVertexArrays", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGenVertexArrays_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 265 },
	{ "glIsVertexArray", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsVertexArray_int_R_boolean, 0, "(I)Z", 265 },
	{ "glBeginTransformFeedback", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBeginTransformFeedback_int, 0, "(I)V", 265 },
	{ "glEndTransformFeedback", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glEndTransformFeedback, 0, "()V", 265 },
	{ "glBindBufferRange", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBindBufferRange_int_int_int_int_int, 0, "(IIIII)V", 265 },
	{ "glBindBufferBase", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBindBufferBase_int_int_int, 0, "(III)V", 265 },
	{ "glTransformFeedbackVaryings", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glTransformFeedbackVaryings_int_Array1_java_lang_String_int, 0, "(I[Ljava/lang/String;I)V", 265 },
	{ "glVertexAttribIPointer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttribIPointer_int_int_int_int_int, 0, "(IIIII)V", 265 },
	{ "glGetVertexAttribIiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribIiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glGetVertexAttribIuiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glVertexAttribI4i", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttribI4i_int_int_int_int_int, 0, "(IIIII)V", 265 },
	{ "glVertexAttribI4ui", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttribI4ui_int_int_int_int_int, 0, "(IIIII)V", 265 },
	{ "glGetUniformuiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetUniformuiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glGetFragDataLocation", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetFragDataLocation_int_java_lang_String_R_int, 0, "(ILjava/lang/String;)I", 265 },
	{ "glUniform1uiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform1uiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glUniform3uiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform3uiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glUniform4uiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniform4uiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glClearBufferiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glClearBufferiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glClearBufferuiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glClearBufferuiv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glClearBufferfv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glClearBufferfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glClearBufferfi", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glClearBufferfi_int_int_float_int, 0, "(IIFI)V", 265 },
	{ "glGetStringi", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetStringi_int_int_R_java_lang_String, 0, "(II)Ljava/lang/String;", 265 },
	{ "glCopyBufferSubData", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glCopyBufferSubData_int_int_int_int_int, 0, "(IIIII)V", 265 },
	{ "glGetUniformIndices", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer, 0, "(I[Ljava/lang/String;Ljava/nio/IntBuffer;)V", 265 },
	{ "glGetActiveUniformsiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;ILjava/nio/IntBuffer;)V", 265 },
	{ "glGetUniformBlockIndex", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetUniformBlockIndex_int_java_lang_String_R_int, 0, "(ILjava/lang/String;)I", 265 },
	{ "glGetActiveUniformBlockiv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer, 0, "(IIILjava/nio/IntBuffer;)V", 265 },
	{ "glGetActiveUniformBlockName", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer, 0, "(IILjava/nio/Buffer;Ljava/nio/Buffer;)V", 265 },
	{ "glUniformBlockBinding", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glUniformBlockBinding_int_int_int, 0, "(III)V", 265 },
	{ "glDrawArraysInstanced", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDrawArraysInstanced_int_int_int_int, 0, "(IIII)V", 265 },
	{ "glDrawElementsInstanced", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDrawElementsInstanced_int_int_int_int_int, 0, "(IIIII)V", 265 },
	{ "glGetInteger64v", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetInteger64v_int_java_nio_LongBuffer, 0, "(ILjava/nio/LongBuffer;)V", 265 },
	{ "glGetBufferParameteri64v", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetBufferParameteri64v_int_int_java_nio_LongBuffer, 0, "(IILjava/nio/LongBuffer;)V", 265 },
	{ "glGenSamplers", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGenSamplers_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 265 },
	{ "glDeleteSamplers", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDeleteSamplers_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 265 },
	{ "glIsSampler", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsSampler_int_R_boolean, 0, "(I)Z", 265 },
	{ "glBindSampler", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBindSampler_int_int, 0, "(II)V", 265 },
	{ "glSamplerParameteri", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glSamplerParameteri_int_int_int, 0, "(III)V", 265 },
	{ "glSamplerParameteriv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glSamplerParameteriv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glSamplerParameterf", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glSamplerParameterf_int_int_float, 0, "(IIF)V", 265 },
	{ "glSamplerParameterfv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glSamplerParameterfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glGetSamplerParameteriv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetSamplerParameteriv_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glGetSamplerParameterfv", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer, 0, "(IILjava/nio/FloatBuffer;)V", 265 },
	{ "glVertexAttribDivisor", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glVertexAttribDivisor_int_int, 0, "(II)V", 265 },
	{ "glBindTransformFeedback", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glBindTransformFeedback_int_int, 0, "(II)V", 265 },
	{ "glDeleteTransformFeedbacks", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glDeleteTransformFeedbacks_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 265 },
	{ "glGenTransformFeedbacks", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glGenTransformFeedbacks_int_java_nio_IntBuffer, 0, "(ILjava/nio/IntBuffer;)V", 265 },
	{ "glIsTransformFeedback", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glIsTransformFeedback_int_R_boolean, 0, "(I)Z", 265 },
	{ "glPauseTransformFeedback", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glPauseTransformFeedback, 0, "()V", 265 },
	{ "glResumeTransformFeedback", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glResumeTransformFeedback, 0, "()V", 265 },
	{ "glProgramParameteri", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glProgramParameteri_int_int_int, 0, "(III)V", 265 },
	{ "glInvalidateFramebuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glInvalidateFramebuffer_int_int_java_nio_IntBuffer, 0, "(IILjava/nio/IntBuffer;)V", 265 },
	{ "glInvalidateSubFramebuffer", (intptr_t) SM_arc_backend_sdl_jni_SDLGL_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int, 0, "(IILjava/nio/IntBuffer;IIII)V", 265 },
};

Class class_arc_backend_sdl_jni_SDLGL{
		.nativeName = (intptr_t) "arc/backend/sdl/jni/SDLGL",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_backend_sdl_jni_SDLGL),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_jni_SDLGL,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_jni_SDLGL,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_backend_sdl_jni_SDLGL,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 236,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_jni_SDLGL = registerClass(&class_arc_backend_sdl_jni_SDLGL);

}
