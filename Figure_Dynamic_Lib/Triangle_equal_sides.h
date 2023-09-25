#pragma once

#include "Triangle_bedra_ravny.h"

class Triangle_all_sides_equal : public Triangle_bedra_ravny {
public:
    FIGURE_DYNAMIC_LIB_API Triangle_all_sides_equal(int a);// : Triangle_bedra_ravny(a, a, 60, 60) {};

};