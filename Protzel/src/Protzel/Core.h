#pragma once

#ifdef PTZ_PLATFORM_LINUX
    #define PROTZEL_API __attribute__((visibility("default")))
#elif PTZ_PLATFORM_WIN
    #define PROTZEL_API __declspec(dllexport)
#else
    #error "Protzel only supports Windows and Linux!"
#endif

#define PTZ_ENABLE_ASSERTS

#ifdef PTZ_ENABLE_ASSERTS
    #ifdef PTZ_PLATFORM_LINUX
        #include <signal.h>
        #define PTZ_ASSERT(x, ...) { if(!(x)) { PTZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); raise(SIGTRAP); } }
        #define PTZ_CORE_ASSERT(x, ...) { if(!(x)) { PTZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); raise(SIGTRAP);; } }
    #elif PTZ_PLATFORM_WIN
        #define PTZ_ASSERT(x, ...) { if(!(x)) { PTZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
        #define PTZ_CORE_ASSERT(x, ...) { if(!(x)) { PTZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
    #endif
#else
    #define PTZ_ASSERT(x, ...)
    #define PTZ_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
#define PTZ_BIND_EVENT(x) std::bind(&x, this, std::placeholders::_1)
