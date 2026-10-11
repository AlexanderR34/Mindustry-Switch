#ifndef HEADER_arc_input_KeyCode
#define HEADER_arc_input_KeyCode

#include "Clearwing.h"
#include "java/lang/Enum.h"
#include "arc/input/KeyBind_KeybindValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_KeyCode {
	java_lang_Enum parent;
	jref F_type;
	jref F_value;
	jbool F_axis;
	jref F_cachedName;
} arc_input_KeyCode;

extern Class class_arc_input_KeyCode;

extern jobject SF_arc_input_KeyCode_controllerA;
extern jobject SF_arc_input_KeyCode_controllerB;
extern jobject SF_arc_input_KeyCode_controllerX;
extern jobject SF_arc_input_KeyCode_controllerY;
extern jobject SF_arc_input_KeyCode_controllerGuide;
extern jobject SF_arc_input_KeyCode_controllerLBumper;
extern jobject SF_arc_input_KeyCode_controllerRBumper;
extern jobject SF_arc_input_KeyCode_controllerBack;
extern jobject SF_arc_input_KeyCode_controllerStart;
extern jobject SF_arc_input_KeyCode_controllerLStick;
extern jobject SF_arc_input_KeyCode_controllerRStick;
extern jobject SF_arc_input_KeyCode_controllerdPadUp;
extern jobject SF_arc_input_KeyCode_controllerdPadDown;
extern jobject SF_arc_input_KeyCode_controllerdPadLeft;
extern jobject SF_arc_input_KeyCode_controllerdPadRight;
extern jobject SF_arc_input_KeyCode_controllerLTrigger;
extern jobject SF_arc_input_KeyCode_controllerRTrigger;
extern jobject SF_arc_input_KeyCode_controllerLStickYAxis;
extern jobject SF_arc_input_KeyCode_controllerLStickXAxis;
extern jobject SF_arc_input_KeyCode_controllerRStickYAxis;
extern jobject SF_arc_input_KeyCode_controllerRStickXAxis;
extern jobject SF_arc_input_KeyCode_mouseLeft;
extern jobject SF_arc_input_KeyCode_mouseRight;
extern jobject SF_arc_input_KeyCode_mouseMiddle;
extern jobject SF_arc_input_KeyCode_mouseBack;
extern jobject SF_arc_input_KeyCode_mouseForward;
extern jobject SF_arc_input_KeyCode_scroll;
extern jobject SF_arc_input_KeyCode_anyKey;
extern jobject SF_arc_input_KeyCode_num0;
extern jobject SF_arc_input_KeyCode_num1;
extern jobject SF_arc_input_KeyCode_num2;
extern jobject SF_arc_input_KeyCode_num3;
extern jobject SF_arc_input_KeyCode_num4;
extern jobject SF_arc_input_KeyCode_num5;
extern jobject SF_arc_input_KeyCode_num6;
extern jobject SF_arc_input_KeyCode_num7;
extern jobject SF_arc_input_KeyCode_num8;
extern jobject SF_arc_input_KeyCode_num9;
extern jobject SF_arc_input_KeyCode_a;
extern jobject SF_arc_input_KeyCode_altLeft;
extern jobject SF_arc_input_KeyCode_altRight;
extern jobject SF_arc_input_KeyCode_apostrophe;
extern jobject SF_arc_input_KeyCode_at;
extern jobject SF_arc_input_KeyCode_b;
extern jobject SF_arc_input_KeyCode_back;
extern jobject SF_arc_input_KeyCode_backslash;
extern jobject SF_arc_input_KeyCode_c;
extern jobject SF_arc_input_KeyCode_call;
extern jobject SF_arc_input_KeyCode_camera;
extern jobject SF_arc_input_KeyCode_clear;
extern jobject SF_arc_input_KeyCode_comma;
extern jobject SF_arc_input_KeyCode_d;
extern jobject SF_arc_input_KeyCode_del;
extern jobject SF_arc_input_KeyCode_backspace;
extern jobject SF_arc_input_KeyCode_forwardDel;
extern jobject SF_arc_input_KeyCode_dpadCenter;
extern jobject SF_arc_input_KeyCode_dpadDown;
extern jobject SF_arc_input_KeyCode_dpadLeft;
extern jobject SF_arc_input_KeyCode_dpadRight;
extern jobject SF_arc_input_KeyCode_dpadUp;
extern jobject SF_arc_input_KeyCode_center;
extern jobject SF_arc_input_KeyCode_down;
extern jobject SF_arc_input_KeyCode_left;
extern jobject SF_arc_input_KeyCode_right;
extern jobject SF_arc_input_KeyCode_up;
extern jobject SF_arc_input_KeyCode_e;
extern jobject SF_arc_input_KeyCode_endcall;
extern jobject SF_arc_input_KeyCode_enter;
extern jobject SF_arc_input_KeyCode_envelope;
extern jobject SF_arc_input_KeyCode_equals;
extern jobject SF_arc_input_KeyCode_explorer;
extern jobject SF_arc_input_KeyCode_f;
extern jobject SF_arc_input_KeyCode_focus;
extern jobject SF_arc_input_KeyCode_g;
extern jobject SF_arc_input_KeyCode_backtick;
extern jobject SF_arc_input_KeyCode_h;
extern jobject SF_arc_input_KeyCode_headsetHook;
extern jobject SF_arc_input_KeyCode_home;
extern jobject SF_arc_input_KeyCode_i;
extern jobject SF_arc_input_KeyCode_j;
extern jobject SF_arc_input_KeyCode_k;
extern jobject SF_arc_input_KeyCode_l;
extern jobject SF_arc_input_KeyCode_leftBracket;
extern jobject SF_arc_input_KeyCode_m;
extern jobject SF_arc_input_KeyCode_mediaFastForward;
extern jobject SF_arc_input_KeyCode_mediaNext;
extern jobject SF_arc_input_KeyCode_mediaPlayPause;
extern jobject SF_arc_input_KeyCode_mediaPrevious;
extern jobject SF_arc_input_KeyCode_mediaRewind;
extern jobject SF_arc_input_KeyCode_mediaStop;
extern jobject SF_arc_input_KeyCode_menu;
extern jobject SF_arc_input_KeyCode_minus;
extern jobject SF_arc_input_KeyCode_mute;
extern jobject SF_arc_input_KeyCode_n;
extern jobject SF_arc_input_KeyCode_notification;
extern jobject SF_arc_input_KeyCode_num;
extern jobject SF_arc_input_KeyCode_o;
extern jobject SF_arc_input_KeyCode_p;
extern jobject SF_arc_input_KeyCode_period;
extern jobject SF_arc_input_KeyCode_plus;
extern jobject SF_arc_input_KeyCode_pound;
extern jobject SF_arc_input_KeyCode_power;
extern jobject SF_arc_input_KeyCode_q;
extern jobject SF_arc_input_KeyCode_r;
extern jobject SF_arc_input_KeyCode_rightBracket;
extern jobject SF_arc_input_KeyCode_s;
extern jobject SF_arc_input_KeyCode_search;
extern jobject SF_arc_input_KeyCode_semicolon;
extern jobject SF_arc_input_KeyCode_shiftLeft;
extern jobject SF_arc_input_KeyCode_shiftRight;
extern jobject SF_arc_input_KeyCode_slash;
extern jobject SF_arc_input_KeyCode_softLeft;
extern jobject SF_arc_input_KeyCode_softRight;
extern jobject SF_arc_input_KeyCode_space;
extern jobject SF_arc_input_KeyCode_star;
extern jobject SF_arc_input_KeyCode_sym;
extern jobject SF_arc_input_KeyCode_t;
extern jobject SF_arc_input_KeyCode_tab;
extern jobject SF_arc_input_KeyCode_u;
extern jobject SF_arc_input_KeyCode_unknown;
extern jobject SF_arc_input_KeyCode_v;
extern jobject SF_arc_input_KeyCode_volumeDown;
extern jobject SF_arc_input_KeyCode_volumeUp;
extern jobject SF_arc_input_KeyCode_w;
extern jobject SF_arc_input_KeyCode_x;
extern jobject SF_arc_input_KeyCode_y;
extern jobject SF_arc_input_KeyCode_z;
extern jobject SF_arc_input_KeyCode_metaAltLeftOn;
extern jobject SF_arc_input_KeyCode_metaAltOn;
extern jobject SF_arc_input_KeyCode_metaAltRightOn;
extern jobject SF_arc_input_KeyCode_metaShiftLeftOn;
extern jobject SF_arc_input_KeyCode_metaShiftOn;
extern jobject SF_arc_input_KeyCode_metaShiftRightOn;
extern jobject SF_arc_input_KeyCode_metaSymOn;
extern jobject SF_arc_input_KeyCode_controlLeft;
extern jobject SF_arc_input_KeyCode_controlRight;
extern jobject SF_arc_input_KeyCode_escape;
extern jobject SF_arc_input_KeyCode_end;
extern jobject SF_arc_input_KeyCode_insert;
extern jobject SF_arc_input_KeyCode_pageUp;
extern jobject SF_arc_input_KeyCode_pageDown;
extern jobject SF_arc_input_KeyCode_pictSymbols;
extern jobject SF_arc_input_KeyCode_switchCharset;
extern jobject SF_arc_input_KeyCode_buttonCircle;
extern jobject SF_arc_input_KeyCode_buttonA;
extern jobject SF_arc_input_KeyCode_buttonB;
extern jobject SF_arc_input_KeyCode_buttonC;
extern jobject SF_arc_input_KeyCode_buttonX;
extern jobject SF_arc_input_KeyCode_buttonY;
extern jobject SF_arc_input_KeyCode_buttonZ;
extern jobject SF_arc_input_KeyCode_buttonL1;
extern jobject SF_arc_input_KeyCode_buttonR1;
extern jobject SF_arc_input_KeyCode_buttonL2;
extern jobject SF_arc_input_KeyCode_buttonR2;
extern jobject SF_arc_input_KeyCode_buttonThumbL;
extern jobject SF_arc_input_KeyCode_buttonThumbR;
extern jobject SF_arc_input_KeyCode_buttonStart;
extern jobject SF_arc_input_KeyCode_buttonSelect;
extern jobject SF_arc_input_KeyCode_buttonMode;
extern jobject SF_arc_input_KeyCode_numpad0;
extern jobject SF_arc_input_KeyCode_numpad1;
extern jobject SF_arc_input_KeyCode_numpad2;
extern jobject SF_arc_input_KeyCode_numpad3;
extern jobject SF_arc_input_KeyCode_numpad4;
extern jobject SF_arc_input_KeyCode_numpad5;
extern jobject SF_arc_input_KeyCode_numpad6;
extern jobject SF_arc_input_KeyCode_numpad7;
extern jobject SF_arc_input_KeyCode_numpad8;
extern jobject SF_arc_input_KeyCode_numpad9;
extern jobject SF_arc_input_KeyCode_colon;
extern jobject SF_arc_input_KeyCode_f1;
extern jobject SF_arc_input_KeyCode_f2;
extern jobject SF_arc_input_KeyCode_f3;
extern jobject SF_arc_input_KeyCode_f4;
extern jobject SF_arc_input_KeyCode_f5;
extern jobject SF_arc_input_KeyCode_f6;
extern jobject SF_arc_input_KeyCode_f7;
extern jobject SF_arc_input_KeyCode_f8;
extern jobject SF_arc_input_KeyCode_f9;
extern jobject SF_arc_input_KeyCode_f10;
extern jobject SF_arc_input_KeyCode_f11;
extern jobject SF_arc_input_KeyCode_f12;
extern jobject SF_arc_input_KeyCode_unset;
extern jobject SF_arc_input_KeyCode_application;
extern jobject SF_arc_input_KeyCode_asterisk;
extern jobject SF_arc_input_KeyCode_capsLock;
extern jobject SF_arc_input_KeyCode_pause;
extern jobject SF_arc_input_KeyCode_printScreen;
extern jobject SF_arc_input_KeyCode_scrollLock;
extern jobject SF_arc_input_KeyCode_all;
extern jobject SF_arc_input_KeyCode_numbers;
extern jobject SF_arc_input_KeyCode_$VALUES;

