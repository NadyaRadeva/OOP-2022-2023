#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#endif // !TRIANGLE_H_

class Triangle {
private:
	double a, b, c;

private:
	bool isRightTriangle(double a, double b, double c);
	bool isEqualSides(double a, double b, double c);
	double surface(double a, double b, double c);
	double perimeter(double a, double b, double c);
	double h(double side);
	double findRdiusOfInnerCircle(double a, double b, double c);
	double findRadiusOfOutterCircle(double a, double b, double c);
	double findHalfPerimeter(double a, double b, double c);
	double findBisection(double a, double b, double c);
	double sinusOfAngle(double a, double b, double c);
	double findTangensOfAngle(double a, double b, double c);
};
