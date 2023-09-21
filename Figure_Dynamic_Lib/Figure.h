#pragma once

#ifdef FIGURE_DYNAMIC_LIB_EXPORT
#define FIGURE_DYNAMIC_LIB_API __declspec(dllexport)
#else
#define FIGURE_DYNAMIC_LIB_API __declspec(dllimport)
#endif 

#include <string>

class Figure {
protected:
	std::string name;
	Figure();
public:
	FIGURE_DYNAMIC_LIB_API virtual void get_info();
};