#define VTABLE_arc_input_KeyCode_hashCode_R_int 0
typedef jint (*func_arc_input_KeyCode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_input_KeyCode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyCode_clone_R_java_lang_Object 2
typedef jobject (*func_arc_input_KeyCode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_input_KeyCode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_toString_R_java_lang_String 4
typedef jobject (*func_arc_input_KeyCode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_finalize 5
typedef void (*func_arc_input_KeyCode_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_notify 6
typedef void (*func_arc_input_KeyCode_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_notifyAll 7
typedef void (*func_arc_input_KeyCode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_wait 8
typedef void (*func_arc_input_KeyCode_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_wait_long 9
typedef void (*func_arc_input_KeyCode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_input_KeyCode_wait_long_int 10
typedef void (*func_arc_input_KeyCode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_input_KeyCode_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_input_KeyCode_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyCode_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_input_KeyCode_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyCode_name_R_java_lang_String 13
typedef jobject (*func_arc_input_KeyCode_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_ordinal_R_int 14
typedef jint (*func_arc_input_KeyCode_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_input_KeyCode_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyCode_getName_R_java_lang_String 16
typedef jobject (*func_arc_input_KeyCode_getName_R_java_lang_String)(jcontext ctx, jobject self);

void mark_arc_input_KeyCode(jobject object, jint mark, jint depth);
void clinit_arc_input_KeyCode(jcontext ctx);
jobject SM_arc_input_KeyCode_values_R_Array1_arc_input_KeyCode(jcontext ctx);
jobject SM_arc_input_KeyCode_valueOf_java_lang_String_R_arc_input_KeyCode(jcontext ctx, jobject param0);
void init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jbool param4);
jobject SM_arc_input_KeyCode_byOrdinal_int_R_arc_input_KeyCode(jcontext ctx, jint param0);
jobject M_arc_input_KeyCode_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_input_KeyCode_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_arc_input_KeyCode_$values_R_Array1_arc_input_KeyCode(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
