
#include "stdafx.h"

#include <iostream>
#include <locale>

double max(double a, double b);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите длинны стронон треугольника" << std::endl;
	double a, b, c;
	std::cin >> a >> b >> c;
	double m = max(max(a, b), c);
	if (m == sqrt(a * a + b * b)) {
		std::cout << "треугольник прямоугольный" << std::endl;
	} else {
		std::cout << "треугольник не прямоугольный" << std::endl;
	}
}

double max(double a, double b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}
