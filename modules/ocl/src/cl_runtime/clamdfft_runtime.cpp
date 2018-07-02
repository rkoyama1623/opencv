//
// AUTOGENERATED, DO NOT EDIT
//
#include "precomp.hpp"

#ifdef HAVE_CLAMDFFT

#include "opencv2/ocl/cl_runtime/cl_runtime.hpp"
#include "opencv2/ocl/cl_runtime/clamdfft_runtime.hpp"

#if defined(_WIN32)
    static void* WinGetProcAddress(const char* name)
    {
        static HMODULE opencl_module = NULL;
        if (!opencl_module)
        {
            opencl_module = GetModuleHandleA("clAmdFft.Runtime.dll");
            if (!opencl_module)
            {
                opencl_module = LoadLibraryA("clAmdFft.Runtime.dll");
                if (!opencl_module)
                    return NULL;
            }
        }
        return (void*)GetProcAddress(opencl_module, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) WinGetProcAddress(name)
#endif // _WIN32

#if defined(__linux__)
    #include <dlfcn.h>
    #include <stdio.h>

    static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen("libclAmdFft.Runtime.so", RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }

        return dlsym(h, name);
    }
    #define CV_CL_GET_PROC_ADDRESS(name) GetProcAddress(name)
#endif

#ifndef CV_CL_GET_PROC_ADDRESS
#define CV_CL_GET_PROC_ADDRESS(name) NULL
#endif

// generated by parser_clamdfft.py
enum OPENCLAMDFFT_FN_ID {
    OPENCLAMDFFT_FN_clAmdFftSetup = 0,
    OPENCLAMDFFT_FN_clAmdFftTeardown,
    OPENCLAMDFFT_FN_clAmdFftGetVersion,
    OPENCLAMDFFT_FN_clAmdFftCreateDefaultPlan,
    OPENCLAMDFFT_FN_clAmdFftCopyPlan,
    OPENCLAMDFFT_FN_clAmdFftBakePlan,
    OPENCLAMDFFT_FN_clAmdFftDestroyPlan,
    OPENCLAMDFFT_FN_clAmdFftGetPlanContext,
    OPENCLAMDFFT_FN_clAmdFftGetPlanPrecision,
    OPENCLAMDFFT_FN_clAmdFftSetPlanPrecision,
    OPENCLAMDFFT_FN_clAmdFftGetPlanScale,
    OPENCLAMDFFT_FN_clAmdFftSetPlanScale,
    OPENCLAMDFFT_FN_clAmdFftGetPlanBatchSize,
    OPENCLAMDFFT_FN_clAmdFftSetPlanBatchSize,
    OPENCLAMDFFT_FN_clAmdFftGetPlanDim,
    OPENCLAMDFFT_FN_clAmdFftSetPlanDim,
    OPENCLAMDFFT_FN_clAmdFftGetPlanLength,
    OPENCLAMDFFT_FN_clAmdFftSetPlanLength,
    OPENCLAMDFFT_FN_clAmdFftGetPlanInStride,
    OPENCLAMDFFT_FN_clAmdFftSetPlanInStride,
    OPENCLAMDFFT_FN_clAmdFftGetPlanOutStride,
    OPENCLAMDFFT_FN_clAmdFftSetPlanOutStride,
    OPENCLAMDFFT_FN_clAmdFftGetPlanDistance,
    OPENCLAMDFFT_FN_clAmdFftSetPlanDistance,
    OPENCLAMDFFT_FN_clAmdFftGetLayout,
    OPENCLAMDFFT_FN_clAmdFftSetLayout,
    OPENCLAMDFFT_FN_clAmdFftGetResultLocation,
    OPENCLAMDFFT_FN_clAmdFftSetResultLocation,
    OPENCLAMDFFT_FN_clAmdFftGetPlanTransposeResult,
    OPENCLAMDFFT_FN_clAmdFftSetPlanTransposeResult,
    OPENCLAMDFFT_FN_clAmdFftGetTmpBufSize,
    OPENCLAMDFFT_FN_clAmdFftEnqueueTransform,
};
// generated by parser_clamdfft.py
const char* openclamdfft_fn_names[] = {
    "clAmdFftSetup",
    "clAmdFftTeardown",
    "clAmdFftGetVersion",
    "clAmdFftCreateDefaultPlan",
    "clAmdFftCopyPlan",
    "clAmdFftBakePlan",
    "clAmdFftDestroyPlan",
    "clAmdFftGetPlanContext",
    "clAmdFftGetPlanPrecision",
    "clAmdFftSetPlanPrecision",
    "clAmdFftGetPlanScale",
    "clAmdFftSetPlanScale",
    "clAmdFftGetPlanBatchSize",
    "clAmdFftSetPlanBatchSize",
    "clAmdFftGetPlanDim",
    "clAmdFftSetPlanDim",
    "clAmdFftGetPlanLength",
    "clAmdFftSetPlanLength",
    "clAmdFftGetPlanInStride",
    "clAmdFftSetPlanInStride",
    "clAmdFftGetPlanOutStride",
    "clAmdFftSetPlanOutStride",
    "clAmdFftGetPlanDistance",
    "clAmdFftSetPlanDistance",
    "clAmdFftGetLayout",
    "clAmdFftSetLayout",
    "clAmdFftGetResultLocation",
    "clAmdFftSetResultLocation",
    "clAmdFftGetPlanTransposeResult",
    "clAmdFftSetPlanTransposeResult",
    "clAmdFftGetTmpBufSize",
    "clAmdFftEnqueueTransform",
};

