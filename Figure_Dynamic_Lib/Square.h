#pragma once

#include "Quadrangle_all_corners_90.h"

class Square :public Quadrangle_all_corners_90 {
public:
    FIGURE_DYNAMIC_LIB_API Square(int a);// : Quadrangle_all_corners_90(a, a) {};
};
