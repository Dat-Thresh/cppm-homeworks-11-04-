#pragma once

#include "Quadrangle.h"

class Parallelogramm : public Quadrangle {
public:
    FIGURE_DYNAMIC_LIB_API Parallelogramm(int a, int b, int A, int B);//: Quadrangle(a, b, a, b, A, B, A, B) {};
};