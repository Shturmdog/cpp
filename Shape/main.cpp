#define _USE_MATH_DEFINES	
#include <iostream>
#include "Shape.h"
int main() {
	Circle c(1, 2, 7);

	cout << "Testing Circle (radius = 7):\n";
	cout << "  Name: ";
	c.name();
	cout << "\n  Area: " << c.calc_area();
	cout << "\n  Perimeter: " << c.calc_perimetr();
	cout << "\n\n";

	Elipse a(2, 5, 7, 6);
	cout << "Testin Elipse (radius_a = 7, radius_b = 6:\n";
	cout << " Name: ";
	a.name();
	cout << "\n Area: " << a.calc_area();
	cout << "\n Perimeter: " << c.calc_perimetr();
	cout << "\n\n";
	return 0;
}

	return 0;
}	