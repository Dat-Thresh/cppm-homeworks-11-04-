#pragma once

#ifdef FIGURE_DYNAMIC_LIB_EXPORT
#define FIGURE_DYNAMIC_LIB_API __declspec(dllexport)
#else
#define FIGURE_DYNAMIC_LIB_API __declspec(dllimport)
#endif

#include "Triangle.h"


class Triangle_C_90 : public Triangle {
public:
    FIGURE_DYNAMIC_LIB_API Triangle_C_90(int a, int b, int c, int A, int B);// : Triangle(a, b, c, A, B, 90) {};

};