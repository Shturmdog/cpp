#pragma once
#include <iostream>

class DateTime {
	int yers, month, day;

	bool isLeapYear(int y) const;
	int daysInMonth(int y, int m) const;
};
