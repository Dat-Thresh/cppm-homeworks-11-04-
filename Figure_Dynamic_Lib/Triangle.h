#pragma once

#ifdef FIGURE_DYNAMIC_LIB_EXPORT
#define FIGURE_DYNAMIC_LIB_API __declspec(dllexport)
#else
#define FIGURE_DYNAMIC_LIB_API __declspec(dllimport)
#endif

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