static void* openclamdfft_check_fn(int ID)
{
    void* func = CV_CL_GET_PROC_ADDRESS(openclamdfft_fn_names[ID]);
    if (!func)
    {
        std::ostringstream msg;
        msg << "OpenCL AMD FFT function is not available: [" << openclamdfft_fn_names[ID] << "]";
        CV_Error(CV_StsBadFunc, msg.str());
    }
    extern void* openclamdfft_fn_ptrs[];
    *(void**)(openclamdfft_fn_ptrs[ID]) = func;
    return func;
}

namespace {
// generated by parser_clamdfft.py
#define openclamdfft_fn0(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(); } \

#define openclamdfft_fn1(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1); } \

#define openclamdfft_fn2(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2); } \

#define openclamdfft_fn3(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3); } \

#define openclamdfft_fn4(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4); } \

#define openclamdfft_fn5(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5); } \

#define openclamdfft_fn6(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6); } \

#define openclamdfft_fn7(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7); } \

#define openclamdfft_fn8(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8); } \

#define openclamdfft_fn9(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9); } \

#define openclamdfft_fn10(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } \

#define openclamdfft_fn11(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } \

#define openclamdfft_fn12(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } \

#define openclamdfft_fn13(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } \

#define openclamdfft_fn14(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } \

#define openclamdfft_fn15(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } \

#define openclamdfft_fn16(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } \

#define openclamdfft_fn17(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); } \

#define openclamdfft_fn18(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); } \

#define openclamdfft_fn19(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); } \

#define openclamdfft_fn20(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20); } \

#define openclamdfft_fn21(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21); } \

#define openclamdfft_fn22(ID, _R, decl_args) \
    typedef _R (*ID##FN)decl_args; \
    static _R ID##_switch_fn decl_args \
    { return ((ID##FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22); } \

}

// generated by parser_clamdfft.py
openclamdfft_fn1(OPENCLAMDFFT_FN_clAmdFftSetup, clAmdFftStatus, (const clAmdFftSetupData* p1))
clAmdFftStatus (*clAmdFftSetup)(const clAmdFftSetupData*) =
        OPENCLAMDFFT_FN_clAmdFftSetup_switch_fn;
openclamdfft_fn0(OPENCLAMDFFT_FN_clAmdFftTeardown, clAmdFftStatus, ())
clAmdFftStatus (*clAmdFftTeardown)() =
        OPENCLAMDFFT_FN_clAmdFftTeardown_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftGetVersion, clAmdFftStatus, (cl_uint* p1, cl_uint* p2, cl_uint* p3))
clAmdFftStatus (*clAmdFftGetVersion)(cl_uint*, cl_uint*, cl_uint*) =
        OPENCLAMDFFT_FN_clAmdFftGetVersion_switch_fn;
openclamdfft_fn4(OPENCLAMDFFT_FN_clAmdFftCreateDefaultPlan, clAmdFftStatus, (clAmdFftPlanHandle* p1, cl_context p2, const clAmdFftDim p3, const size_t* p4))
clAmdFftStatus (*clAmdFftCreateDefaultPlan)(clAmdFftPlanHandle*, cl_context, const clAmdFftDim, const size_t*) =
        OPENCLAMDFFT_FN_clAmdFftCreateDefaultPlan_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftCopyPlan, clAmdFftStatus, (clAmdFftPlanHandle* p1, cl_context p2, clAmdFftPlanHandle p3))
clAmdFftStatus (*clAmdFftCopyPlan)(clAmdFftPlanHandle*, cl_context, clAmdFftPlanHandle) =
        OPENCLAMDFFT_FN_clAmdFftCopyPlan_switch_fn;
openclamdfft_fn5(OPENCLAMDFFT_FN_clAmdFftBakePlan, clAmdFftStatus, (clAmdFftPlanHandle p1, cl_uint p2, cl_command_queue* p3, void (CL_CALLBACK*p4) (clAmdFftPlanHandle plHandle, void* user_data), void* p5))
clAmdFftStatus (*clAmdFftBakePlan)(clAmdFftPlanHandle, cl_uint, cl_command_queue*, void (CL_CALLBACK*) (clAmdFftPlanHandle plHandle, void* user_data), void*) =
        OPENCLAMDFFT_FN_clAmdFftBakePlan_switch_fn;
openclamdfft_fn1(OPENCLAMDFFT_FN_clAmdFftDestroyPlan, clAmdFftStatus, (clAmdFftPlanHandle* p1))
clAmdFftStatus (*clAmdFftDestroyPlan)(clAmdFftPlanHandle*) =
        OPENCLAMDFFT_FN_clAmdFftDestroyPlan_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftGetPlanContext, clAmdFftStatus, (const clAmdFftPlanHandle p1, cl_context* p2))
clAmdFftStatus (*clAmdFftGetPlanContext)(const clAmdFftPlanHandle, cl_context*) =
        OPENCLAMDFFT_FN_clAmdFftGetPlanContext_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftGetPlanPrecision, clAmdFftStatus, (const clAmdFftPlanHandle p1, clAmdFftPrecision* p2))
