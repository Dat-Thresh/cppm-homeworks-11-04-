#pragma once

#ifdef FIGURE_DYNAMIC_LIB_EXPORT
#define FIGURE_DYNAMIC_LIB_API __declspec(dllexport)
#else
#define FIGURE_DYNAMIC_LIB_API __declspec(dllimport)
#endif
#include "Parallelogramm.h"

FIGURE_DYNAMIC_LIB_API class Romb : public Parallelogramm {
public:
    FIGURE_DYNAMIC_LIB_API Romb(int a, int A, int B);// : Parallelogramm(a, a, A, B) {};
};