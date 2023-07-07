#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
174,
179,
180,
181,
182,
183,
184,
185,
187,
188,
233,
234,
236,
259,
260,
261,
271,
272,
273,
274,
275,
342,
343,
344,
347,
377,
378,
380,
382,
384,
386,
391,
399,
400,
401,
402,
403,
404,
405,
406,
407,
408,
504,
505,
512,
515,
517,
522,
523,
525,
526,
530,
531,
532,
533,
535,
536,
537,
540,
542,
543,
544,
605,
606,
608,
616,
617,
618,
619,
620,
624,
625,
626,
627,
628,
629,
631,
632,
633,
635,
636,
637,
639,
824,
967,
968,
4762,
4763,
4765,
4766,
4767,
4768,
4769,
4771,
4773,
4775,
4776,
4783,
4785,
4789,
4790,
4792,
4794,
4796,
4807,
4816,
4817,
4819,
4820,
4821,
4822,
4823,
4825,
4827,
5658,
5662,
5664,
5665,
5666,
5667,
5696,
5697,
5698,
5713,
5714,
5715,
5716,
5746,
5789,
5799,
5800,
5801,
6048,
6050,
6051,
6075,
6076,
6077,
6091,
6097,
6104,
6114,
6117,
6185,
6191,
6192,
6193,
6194,
6200,
6213,
6233,
6234,
6242,
6244,
6251,
6252,
6255,
6257,
6262,
6268,
6269,
6276,
6278,
6288,
6291,
6292,
6293,
6303,
6314,
6320,
6321,
6322,
6324,
6325,
6335,
6353,
6366,
6385,
6409,
6410,
6742,
6871,
7048,
7049,
7052,
7055,
7103,
7254,
7255,
8194,
8213,
8220,
8221,
8223,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 174,
ves_icall_System_Array_InternalCreate,
// token 179,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 180,
ves_icall_System_Array_CanChangePrimitive,
// token 181,
ves_icall_System_Array_FastCopy_raw,
// token 182,
ves_icall_System_Array_GetLength_raw,
// token 183,
ves_icall_System_Array_GetLowerBound_raw,
// token 184,
ves_icall_System_Array_GetGenericValue_icall,
// token 185,
ves_icall_System_Array_GetValueImpl_raw,
// token 187,
ves_icall_System_Array_SetValueImpl_raw,
// token 188,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 233,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 234,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 236,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 259,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 260,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 261,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 271,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 272,
ves_icall_System_Enum_ToObject_raw,
// token 273,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 274,
ves_icall_System_Enum_get_underlying_type_raw,
// token 275,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 342,
ves_icall_System_Environment_get_ProcessorCount,
// token 343,
ves_icall_System_Environment_get_TickCount,
// token 344,
ves_icall_System_Environment_get_TickCount64,
// token 347,
ves_icall_System_Environment_FailFast_raw,
// token 377,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 378,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 380,
ves_icall_System_GC_SuppressFinalize_raw,
// token 382,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 384,
ves_icall_System_GC_GetGCMemoryInfo,
// token 386,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 391,
ves_icall_System_Object_MemberwiseClone_raw,
// token 399,
ves_icall_System_Math_Abs_double,
// token 400,
ves_icall_System_Math_Ceiling,
// token 401,
ves_icall_System_Math_Cos,
// token 402,
ves_icall_System_Math_Floor,
// token 403,
ves_icall_System_Math_Log10,
// token 404,
ves_icall_System_Math_Pow,
// token 405,
ves_icall_System_Math_Sin,
// token 406,
ves_icall_System_Math_Sqrt,
// token 407,
ves_icall_System_Math_Tan,
// token 408,
ves_icall_System_Math_ModF,
// token 504,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 505,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 512,
ves_icall_RuntimeType_make_array_type_raw,
// token 515,
ves_icall_RuntimeType_make_byref_type_raw,
// token 517,
ves_icall_RuntimeType_MakePointerType_raw,
// token 522,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 523,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 525,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 526,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 530,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 531,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 532,
ves_icall_System_RuntimeType_getFullName_raw,
// token 533,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 535,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 536,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 537,
ves_icall_RuntimeType_GetFields_native_raw,
// token 540,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 542,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 543,
ves_icall_RuntimeType_get_Name_raw,
// token 544,
ves_icall_RuntimeType_get_Namespace_raw,
// token 605,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 606,
ves_icall_reflection_get_token_raw,
// token 608,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 616,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 617,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 618,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 619,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 620,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 624,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 625,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 626,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 627,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 628,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 629,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 631,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 632,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 633,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 635,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 636,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 637,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 639,
ves_icall_System_String_FastAllocateString_raw,
// token 824,
ves_icall_System_Type_internal_from_handle_raw,
// token 967,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 968,
ves_icall_System_ValueType_Equals_raw,
// token 4762,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 4763,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 4765,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 4766,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 4767,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 4768,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 4769,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 4771,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 4773,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 4775,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 4776,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 4783,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 4785,
mono_monitor_exit_icall_raw,
// token 4789,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 4790,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 4792,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 4794,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 4796,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 4807,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 4816,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 4817,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 4819,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 4820,
ves_icall_System_Threading_Thread_GetState_raw,
// token 4821,
ves_icall_System_Threading_Thread_SetState_raw,
// token 4822,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 4823,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 4825,
ves_icall_System_Threading_Thread_YieldInternal,
// token 4827,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 5658,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 5662,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 5664,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 5665,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 5666,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 5667,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 5696,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 5697,
ves_icall_System_GCHandle_InternalFree_raw,
// token 5698,
ves_icall_System_GCHandle_InternalGet_raw,
// token 5713,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 5714,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 5715,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 5716,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 5746,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 5789,
mono_object_hash_icall_raw,
// token 5799,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 5800,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 5801,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6048,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6050,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6051,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6075,
mono_digest_get_public_token,
// token 6076,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6077,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6091,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6097,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6104,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6114,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6117,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6185,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6191,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6192,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6193,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6194,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6200,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6213,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6233,
ves_icall_reflection_get_token_raw,
// token 6234,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6242,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6244,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6251,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6252,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6255,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6257,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6262,
ves_icall_reflection_get_token_raw,
// token 6268,
ves_icall_get_method_info_raw,
// token 6269,
ves_icall_get_method_attributes,
// token 6276,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6278,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6288,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6291,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6292,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6293,
ves_icall_reflection_get_token_raw,
// token 6303,
ves_icall_InternalInvoke_raw,
// token 6314,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6320,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6321,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6322,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6324,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6325,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6335,
ves_icall_InternalInvoke_raw,
// token 6353,
ves_icall_reflection_get_token_raw,
// token 6366,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6385,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6409,
ves_icall_reflection_get_token_raw,
// token 6410,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 6742,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 6871,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7048,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7049,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7052,
ves_icall_ModuleBuilder_getToken_raw,
// token 7055,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7103,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7254,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7255,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 8194,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 8213,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 8220,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 8221,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 8223,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
