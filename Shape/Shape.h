#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Figure {
public:
	virtual double calc_area() = 0;
	virtual double calcl_perimetr() = 0;
	virtual void name() = 0;
};

class Circle : public Figure {
	double center_x;
	double center_y;
	double radius;
public:
	Circle(double cx, double cy, double r) {
		center_x = cx;
		center_y = cy;
		radius = r;
	}

	double calc_area() {
		return PI * radius * radius;
	}

	double calc_perimetr() {
		return 2 * PI * radius;
	}

	void name() {
		cout << "Circle" << endl;
	}
};
