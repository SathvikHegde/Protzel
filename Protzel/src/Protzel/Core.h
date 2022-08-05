#pragma once

#ifdef PTZ_ENABLE_ASSERTS
    #define PTZ_ASSERT(x, ...) { if(!(x)) { PTZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define PTZ_CORE_ASSERT(x, ...) { if(!(x)) { PTZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
    #define PTZ_ASSERT(x, ...)
    #define PTZ_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
