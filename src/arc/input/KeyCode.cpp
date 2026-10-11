#include "arc/input/KeyCode.h"
#include "arc/input/KeyCode_KeyType.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "arc/Input.h"
#include "arc/input/KeyBind_KeybindValue.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/input/KeyCode.h"

extern "C" {

jobject SF_arc_input_KeyCode_controllerA;
jobject SF_arc_input_KeyCode_controllerB;
jobject SF_arc_input_KeyCode_controllerX;
jobject SF_arc_input_KeyCode_controllerY;
jobject SF_arc_input_KeyCode_controllerGuide;
jobject SF_arc_input_KeyCode_controllerLBumper;
jobject SF_arc_input_KeyCode_controllerRBumper;
jobject SF_arc_input_KeyCode_controllerBack;
jobject SF_arc_input_KeyCode_controllerStart;
jobject SF_arc_input_KeyCode_controllerLStick;
jobject SF_arc_input_KeyCode_controllerRStick;
jobject SF_arc_input_KeyCode_controllerdPadUp;
jobject SF_arc_input_KeyCode_controllerdPadDown;
jobject SF_arc_input_KeyCode_controllerdPadLeft;
jobject SF_arc_input_KeyCode_controllerdPadRight;
jobject SF_arc_input_KeyCode_controllerLTrigger;
jobject SF_arc_input_KeyCode_controllerRTrigger;
jobject SF_arc_input_KeyCode_controllerLStickYAxis;
jobject SF_arc_input_KeyCode_controllerLStickXAxis;
jobject SF_arc_input_KeyCode_controllerRStickYAxis;
jobject SF_arc_input_KeyCode_controllerRStickXAxis;
jobject SF_arc_input_KeyCode_mouseLeft;
jobject SF_arc_input_KeyCode_mouseRight;
jobject SF_arc_input_KeyCode_mouseMiddle;
jobject SF_arc_input_KeyCode_mouseBack;
jobject SF_arc_input_KeyCode_mouseForward;
jobject SF_arc_input_KeyCode_scroll;
jobject SF_arc_input_KeyCode_anyKey;
jobject SF_arc_input_KeyCode_num0;
jobject SF_arc_input_KeyCode_num1;
jobject SF_arc_input_KeyCode_num2;
jobject SF_arc_input_KeyCode_num3;
jobject SF_arc_input_KeyCode_num4;
jobject SF_arc_input_KeyCode_num5;
jobject SF_arc_input_KeyCode_num6;
jobject SF_arc_input_KeyCode_num7;
jobject SF_arc_input_KeyCode_num8;
jobject SF_arc_input_KeyCode_num9;
jobject SF_arc_input_KeyCode_a;
jobject SF_arc_input_KeyCode_altLeft;
jobject SF_arc_input_KeyCode_altRight;
jobject SF_arc_input_KeyCode_apostrophe;
jobject SF_arc_input_KeyCode_at;
jobject SF_arc_input_KeyCode_b;
jobject SF_arc_input_KeyCode_back;
jobject SF_arc_input_KeyCode_backslash;
jobject SF_arc_input_KeyCode_c;
jobject SF_arc_input_KeyCode_call;
jobject SF_arc_input_KeyCode_camera;
jobject SF_arc_input_KeyCode_clear;
jobject SF_arc_input_KeyCode_comma;
jobject SF_arc_input_KeyCode_d;
jobject SF_arc_input_KeyCode_del;
jobject SF_arc_input_KeyCode_backspace;
jobject SF_arc_input_KeyCode_forwardDel;
jobject SF_arc_input_KeyCode_dpadCenter;
jobject SF_arc_input_KeyCode_dpadDown;
jobject SF_arc_input_KeyCode_dpadLeft;
jobject SF_arc_input_KeyCode_dpadRight;
jobject SF_arc_input_KeyCode_dpadUp;
jobject SF_arc_input_KeyCode_center;
jobject SF_arc_input_KeyCode_down;
jobject SF_arc_input_KeyCode_left;
jobject SF_arc_input_KeyCode_right;
jobject SF_arc_input_KeyCode_up;
jobject SF_arc_input_KeyCode_e;
jobject SF_arc_input_KeyCode_endcall;
jobject SF_arc_input_KeyCode_enter;
jobject SF_arc_input_KeyCode_envelope;
jobject SF_arc_input_KeyCode_equals;
jobject SF_arc_input_KeyCode_explorer;
jobject SF_arc_input_KeyCode_f;
jobject SF_arc_input_KeyCode_focus;
jobject SF_arc_input_KeyCode_g;
jobject SF_arc_input_KeyCode_backtick;
jobject SF_arc_input_KeyCode_h;
jobject SF_arc_input_KeyCode_headsetHook;
jobject SF_arc_input_KeyCode_home;
jobject SF_arc_input_KeyCode_i;
jobject SF_arc_input_KeyCode_j;
jobject SF_arc_input_KeyCode_k;
jobject SF_arc_input_KeyCode_l;
jobject SF_arc_input_KeyCode_leftBracket;
jobject SF_arc_input_KeyCode_m;
jobject SF_arc_input_KeyCode_mediaFastForward;
jobject SF_arc_input_KeyCode_mediaNext;
jobject SF_arc_input_KeyCode_mediaPlayPause;
jobject SF_arc_input_KeyCode_mediaPrevious;
jobject SF_arc_input_KeyCode_mediaRewind;
jobject SF_arc_input_KeyCode_mediaStop;
jobject SF_arc_input_KeyCode_menu;
jobject SF_arc_input_KeyCode_minus;
jobject SF_arc_input_KeyCode_mute;
jobject SF_arc_input_KeyCode_n;
jobject SF_arc_input_KeyCode_notification;
jobject SF_arc_input_KeyCode_num;
jobject SF_arc_input_KeyCode_o;
jobject SF_arc_input_KeyCode_p;
jobject SF_arc_input_KeyCode_period;
jobject SF_arc_input_KeyCode_plus;
jobject SF_arc_input_KeyCode_pound;
jobject SF_arc_input_KeyCode_power;
jobject SF_arc_input_KeyCode_q;
jobject SF_arc_input_KeyCode_r;
jobject SF_arc_input_KeyCode_rightBracket;
jobject SF_arc_input_KeyCode_s;
jobject SF_arc_input_KeyCode_search;
jobject SF_arc_input_KeyCode_semicolon;
jobject SF_arc_input_KeyCode_shiftLeft;
jobject SF_arc_input_KeyCode_shiftRight;
jobject SF_arc_input_KeyCode_slash;
jobject SF_arc_input_KeyCode_softLeft;
jobject SF_arc_input_KeyCode_softRight;
jobject SF_arc_input_KeyCode_space;
jobject SF_arc_input_KeyCode_star;
jobject SF_arc_input_KeyCode_sym;
jobject SF_arc_input_KeyCode_t;
jobject SF_arc_input_KeyCode_tab;
jobject SF_arc_input_KeyCode_u;
jobject SF_arc_input_KeyCode_unknown;
jobject SF_arc_input_KeyCode_v;
jobject SF_arc_input_KeyCode_volumeDown;
jobject SF_arc_input_KeyCode_volumeUp;
jobject SF_arc_input_KeyCode_w;
jobject SF_arc_input_KeyCode_x;
jobject SF_arc_input_KeyCode_y;
jobject SF_arc_input_KeyCode_z;
jobject SF_arc_input_KeyCode_metaAltLeftOn;
jobject SF_arc_input_KeyCode_metaAltOn;
jobject SF_arc_input_KeyCode_metaAltRightOn;
jobject SF_arc_input_KeyCode_metaShiftLeftOn;
jobject SF_arc_input_KeyCode_metaShiftOn;
jobject SF_arc_input_KeyCode_metaShiftRightOn;
jobject SF_arc_input_KeyCode_metaSymOn;
jobject SF_arc_input_KeyCode_controlLeft;
jobject SF_arc_input_KeyCode_controlRight;
jobject SF_arc_input_KeyCode_escape;
jobject SF_arc_input_KeyCode_end;
jobject SF_arc_input_KeyCode_insert;
jobject SF_arc_input_KeyCode_pageUp;
jobject SF_arc_input_KeyCode_pageDown;
jobject SF_arc_input_KeyCode_pictSymbols;
jobject SF_arc_input_KeyCode_switchCharset;
jobject SF_arc_input_KeyCode_buttonCircle;
jobject SF_arc_input_KeyCode_buttonA;
jobject SF_arc_input_KeyCode_buttonB;
jobject SF_arc_input_KeyCode_buttonC;
jobject SF_arc_input_KeyCode_buttonX;
jobject SF_arc_input_KeyCode_buttonY;
jobject SF_arc_input_KeyCode_buttonZ;
jobject SF_arc_input_KeyCode_buttonL1;
jobject SF_arc_input_KeyCode_buttonR1;
jobject SF_arc_input_KeyCode_buttonL2;
jobject SF_arc_input_KeyCode_buttonR2;
jobject SF_arc_input_KeyCode_buttonThumbL;
jobject SF_arc_input_KeyCode_buttonThumbR;
jobject SF_arc_input_KeyCode_buttonStart;
jobject SF_arc_input_KeyCode_buttonSelect;
jobject SF_arc_input_KeyCode_buttonMode;
jobject SF_arc_input_KeyCode_numpad0;
jobject SF_arc_input_KeyCode_numpad1;
jobject SF_arc_input_KeyCode_numpad2;
jobject SF_arc_input_KeyCode_numpad3;
jobject SF_arc_input_KeyCode_numpad4;
jobject SF_arc_input_KeyCode_numpad5;
jobject SF_arc_input_KeyCode_numpad6;
jobject SF_arc_input_KeyCode_numpad7;
jobject SF_arc_input_KeyCode_numpad8;
jobject SF_arc_input_KeyCode_numpad9;
jobject SF_arc_input_KeyCode_colon;
jobject SF_arc_input_KeyCode_f1;
jobject SF_arc_input_KeyCode_f2;
jobject SF_arc_input_KeyCode_f3;
jobject SF_arc_input_KeyCode_f4;
jobject SF_arc_input_KeyCode_f5;
jobject SF_arc_input_KeyCode_f6;
jobject SF_arc_input_KeyCode_f7;
jobject SF_arc_input_KeyCode_f8;
jobject SF_arc_input_KeyCode_f9;
jobject SF_arc_input_KeyCode_f10;
jobject SF_arc_input_KeyCode_f11;
jobject SF_arc_input_KeyCode_f12;
jobject SF_arc_input_KeyCode_unset;
jobject SF_arc_input_KeyCode_application;
jobject SF_arc_input_KeyCode_asterisk;
jobject SF_arc_input_KeyCode_capsLock;
jobject SF_arc_input_KeyCode_pause;
jobject SF_arc_input_KeyCode_printScreen;
jobject SF_arc_input_KeyCode_scrollLock;
jobject SF_arc_input_KeyCode_all;
jobject SF_arc_input_KeyCode_numbers;
jobject SF_arc_input_KeyCode_$VALUES;

void mark_arc_input_KeyCode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_input_KeyCode_controllerA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerA)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerA, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerB)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerB)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerB, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerX)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerX, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerY)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerY, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerGuide)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerGuide)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerGuide, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerLBumper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerLBumper)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerLBumper, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerRBumper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerRBumper)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerRBumper, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerBack)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerBack, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerStart)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerStart)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerStart, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerLStick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerLStick)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerLStick, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerRStick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerRStick)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerRStick, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerdPadUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerdPadUp)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerdPadUp, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerdPadDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerdPadDown)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerdPadDown, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerdPadLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerdPadLeft)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerdPadLeft, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerdPadRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerdPadRight)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerdPadRight, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerLTrigger)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerLTrigger)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerLTrigger, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerRTrigger)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerRTrigger)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerRTrigger, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerLStickYAxis)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerLStickYAxis)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerLStickYAxis, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerLStickXAxis)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerLStickXAxis)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerLStickXAxis, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerRStickYAxis)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerRStickYAxis)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerRStickYAxis, mark, depth + 1);
		if (SF_arc_input_KeyCode_controllerRStickXAxis)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controllerRStickXAxis)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controllerRStickXAxis, mark, depth + 1);
		if (SF_arc_input_KeyCode_mouseLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mouseLeft)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mouseLeft, mark, depth + 1);
		if (SF_arc_input_KeyCode_mouseRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mouseRight)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mouseRight, mark, depth + 1);
		if (SF_arc_input_KeyCode_mouseMiddle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mouseMiddle)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mouseMiddle, mark, depth + 1);
		if (SF_arc_input_KeyCode_mouseBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mouseBack)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mouseBack, mark, depth + 1);
		if (SF_arc_input_KeyCode_mouseForward)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mouseForward)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mouseForward, mark, depth + 1);
		if (SF_arc_input_KeyCode_scroll)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_scroll)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_scroll, mark, depth + 1);
		if (SF_arc_input_KeyCode_anyKey)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_anyKey)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_anyKey, mark, depth + 1);
		if (SF_arc_input_KeyCode_num0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num0)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num0, mark, depth + 1);
		if (SF_arc_input_KeyCode_num1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num1)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num1, mark, depth + 1);
		if (SF_arc_input_KeyCode_num2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num2)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num2, mark, depth + 1);
		if (SF_arc_input_KeyCode_num3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num3)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num3, mark, depth + 1);
		if (SF_arc_input_KeyCode_num4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num4)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num4, mark, depth + 1);
		if (SF_arc_input_KeyCode_num5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num5)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num5, mark, depth + 1);
		if (SF_arc_input_KeyCode_num6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num6)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num6, mark, depth + 1);
		if (SF_arc_input_KeyCode_num7)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num7)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num7, mark, depth + 1);
		if (SF_arc_input_KeyCode_num8)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num8)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num8, mark, depth + 1);
		if (SF_arc_input_KeyCode_num9)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num9)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num9, mark, depth + 1);
		if (SF_arc_input_KeyCode_a)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_a)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_a, mark, depth + 1);
		if (SF_arc_input_KeyCode_altLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_altLeft)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_altLeft, mark, depth + 1);
		if (SF_arc_input_KeyCode_altRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_altRight)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_altRight, mark, depth + 1);
		if (SF_arc_input_KeyCode_apostrophe)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_apostrophe)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_apostrophe, mark, depth + 1);
		if (SF_arc_input_KeyCode_at)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_at)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_at, mark, depth + 1);
		if (SF_arc_input_KeyCode_b)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_b)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_b, mark, depth + 1);
		if (SF_arc_input_KeyCode_back)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_back)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_back, mark, depth + 1);
		if (SF_arc_input_KeyCode_backslash)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_backslash)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_backslash, mark, depth + 1);
		if (SF_arc_input_KeyCode_c)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_c)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_c, mark, depth + 1);
		if (SF_arc_input_KeyCode_call)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_call)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_call, mark, depth + 1);
		if (SF_arc_input_KeyCode_camera)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_camera)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_camera, mark, depth + 1);
		if (SF_arc_input_KeyCode_clear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_clear)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_clear, mark, depth + 1);
		if (SF_arc_input_KeyCode_comma)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_comma)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_comma, mark, depth + 1);
		if (SF_arc_input_KeyCode_d)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_d)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_d, mark, depth + 1);
		if (SF_arc_input_KeyCode_del)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_del)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_del, mark, depth + 1);
		if (SF_arc_input_KeyCode_backspace)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_backspace)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_backspace, mark, depth + 1);
		if (SF_arc_input_KeyCode_forwardDel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_forwardDel)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_forwardDel, mark, depth + 1);
		if (SF_arc_input_KeyCode_dpadCenter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_dpadCenter)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_dpadCenter, mark, depth + 1);
		if (SF_arc_input_KeyCode_dpadDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_dpadDown)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_dpadDown, mark, depth + 1);
		if (SF_arc_input_KeyCode_dpadLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_dpadLeft)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_dpadLeft, mark, depth + 1);
		if (SF_arc_input_KeyCode_dpadRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_dpadRight)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_dpadRight, mark, depth + 1);
		if (SF_arc_input_KeyCode_dpadUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_dpadUp)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_dpadUp, mark, depth + 1);
		if (SF_arc_input_KeyCode_center)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_center)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_center, mark, depth + 1);
		if (SF_arc_input_KeyCode_down)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_down)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_down, mark, depth + 1);
		if (SF_arc_input_KeyCode_left)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_left)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_left, mark, depth + 1);
		if (SF_arc_input_KeyCode_right)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_right)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_right, mark, depth + 1);
		if (SF_arc_input_KeyCode_up)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_up)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_up, mark, depth + 1);
		if (SF_arc_input_KeyCode_e)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_e)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_e, mark, depth + 1);
		if (SF_arc_input_KeyCode_endcall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_endcall)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_endcall, mark, depth + 1);
		if (SF_arc_input_KeyCode_enter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_enter)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_enter, mark, depth + 1);
		if (SF_arc_input_KeyCode_envelope)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_envelope)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_envelope, mark, depth + 1);
		if (SF_arc_input_KeyCode_equals)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_equals)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_equals, mark, depth + 1);
		if (SF_arc_input_KeyCode_explorer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_explorer)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_explorer, mark, depth + 1);
		if (SF_arc_input_KeyCode_f)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f, mark, depth + 1);
		if (SF_arc_input_KeyCode_focus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_focus)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_focus, mark, depth + 1);
		if (SF_arc_input_KeyCode_g)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_g)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_g, mark, depth + 1);
		if (SF_arc_input_KeyCode_backtick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_backtick)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_backtick, mark, depth + 1);
		if (SF_arc_input_KeyCode_h)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_h)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_h, mark, depth + 1);
		if (SF_arc_input_KeyCode_headsetHook)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_headsetHook)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_headsetHook, mark, depth + 1);
		if (SF_arc_input_KeyCode_home)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_home)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_home, mark, depth + 1);
		if (SF_arc_input_KeyCode_i)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_i)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_i, mark, depth + 1);
		if (SF_arc_input_KeyCode_j)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_j)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_j, mark, depth + 1);
		if (SF_arc_input_KeyCode_k)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_k)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_k, mark, depth + 1);
		if (SF_arc_input_KeyCode_l)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_l)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_l, mark, depth + 1);
		if (SF_arc_input_KeyCode_leftBracket)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_leftBracket)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_leftBracket, mark, depth + 1);
		if (SF_arc_input_KeyCode_m)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_m)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_m, mark, depth + 1);
		if (SF_arc_input_KeyCode_mediaFastForward)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mediaFastForward)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mediaFastForward, mark, depth + 1);
		if (SF_arc_input_KeyCode_mediaNext)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mediaNext)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mediaNext, mark, depth + 1);
		if (SF_arc_input_KeyCode_mediaPlayPause)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mediaPlayPause)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mediaPlayPause, mark, depth + 1);
		if (SF_arc_input_KeyCode_mediaPrevious)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mediaPrevious)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mediaPrevious, mark, depth + 1);
		if (SF_arc_input_KeyCode_mediaRewind)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mediaRewind)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mediaRewind, mark, depth + 1);
		if (SF_arc_input_KeyCode_mediaStop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mediaStop)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mediaStop, mark, depth + 1);
		if (SF_arc_input_KeyCode_menu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_menu)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_menu, mark, depth + 1);
		if (SF_arc_input_KeyCode_minus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_minus)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_minus, mark, depth + 1);
		if (SF_arc_input_KeyCode_mute)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_mute)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_mute, mark, depth + 1);
		if (SF_arc_input_KeyCode_n)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_n)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_n, mark, depth + 1);
		if (SF_arc_input_KeyCode_notification)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_notification)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_notification, mark, depth + 1);
		if (SF_arc_input_KeyCode_num)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_num)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_num, mark, depth + 1);
		if (SF_arc_input_KeyCode_o)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_o)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_o, mark, depth + 1);
		if (SF_arc_input_KeyCode_p)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_p)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_p, mark, depth + 1);
		if (SF_arc_input_KeyCode_period)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_period)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_period, mark, depth + 1);
		if (SF_arc_input_KeyCode_plus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_plus)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_plus, mark, depth + 1);
		if (SF_arc_input_KeyCode_pound)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_pound)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_pound, mark, depth + 1);
		if (SF_arc_input_KeyCode_power)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_power)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_power, mark, depth + 1);
		if (SF_arc_input_KeyCode_q)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_q)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_q, mark, depth + 1);
		if (SF_arc_input_KeyCode_r)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_r)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_r, mark, depth + 1);
		if (SF_arc_input_KeyCode_rightBracket)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_rightBracket)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_rightBracket, mark, depth + 1);
		if (SF_arc_input_KeyCode_s)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_s)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_s, mark, depth + 1);
		if (SF_arc_input_KeyCode_search)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_search)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_search, mark, depth + 1);
		if (SF_arc_input_KeyCode_semicolon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_semicolon)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_semicolon, mark, depth + 1);
		if (SF_arc_input_KeyCode_shiftLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_shiftLeft)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_shiftLeft, mark, depth + 1);
		if (SF_arc_input_KeyCode_shiftRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_shiftRight)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_shiftRight, mark, depth + 1);
		if (SF_arc_input_KeyCode_slash)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_slash)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_slash, mark, depth + 1);
		if (SF_arc_input_KeyCode_softLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_softLeft)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_softLeft, mark, depth + 1);
		if (SF_arc_input_KeyCode_softRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_softRight)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_softRight, mark, depth + 1);
		if (SF_arc_input_KeyCode_space)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_space)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_space, mark, depth + 1);
		if (SF_arc_input_KeyCode_star)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_star)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_star, mark, depth + 1);
		if (SF_arc_input_KeyCode_sym)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_sym)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_sym, mark, depth + 1);
		if (SF_arc_input_KeyCode_t)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_t)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_t, mark, depth + 1);
		if (SF_arc_input_KeyCode_tab)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_tab)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_tab, mark, depth + 1);
		if (SF_arc_input_KeyCode_u)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_u)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_u, mark, depth + 1);
		if (SF_arc_input_KeyCode_unknown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_unknown)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_unknown, mark, depth + 1);
		if (SF_arc_input_KeyCode_v)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_v)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_v, mark, depth + 1);
		if (SF_arc_input_KeyCode_volumeDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_volumeDown)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_volumeDown, mark, depth + 1);
		if (SF_arc_input_KeyCode_volumeUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_volumeUp)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_volumeUp, mark, depth + 1);
		if (SF_arc_input_KeyCode_w)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_w)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_w, mark, depth + 1);
		if (SF_arc_input_KeyCode_x)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_x)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_x, mark, depth + 1);
		if (SF_arc_input_KeyCode_y)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_y)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_y, mark, depth + 1);
		if (SF_arc_input_KeyCode_z)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_z)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_z, mark, depth + 1);
		if (SF_arc_input_KeyCode_metaAltLeftOn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_metaAltLeftOn)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_metaAltLeftOn, mark, depth + 1);
		if (SF_arc_input_KeyCode_metaAltOn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_metaAltOn)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_metaAltOn, mark, depth + 1);
		if (SF_arc_input_KeyCode_metaAltRightOn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_metaAltRightOn)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_metaAltRightOn, mark, depth + 1);
		if (SF_arc_input_KeyCode_metaShiftLeftOn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_metaShiftLeftOn)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_metaShiftLeftOn, mark, depth + 1);
		if (SF_arc_input_KeyCode_metaShiftOn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_metaShiftOn)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_metaShiftOn, mark, depth + 1);
		if (SF_arc_input_KeyCode_metaShiftRightOn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_metaShiftRightOn)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_metaShiftRightOn, mark, depth + 1);
		if (SF_arc_input_KeyCode_metaSymOn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_metaSymOn)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_metaSymOn, mark, depth + 1);
		if (SF_arc_input_KeyCode_controlLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controlLeft)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controlLeft, mark, depth + 1);
		if (SF_arc_input_KeyCode_controlRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_controlRight)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_controlRight, mark, depth + 1);
		if (SF_arc_input_KeyCode_escape)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_escape)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_escape, mark, depth + 1);
		if (SF_arc_input_KeyCode_end)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_end)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_end, mark, depth + 1);
		if (SF_arc_input_KeyCode_insert)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_insert)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_insert, mark, depth + 1);
		if (SF_arc_input_KeyCode_pageUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_pageUp)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_pageUp, mark, depth + 1);
		if (SF_arc_input_KeyCode_pageDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_pageDown)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_pageDown, mark, depth + 1);
		if (SF_arc_input_KeyCode_pictSymbols)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_pictSymbols)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_pictSymbols, mark, depth + 1);
		if (SF_arc_input_KeyCode_switchCharset)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_switchCharset)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_switchCharset, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonCircle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonCircle)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonCircle, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonA)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonA, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonB)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonB)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonB, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonC)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonC)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonC, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonX)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonX, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonY)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonY, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonZ)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonZ)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonZ, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonL1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonL1)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonL1, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonR1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonR1)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonR1, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonL2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonL2)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonL2, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonR2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonR2)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonR2, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonThumbL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonThumbL)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonThumbL, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonThumbR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonThumbR)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonThumbR, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonStart)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonStart)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonStart, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonSelect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonSelect)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonSelect, mark, depth + 1);
		if (SF_arc_input_KeyCode_buttonMode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_buttonMode)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_buttonMode, mark, depth + 1);
		if (SF_arc_input_KeyCode_numpad0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numpad0)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numpad0, mark, depth + 1);
		if (SF_arc_input_KeyCode_numpad1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numpad1)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numpad1, mark, depth + 1);
		if (SF_arc_input_KeyCode_numpad2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numpad2)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numpad2, mark, depth + 1);
		if (SF_arc_input_KeyCode_numpad3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numpad3)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numpad3, mark, depth + 1);
		if (SF_arc_input_KeyCode_numpad4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numpad4)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numpad4, mark, depth + 1);
		if (SF_arc_input_KeyCode_numpad5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numpad5)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numpad5, mark, depth + 1);
		if (SF_arc_input_KeyCode_numpad6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numpad6)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numpad6, mark, depth + 1);
		if (SF_arc_input_KeyCode_numpad7)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numpad7)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numpad7, mark, depth + 1);
		if (SF_arc_input_KeyCode_numpad8)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numpad8)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numpad8, mark, depth + 1);
		if (SF_arc_input_KeyCode_numpad9)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numpad9)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numpad9, mark, depth + 1);
		if (SF_arc_input_KeyCode_colon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_colon)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_colon, mark, depth + 1);
		if (SF_arc_input_KeyCode_f1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f1)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f1, mark, depth + 1);
		if (SF_arc_input_KeyCode_f2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f2)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f2, mark, depth + 1);
		if (SF_arc_input_KeyCode_f3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f3)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f3, mark, depth + 1);
		if (SF_arc_input_KeyCode_f4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f4)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f4, mark, depth + 1);
		if (SF_arc_input_KeyCode_f5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f5)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f5, mark, depth + 1);
		if (SF_arc_input_KeyCode_f6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f6)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f6, mark, depth + 1);
		if (SF_arc_input_KeyCode_f7)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f7)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f7, mark, depth + 1);
		if (SF_arc_input_KeyCode_f8)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f8)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f8, mark, depth + 1);
		if (SF_arc_input_KeyCode_f9)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f9)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f9, mark, depth + 1);
		if (SF_arc_input_KeyCode_f10)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f10)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f10, mark, depth + 1);
		if (SF_arc_input_KeyCode_f11)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f11)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f11, mark, depth + 1);
		if (SF_arc_input_KeyCode_f12)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_f12)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_f12, mark, depth + 1);
		if (SF_arc_input_KeyCode_unset)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_unset)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_unset, mark, depth + 1);
		if (SF_arc_input_KeyCode_application)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_application)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_application, mark, depth + 1);
		if (SF_arc_input_KeyCode_asterisk)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_asterisk)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_asterisk, mark, depth + 1);
		if (SF_arc_input_KeyCode_capsLock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_capsLock)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_capsLock, mark, depth + 1);
		if (SF_arc_input_KeyCode_pause)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_pause)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_pause, mark, depth + 1);
		if (SF_arc_input_KeyCode_printScreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_printScreen)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_printScreen, mark, depth + 1);
		if (SF_arc_input_KeyCode_scrollLock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_scrollLock)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_scrollLock, mark, depth + 1);
		if (SF_arc_input_KeyCode_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_all)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_all, mark, depth + 1);
		if (SF_arc_input_KeyCode_numbers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_numbers)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_numbers, mark, depth + 1);
		if (SF_arc_input_KeyCode_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyCode_$VALUES)->clazz)->markFunction)((jobject) SF_arc_input_KeyCode_$VALUES, mark, depth + 1);
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
	auto self = (arc_input_KeyCode *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_cachedName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cachedName)->clazz)->markFunction)((jobject) self->F_cachedName, mark, depth + 1);
}