clAmdFftStatus (*clAmdFftGetPlanPrecision)(const clAmdFftPlanHandle, clAmdFftPrecision*) =
        OPENCLAMDFFT_FN_clAmdFftGetPlanPrecision_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftSetPlanPrecision, clAmdFftStatus, (clAmdFftPlanHandle p1, clAmdFftPrecision p2))
clAmdFftStatus (*clAmdFftSetPlanPrecision)(clAmdFftPlanHandle, clAmdFftPrecision) =
        OPENCLAMDFFT_FN_clAmdFftSetPlanPrecision_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftGetPlanScale, clAmdFftStatus, (const clAmdFftPlanHandle p1, clAmdFftDirection p2, cl_float* p3))
clAmdFftStatus (*clAmdFftGetPlanScale)(const clAmdFftPlanHandle, clAmdFftDirection, cl_float*) =
        OPENCLAMDFFT_FN_clAmdFftGetPlanScale_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftSetPlanScale, clAmdFftStatus, (clAmdFftPlanHandle p1, clAmdFftDirection p2, cl_float p3))
clAmdFftStatus (*clAmdFftSetPlanScale)(clAmdFftPlanHandle, clAmdFftDirection, cl_float) =
        OPENCLAMDFFT_FN_clAmdFftSetPlanScale_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftGetPlanBatchSize, clAmdFftStatus, (const clAmdFftPlanHandle p1, size_t* p2))
clAmdFftStatus (*clAmdFftGetPlanBatchSize)(const clAmdFftPlanHandle, size_t*) =
        OPENCLAMDFFT_FN_clAmdFftGetPlanBatchSize_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftSetPlanBatchSize, clAmdFftStatus, (clAmdFftPlanHandle p1, size_t p2))
clAmdFftStatus (*clAmdFftSetPlanBatchSize)(clAmdFftPlanHandle, size_t) =
        OPENCLAMDFFT_FN_clAmdFftSetPlanBatchSize_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftGetPlanDim, clAmdFftStatus, (const clAmdFftPlanHandle p1, clAmdFftDim* p2, cl_uint* p3))
