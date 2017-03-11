
#include "stdafx.h"

#include <cmath>
#include <iostream>
#include <locale>

float discriminant(float a, float b, float c);
float x1(float a, float b, float d);
float x2(float a, float b, float d);
float x(float a, float b);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "axx + bx + c = 0" << std::endl;
	std::cout << "введите коэффициенты a, b, c" << std::endl;
	float a, b, c;
	std::cin >> a >> b >> c;
	float d = discriminant(a, b, c);
	if (0 < d) {
		std::cout << "корень равен" << std::endl;
		std::cout << x1(a, b, d) << std::endl;
		std::cout << x2(a, b, d) << std::endl;
	} else if (d == 0) {
		std::cout << "корень равен" << std::endl;
		std::cout << x(a, b) << std::endl;
	} else {
		std::cout << "корня не существует" << std::endl;
	}
}
float discriminant(float a, float b, float c) {
	return pow(b, 2) - 4 * a * c;
}
float x1(float a, float b, float d) {
	return -(sqrt(d) + b) / a / 2;
}
float x2(float a, float b, float d) {
	return (sqrt(d) - b) / a / 2;
}
float x(float a, float b) {
	return -b / a / 2;
}
