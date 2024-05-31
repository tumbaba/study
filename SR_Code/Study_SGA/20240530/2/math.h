#pragma once

#ifdef MATHLIB_EXPORTS
	#define MATHLIB_API __declspec(dllexport)
#else
	#define MATHLIB_API __declspec(dllimport)
#endif


extern "C"{

	MATHLIB_API int Add(int a, int b);
	MATHLIB_API int Sub(int a, int b);
}
