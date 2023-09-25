#pragma once

#include "Figure.h"
class Triangle :public Figure {
protected:
    //стороны
    int a;
    int b;
    int c;
    //углы
    int A;
    int B;
    int C;
public:
    FIGURE_DYNAMIC_LIB_API Triangle(int a, int b, int c, int A, int B, int C);// : Figure() {}
    FIGURE_DYNAMIC_LIB_API void get_info() override;
    
};