jobject SM_arc_input_KeyCode_values_R_Array1_arc_input_KeyCode(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyCode:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyCode(ctx);
	{
	LINE_NUMBER(7);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_input_KeyCode, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_input_KeyCode_valueOf_java_lang_String_R_arc_input_KeyCode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyCode:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyCode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_input_KeyCode)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_input_KeyCode, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyCode:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyCode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(213);
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyCode:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyCode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(216);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(217);
	((arc_input_KeyCode *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[3].o);
	LINE_NUMBER(218);
	((arc_input_KeyCode *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[4].o);
	LINE_NUMBER(219);
	((arc_input_KeyCode *) NULL_CHECK((frame[0].o)))->F_axis = (frame[5].i);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_input_KeyCode_byOrdinal_int_R_arc_input_KeyCode(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyCode:byOrdinal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyCode(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(223);
	if ((frame[0].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[0].i;
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_all;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid key code: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ArrayIndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(224);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyCode_all;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)));
	}

	popStackFrame(ctx);
}

jobject M_arc_input_KeyCode_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyCode:getName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((arc_input_KeyCode *) NULL_CHECK((frame[0].o)))->F_cachedName;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp += 1;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_input_KeyCode *) NULL_CHECK((frame[0].o)))->F_value;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_getKeyName_arc_input_KeyCode_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_getKeyName_arc_input_KeyCode_R_java_lang_String])(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((arc_input_KeyCode *) NULL_CHECK(sp[0].o))->F_cachedName = (jref) sp[1].o;
	LINE_NUMBER(231);
	sp[0].o = (jobject)((arc_input_KeyCode *) NULL_CHECK((frame[0].o)))->F_cachedName;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_input_KeyCode *) NULL_CHECK((frame[0].o)))->F_cachedName;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