clAmdFftStatus (*clAmdFftGetPlanDim)(const clAmdFftPlanHandle, clAmdFftDim*, cl_uint*) =
        OPENCLAMDFFT_FN_clAmdFftGetPlanDim_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftSetPlanDim, clAmdFftStatus, (clAmdFftPlanHandle p1, const clAmdFftDim p2))
clAmdFftStatus (*clAmdFftSetPlanDim)(clAmdFftPlanHandle, const clAmdFftDim) =
        OPENCLAMDFFT_FN_clAmdFftSetPlanDim_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftGetPlanLength, clAmdFftStatus, (const clAmdFftPlanHandle p1, const clAmdFftDim p2, size_t* p3))
clAmdFftStatus (*clAmdFftGetPlanLength)(const clAmdFftPlanHandle, const clAmdFftDim, size_t*) =
        OPENCLAMDFFT_FN_clAmdFftGetPlanLength_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftSetPlanLength, clAmdFftStatus, (clAmdFftPlanHandle p1, const clAmdFftDim p2, const size_t* p3))
clAmdFftStatus (*clAmdFftSetPlanLength)(clAmdFftPlanHandle, const clAmdFftDim, const size_t*) =
        OPENCLAMDFFT_FN_clAmdFftSetPlanLength_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftGetPlanInStride, clAmdFftStatus, (const clAmdFftPlanHandle p1, const clAmdFftDim p2, size_t* p3))
clAmdFftStatus (*clAmdFftGetPlanInStride)(const clAmdFftPlanHandle, const clAmdFftDim, size_t*) =
        OPENCLAMDFFT_FN_clAmdFftGetPlanInStride_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftSetPlanInStride, clAmdFftStatus, (clAmdFftPlanHandle p1, const clAmdFftDim p2, size_t* p3))
clAmdFftStatus (*clAmdFftSetPlanInStride)(clAmdFftPlanHandle, const clAmdFftDim, size_t*) =
        OPENCLAMDFFT_FN_clAmdFftSetPlanInStride_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftGetPlanOutStride, clAmdFftStatus, (const clAmdFftPlanHandle p1, const clAmdFftDim p2, size_t* p3))
clAmdFftStatus (*clAmdFftGetPlanOutStride)(const clAmdFftPlanHandle, const clAmdFftDim, size_t*) =
        OPENCLAMDFFT_FN_clAmdFftGetPlanOutStride_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftSetPlanOutStride, clAmdFftStatus, (clAmdFftPlanHandle p1, const clAmdFftDim p2, size_t* p3))
clAmdFftStatus (*clAmdFftSetPlanOutStride)(clAmdFftPlanHandle, const clAmdFftDim, size_t*) =
        OPENCLAMDFFT_FN_clAmdFftSetPlanOutStride_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftGetPlanDistance, clAmdFftStatus, (const clAmdFftPlanHandle p1, size_t* p2, size_t* p3))
clAmdFftStatus (*clAmdFftGetPlanDistance)(const clAmdFftPlanHandle, size_t*, size_t*) =
        OPENCLAMDFFT_FN_clAmdFftGetPlanDistance_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftSetPlanDistance, clAmdFftStatus, (clAmdFftPlanHandle p1, size_t p2, size_t p3))
clAmdFftStatus (*clAmdFftSetPlanDistance)(clAmdFftPlanHandle, size_t, size_t) =
        OPENCLAMDFFT_FN_clAmdFftSetPlanDistance_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftGetLayout, clAmdFftStatus, (const clAmdFftPlanHandle p1, clAmdFftLayout* p2, clAmdFftLayout* p3))
clAmdFftStatus (*clAmdFftGetLayout)(const clAmdFftPlanHandle, clAmdFftLayout*, clAmdFftLayout*) =
        OPENCLAMDFFT_FN_clAmdFftGetLayout_switch_fn;
openclamdfft_fn3(OPENCLAMDFFT_FN_clAmdFftSetLayout, clAmdFftStatus, (clAmdFftPlanHandle p1, clAmdFftLayout p2, clAmdFftLayout p3))
clAmdFftStatus (*clAmdFftSetLayout)(clAmdFftPlanHandle, clAmdFftLayout, clAmdFftLayout) =
        OPENCLAMDFFT_FN_clAmdFftSetLayout_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftGetResultLocation, clAmdFftStatus, (const clAmdFftPlanHandle p1, clAmdFftResultLocation* p2))
