#pragma once

#ifdef NY_PLATFORM_WINDOWS
	#ifdef NY_BUILD_DLL
#define NOYS_API __declspec(dllexport)
	#else
#define NOYS_API __declspec(dllimport)
	#endif
#else
	#error Noys Engine only support Windows!
#endif //  
