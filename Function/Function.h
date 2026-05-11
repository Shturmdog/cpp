#pragma once
#include <iostream>
#include <cmath>

class Function {
public:
	virtual ~Function() {};
	virtual double getValue(double x) const = 0;
	virtual void printResult(double x) const = 0;
	virtual double findMin(double a, double b, double eps = 1e-6) const = 0;
	virtual double diff(double x, double eps = 1e-6) const = 0;
	virtual double integrate(double a, double b, double eps = 1e-6) const = 0;
	virtual void printInfo() const = 0;
};

class Parabola : public Function {
	double a, b, c;
public:
	Parabola(double A, double B, double C);
	double getValue(double x) const;
	void printResult(double x) const;
	double findMin(double a, double b, double eps = 1e-6) const;
	double findMax(double a, double b, double eps = 1e-6) const;
	double diff(double x, double eps = 1e-6) const;
	virtual double integrate(double a, double b, double eps = 1e-6) const;
	void printInfo() const;
};