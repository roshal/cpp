
#define _USE_MATH_DEFINES

#include "stdafx.h"

#include <cmath>
#include <iostream>
#include <locale>

double squareRing(float r);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите 2 радиуса" << std::endl;
	float r1, r2;
	std::cin >> r1 >> r2;
	std::cout << "площадь кольца равна" << std::endl;
	std::cout << abs(squareRing(r1) - squareRing(r2)) << std::endl;
}
double squareRing(float r) {
	return M_PI * pow(r, 2);
}
