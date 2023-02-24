#pragma once

#ifdef TG_PLATFORM_WINDOWS
	#ifdef TG_BUILD_DLL
		#define TOGA_API __declspec(dllexport)
	#else
		#define TOGA_API __declspec(dllimport)
	#endif
#else
	#error Toga only supports Windows!
#endif