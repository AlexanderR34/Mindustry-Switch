#ifndef HEADER_rhino_NativeDate
#define HEADER_rhino_NativeDate

#include "Clearwing.h"
#include "rhino/IdScriptableObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeDate {
	rhino_IdScriptableObject parent;
	jdouble F_date;
} rhino_NativeDate;

extern Class class_rhino_NativeDate;

extern jobject SF_rhino_NativeDate_DATE_TAG;
extern jobject SF_rhino_NativeDate_js_NaN_date_str;
extern jdouble SF_rhino_NativeDate_HalfTimeDomain;
extern jdouble SF_rhino_NativeDate_HoursPerDay;
extern jdouble SF_rhino_NativeDate_MinutesPerHour;
extern jdouble SF_rhino_NativeDate_SecondsPerMinute;
extern jdouble SF_rhino_NativeDate_msPerSecond;
extern jdouble SF_rhino_NativeDate_MinutesPerDay;
extern jdouble SF_rhino_NativeDate_SecondsPerDay;
extern jdouble SF_rhino_NativeDate_SecondsPerHour;
extern jdouble SF_rhino_NativeDate_msPerDay;
extern jdouble SF_rhino_NativeDate_msPerHour;
extern jdouble SF_rhino_NativeDate_msPerMinute;
extern jint SF_rhino_NativeDate_MAXARGS;
extern jint SF_rhino_NativeDate_ConstructorId_now;
extern jint SF_rhino_NativeDate_ConstructorId_parse;
extern jint SF_rhino_NativeDate_ConstructorId_UTC;
extern jint SF_rhino_NativeDate_Id_constructor;
extern jint SF_rhino_NativeDate_Id_toString;
extern jint SF_rhino_NativeDate_Id_toTimeString;
extern jint SF_rhino_NativeDate_Id_toDateString;
extern jint SF_rhino_NativeDate_Id_toLocaleString;
extern jint SF_rhino_NativeDate_Id_toLocaleTimeString;
extern jint SF_rhino_NativeDate_Id_toLocaleDateString;
extern jint SF_rhino_NativeDate_Id_toUTCString;
extern jint SF_rhino_NativeDate_Id_toSource;
extern jint SF_rhino_NativeDate_Id_valueOf;
extern jint SF_rhino_NativeDate_Id_getTime;
extern jint SF_rhino_NativeDate_Id_getYear;
extern jint SF_rhino_NativeDate_Id_getFullYear;
extern jint SF_rhino_NativeDate_Id_getUTCFullYear;
extern jint SF_rhino_NativeDate_Id_getMonth;
extern jint SF_rhino_NativeDate_Id_getUTCMonth;
extern jint SF_rhino_NativeDate_Id_getDate;
extern jint SF_rhino_NativeDate_Id_getUTCDate;
extern jint SF_rhino_NativeDate_Id_getDay;
extern jint SF_rhino_NativeDate_Id_getUTCDay;
extern jint SF_rhino_NativeDate_Id_getHours;
extern jint SF_rhino_NativeDate_Id_getUTCHours;
extern jint SF_rhino_NativeDate_Id_getMinutes;
extern jint SF_rhino_NativeDate_Id_getUTCMinutes;
extern jint SF_rhino_NativeDate_Id_getSeconds;
extern jint SF_rhino_NativeDate_Id_getUTCSeconds;
extern jint SF_rhino_NativeDate_Id_getMilliseconds;
extern jint SF_rhino_NativeDate_Id_getUTCMilliseconds;
extern jint SF_rhino_NativeDate_Id_getTimezoneOffset;
extern jint SF_rhino_NativeDate_Id_setTime;
extern jint SF_rhino_NativeDate_Id_setMilliseconds;
extern jint SF_rhino_NativeDate_Id_setUTCMilliseconds;
extern jint SF_rhino_NativeDate_Id_setSeconds;
extern jint SF_rhino_NativeDate_Id_setUTCSeconds;
extern jint SF_rhino_NativeDate_Id_setMinutes;
extern jint SF_rhino_NativeDate_Id_setUTCMinutes;
extern jint SF_rhino_NativeDate_Id_setHours;
extern jint SF_rhino_NativeDate_Id_setUTCHours;
extern jint SF_rhino_NativeDate_Id_setDate;
extern jint SF_rhino_NativeDate_Id_setUTCDate;
extern jint SF_rhino_NativeDate_Id_setMonth;
extern jint SF_rhino_NativeDate_Id_setUTCMonth;
extern jint SF_rhino_NativeDate_Id_setFullYear;
extern jint SF_rhino_NativeDate_Id_setUTCFullYear;
extern jint SF_rhino_NativeDate_Id_setYear;
extern jint SF_rhino_NativeDate_Id_toISOString;
extern jint SF_rhino_NativeDate_Id_toJSON;
extern jint SF_rhino_NativeDate_MAX_PROTOTYPE_ID;
extern jint SF_rhino_NativeDate_Id_toGMTString;
extern jobject SF_rhino_NativeDate_thisTimeZone;
extern jdouble SF_rhino_NativeDate_LocalTZA;
extern jobject SF_rhino_NativeDate_timeZoneFormatter;
extern jobject SF_rhino_NativeDate_localeDateTimeFormatter;
extern jobject SF_rhino_NativeDate_localeDateFormatter;
extern jobject SF_rhino_NativeDate_localeTimeFormatter;
extern jbool SF_rhino_NativeDate_$assertionsDisabled;

