#pragma once

#ifdef NY_PLATFORM_WINDOWS
	#ifdef NY_BUILD_DLL
#define NOYS_API __declspec(dllexport)
	#else
#define NOYS_API __declspec(dllimport)
	#endif
#else
	#error Noys Engine only support Windows!
#endif

#ifdef NY_ENABLE_ASSERTS
	#define NY_ASSERT(x, ...) { if(!(x)) { NY_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define NY_CORE_ASSERT(x, ...) { if(!(x)) { NY_CORE_ERROR("Assertion failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define NY_ASSERT(X, ...)
	#define NY_CORE_ASSERT(X, ...)
#endif

#define BIT(x) (1 << x)