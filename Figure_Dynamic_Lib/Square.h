#pragma once

#ifdef FIGURE_DYNAMIC_LIB_EXPORT
#define FIGURE_DYNAMIC_LIB_API __declspec(dllexport)
#else
#define FIGURE_DYNAMIC_LIB_API __declspec(dllimport)
#endif

#include "Quadrangle_all_corners_90.h"

class Square :public Quadrangle_all_corners_90 {
public:
    FIGURE_DYNAMIC_LIB_API Square(int a);// : Quadrangle_all_corners_90(a, a) {};
};
