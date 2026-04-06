#include <iostream>
#include "DateTime.h"


bool DateTime::isLeapYear(int y) const
{
	return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int DateTime::daysInMonth(int y, int m) const
{
	static const int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (m == 2 && isLeapYear(y))
		return 29;
	return days[m - 1];
}

