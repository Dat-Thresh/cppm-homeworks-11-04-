#pragma once

#ifdef FIGURE_DYNAMIC_LIB_EXPORT
#define FIGURE_DYNAMIC_LIB_API __declspec(dllexport)
#else
#define FIGURE_DYNAMIC_LIB_API __declspec(dllimport)
#endif

#include "Triangle.h"

class Triangle_bedra_ravny : public Triangle {
public:
	FIGURE_DYNAMIC_LIB_API Triangle_bedra_ravny(int a, int b, int A, int B);// : Triangle(a, b, a, A, B, A) {};
};