#define VTABLE_rhino_NativeDate_hashCode_R_int 0
typedef jint (*func_rhino_NativeDate_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeDate_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeDate_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeDate_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeDate_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_finalize 5
typedef void (*func_rhino_NativeDate_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_notify 6
typedef void (*func_rhino_NativeDate_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_notifyAll 7
typedef void (*func_rhino_NativeDate_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_wait 8
typedef void (*func_rhino_NativeDate_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_wait_long 9
typedef void (*func_rhino_NativeDate_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeDate_wait_long_int 10
typedef void (*func_rhino_NativeDate_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeDate_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_NativeDate_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_get_java_lang_String_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeDate_get_java_lang_String_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_get_int_rhino_Scriptable_R_java_lang_Object 13
typedef jobject (*func_rhino_NativeDate_get_int_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeDate_has_java_lang_String_rhino_Scriptable_R_boolean 14
typedef jbool (*func_rhino_NativeDate_has_java_lang_String_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_has_int_rhino_Scriptable_R_boolean 15
typedef jbool (*func_rhino_NativeDate_has_int_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeDate_put_java_lang_String_rhino_Scriptable_java_lang_Object 16
typedef void (*func_rhino_NativeDate_put_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeDate_put_int_rhino_Scriptable_java_lang_Object 17
typedef void (*func_rhino_NativeDate_put_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeDate_delete_java_lang_String 18
typedef void (*func_rhino_NativeDate_delete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_delete_int 19
typedef void (*func_rhino_NativeDate_delete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeDate_getPrototype_R_rhino_Scriptable 20
typedef jobject (*func_rhino_NativeDate_getPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_setPrototype_rhino_Scriptable 21
typedef void (*func_rhino_NativeDate_setPrototype_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_getParentScope_R_rhino_Scriptable 22
typedef jobject (*func_rhino_NativeDate_getParentScope_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_setParentScope_rhino_Scriptable 23
typedef void (*func_rhino_NativeDate_setParentScope_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_getIds_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_NativeDate_getIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_getDefaultValue_java_lang_Class_R_java_lang_Object 25
typedef jobject (*func_rhino_NativeDate_getDefaultValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_hasInstance_rhino_Scriptable_R_boolean 26
typedef jbool (*func_rhino_NativeDate_hasInstance_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object 27
typedef jobject (*func_rhino_NativeDate_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_has_rhino_Symbol_rhino_Scriptable_R_boolean 28
typedef jbool (*func_rhino_NativeDate_has_rhino_Symbol_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_put_rhino_Symbol_rhino_Scriptable_java_lang_Object 29
typedef void (*func_rhino_NativeDate_put_rhino_Symbol_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeDate_delete_rhino_Symbol 30
typedef void (*func_rhino_NativeDate_delete_rhino_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_getAllIds_R_Array1_java_lang_Object 31
typedef jobject (*func_rhino_NativeDate_getAllIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_putConst_java_lang_String_rhino_Scriptable_java_lang_Object 32
typedef void (*func_rhino_NativeDate_putConst_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeDate_defineConst_java_lang_String_rhino_Scriptable 33
typedef void (*func_rhino_NativeDate_defineConst_java_lang_String_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_isConst_java_lang_String_R_boolean 34
typedef jbool (*func_rhino_NativeDate_isConst_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_createSlotMap_int_R_rhino_SlotMapContainer 35
typedef jobject (*func_rhino_NativeDate_createSlotMap_int_R_rhino_SlotMapContainer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeDate_getTypeOf_R_java_lang_String 36
typedef jobject (*func_rhino_NativeDate_getTypeOf_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_getAttributes_java_lang_String_R_int 37
typedef jint (*func_rhino_NativeDate_getAttributes_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_getAttributes_int_R_int 38
typedef jint (*func_rhino_NativeDate_getAttributes_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeDate_getAttributes_rhino_Symbol_R_int 39
typedef jint (*func_rhino_NativeDate_getAttributes_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_setAttributes_java_lang_String_int 40
typedef void (*func_rhino_NativeDate_setAttributes_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_NativeDate_setAttributes_int_int 41
typedef void (*func_rhino_NativeDate_setAttributes_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_NativeDate_setAttributes_rhino_Symbol_int 42
typedef void (*func_rhino_NativeDate_setAttributes_rhino_Symbol_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_NativeDate_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean 43
typedef void (*func_rhino_NativeDate_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3);
#define VTABLE_rhino_NativeDate_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean 44
typedef void (*func_rhino_NativeDate_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3, jbool param4);
#define VTABLE_rhino_NativeDate_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object 45
typedef jobject (*func_rhino_NativeDate_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_rhino_NativeDate_isGetterOrSetter_java_lang_String_int_boolean_R_boolean 46
typedef jbool (*func_rhino_NativeDate_isGetterOrSetter_java_lang_String_int_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_rhino_NativeDate_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int 47
typedef void (*func_rhino_NativeDate_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeDate_setExternalArrayData_rhino_ExternalArrayData 48
typedef void (*func_rhino_NativeDate_setExternalArrayData_rhino_ExternalArrayData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_getExternalArrayData_R_rhino_ExternalArrayData 49
typedef jobject (*func_rhino_NativeDate_getExternalArrayData_R_rhino_ExternalArrayData)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_getExternalArrayLength_R_java_lang_Object 50
typedef jobject (*func_rhino_NativeDate_getExternalArrayLength_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_avoidObjectDetection_R_boolean 51
typedef jbool (*func_rhino_NativeDate_avoidObjectDetection_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_equivalentValues_java_lang_Object_R_java_lang_Object 52
typedef jobject (*func_rhino_NativeDate_equivalentValues_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_defineProperty_java_lang_String_java_lang_Object_int 53
typedef void (*func_rhino_NativeDate_defineProperty_java_lang_String_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeDate_defineProperty_rhino_Symbol_java_lang_Object_int 54
typedef void (*func_rhino_NativeDate_defineProperty_rhino_Symbol_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeDate_defineProperty_java_lang_String_java_lang_Class_int 55
typedef void (*func_rhino_NativeDate_defineProperty_java_lang_String_java_lang_Class_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeDate_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int 56
typedef void (*func_rhino_NativeDate_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeDate_defineOwnProperties_rhino_Context_rhino_ScriptableObject 57
typedef void (*func_rhino_NativeDate_defineOwnProperties_rhino_Context_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject 58
typedef void (*func_rhino_NativeDate_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeDate_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean 59
typedef void (*func_rhino_NativeDate_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
#define VTABLE_rhino_NativeDate_checkPropertyDefinition_rhino_ScriptableObject 60
typedef void (*func_rhino_NativeDate_checkPropertyDefinition_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject 61
typedef void (*func_rhino_NativeDate_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeDate_sameValue_java_lang_Object_java_lang_Object_R_boolean 62
typedef jbool (*func_rhino_NativeDate_sameValue_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int 63
typedef jint (*func_rhino_NativeDate_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeDate_isDataDescriptor_rhino_ScriptableObject_R_boolean 64
typedef jbool (*func_rhino_NativeDate_isDataDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_isAccessorDescriptor_rhino_ScriptableObject_R_boolean 65
typedef jbool (*func_rhino_NativeDate_isAccessorDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_isGenericDescriptor_rhino_ScriptableObject_R_boolean 66
typedef jbool (*func_rhino_NativeDate_isGenericDescriptor_rhino_ScriptableObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int 67
typedef void (*func_rhino_NativeDate_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_NativeDate_isExtensible_R_boolean 68
typedef jbool (*func_rhino_NativeDate_isExtensible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_preventExtensions 69
typedef void (*func_rhino_NativeDate_preventExtensions)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_sealObject 70
typedef void (*func_rhino_NativeDate_sealObject)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_isSealed_R_boolean 71
typedef jbool (*func_rhino_NativeDate_isSealed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_checkNotSealed_java_lang_Object_int 72
typedef void (*func_rhino_NativeDate_checkNotSealed_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_NativeDate_getAssociatedValue_java_lang_Object_R_java_lang_Object 73
typedef jobject (*func_rhino_NativeDate_getAssociatedValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object 74
typedef jobject (*func_rhino_NativeDate_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean 75
typedef jbool (*func_rhino_NativeDate_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
#define VTABLE_rhino_NativeDate_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean 76
typedef jbool (*func_rhino_NativeDate_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeDate_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 77
typedef jobject (*func_rhino_NativeDate_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_rhino_NativeDate_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 78
typedef jobject (*func_rhino_NativeDate_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_getIds_boolean_boolean_R_Array1_java_lang_Object 79
typedef jobject (*func_rhino_NativeDate_getIds_boolean_boolean_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_rhino_NativeDate_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject 80
typedef jobject (*func_rhino_NativeDate_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot 81
typedef jobject (*func_rhino_NativeDate_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeDate_size_R_int 82
typedef jint (*func_rhino_NativeDate_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_isEmpty_R_boolean 83
typedef jbool (*func_rhino_NativeDate_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_get_java_lang_Object_R_java_lang_Object 84
typedef jobject (*func_rhino_NativeDate_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 85
typedef jobject (*func_rhino_NativeDate_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_NativeDate_defaultHas_java_lang_String_R_boolean 86
typedef jbool (*func_rhino_NativeDate_defaultHas_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_defaultGet_java_lang_String_R_java_lang_Object 87
typedef jobject (*func_rhino_NativeDate_defaultGet_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_defaultPut_java_lang_String_java_lang_Object 88
typedef void (*func_rhino_NativeDate_defaultPut_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeDate_getMaxInstanceId_R_int 89
typedef jint (*func_rhino_NativeDate_getMaxInstanceId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_findInstanceIdInfo_java_lang_String_R_int 90
typedef jint (*func_rhino_NativeDate_findInstanceIdInfo_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_findInstanceIdInfo_rhino_Symbol_R_int 91
typedef jint (*func_rhino_NativeDate_findInstanceIdInfo_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_getInstanceIdName_int_R_java_lang_String 92
typedef jobject (*func_rhino_NativeDate_getInstanceIdName_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeDate_getInstanceIdValue_int_R_java_lang_Object 93
typedef jobject (*func_rhino_NativeDate_getInstanceIdValue_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeDate_setInstanceIdValue_int_java_lang_Object 94
typedef void (*func_rhino_NativeDate_setInstanceIdValue_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeDate_setInstanceIdAttributes_int_int 95
typedef void (*func_rhino_NativeDate_setInstanceIdAttributes_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_NativeDate_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject 96
typedef jobject (*func_rhino_NativeDate_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_rhino_NativeDate_hasPrototypeMap_R_boolean 97
typedef jbool (*func_rhino_NativeDate_hasPrototypeMap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeDate_activatePrototypeMap_int 98
typedef void (*func_rhino_NativeDate_activatePrototypeMap_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeDate_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject 99
typedef jobject (*func_rhino_NativeDate_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeDate_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject 100
typedef jobject (*func_rhino_NativeDate_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeDate_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject 101
typedef jobject (*func_rhino_NativeDate_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeDate_initPrototypeConstructor_rhino_IdFunctionObject 102
typedef void (*func_rhino_NativeDate_initPrototypeConstructor_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_initPrototypeValue_int_java_lang_String_java_lang_Object_int 103
typedef void (*func_rhino_NativeDate_initPrototypeValue_int_java_lang_String_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeDate_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int 104
typedef void (*func_rhino_NativeDate_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_NativeDate_initPrototypeId_int 105
typedef void (*func_rhino_NativeDate_initPrototypeId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeDate_findPrototypeId_java_lang_String_R_int 106
typedef jint (*func_rhino_NativeDate_findPrototypeId_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_findPrototypeId_rhino_Symbol_R_int 107
typedef jint (*func_rhino_NativeDate_findPrototypeId_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_fillConstructorProperties_rhino_IdFunctionObject 108
typedef void (*func_rhino_NativeDate_fillConstructorProperties_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int 109
typedef void (*func_rhino_NativeDate_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define VTABLE_rhino_NativeDate_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject 110
typedef jobject (*func_rhino_NativeDate_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jobject param4);
#define VTABLE_rhino_NativeDate_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject 111
typedef jobject (*func_rhino_NativeDate_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject 112
typedef jobject (*func_rhino_NativeDate_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeDate_getJSTimeValue_R_double 113
typedef jdouble (*func_rhino_NativeDate_getJSTimeValue_R_double)(jcontext ctx, jobject self);

void mark_rhino_NativeDate(jobject object, jint mark, jint depth);
void clinit_rhino_NativeDate(jcontext ctx);
void SM_rhino_NativeDate_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1);
void init_rhino_NativeDate(jcontext ctx, jobject self);
jobject M_rhino_NativeDate_getClassName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_NativeDate_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jdouble M_rhino_NativeDate_getJSTimeValue_R_double(jcontext ctx, jobject self);
void M_rhino_NativeDate_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0);
void M_rhino_NativeDate_initPrototypeId_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_NativeDate_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jdouble SM_rhino_NativeDate_Day_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_rhino_NativeDate_TimeWithinDay_double_R_double(jcontext ctx, jdouble param0);
jbool SM_rhino_NativeDate_IsLeapYear_int_R_boolean(jcontext ctx, jint param0);
jdouble SM_rhino_NativeDate_DayFromYear_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_rhino_NativeDate_TimeFromYear_double_R_double(jcontext ctx, jdouble param0);
jint SM_rhino_NativeDate_YearFromTime_double_R_int(jcontext ctx, jdouble param0);
jdouble SM_rhino_NativeDate_DayFromMonth_int_int_R_double(jcontext ctx, jint param0, jint param1);
jdouble SM_rhino_NativeDate_DaysInYear_double_R_double(jcontext ctx, jdouble param0);
jint SM_rhino_NativeDate_DaysInMonth_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_rhino_NativeDate_MonthFromTime_double_R_int(jcontext ctx, jdouble param0);
jint SM_rhino_NativeDate_DateFromTime_double_R_int(jcontext ctx, jdouble param0);
jint SM_rhino_NativeDate_WeekDay_double_R_int(jcontext ctx, jdouble param0);
jdouble SM_rhino_NativeDate_now_R_double(jcontext ctx);
jdouble SM_rhino_NativeDate_DaylightSavingTA_double_R_double(jcontext ctx, jdouble param0);
jint SM_rhino_NativeDate_EquivalentYear_int_R_int(jcontext ctx, jint param0);
jdouble SM_rhino_NativeDate_LocalTime_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_rhino_NativeDate_internalUTC_double_R_double(jcontext ctx, jdouble param0);
jint SM_rhino_NativeDate_HourFromTime_double_R_int(jcontext ctx, jdouble param0);
jint SM_rhino_NativeDate_MinFromTime_double_R_int(jcontext ctx, jdouble param0);
jint SM_rhino_NativeDate_SecFromTime_double_R_int(jcontext ctx, jdouble param0);
jint SM_rhino_NativeDate_msFromTime_double_R_int(jcontext ctx, jdouble param0);
jdouble SM_rhino_NativeDate_MakeTime_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3);
jdouble SM_rhino_NativeDate_MakeDay_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2);
jdouble SM_rhino_NativeDate_MakeDate_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_rhino_NativeDate_TimeClip_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_rhino_NativeDate_date_msecFromDate_double_double_double_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6);
jdouble SM_rhino_NativeDate_date_msecFromArgs_Array1_java_lang_Object_R_double(jcontext ctx, jobject param0);
jdouble SM_rhino_NativeDate_jsStaticFunction_UTC_Array1_java_lang_Object_R_double(jcontext ctx, jobject param0);
jdouble SM_rhino_NativeDate_parseISOString_java_lang_String_R_double(jcontext ctx, jobject param0);
jdouble SM_rhino_NativeDate_date_parseString_java_lang_String_R_double(jcontext ctx, jobject param0);
jobject SM_rhino_NativeDate_date_format_double_int_R_java_lang_String(jcontext ctx, jdouble param0, jint param1);
jobject SM_rhino_NativeDate_jsConstructor_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_rhino_NativeDate_toLocale_helper_double_int_R_java_lang_String(jcontext ctx, jdouble param0, jint param1);
jobject SM_rhino_NativeDate_js_toUTCString_double_R_java_lang_String(jcontext ctx, jdouble param0);
jobject SM_rhino_NativeDate_js_toISOString_double_R_java_lang_String(jcontext ctx, jdouble param0);
void SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_rhino_NativeDate_appendMonthName_java_lang_StringBuilder_int(jcontext ctx, jobject param0, jint param1);
void SM_rhino_NativeDate_appendWeekDayName_java_lang_StringBuilder_int(jcontext ctx, jobject param0, jint param1);
jdouble SM_rhino_NativeDate_makeTime_double_Array1_java_lang_Object_int_R_double(jcontext ctx, jdouble param0, jobject param1, jint param2);
jdouble SM_rhino_NativeDate_makeDate_double_Array1_java_lang_Object_int_R_double(jcontext ctx, jdouble param0, jobject param1, jint param2);
jint M_rhino_NativeDate_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