clAmdFftStatus (*clAmdFftGetResultLocation)(const clAmdFftPlanHandle, clAmdFftResultLocation*) =
        OPENCLAMDFFT_FN_clAmdFftGetResultLocation_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftSetResultLocation, clAmdFftStatus, (clAmdFftPlanHandle p1, clAmdFftResultLocation p2))
clAmdFftStatus (*clAmdFftSetResultLocation)(clAmdFftPlanHandle, clAmdFftResultLocation) =
        OPENCLAMDFFT_FN_clAmdFftSetResultLocation_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftGetPlanTransposeResult, clAmdFftStatus, (const clAmdFftPlanHandle p1, clAmdFftResultTransposed* p2))
clAmdFftStatus (*clAmdFftGetPlanTransposeResult)(const clAmdFftPlanHandle, clAmdFftResultTransposed*) =
        OPENCLAMDFFT_FN_clAmdFftGetPlanTransposeResult_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftSetPlanTransposeResult, clAmdFftStatus, (clAmdFftPlanHandle p1, clAmdFftResultTransposed p2))
clAmdFftStatus (*clAmdFftSetPlanTransposeResult)(clAmdFftPlanHandle, clAmdFftResultTransposed) =
        OPENCLAMDFFT_FN_clAmdFftSetPlanTransposeResult_switch_fn;
openclamdfft_fn2(OPENCLAMDFFT_FN_clAmdFftGetTmpBufSize, clAmdFftStatus, (const clAmdFftPlanHandle p1, size_t* p2))
clAmdFftStatus (*clAmdFftGetTmpBufSize)(const clAmdFftPlanHandle, size_t*) =
        OPENCLAMDFFT_FN_clAmdFftGetTmpBufSize_switch_fn;
openclamdfft_fn10(OPENCLAMDFFT_FN_clAmdFftEnqueueTransform, clAmdFftStatus, (clAmdFftPlanHandle p1, clAmdFftDirection p2, cl_uint p3, cl_command_queue* p4, cl_uint p5, const cl_event* p6, cl_event* p7, cl_mem* p8, cl_mem* p9, cl_mem p10))
clAmdFftStatus (*clAmdFftEnqueueTransform)(clAmdFftPlanHandle, clAmdFftDirection, cl_uint, cl_command_queue*, cl_uint, const cl_event*, cl_event*, cl_mem*, cl_mem*, cl_mem) =
        OPENCLAMDFFT_FN_clAmdFftEnqueueTransform_switch_fn;

// generated by parser_clamdfft.py
void* openclamdfft_fn_ptrs[] = {
    &clAmdFftSetup,
    &clAmdFftTeardown,
    &clAmdFftGetVersion,
    &clAmdFftCreateDefaultPlan,
    &clAmdFftCopyPlan,
    &clAmdFftBakePlan,
    &clAmdFftDestroyPlan,
    &clAmdFftGetPlanContext,
    &clAmdFftGetPlanPrecision,
    &clAmdFftSetPlanPrecision,
    &clAmdFftGetPlanScale,
    &clAmdFftSetPlanScale,
    &clAmdFftGetPlanBatchSize,
    &clAmdFftSetPlanBatchSize,
    &clAmdFftGetPlanDim,
    &clAmdFftSetPlanDim,
    &clAmdFftGetPlanLength,
    &clAmdFftSetPlanLength,
    &clAmdFftGetPlanInStride,
    &clAmdFftSetPlanInStride,
    &clAmdFftGetPlanOutStride,
    &clAmdFftSetPlanOutStride,
    &clAmdFftGetPlanDistance,
    &clAmdFftSetPlanDistance,
    &clAmdFftGetLayout,
    &clAmdFftSetLayout,
    &clAmdFftGetResultLocation,
    &clAmdFftSetResultLocation,
    &clAmdFftGetPlanTransposeResult,
    &clAmdFftSetPlanTransposeResult,
    &clAmdFftGetTmpBufSize,
    &clAmdFftEnqueueTransform,
};

#endif