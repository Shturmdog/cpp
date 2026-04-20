#include <iostream>
using namespace std;

class Figure {
public:
	virtual double calc_area() = 0;
	virtual double calcl_perimetr() = 0;
	virtual void name() = 0;
};