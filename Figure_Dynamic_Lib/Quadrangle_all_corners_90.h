#pragma once
#ifdef FIGURE_DYNAMIC_LIB_EXPORT
#define FIGURE_DYNAMIC_LIB_API __declspec(dllexport)
#else
#define FIGURE_DYNAMIC_LIB_API __declspec(dllimport)
#endif
#include "Parallelogramm.h"

class Quadrangle_all_corners_90 : public Parallelogramm {
public:
	FIGURE_DYNAMIC_LIB_API Quadrangle_all_corners_90(int a, int b);// : Parallelogramm(a, b, 90, 90) 

};
