#include "Triangle.h"
#include<cmath>

bool Triangle::isRightTriangle(double a, double b, double c) {
	if (pow(a, 2) + pow(b, 2) = pow(c, 2)) {
		return true;
	}
	else {
		return false;
	}
}

bool Triangle::isEqualSides(double a, double b, double c) {
	if (a == b || b == c || c == a) {
		return true;
	}
	else {
		return false;
	}
}

double Triangle::perimeter(double a, double b, double c) {
	return a + b + c;
}

double Triangle::findHalfPerimeter(double a, double b, double c) {
	return (a + b + c) / 3;
}

double Triangle::surface(double a, double b, double c) {
	double p = findHalfPerimeter(a, b, c);
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