label_6:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_input_KeyCode *) NULL_CHECK((frame[0].o)))->F_value;
	((arc_input_KeyCode *) NULL_CHECK(sp[0].o))->F_cachedName = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((arc_input_KeyCode *) NULL_CHECK((frame[0].o)))->F_cachedName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_input_KeyCode_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyCode:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_arc_input_KeyCode_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_KeyCode_getName_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_input_KeyCode_$values_R_Array1_arc_input_KeyCode(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyCode:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyCode(ctx);
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)createArray(ctx, &class_arc_input_KeyCode, (189));
	jint temp0 = jint(0);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerA;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerB;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerX;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerY;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerGuide;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerLBumper;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerRBumper;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerBack;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerStart;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerLStick;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerRStick;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerdPadUp;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerdPadDown;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerdPadLeft;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerdPadRight;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerLTrigger;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerRTrigger;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerLStickYAxis;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerLStickXAxis;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerRStickYAxis;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controllerRStickXAxis;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseBack;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseForward;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_scroll;
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 27;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_anyKey;
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 28;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num0;
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 29;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num1;
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 30;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num2;
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 31;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num3;
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 32;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num4;
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 33;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num5;
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 34;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num6;
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp35 = 35;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num7;
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = 36;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num8;
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp37 = 37;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num9;
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp38 = 38;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_a;
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = 39;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_altLeft;
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp40 = 40;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_altRight;
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp41 = 41;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_apostrophe;
	ARRAY_ACCESS(jobject, sp[0].o, temp41) = sp[1].o;
	jint temp42 = 42;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_at;
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp43 = 43;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_b;
	ARRAY_ACCESS(jobject, sp[0].o, temp43) = sp[1].o;
	jint temp44 = 44;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_back;
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp45 = 45;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_backslash;
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	jint temp46 = 46;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_c;
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp47 = 47;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_call;
	ARRAY_ACCESS(jobject, sp[0].o, temp47) = sp[1].o;
	jint temp48 = 48;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_camera;
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp49 = 49;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_clear;
	ARRAY_ACCESS(jobject, sp[0].o, temp49) = sp[1].o;
	jint temp50 = 50;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_comma;
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp51 = 51;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_d;
	ARRAY_ACCESS(jobject, sp[0].o, temp51) = sp[1].o;
	jint temp52 = 52;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_del;
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	jint temp53 = 53;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_backspace;
	ARRAY_ACCESS(jobject, sp[0].o, temp53) = sp[1].o;
	jint temp54 = 54;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_forwardDel;
	ARRAY_ACCESS(jobject, sp[0].o, temp54) = sp[1].o;
	jint temp55 = 55;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_dpadCenter;
	ARRAY_ACCESS(jobject, sp[0].o, temp55) = sp[1].o;
	jint temp56 = 56;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_dpadDown;
	ARRAY_ACCESS(jobject, sp[0].o, temp56) = sp[1].o;
	jint temp57 = 57;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_dpadLeft;
	ARRAY_ACCESS(jobject, sp[0].o, temp57) = sp[1].o;
	jint temp58 = 58;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_dpadRight;
	ARRAY_ACCESS(jobject, sp[0].o, temp58) = sp[1].o;
	jint temp59 = 59;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_dpadUp;
	ARRAY_ACCESS(jobject, sp[0].o, temp59) = sp[1].o;
	jint temp60 = 60;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_center;
	ARRAY_ACCESS(jobject, sp[0].o, temp60) = sp[1].o;
	jint temp61 = 61;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_down;
	ARRAY_ACCESS(jobject, sp[0].o, temp61) = sp[1].o;
	jint temp62 = 62;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_left;
	ARRAY_ACCESS(jobject, sp[0].o, temp62) = sp[1].o;
	jint temp63 = 63;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_right;
	ARRAY_ACCESS(jobject, sp[0].o, temp63) = sp[1].o;
	jint temp64 = 64;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_up;
	ARRAY_ACCESS(jobject, sp[0].o, temp64) = sp[1].o;
	jint temp65 = 65;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_e;
	ARRAY_ACCESS(jobject, sp[0].o, temp65) = sp[1].o;
	jint temp66 = 66;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_endcall;
	ARRAY_ACCESS(jobject, sp[0].o, temp66) = sp[1].o;
	jint temp67 = 67;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_enter;
	ARRAY_ACCESS(jobject, sp[0].o, temp67) = sp[1].o;
	jint temp68 = 68;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_envelope;
	ARRAY_ACCESS(jobject, sp[0].o, temp68) = sp[1].o;
	jint temp69 = 69;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_equals;
	ARRAY_ACCESS(jobject, sp[0].o, temp69) = sp[1].o;
	jint temp70 = 70;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_explorer;
	ARRAY_ACCESS(jobject, sp[0].o, temp70) = sp[1].o;
	jint temp71 = 71;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f;
	ARRAY_ACCESS(jobject, sp[0].o, temp71) = sp[1].o;
	jint temp72 = 72;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_focus;
	ARRAY_ACCESS(jobject, sp[0].o, temp72) = sp[1].o;
	jint temp73 = 73;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_g;
	ARRAY_ACCESS(jobject, sp[0].o, temp73) = sp[1].o;
	jint temp74 = 74;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_backtick;
	ARRAY_ACCESS(jobject, sp[0].o, temp74) = sp[1].o;
	jint temp75 = 75;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_h;
	ARRAY_ACCESS(jobject, sp[0].o, temp75) = sp[1].o;
	jint temp76 = 76;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_headsetHook;
	ARRAY_ACCESS(jobject, sp[0].o, temp76) = sp[1].o;
	jint temp77 = 77;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_home;
	ARRAY_ACCESS(jobject, sp[0].o, temp77) = sp[1].o;
	jint temp78 = 78;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_i;
	ARRAY_ACCESS(jobject, sp[0].o, temp78) = sp[1].o;
	jint temp79 = 79;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_j;
	ARRAY_ACCESS(jobject, sp[0].o, temp79) = sp[1].o;
	jint temp80 = 80;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_k;
	ARRAY_ACCESS(jobject, sp[0].o, temp80) = sp[1].o;
	jint temp81 = 81;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_l;
	ARRAY_ACCESS(jobject, sp[0].o, temp81) = sp[1].o;
	jint temp82 = 82;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_leftBracket;
	ARRAY_ACCESS(jobject, sp[0].o, temp82) = sp[1].o;
	jint temp83 = 83;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_m;
	ARRAY_ACCESS(jobject, sp[0].o, temp83) = sp[1].o;
	jint temp84 = 84;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mediaFastForward;
	ARRAY_ACCESS(jobject, sp[0].o, temp84) = sp[1].o;
	jint temp85 = 85;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mediaNext;
	ARRAY_ACCESS(jobject, sp[0].o, temp85) = sp[1].o;
	jint temp86 = 86;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mediaPlayPause;
	ARRAY_ACCESS(jobject, sp[0].o, temp86) = sp[1].o;
	jint temp87 = 87;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mediaPrevious;
	ARRAY_ACCESS(jobject, sp[0].o, temp87) = sp[1].o;
	jint temp88 = 88;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mediaRewind;
	ARRAY_ACCESS(jobject, sp[0].o, temp88) = sp[1].o;
	jint temp89 = 89;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mediaStop;
	ARRAY_ACCESS(jobject, sp[0].o, temp89) = sp[1].o;
	jint temp90 = 90;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_menu;
	ARRAY_ACCESS(jobject, sp[0].o, temp90) = sp[1].o;
	jint temp91 = 91;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_minus;
	ARRAY_ACCESS(jobject, sp[0].o, temp91) = sp[1].o;
	jint temp92 = 92;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mute;
	ARRAY_ACCESS(jobject, sp[0].o, temp92) = sp[1].o;
	jint temp93 = 93;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_n;
	ARRAY_ACCESS(jobject, sp[0].o, temp93) = sp[1].o;
	jint temp94 = 94;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_notification;
	ARRAY_ACCESS(jobject, sp[0].o, temp94) = sp[1].o;
	jint temp95 = 95;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num;
	ARRAY_ACCESS(jobject, sp[0].o, temp95) = sp[1].o;
	jint temp96 = 96;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_o;
	ARRAY_ACCESS(jobject, sp[0].o, temp96) = sp[1].o;
	jint temp97 = 97;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_p;
	ARRAY_ACCESS(jobject, sp[0].o, temp97) = sp[1].o;
	jint temp98 = 98;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_period;
	ARRAY_ACCESS(jobject, sp[0].o, temp98) = sp[1].o;
	jint temp99 = 99;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_plus;
	ARRAY_ACCESS(jobject, sp[0].o, temp99) = sp[1].o;
	jint temp100 = 100;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_pound;
	ARRAY_ACCESS(jobject, sp[0].o, temp100) = sp[1].o;
	jint temp101 = 101;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_power;
	ARRAY_ACCESS(jobject, sp[0].o, temp101) = sp[1].o;
	jint temp102 = 102;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_q;
	ARRAY_ACCESS(jobject, sp[0].o, temp102) = sp[1].o;
	jint temp103 = 103;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_r;
	ARRAY_ACCESS(jobject, sp[0].o, temp103) = sp[1].o;
	jint temp104 = 104;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_rightBracket;
	ARRAY_ACCESS(jobject, sp[0].o, temp104) = sp[1].o;
	jint temp105 = 105;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_s;
	ARRAY_ACCESS(jobject, sp[0].o, temp105) = sp[1].o;
	jint temp106 = 106;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_search;
	ARRAY_ACCESS(jobject, sp[0].o, temp106) = sp[1].o;
	jint temp107 = 107;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_semicolon;
	ARRAY_ACCESS(jobject, sp[0].o, temp107) = sp[1].o;
	jint temp108 = 108;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	ARRAY_ACCESS(jobject, sp[0].o, temp108) = sp[1].o;
	jint temp109 = 109;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftRight;
	ARRAY_ACCESS(jobject, sp[0].o, temp109) = sp[1].o;
	jint temp110 = 110;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_slash;
	ARRAY_ACCESS(jobject, sp[0].o, temp110) = sp[1].o;
	jint temp111 = 111;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_softLeft;
	ARRAY_ACCESS(jobject, sp[0].o, temp111) = sp[1].o;
	jint temp112 = 112;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_softRight;
	ARRAY_ACCESS(jobject, sp[0].o, temp112) = sp[1].o;
	jint temp113 = 113;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_space;
	ARRAY_ACCESS(jobject, sp[0].o, temp113) = sp[1].o;
	jint temp114 = 114;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_star;
	ARRAY_ACCESS(jobject, sp[0].o, temp114) = sp[1].o;
	jint temp115 = 115;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_sym;
	ARRAY_ACCESS(jobject, sp[0].o, temp115) = sp[1].o;
	jint temp116 = 116;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_t;
	ARRAY_ACCESS(jobject, sp[0].o, temp116) = sp[1].o;
	jint temp117 = 117;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_tab;
	ARRAY_ACCESS(jobject, sp[0].o, temp117) = sp[1].o;
	jint temp118 = 118;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_u;
	ARRAY_ACCESS(jobject, sp[0].o, temp118) = sp[1].o;
	jint temp119 = 119;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unknown;
	ARRAY_ACCESS(jobject, sp[0].o, temp119) = sp[1].o;
	jint temp120 = 120;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_v;
	ARRAY_ACCESS(jobject, sp[0].o, temp120) = sp[1].o;
	jint temp121 = 121;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_volumeDown;
	ARRAY_ACCESS(jobject, sp[0].o, temp121) = sp[1].o;
	jint temp122 = 122;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_volumeUp;
	ARRAY_ACCESS(jobject, sp[0].o, temp122) = sp[1].o;
	jint temp123 = 123;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_w;
	ARRAY_ACCESS(jobject, sp[0].o, temp123) = sp[1].o;
	jint temp124 = 124;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_x;
	ARRAY_ACCESS(jobject, sp[0].o, temp124) = sp[1].o;
	jint temp125 = 125;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_y;
	ARRAY_ACCESS(jobject, sp[0].o, temp125) = sp[1].o;
	jint temp126 = 126;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_z;
	ARRAY_ACCESS(jobject, sp[0].o, temp126) = sp[1].o;
	jint temp127 = 127;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_metaAltLeftOn;
	ARRAY_ACCESS(jobject, sp[0].o, temp127) = sp[1].o;
	jint temp128 = 128;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_metaAltOn;
	ARRAY_ACCESS(jobject, sp[0].o, temp128) = sp[1].o;
	jint temp129 = 129;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_metaAltRightOn;
	ARRAY_ACCESS(jobject, sp[0].o, temp129) = sp[1].o;
	jint temp130 = 130;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_metaShiftLeftOn;
	ARRAY_ACCESS(jobject, sp[0].o, temp130) = sp[1].o;
	jint temp131 = 131;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_metaShiftOn;
	ARRAY_ACCESS(jobject, sp[0].o, temp131) = sp[1].o;
	jint temp132 = 132;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_metaShiftRightOn;
	ARRAY_ACCESS(jobject, sp[0].o, temp132) = sp[1].o;
	jint temp133 = 133;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_metaSymOn;
	ARRAY_ACCESS(jobject, sp[0].o, temp133) = sp[1].o;
	jint temp134 = 134;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controlLeft;
	ARRAY_ACCESS(jobject, sp[0].o, temp134) = sp[1].o;
	jint temp135 = 135;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controlRight;
	ARRAY_ACCESS(jobject, sp[0].o, temp135) = sp[1].o;
	jint temp136 = 136;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_escape;
	ARRAY_ACCESS(jobject, sp[0].o, temp136) = sp[1].o;
	jint temp137 = 137;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_end;
	ARRAY_ACCESS(jobject, sp[0].o, temp137) = sp[1].o;
	jint temp138 = 138;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_insert;
	ARRAY_ACCESS(jobject, sp[0].o, temp138) = sp[1].o;
	jint temp139 = 139;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_pageUp;
	ARRAY_ACCESS(jobject, sp[0].o, temp139) = sp[1].o;
	jint temp140 = 140;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_pageDown;
	ARRAY_ACCESS(jobject, sp[0].o, temp140) = sp[1].o;
	jint temp141 = 141;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_pictSymbols;
	ARRAY_ACCESS(jobject, sp[0].o, temp141) = sp[1].o;
	jint temp142 = 142;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_switchCharset;
	ARRAY_ACCESS(jobject, sp[0].o, temp142) = sp[1].o;
	jint temp143 = 143;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonCircle;
	ARRAY_ACCESS(jobject, sp[0].o, temp143) = sp[1].o;
	jint temp144 = 144;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonA;
	ARRAY_ACCESS(jobject, sp[0].o, temp144) = sp[1].o;
	jint temp145 = 145;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonB;
	ARRAY_ACCESS(jobject, sp[0].o, temp145) = sp[1].o;
	jint temp146 = 146;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonC;
	ARRAY_ACCESS(jobject, sp[0].o, temp146) = sp[1].o;
	jint temp147 = 147;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonX;
	ARRAY_ACCESS(jobject, sp[0].o, temp147) = sp[1].o;
	jint temp148 = 148;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonY;
	ARRAY_ACCESS(jobject, sp[0].o, temp148) = sp[1].o;
	jint temp149 = 149;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonZ;
	ARRAY_ACCESS(jobject, sp[0].o, temp149) = sp[1].o;
	jint temp150 = 150;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonL1;
	ARRAY_ACCESS(jobject, sp[0].o, temp150) = sp[1].o;
	jint temp151 = 151;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonR1;
	ARRAY_ACCESS(jobject, sp[0].o, temp151) = sp[1].o;
	jint temp152 = 152;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonL2;
	ARRAY_ACCESS(jobject, sp[0].o, temp152) = sp[1].o;
	jint temp153 = 153;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonR2;
	ARRAY_ACCESS(jobject, sp[0].o, temp153) = sp[1].o;
	jint temp154 = 154;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonThumbL;
	ARRAY_ACCESS(jobject, sp[0].o, temp154) = sp[1].o;
	jint temp155 = 155;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonThumbR;
	ARRAY_ACCESS(jobject, sp[0].o, temp155) = sp[1].o;
	jint temp156 = 156;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonStart;
	ARRAY_ACCESS(jobject, sp[0].o, temp156) = sp[1].o;
	jint temp157 = 157;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonSelect;
	ARRAY_ACCESS(jobject, sp[0].o, temp157) = sp[1].o;
	jint temp158 = 158;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_buttonMode;
	ARRAY_ACCESS(jobject, sp[0].o, temp158) = sp[1].o;
	jint temp159 = 159;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numpad0;
	ARRAY_ACCESS(jobject, sp[0].o, temp159) = sp[1].o;
	jint temp160 = 160;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numpad1;
	ARRAY_ACCESS(jobject, sp[0].o, temp160) = sp[1].o;
	jint temp161 = 161;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numpad2;
	ARRAY_ACCESS(jobject, sp[0].o, temp161) = sp[1].o;
	jint temp162 = 162;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numpad3;
	ARRAY_ACCESS(jobject, sp[0].o, temp162) = sp[1].o;
	jint temp163 = 163;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numpad4;
	ARRAY_ACCESS(jobject, sp[0].o, temp163) = sp[1].o;
	jint temp164 = 164;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numpad5;
	ARRAY_ACCESS(jobject, sp[0].o, temp164) = sp[1].o;
	jint temp165 = 165;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numpad6;
	ARRAY_ACCESS(jobject, sp[0].o, temp165) = sp[1].o;
	jint temp166 = 166;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numpad7;
	ARRAY_ACCESS(jobject, sp[0].o, temp166) = sp[1].o;
	jint temp167 = 167;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numpad8;
	ARRAY_ACCESS(jobject, sp[0].o, temp167) = sp[1].o;
	jint temp168 = 168;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_numpad9;
	ARRAY_ACCESS(jobject, sp[0].o, temp168) = sp[1].o;
	jint temp169 = 169;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_colon;
	ARRAY_ACCESS(jobject, sp[0].o, temp169) = sp[1].o;
	jint temp170 = 170;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f1;
	ARRAY_ACCESS(jobject, sp[0].o, temp170) = sp[1].o;
	jint temp171 = 171;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f2;
	ARRAY_ACCESS(jobject, sp[0].o, temp171) = sp[1].o;
	jint temp172 = 172;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f3;
	ARRAY_ACCESS(jobject, sp[0].o, temp172) = sp[1].o;
	jint temp173 = 173;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f4;
	ARRAY_ACCESS(jobject, sp[0].o, temp173) = sp[1].o;
	jint temp174 = 174;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f5;
	ARRAY_ACCESS(jobject, sp[0].o, temp174) = sp[1].o;
	jint temp175 = 175;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f6;
	ARRAY_ACCESS(jobject, sp[0].o, temp175) = sp[1].o;
	jint temp176 = 176;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f7;
	ARRAY_ACCESS(jobject, sp[0].o, temp176) = sp[1].o;
	jint temp177 = 177;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f8;
	ARRAY_ACCESS(jobject, sp[0].o, temp177) = sp[1].o;
	jint temp178 = 178;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f9;
	ARRAY_ACCESS(jobject, sp[0].o, temp178) = sp[1].o;
	jint temp179 = 179;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f10;
	ARRAY_ACCESS(jobject, sp[0].o, temp179) = sp[1].o;
	jint temp180 = 180;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f11;
	ARRAY_ACCESS(jobject, sp[0].o, temp180) = sp[1].o;
	jint temp181 = 181;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f12;
	ARRAY_ACCESS(jobject, sp[0].o, temp181) = sp[1].o;
	jint temp182 = 182;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	ARRAY_ACCESS(jobject, sp[0].o, temp182) = sp[1].o;
	jint temp183 = 183;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_application;
	ARRAY_ACCESS(jobject, sp[0].o, temp183) = sp[1].o;
	jint temp184 = 184;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_asterisk;
	ARRAY_ACCESS(jobject, sp[0].o, temp184) = sp[1].o;
	jint temp185 = 185;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_capsLock;
	ARRAY_ACCESS(jobject, sp[0].o, temp185) = sp[1].o;
	jint temp186 = 186;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_pause;
	ARRAY_ACCESS(jobject, sp[0].o, temp186) = sp[1].o;
	jint temp187 = 187;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_printScreen;
	ARRAY_ACCESS(jobject, sp[0].o, temp187) = sp[1].o;
	jint temp188 = 188;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_scrollLock;
	ARRAY_ACCESS(jobject, sp[0].o, temp188) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_input_KeyCode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyCode:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyCode(ctx);
	{
	LINE_NUMBER(9);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerA"_j));
	jint temp0 = jint(0);
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (((jobject) createStringLiteral(ctx, u8"A"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerA = sp[0].o;
	LINE_NUMBER(10);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerB"_j));
	jint temp1 = jint(1);
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp1, sp[2].o, (((jobject) createStringLiteral(ctx, u8"B"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerB = sp[0].o;
	LINE_NUMBER(11);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerX"_j));
	jint temp2 = jint(2);
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp2, sp[2].o, (((jobject) createStringLiteral(ctx, u8"X"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerX = sp[0].o;
	LINE_NUMBER(12);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerY"_j));
	jint temp3 = jint(3);
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp3, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Y"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerY = sp[0].o;
	LINE_NUMBER(13);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerGuide"_j));
	jint temp4 = jint(4);
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp4, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Guide"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerGuide = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerLBumper"_j));
	jint temp5 = jint(5);
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp5, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L Bumper"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerLBumper = sp[0].o;
	LINE_NUMBER(15);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerRBumper"_j));
	jint temp6 = 6;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp6, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R Bumper"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerRBumper = sp[0].o;
	LINE_NUMBER(16);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerBack"_j));
	jint temp7 = 7;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp7, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Back"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerBack = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerStart"_j));
	jint temp8 = 8;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp8, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Start"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerStart = sp[0].o;
	LINE_NUMBER(18);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerLStick"_j));
	jint temp9 = 9;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp9, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L Stick"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerLStick = sp[0].o;
	LINE_NUMBER(19);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerRStick"_j));
	jint temp10 = 10;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp10, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R Stick"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerRStick = sp[0].o;
	LINE_NUMBER(21);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerdPadUp"_j));
	jint temp11 = 11;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp11, sp[2].o, (((jobject) createStringLiteral(ctx, u8"D-Pad Up"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerdPadUp = sp[0].o;
	LINE_NUMBER(22);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerdPadDown"_j));
	jint temp12 = 12;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp12, sp[2].o, (((jobject) createStringLiteral(ctx, u8"D-Pad Down"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerdPadDown = sp[0].o;
	LINE_NUMBER(23);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerdPadLeft"_j));
	jint temp13 = 13;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp13, sp[2].o, (((jobject) createStringLiteral(ctx, u8"D-Pad Left"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerdPadLeft = sp[0].o;
	LINE_NUMBER(24);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerdPadRight"_j));
	jint temp14 = 14;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp14, sp[2].o, (((jobject) createStringLiteral(ctx, u8"D-Pad Right"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerdPadRight = sp[0].o;
	LINE_NUMBER(26);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerLTrigger"_j));
	jint temp15 = 15;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean(ctx, sp[0].o, sp[1].o, temp15, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L Trigger"_j))), (jint(1)));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerLTrigger = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerRTrigger"_j));
	jint temp16 = 16;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean(ctx, sp[0].o, sp[1].o, temp16, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R Trigger"_j))), (jint(1)));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerRTrigger = sp[0].o;
	LINE_NUMBER(28);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerLStickYAxis"_j));
	jint temp17 = 17;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean(ctx, sp[0].o, sp[1].o, temp17, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L Stick Y Axis"_j))), (jint(1)));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerLStickYAxis = sp[0].o;
	LINE_NUMBER(29);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerLStickXAxis"_j));
	jint temp18 = 18;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean(ctx, sp[0].o, sp[1].o, temp18, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L Stick X Axis"_j))), (jint(1)));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerLStickXAxis = sp[0].o;
	LINE_NUMBER(30);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerRStickYAxis"_j));
	jint temp19 = 19;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean(ctx, sp[0].o, sp[1].o, temp19, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R Stick Y Axis"_j))), (jint(1)));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerRStickYAxis = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controllerRStickXAxis"_j));
	jint temp20 = 20;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_controller;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean(ctx, sp[0].o, sp[1].o, temp20, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R Stick X Axis"_j))), (jint(1)));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controllerRStickXAxis = sp[0].o;
	LINE_NUMBER(33);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mouseLeft"_j));
	jint temp21 = 21;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_mouse;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp21, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Mouse Left"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mouseLeft = sp[0].o;
	LINE_NUMBER(34);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mouseRight"_j));
	jint temp22 = 22;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_mouse;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp22, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Mouse Right"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mouseRight = sp[0].o;
	LINE_NUMBER(35);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mouseMiddle"_j));
	jint temp23 = 23;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_mouse;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp23, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Mouse Middle"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mouseMiddle = sp[0].o;
	LINE_NUMBER(36);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mouseBack"_j));
	jint temp24 = 24;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_mouse;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp24, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Mouse Back"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mouseBack = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mouseForward"_j));
	jint temp25 = 25;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_mouse;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp25, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Mouse Forward"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mouseForward = sp[0].o;
	LINE_NUMBER(39);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"scroll"_j));
	jint temp26 = 26;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_scroll;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean(ctx, sp[0].o, sp[1].o, temp26, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Scrollwheel"_j))), (jint(1)));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_scroll = sp[0].o;
	LINE_NUMBER(41);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"anyKey"_j));
	jint temp27 = 27;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp27, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Any Key"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_anyKey = sp[0].o;
	LINE_NUMBER(42);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num0"_j));
	jint temp28 = 28;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp28, sp[2].o, (((jobject) createStringLiteral(ctx, u8"0"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num0 = sp[0].o;
	LINE_NUMBER(43);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num1"_j));
	jint temp29 = 29;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp29, sp[2].o, (((jobject) createStringLiteral(ctx, u8"1"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num1 = sp[0].o;
	LINE_NUMBER(44);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num2"_j));
	jint temp30 = 30;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp30, sp[2].o, (((jobject) createStringLiteral(ctx, u8"2"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num2 = sp[0].o;
	LINE_NUMBER(45);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num3"_j));
	jint temp31 = 31;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp31, sp[2].o, (((jobject) createStringLiteral(ctx, u8"3"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num3 = sp[0].o;
	LINE_NUMBER(46);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num4"_j));
	jint temp32 = 32;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp32, sp[2].o, (((jobject) createStringLiteral(ctx, u8"4"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num4 = sp[0].o;
	LINE_NUMBER(47);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num5"_j));
	jint temp33 = 33;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp33, sp[2].o, (((jobject) createStringLiteral(ctx, u8"5"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num5 = sp[0].o;
	LINE_NUMBER(48);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num6"_j));
	jint temp34 = 34;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp34, sp[2].o, (((jobject) createStringLiteral(ctx, u8"6"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num6 = sp[0].o;
	LINE_NUMBER(49);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num7"_j));
	jint temp35 = 35;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp35, sp[2].o, (((jobject) createStringLiteral(ctx, u8"7"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num7 = sp[0].o;
	LINE_NUMBER(50);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num8"_j));
	jint temp36 = 36;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp36, sp[2].o, (((jobject) createStringLiteral(ctx, u8"8"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num8 = sp[0].o;
	LINE_NUMBER(51);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num9"_j));
	jint temp37 = 37;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp37, sp[2].o, (((jobject) createStringLiteral(ctx, u8"9"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num9 = sp[0].o;
	LINE_NUMBER(52);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"a"_j));
	jint temp38 = 38;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp38, sp[2].o, (((jobject) createStringLiteral(ctx, u8"A"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_a = sp[0].o;
	LINE_NUMBER(53);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"altLeft"_j));
	jint temp39 = 39;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp39, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L-Alt"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_altLeft = sp[0].o;
	LINE_NUMBER(54);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"altRight"_j));
	jint temp40 = 40;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp40, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R-Alt"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_altRight = sp[0].o;
	LINE_NUMBER(55);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"apostrophe"_j));
	jint temp41 = 41;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp41, sp[2].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_apostrophe = sp[0].o;
	LINE_NUMBER(56);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"at"_j));
	jint temp42 = 42;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp42, sp[2].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_at = sp[0].o;
	LINE_NUMBER(57);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"b"_j));
	jint temp43 = 43;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp43, sp[2].o, (((jobject) createStringLiteral(ctx, u8"B"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_b = sp[0].o;
	LINE_NUMBER(58);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"back"_j));
	jint temp44 = 44;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp44, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Back"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_back = sp[0].o;
	LINE_NUMBER(59);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"backslash"_j));
	jint temp45 = 45;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp45, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\\"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_backslash = sp[0].o;
	LINE_NUMBER(60);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"c"_j));
	jint temp46 = 46;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp46, sp[2].o, (((jobject) createStringLiteral(ctx, u8"C"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_c = sp[0].o;
	LINE_NUMBER(61);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"call"_j));
	jint temp47 = 47;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp47, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Call"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_call = sp[0].o;
	LINE_NUMBER(62);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"camera"_j));
	jint temp48 = 48;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp48, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Camera"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_camera = sp[0].o;
	LINE_NUMBER(63);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"clear"_j));
	jint temp49 = 49;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp49, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Clear"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_clear = sp[0].o;
	LINE_NUMBER(64);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"comma"_j));
	jint temp50 = 50;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp50, sp[2].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_comma = sp[0].o;
	LINE_NUMBER(65);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"d"_j));
	jint temp51 = 51;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp51, sp[2].o, (((jobject) createStringLiteral(ctx, u8"D"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_d = sp[0].o;
	LINE_NUMBER(66);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"del"_j));
	jint temp52 = 52;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp52, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Delete"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_del = sp[0].o;
	LINE_NUMBER(67);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"backspace"_j));
	jint temp53 = 53;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp53, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Delete"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_backspace = sp[0].o;
	LINE_NUMBER(68);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"forwardDel"_j));
	jint temp54 = 54;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp54, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Forward Delete"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_forwardDel = sp[0].o;
	LINE_NUMBER(69);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"dpadCenter"_j));
	jint temp55 = 55;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp55, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Center"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_dpadCenter = sp[0].o;
	LINE_NUMBER(70);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"dpadDown"_j));
	jint temp56 = 56;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp56, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Down"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_dpadDown = sp[0].o;
	LINE_NUMBER(71);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"dpadLeft"_j));
	jint temp57 = 57;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp57, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Left"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_dpadLeft = sp[0].o;
	LINE_NUMBER(72);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"dpadRight"_j));
	jint temp58 = 58;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp58, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Right"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_dpadRight = sp[0].o;
	LINE_NUMBER(73);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"dpadUp"_j));
	jint temp59 = 59;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp59, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Up"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_dpadUp = sp[0].o;
	LINE_NUMBER(74);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"center"_j));
	jint temp60 = 60;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp60, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Center"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_center = sp[0].o;
	LINE_NUMBER(75);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"down"_j));
	jint temp61 = 61;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp61, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Down"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_down = sp[0].o;
	LINE_NUMBER(76);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"left"_j));
	jint temp62 = 62;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp62, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Left"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_left = sp[0].o;
	LINE_NUMBER(77);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"right"_j));
	jint temp63 = 63;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp63, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Right"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_right = sp[0].o;
	LINE_NUMBER(78);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"up"_j));
	jint temp64 = 64;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp64, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Up"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_up = sp[0].o;
	LINE_NUMBER(79);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"e"_j));
	jint temp65 = 65;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp65, sp[2].o, (((jobject) createStringLiteral(ctx, u8"E"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_e = sp[0].o;
	LINE_NUMBER(80);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"endcall"_j));
	jint temp66 = 66;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp66, sp[2].o, (((jobject) createStringLiteral(ctx, u8"End Call"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_endcall = sp[0].o;
	LINE_NUMBER(81);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enter"_j));
	jint temp67 = 67;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp67, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Enter"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_enter = sp[0].o;
	LINE_NUMBER(82);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"envelope"_j));
	jint temp68 = 68;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp68, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Envelope"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_envelope = sp[0].o;
	LINE_NUMBER(83);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"equals"_j));
	jint temp69 = 69;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp69, sp[2].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_equals = sp[0].o;
	LINE_NUMBER(84);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"explorer"_j));
	jint temp70 = 70;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp70, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Explorer"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_explorer = sp[0].o;
	LINE_NUMBER(85);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f"_j));
	jint temp71 = 71;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp71, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f = sp[0].o;
	LINE_NUMBER(86);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"focus"_j));
	jint temp72 = 72;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp72, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Focus"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_focus = sp[0].o;
	LINE_NUMBER(87);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"g"_j));
	jint temp73 = 73;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp73, sp[2].o, (((jobject) createStringLiteral(ctx, u8"G"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_g = sp[0].o;
	LINE_NUMBER(88);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"backtick"_j));
	jint temp74 = 74;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp74, sp[2].o, (((jobject) createStringLiteral(ctx, u8"`"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_backtick = sp[0].o;
	LINE_NUMBER(89);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"h"_j));
	jint temp75 = 75;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp75, sp[2].o, (((jobject) createStringLiteral(ctx, u8"H"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_h = sp[0].o;
	LINE_NUMBER(90);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"headsetHook"_j));
	jint temp76 = 76;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp76, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Headset Hook"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_headsetHook = sp[0].o;
	LINE_NUMBER(91);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"home"_j));
	jint temp77 = 77;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp77, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Home"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_home = sp[0].o;
	LINE_NUMBER(92);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"i"_j));
	jint temp78 = 78;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp78, sp[2].o, (((jobject) createStringLiteral(ctx, u8"I"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_i = sp[0].o;
	LINE_NUMBER(93);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"j"_j));
	jint temp79 = 79;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp79, sp[2].o, (((jobject) createStringLiteral(ctx, u8"J"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_j = sp[0].o;
	LINE_NUMBER(94);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"k"_j));
	jint temp80 = 80;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp80, sp[2].o, (((jobject) createStringLiteral(ctx, u8"K"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_k = sp[0].o;
	LINE_NUMBER(95);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"l"_j));
	jint temp81 = 81;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp81, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_l = sp[0].o;
	LINE_NUMBER(96);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"leftBracket"_j));
	jint temp82 = 82;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp82, sp[2].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_leftBracket = sp[0].o;
	LINE_NUMBER(97);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"m"_j));
	jint temp83 = 83;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp83, sp[2].o, (((jobject) createStringLiteral(ctx, u8"M"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_m = sp[0].o;
	LINE_NUMBER(98);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mediaFastForward"_j));
	jint temp84 = 84;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp84, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Fast Forward"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mediaFastForward = sp[0].o;
	LINE_NUMBER(99);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mediaNext"_j));
	jint temp85 = 85;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp85, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Next Media"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mediaNext = sp[0].o;
	LINE_NUMBER(100);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mediaPlayPause"_j));
	jint temp86 = 86;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp86, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Play/Pause"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mediaPlayPause = sp[0].o;
	LINE_NUMBER(101);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mediaPrevious"_j));
	jint temp87 = 87;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp87, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Prev Media"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mediaPrevious = sp[0].o;
	LINE_NUMBER(102);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mediaRewind"_j));
	jint temp88 = 88;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp88, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Rewind"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mediaRewind = sp[0].o;
	LINE_NUMBER(103);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mediaStop"_j));
	jint temp89 = 89;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp89, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Stop Media"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mediaStop = sp[0].o;
	LINE_NUMBER(104);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"menu"_j));
	jint temp90 = 90;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp90, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Menu"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_menu = sp[0].o;
	LINE_NUMBER(105);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"minus"_j));
	jint temp91 = 91;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp91, sp[2].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_minus = sp[0].o;
	LINE_NUMBER(106);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mute"_j));
	jint temp92 = 92;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp92, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Mute"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_mute = sp[0].o;
	LINE_NUMBER(107);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"n"_j));
	jint temp93 = 93;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp93, sp[2].o, (((jobject) createStringLiteral(ctx, u8"N"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_n = sp[0].o;
	LINE_NUMBER(108);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"notification"_j));
	jint temp94 = 94;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp94, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Notification"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_notification = sp[0].o;
	LINE_NUMBER(109);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"num"_j));
	jint temp95 = 95;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp95, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Num"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_num = sp[0].o;
	LINE_NUMBER(110);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"o"_j));
	jint temp96 = 96;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp96, sp[2].o, (((jobject) createStringLiteral(ctx, u8"O"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_o = sp[0].o;
	LINE_NUMBER(111);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"p"_j));
	jint temp97 = 97;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp97, sp[2].o, (((jobject) createStringLiteral(ctx, u8"P"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_p = sp[0].o;
	LINE_NUMBER(112);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"period"_j));
	jint temp98 = 98;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp98, sp[2].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_period = sp[0].o;
	LINE_NUMBER(113);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"plus"_j));
	jint temp99 = 99;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp99, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Plus"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_plus = sp[0].o;
	LINE_NUMBER(114);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pound"_j));
	jint temp100 = 100;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp100, sp[2].o, (((jobject) createStringLiteral(ctx, u8"#"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_pound = sp[0].o;
	LINE_NUMBER(115);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"power"_j));
	jint temp101 = 101;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp101, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Power"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_power = sp[0].o;
	LINE_NUMBER(116);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"q"_j));
	jint temp102 = 102;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp102, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Q"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_q = sp[0].o;
	LINE_NUMBER(117);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"r"_j));
	jint temp103 = 103;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp103, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_r = sp[0].o;
	LINE_NUMBER(118);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rightBracket"_j));
	jint temp104 = 104;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp104, sp[2].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_rightBracket = sp[0].o;
	LINE_NUMBER(119);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"s"_j));
	jint temp105 = 105;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp105, sp[2].o, (((jobject) createStringLiteral(ctx, u8"S"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_s = sp[0].o;
	LINE_NUMBER(120);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"search"_j));
	jint temp106 = 106;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp106, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Search"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_search = sp[0].o;
	LINE_NUMBER(121);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"semicolon"_j));
	jint temp107 = 107;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp107, sp[2].o, (((jobject) createStringLiteral(ctx, u8";"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_semicolon = sp[0].o;
	LINE_NUMBER(122);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shiftLeft"_j));
	jint temp108 = 108;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp108, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L-Shift"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_shiftLeft = sp[0].o;
	LINE_NUMBER(123);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shiftRight"_j));
	jint temp109 = 109;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp109, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R-Shift"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_shiftRight = sp[0].o;
	LINE_NUMBER(124);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"slash"_j));
	jint temp110 = 110;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp110, sp[2].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_slash = sp[0].o;
	LINE_NUMBER(125);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"softLeft"_j));
	jint temp111 = 111;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp111, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Soft Left"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_softLeft = sp[0].o;
	LINE_NUMBER(126);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"softRight"_j));
	jint temp112 = 112;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp112, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Soft Right"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_softRight = sp[0].o;
	LINE_NUMBER(127);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"space"_j));
	jint temp113 = 113;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp113, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Space"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_space = sp[0].o;
	LINE_NUMBER(128);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"star"_j));
	jint temp114 = 114;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp114, sp[2].o, (((jobject) createStringLiteral(ctx, u8"*"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_star = sp[0].o;
	LINE_NUMBER(129);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sym"_j));
	jint temp115 = 115;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp115, sp[2].o, (((jobject) createStringLiteral(ctx, u8"SYM"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_sym = sp[0].o;
	LINE_NUMBER(130);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"t"_j));
	jint temp116 = 116;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp116, sp[2].o, (((jobject) createStringLiteral(ctx, u8"T"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_t = sp[0].o;
	LINE_NUMBER(131);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tab"_j));
	jint temp117 = 117;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp117, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Tab"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_tab = sp[0].o;
	LINE_NUMBER(132);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u"_j));
	jint temp118 = 118;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp118, sp[2].o, (((jobject) createStringLiteral(ctx, u8"U"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_u = sp[0].o;
	LINE_NUMBER(133);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unknown"_j));
	jint temp119 = 119;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp119, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Unknown"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_unknown = sp[0].o;
	LINE_NUMBER(134);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"v"_j));
	jint temp120 = 120;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp120, sp[2].o, (((jobject) createStringLiteral(ctx, u8"V"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_v = sp[0].o;
	LINE_NUMBER(135);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"volumeDown"_j));
	jint temp121 = 121;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp121, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Volume Down"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_volumeDown = sp[0].o;
	LINE_NUMBER(136);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"volumeUp"_j));
	jint temp122 = 122;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp122, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Volume Up"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_volumeUp = sp[0].o;
	LINE_NUMBER(137);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"w"_j));
	jint temp123 = 123;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp123, sp[2].o, (((jobject) createStringLiteral(ctx, u8"W"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_w = sp[0].o;
	LINE_NUMBER(138);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	jint temp124 = 124;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp124, sp[2].o, (((jobject) createStringLiteral(ctx, u8"X"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_x = sp[0].o;
	LINE_NUMBER(139);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	jint temp125 = 125;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp125, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Y"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_y = sp[0].o;
	LINE_NUMBER(140);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"z"_j));
	jint temp126 = 126;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp126, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Z"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_z = sp[0].o;
	LINE_NUMBER(141);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"metaAltLeftOn"_j));
	jint temp127 = 127;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp127, sp[2].o, (((jobject) createStringLiteral(ctx, u8"9"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_metaAltLeftOn = sp[0].o;
	LINE_NUMBER(142);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"metaAltOn"_j));
	jint temp128 = 128;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp128, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Soft Right"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_metaAltOn = sp[0].o;
	LINE_NUMBER(143);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"metaAltRightOn"_j));
	jint temp129 = 129;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp129, sp[2].o, (((jobject) createStringLiteral(ctx, u8"D"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_metaAltRightOn = sp[0].o;
	LINE_NUMBER(144);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"metaShiftLeftOn"_j));
	jint temp130 = 130;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp130, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Explorer"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_metaShiftLeftOn = sp[0].o;
	LINE_NUMBER(145);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"metaShiftOn"_j));
	jint temp131 = 131;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp131, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Soft Left"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_metaShiftOn = sp[0].o;
	LINE_NUMBER(146);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"metaShiftRightOn"_j));
	jint temp132 = 132;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp132, sp[2].o, (((jobject) createStringLiteral(ctx, u8"null"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_metaShiftRightOn = sp[0].o;
	LINE_NUMBER(147);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"metaSymOn"_j));
	jint temp133 = 133;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp133, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Back"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_metaSymOn = sp[0].o;
	LINE_NUMBER(148);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controlLeft"_j));
	jint temp134 = 134;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp134, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L-Ctrl"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controlLeft = sp[0].o;
	LINE_NUMBER(149);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controlRight"_j));
	jint temp135 = 135;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp135, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R-Ctrl"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_controlRight = sp[0].o;
	LINE_NUMBER(150);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"escape"_j));
	jint temp136 = 136;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp136, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Escape"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_escape = sp[0].o;
	LINE_NUMBER(151);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"end"_j));
	jint temp137 = 137;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp137, sp[2].o, (((jobject) createStringLiteral(ctx, u8"End"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_end = sp[0].o;
	LINE_NUMBER(152);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"insert"_j));
	jint temp138 = 138;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp138, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Insert"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_insert = sp[0].o;
	LINE_NUMBER(153);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pageUp"_j));
	jint temp139 = 139;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp139, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Page Up"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_pageUp = sp[0].o;
	LINE_NUMBER(154);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pageDown"_j));
	jint temp140 = 140;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp140, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Page Down"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_pageDown = sp[0].o;
	LINE_NUMBER(155);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pictSymbols"_j));
	jint temp141 = 141;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp141, sp[2].o, (((jobject) createStringLiteral(ctx, u8"PICTSYMBOLS"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_pictSymbols = sp[0].o;
	LINE_NUMBER(156);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"switchCharset"_j));
	jint temp142 = 142;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp142, sp[2].o, (((jobject) createStringLiteral(ctx, u8"switchCharset"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_switchCharset = sp[0].o;
	LINE_NUMBER(157);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonCircle"_j));
	jint temp143 = 143;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp143, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F12"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonCircle = sp[0].o;
	LINE_NUMBER(158);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonA"_j));
	jint temp144 = 144;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp144, sp[2].o, (((jobject) createStringLiteral(ctx, u8"A Button"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonA = sp[0].o;
	LINE_NUMBER(159);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonB"_j));
	jint temp145 = 145;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp145, sp[2].o, (((jobject) createStringLiteral(ctx, u8"B Button"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonB = sp[0].o;
	LINE_NUMBER(160);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonC"_j));
	jint temp146 = 146;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp146, sp[2].o, (((jobject) createStringLiteral(ctx, u8"C Button"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonC = sp[0].o;
	LINE_NUMBER(161);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonX"_j));
	jint temp147 = 147;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp147, sp[2].o, (((jobject) createStringLiteral(ctx, u8"X Button"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonX = sp[0].o;
	LINE_NUMBER(162);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonY"_j));
	jint temp148 = 148;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp148, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Y Button"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonY = sp[0].o;
	LINE_NUMBER(163);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonZ"_j));
	jint temp149 = 149;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp149, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Z Button"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonZ = sp[0].o;
	LINE_NUMBER(164);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonL1"_j));
	jint temp150 = 150;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp150, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L1 Button"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonL1 = sp[0].o;
	LINE_NUMBER(165);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonR1"_j));
	jint temp151 = 151;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp151, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R1 Button"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonR1 = sp[0].o;
	LINE_NUMBER(166);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonL2"_j));
	jint temp152 = 152;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp152, sp[2].o, (((jobject) createStringLiteral(ctx, u8"L2 Button"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonL2 = sp[0].o;
	LINE_NUMBER(167);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonR2"_j));
	jint temp153 = 153;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp153, sp[2].o, (((jobject) createStringLiteral(ctx, u8"R2 Button"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonR2 = sp[0].o;
	LINE_NUMBER(168);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonThumbL"_j));
	jint temp154 = 154;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp154, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Left Thumb"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonThumbL = sp[0].o;
	LINE_NUMBER(169);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonThumbR"_j));
	jint temp155 = 155;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp155, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Right Thumb"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonThumbR = sp[0].o;
	LINE_NUMBER(170);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonStart"_j));
	jint temp156 = 156;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp156, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Start"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonStart = sp[0].o;
	LINE_NUMBER(171);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonSelect"_j));
	jint temp157 = 157;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp157, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Select"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonSelect = sp[0].o;
	LINE_NUMBER(172);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buttonMode"_j));
	jint temp158 = 158;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp158, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Button Mode"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_buttonMode = sp[0].o;
	LINE_NUMBER(173);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"numpad0"_j));
	jint temp159 = 159;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp159, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Numpad 0"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numpad0 = sp[0].o;
	LINE_NUMBER(174);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"numpad1"_j));
	jint temp160 = 160;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp160, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Numpad 1"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numpad1 = sp[0].o;
	LINE_NUMBER(175);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"numpad2"_j));
	jint temp161 = 161;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp161, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Numpad 2"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numpad2 = sp[0].o;
	LINE_NUMBER(176);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"numpad3"_j));
	jint temp162 = 162;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp162, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Numpad 3"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numpad3 = sp[0].o;
	LINE_NUMBER(177);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"numpad4"_j));
	jint temp163 = 163;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp163, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Numpad 4"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numpad4 = sp[0].o;
	LINE_NUMBER(178);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"numpad5"_j));
	jint temp164 = 164;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp164, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Numpad 5"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numpad5 = sp[0].o;
	LINE_NUMBER(179);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"numpad6"_j));
	jint temp165 = 165;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp165, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Numpad 6"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numpad6 = sp[0].o;
	LINE_NUMBER(180);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"numpad7"_j));
	jint temp166 = 166;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp166, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Numpad 7"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numpad7 = sp[0].o;
	LINE_NUMBER(181);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"numpad8"_j));
	jint temp167 = 167;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp167, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Numpad 8"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numpad8 = sp[0].o;
	LINE_NUMBER(182);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"numpad9"_j));
	jint temp168 = 168;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp168, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Numpad 9"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numpad9 = sp[0].o;
	LINE_NUMBER(183);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"colon"_j));
	jint temp169 = 169;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp169, sp[2].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_colon = sp[0].o;
	LINE_NUMBER(184);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f1"_j));
	jint temp170 = 170;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp170, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F1"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f1 = sp[0].o;
	LINE_NUMBER(185);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f2"_j));
	jint temp171 = 171;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp171, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F2"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f2 = sp[0].o;
	LINE_NUMBER(186);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f3"_j));
	jint temp172 = 172;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp172, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F3"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f3 = sp[0].o;
	LINE_NUMBER(187);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f4"_j));
	jint temp173 = 173;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp173, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F4"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f4 = sp[0].o;
	LINE_NUMBER(188);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f5"_j));
	jint temp174 = 174;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp174, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F5"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f5 = sp[0].o;
	LINE_NUMBER(189);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f6"_j));
	jint temp175 = 175;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp175, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F6"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f6 = sp[0].o;
	LINE_NUMBER(190);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f7"_j));
	jint temp176 = 176;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp176, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F7"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f7 = sp[0].o;
	LINE_NUMBER(191);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f8"_j));
	jint temp177 = 177;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp177, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F8"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f8 = sp[0].o;
	LINE_NUMBER(192);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f9"_j));
	jint temp178 = 178;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp178, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F9"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f9 = sp[0].o;
	LINE_NUMBER(193);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f10"_j));
	jint temp179 = 179;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp179, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F10"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f10 = sp[0].o;
	LINE_NUMBER(194);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f11"_j));
	jint temp180 = 180;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp180, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F11"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f11 = sp[0].o;
	LINE_NUMBER(195);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"f12"_j));
	jint temp181 = 181;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp181, sp[2].o, (((jobject) createStringLiteral(ctx, u8"F12"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_f12 = sp[0].o;
	LINE_NUMBER(196);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unset"_j));
	jint temp182 = 182;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp182, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Unset"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_unset = sp[0].o;
	LINE_NUMBER(197);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"application"_j));
	jint temp183 = 183;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp183, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Application"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_application = sp[0].o;
	LINE_NUMBER(198);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"asterisk"_j));
	jint temp184 = 184;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp184, sp[2].o, (((jobject) createStringLiteral(ctx, u8"*"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_asterisk = sp[0].o;
	LINE_NUMBER(199);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"capsLock"_j));
	jint temp185 = 185;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp185, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Caps Lock"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_capsLock = sp[0].o;
	LINE_NUMBER(200);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pause"_j));
	jint temp186 = 186;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp186, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Pause"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_pause = sp[0].o;
	LINE_NUMBER(201);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"printScreen"_j));
	jint temp187 = 187;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp187, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Print Screen"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_printScreen = sp[0].o;
	LINE_NUMBER(202);
	clinit_arc_input_KeyCode(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyCode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"scrollLock"_j));
	jint temp188 = 188;
	clinit_arc_input_KeyCode$KeyType(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode$KeyType_key;
	init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String(ctx, sp[0].o, sp[1].o, temp188, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Scroll Lock"_j))));
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_scrollLock = sp[0].o;
	LINE_NUMBER(7);
	sp[0].o = (jobject)SM_arc_input_KeyCode_$values_R_Array1_arc_input_KeyCode(ctx);
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_$VALUES = sp[0].o;
	LINE_NUMBER(204);
	sp[0].o = (jobject)SM_arc_input_KeyCode_values_R_Array1_arc_input_KeyCode(ctx);
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_all = sp[0].o;
	LINE_NUMBER(205);
	sp[0].o = (jobject)createArray(ctx, &class_arc_input_KeyCode, (10));
	jint temp189 = jint(0);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num0;
	ARRAY_ACCESS(jobject, sp[0].o, temp189) = sp[1].o;
	jint temp190 = jint(1);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num1;
	ARRAY_ACCESS(jobject, sp[0].o, temp190) = sp[1].o;
	jint temp191 = jint(2);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num2;
	ARRAY_ACCESS(jobject, sp[0].o, temp191) = sp[1].o;
	jint temp192 = jint(3);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num3;
	ARRAY_ACCESS(jobject, sp[0].o, temp192) = sp[1].o;
	jint temp193 = jint(4);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num4;
	ARRAY_ACCESS(jobject, sp[0].o, temp193) = sp[1].o;
	jint temp194 = jint(5);
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num5;
	ARRAY_ACCESS(jobject, sp[0].o, temp194) = sp[1].o;
	jint temp195 = 6;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num6;
	ARRAY_ACCESS(jobject, sp[0].o, temp195) = sp[1].o;
	jint temp196 = 7;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num7;
	ARRAY_ACCESS(jobject, sp[0].o, temp196) = sp[1].o;
	jint temp197 = 8;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num8;
	ARRAY_ACCESS(jobject, sp[0].o, temp197) = sp[1].o;
	jint temp198 = 9;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num9;
	ARRAY_ACCESS(jobject, sp[0].o, temp198) = sp[1].o;
	clinit_arc_input_KeyCode(ctx);
	SF_arc_input_KeyCode_numbers = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_input_KeyCode[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_input_KeyCode_toString_R_java_lang_String,
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
	(void *) M_arc_input_KeyCode_getName_R_java_lang_String,
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
	{ "getName", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_arc_input_KeyBind$KeybindValue, };

static jclass innerClasses[] {
	&class_arc_input_KeyCode$KeyType,
};

static FieldMetadata fields[] {
	{ "controllerA", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerA, "Larc/input/KeyCode;", 16409 },
	{ "controllerB", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerB, "Larc/input/KeyCode;", 16409 },
	{ "controllerX", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerX, "Larc/input/KeyCode;", 16409 },
	{ "controllerY", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerY, "Larc/input/KeyCode;", 16409 },
	{ "controllerGuide", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerGuide, "Larc/input/KeyCode;", 16409 },
	{ "controllerLBumper", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerLBumper, "Larc/input/KeyCode;", 16409 },
	{ "controllerRBumper", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerRBumper, "Larc/input/KeyCode;", 16409 },
	{ "controllerBack", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerBack, "Larc/input/KeyCode;", 16409 },
	{ "controllerStart", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerStart, "Larc/input/KeyCode;", 16409 },
	{ "controllerLStick", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerLStick, "Larc/input/KeyCode;", 16409 },
	{ "controllerRStick", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerRStick, "Larc/input/KeyCode;", 16409 },
	{ "controllerdPadUp", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerdPadUp, "Larc/input/KeyCode;", 16409 },
	{ "controllerdPadDown", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerdPadDown, "Larc/input/KeyCode;", 16409 },
	{ "controllerdPadLeft", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerdPadLeft, "Larc/input/KeyCode;", 16409 },
	{ "controllerdPadRight", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerdPadRight, "Larc/input/KeyCode;", 16409 },
	{ "controllerLTrigger", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerLTrigger, "Larc/input/KeyCode;", 16409 },
	{ "controllerRTrigger", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerRTrigger, "Larc/input/KeyCode;", 16409 },
	{ "controllerLStickYAxis", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerLStickYAxis, "Larc/input/KeyCode;", 16409 },
	{ "controllerLStickXAxis", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerLStickXAxis, "Larc/input/KeyCode;", 16409 },
	{ "controllerRStickYAxis", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerRStickYAxis, "Larc/input/KeyCode;", 16409 },
	{ "controllerRStickXAxis", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controllerRStickXAxis, "Larc/input/KeyCode;", 16409 },
	{ "mouseLeft", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mouseLeft, "Larc/input/KeyCode;", 16409 },
	{ "mouseRight", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mouseRight, "Larc/input/KeyCode;", 16409 },
	{ "mouseMiddle", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mouseMiddle, "Larc/input/KeyCode;", 16409 },
	{ "mouseBack", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mouseBack, "Larc/input/KeyCode;", 16409 },
	{ "mouseForward", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mouseForward, "Larc/input/KeyCode;", 16409 },
	{ "scroll", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_scroll, "Larc/input/KeyCode;", 16409 },
	{ "anyKey", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_anyKey, "Larc/input/KeyCode;", 16409 },
	{ "num0", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num0, "Larc/input/KeyCode;", 16409 },
	{ "num1", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num1, "Larc/input/KeyCode;", 16409 },
	{ "num2", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num2, "Larc/input/KeyCode;", 16409 },
	{ "num3", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num3, "Larc/input/KeyCode;", 16409 },
	{ "num4", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num4, "Larc/input/KeyCode;", 16409 },
	{ "num5", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num5, "Larc/input/KeyCode;", 16409 },
	{ "num6", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num6, "Larc/input/KeyCode;", 16409 },
	{ "num7", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num7, "Larc/input/KeyCode;", 16409 },
	{ "num8", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num8, "Larc/input/KeyCode;", 16409 },
	{ "num9", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num9, "Larc/input/KeyCode;", 16409 },
	{ "a", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_a, "Larc/input/KeyCode;", 16409 },
	{ "altLeft", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_altLeft, "Larc/input/KeyCode;", 16409 },
	{ "altRight", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_altRight, "Larc/input/KeyCode;", 16409 },
	{ "apostrophe", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_apostrophe, "Larc/input/KeyCode;", 16409 },
	{ "at", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_at, "Larc/input/KeyCode;", 16409 },
	{ "b", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_b, "Larc/input/KeyCode;", 16409 },
	{ "back", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_back, "Larc/input/KeyCode;", 16409 },
	{ "backslash", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_backslash, "Larc/input/KeyCode;", 16409 },
	{ "c", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_c, "Larc/input/KeyCode;", 16409 },
	{ "call", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_call, "Larc/input/KeyCode;", 16409 },
	{ "camera", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_camera, "Larc/input/KeyCode;", 16409 },
	{ "clear", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_clear, "Larc/input/KeyCode;", 16409 },
	{ "comma", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_comma, "Larc/input/KeyCode;", 16409 },
	{ "d", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_d, "Larc/input/KeyCode;", 16409 },
	{ "del", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_del, "Larc/input/KeyCode;", 16409 },
	{ "backspace", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_backspace, "Larc/input/KeyCode;", 16409 },
	{ "forwardDel", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_forwardDel, "Larc/input/KeyCode;", 16409 },
	{ "dpadCenter", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_dpadCenter, "Larc/input/KeyCode;", 16409 },
	{ "dpadDown", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_dpadDown, "Larc/input/KeyCode;", 16409 },
	{ "dpadLeft", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_dpadLeft, "Larc/input/KeyCode;", 16409 },
	{ "dpadRight", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_dpadRight, "Larc/input/KeyCode;", 16409 },
	{ "dpadUp", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_dpadUp, "Larc/input/KeyCode;", 16409 },
	{ "center", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_center, "Larc/input/KeyCode;", 16409 },
	{ "down", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_down, "Larc/input/KeyCode;", 16409 },
	{ "left", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_left, "Larc/input/KeyCode;", 16409 },
	{ "right", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_right, "Larc/input/KeyCode;", 16409 },
	{ "up", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_up, "Larc/input/KeyCode;", 16409 },
	{ "e", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_e, "Larc/input/KeyCode;", 16409 },
	{ "endcall", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_endcall, "Larc/input/KeyCode;", 16409 },
	{ "enter", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_enter, "Larc/input/KeyCode;", 16409 },
	{ "envelope", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_envelope, "Larc/input/KeyCode;", 16409 },
	{ "equals", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_equals, "Larc/input/KeyCode;", 16409 },
	{ "explorer", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_explorer, "Larc/input/KeyCode;", 16409 },
	{ "f", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f, "Larc/input/KeyCode;", 16409 },
	{ "focus", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_focus, "Larc/input/KeyCode;", 16409 },
	{ "g", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_g, "Larc/input/KeyCode;", 16409 },
	{ "backtick", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_backtick, "Larc/input/KeyCode;", 16409 },
	{ "h", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_h, "Larc/input/KeyCode;", 16409 },
	{ "headsetHook", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_headsetHook, "Larc/input/KeyCode;", 16409 },
	{ "home", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_home, "Larc/input/KeyCode;", 16409 },
	{ "i", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_i, "Larc/input/KeyCode;", 16409 },
	{ "j", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_j, "Larc/input/KeyCode;", 16409 },
	{ "k", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_k, "Larc/input/KeyCode;", 16409 },
	{ "l", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_l, "Larc/input/KeyCode;", 16409 },
	{ "leftBracket", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_leftBracket, "Larc/input/KeyCode;", 16409 },
	{ "m", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_m, "Larc/input/KeyCode;", 16409 },
	{ "mediaFastForward", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mediaFastForward, "Larc/input/KeyCode;", 16409 },
	{ "mediaNext", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mediaNext, "Larc/input/KeyCode;", 16409 },
	{ "mediaPlayPause", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mediaPlayPause, "Larc/input/KeyCode;", 16409 },
	{ "mediaPrevious", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mediaPrevious, "Larc/input/KeyCode;", 16409 },
	{ "mediaRewind", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mediaRewind, "Larc/input/KeyCode;", 16409 },
	{ "mediaStop", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mediaStop, "Larc/input/KeyCode;", 16409 },
	{ "menu", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_menu, "Larc/input/KeyCode;", 16409 },
	{ "minus", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_minus, "Larc/input/KeyCode;", 16409 },
	{ "mute", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_mute, "Larc/input/KeyCode;", 16409 },
	{ "n", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_n, "Larc/input/KeyCode;", 16409 },
	{ "notification", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_notification, "Larc/input/KeyCode;", 16409 },
	{ "num", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_num, "Larc/input/KeyCode;", 16409 },
	{ "o", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_o, "Larc/input/KeyCode;", 16409 },
	{ "p", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_p, "Larc/input/KeyCode;", 16409 },
	{ "period", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_period, "Larc/input/KeyCode;", 16409 },
	{ "plus", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_plus, "Larc/input/KeyCode;", 16409 },
	{ "pound", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_pound, "Larc/input/KeyCode;", 16409 },
	{ "power", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_power, "Larc/input/KeyCode;", 16409 },
	{ "q", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_q, "Larc/input/KeyCode;", 16409 },
	{ "r", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_r, "Larc/input/KeyCode;", 16409 },
	{ "rightBracket", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_rightBracket, "Larc/input/KeyCode;", 16409 },
	{ "s", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_s, "Larc/input/KeyCode;", 16409 },
	{ "search", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_search, "Larc/input/KeyCode;", 16409 },
	{ "semicolon", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_semicolon, "Larc/input/KeyCode;", 16409 },
	{ "shiftLeft", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_shiftLeft, "Larc/input/KeyCode;", 16409 },
	{ "shiftRight", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_shiftRight, "Larc/input/KeyCode;", 16409 },
	{ "slash", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_slash, "Larc/input/KeyCode;", 16409 },
	{ "softLeft", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_softLeft, "Larc/input/KeyCode;", 16409 },
	{ "softRight", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_softRight, "Larc/input/KeyCode;", 16409 },
	{ "space", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_space, "Larc/input/KeyCode;", 16409 },
	{ "star", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_star, "Larc/input/KeyCode;", 16409 },
	{ "sym", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_sym, "Larc/input/KeyCode;", 16409 },
	{ "t", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_t, "Larc/input/KeyCode;", 16409 },
	{ "tab", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_tab, "Larc/input/KeyCode;", 16409 },
	{ "u", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_u, "Larc/input/KeyCode;", 16409 },
	{ "unknown", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_unknown, "Larc/input/KeyCode;", 16409 },
	{ "v", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_v, "Larc/input/KeyCode;", 16409 },
	{ "volumeDown", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_volumeDown, "Larc/input/KeyCode;", 16409 },
	{ "volumeUp", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_volumeUp, "Larc/input/KeyCode;", 16409 },
	{ "w", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_w, "Larc/input/KeyCode;", 16409 },
	{ "x", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_x, "Larc/input/KeyCode;", 16409 },
	{ "y", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_y, "Larc/input/KeyCode;", 16409 },
	{ "z", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_z, "Larc/input/KeyCode;", 16409 },
	{ "metaAltLeftOn", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_metaAltLeftOn, "Larc/input/KeyCode;", 16409 },
	{ "metaAltOn", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_metaAltOn, "Larc/input/KeyCode;", 16409 },
	{ "metaAltRightOn", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_metaAltRightOn, "Larc/input/KeyCode;", 16409 },
	{ "metaShiftLeftOn", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_metaShiftLeftOn, "Larc/input/KeyCode;", 16409 },
	{ "metaShiftOn", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_metaShiftOn, "Larc/input/KeyCode;", 16409 },
	{ "metaShiftRightOn", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_metaShiftRightOn, "Larc/input/KeyCode;", 16409 },
	{ "metaSymOn", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_metaSymOn, "Larc/input/KeyCode;", 16409 },
	{ "controlLeft", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controlLeft, "Larc/input/KeyCode;", 16409 },
	{ "controlRight", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_controlRight, "Larc/input/KeyCode;", 16409 },
	{ "escape", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_escape, "Larc/input/KeyCode;", 16409 },
	{ "end", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_end, "Larc/input/KeyCode;", 16409 },
	{ "insert", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_insert, "Larc/input/KeyCode;", 16409 },
	{ "pageUp", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_pageUp, "Larc/input/KeyCode;", 16409 },
	{ "pageDown", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_pageDown, "Larc/input/KeyCode;", 16409 },
	{ "pictSymbols", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_pictSymbols, "Larc/input/KeyCode;", 16409 },
	{ "switchCharset", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_switchCharset, "Larc/input/KeyCode;", 16409 },
	{ "buttonCircle", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonCircle, "Larc/input/KeyCode;", 16409 },
	{ "buttonA", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonA, "Larc/input/KeyCode;", 16409 },
	{ "buttonB", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonB, "Larc/input/KeyCode;", 16409 },
	{ "buttonC", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonC, "Larc/input/KeyCode;", 16409 },
	{ "buttonX", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonX, "Larc/input/KeyCode;", 16409 },
	{ "buttonY", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonY, "Larc/input/KeyCode;", 16409 },
	{ "buttonZ", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonZ, "Larc/input/KeyCode;", 16409 },
	{ "buttonL1", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonL1, "Larc/input/KeyCode;", 16409 },
	{ "buttonR1", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonR1, "Larc/input/KeyCode;", 16409 },
	{ "buttonL2", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonL2, "Larc/input/KeyCode;", 16409 },
	{ "buttonR2", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonR2, "Larc/input/KeyCode;", 16409 },
	{ "buttonThumbL", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonThumbL, "Larc/input/KeyCode;", 16409 },
	{ "buttonThumbR", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonThumbR, "Larc/input/KeyCode;", 16409 },
	{ "buttonStart", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonStart, "Larc/input/KeyCode;", 16409 },
	{ "buttonSelect", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonSelect, "Larc/input/KeyCode;", 16409 },
	{ "buttonMode", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_buttonMode, "Larc/input/KeyCode;", 16409 },
	{ "numpad0", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_numpad0, "Larc/input/KeyCode;", 16409 },
	{ "numpad1", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_numpad1, "Larc/input/KeyCode;", 16409 },
	{ "numpad2", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_numpad2, "Larc/input/KeyCode;", 16409 },
	{ "numpad3", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_numpad3, "Larc/input/KeyCode;", 16409 },
	{ "numpad4", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_numpad4, "Larc/input/KeyCode;", 16409 },
	{ "numpad5", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_numpad5, "Larc/input/KeyCode;", 16409 },
	{ "numpad6", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_numpad6, "Larc/input/KeyCode;", 16409 },
	{ "numpad7", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_numpad7, "Larc/input/KeyCode;", 16409 },
	{ "numpad8", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_numpad8, "Larc/input/KeyCode;", 16409 },
	{ "numpad9", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_numpad9, "Larc/input/KeyCode;", 16409 },
	{ "colon", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_colon, "Larc/input/KeyCode;", 16409 },
	{ "f1", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f1, "Larc/input/KeyCode;", 16409 },
	{ "f2", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f2, "Larc/input/KeyCode;", 16409 },
	{ "f3", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f3, "Larc/input/KeyCode;", 16409 },
	{ "f4", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f4, "Larc/input/KeyCode;", 16409 },
	{ "f5", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f5, "Larc/input/KeyCode;", 16409 },
	{ "f6", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f6, "Larc/input/KeyCode;", 16409 },
	{ "f7", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f7, "Larc/input/KeyCode;", 16409 },
	{ "f8", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f8, "Larc/input/KeyCode;", 16409 },
	{ "f9", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f9, "Larc/input/KeyCode;", 16409 },
	{ "f10", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f10, "Larc/input/KeyCode;", 16409 },
	{ "f11", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f11, "Larc/input/KeyCode;", 16409 },
	{ "f12", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_f12, "Larc/input/KeyCode;", 16409 },
	{ "unset", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_unset, "Larc/input/KeyCode;", 16409 },
	{ "application", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_application, "Larc/input/KeyCode;", 16409 },
	{ "asterisk", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_asterisk, "Larc/input/KeyCode;", 16409 },
	{ "capsLock", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_capsLock, "Larc/input/KeyCode;", 16409 },
	{ "pause", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_pause, "Larc/input/KeyCode;", 16409 },
	{ "printScreen", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_printScreen, "Larc/input/KeyCode;", 16409 },
	{ "scrollLock", &class_arc_input_KeyCode, (intptr_t) &SF_arc_input_KeyCode_scrollLock, "Larc/input/KeyCode;", 16409 },
	{ "all", getArrayClass(&class_arc_input_KeyCode, 1), (intptr_t) &SF_arc_input_KeyCode_all, "[Larc/input/KeyCode;", 25 },
	{ "numbers", getArrayClass(&class_arc_input_KeyCode, 1), (intptr_t) &SF_arc_input_KeyCode_numbers, "[Larc/input/KeyCode;", 25 },
	{ "type", &class_arc_input_KeyCode$KeyType, offsetof(arc_input_KeyCode, F_type), "Larc/input/KeyCode$KeyType;", 17 },
	{ "value", &class_java_lang_String, offsetof(arc_input_KeyCode, F_value), "Ljava/lang/String;", 17 },
	{ "axis", &class_boolean, offsetof(arc_input_KeyCode, F_axis), "Z", 17 },
	{ "cachedName", &class_java_lang_String, offsetof(arc_input_KeyCode, F_cachedName), "Ljava/lang/String;", 2 },
	{ "$VALUES", getArrayClass(&class_arc_input_KeyCode, 1), (intptr_t) &SF_arc_input_KeyCode_$VALUES, "[Larc/input/KeyCode;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_input_KeyCode_values_R_Array1_arc_input_KeyCode, 0, "()[Larc/input/KeyCode;", 9 },
	{ "valueOf", (intptr_t) SM_arc_input_KeyCode_valueOf_java_lang_String_R_arc_input_KeyCode, 0, "(Ljava/lang/String;)Larc/input/KeyCode;", 9 },
	{ "<init>", (intptr_t) init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String, 0, "(Ljava/lang/String;ILarc/input/KeyCode$KeyType;Ljava/lang/String;)V", 2 },
	{ "<init>", (intptr_t) init_arc_input_KeyCode_java_lang_String_int_arc_input_KeyCode$KeyType_java_lang_String_boolean, 0, "(Ljava/lang/String;ILarc/input/KeyCode$KeyType;Ljava/lang/String;Z)V", 2 },
	{ "byOrdinal", (intptr_t) SM_arc_input_KeyCode_byOrdinal_int_R_arc_input_KeyCode, 0, "(I)Larc/input/KeyCode;", 9 },
	{ "getName", (intptr_t) M_arc_input_KeyCode_getName_R_java_lang_String, VTABLE_arc_input_KeyCode_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_input_KeyCode_toString_R_java_lang_String, VTABLE_arc_input_KeyCode_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "$values", (intptr_t) SM_arc_input_KeyCode_$values_R_Array1_arc_input_KeyCode, 0, "()[Larc/input/KeyCode;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_input_KeyCode, 0, "()V", 8 },
};

Class class_arc_input_KeyCode{
		.nativeName = (intptr_t) "arc/input/KeyCode",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_input_KeyCode),
		.classVtable = (intptr_t) vtable_arc_input_KeyCode,
		.staticInitializer = (intptr_t) clinit_arc_input_KeyCode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_input_KeyCode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 16433,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 196,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_input_KeyCode = registerClass(&class_arc_input_KeyCode);

}
