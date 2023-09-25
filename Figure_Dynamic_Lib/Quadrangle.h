#pragma once

#include "Figure.h"
class Quadrangle :public Figure {
protected:
    //стороны
    int a;
    int b;
    int c;
    int d;
    //углы
    int A;
    int B;
    int C;
    int D;
public:
    FIGURE_DYNAMIC_LIB_API Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);// : Figure() {};
    FIGURE_DYNAMIC_LIB_API void get_info() override;
};