
#include "stdafx.h"

#include <iostream>
#include <locale>

double max(double a, double b);
double min(double a, double b);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите длинны стронон треугольника" << std::endl;
	double a, b, c;
	std::cin >> a >> b >> c;
	double m = max(max(a, b), c);
	double n = max(max(a, b), c);
	double s = sqrt(a * a + b * b);
	double sum = a + b + c - m;
	std::cout << "треугольник ";
	if (m == s) {
		std::cout << "прямоугольный";
	} else if (m > s) {
		std::cout << "тупоугольный";
	} else if (m < s) {
		std::cout << "остроугольный";
	}
	if (a == b, b == c) {
		std::cout << ", равносторонний";
	} else if (m == n) {
		std::cout << ", равнобедренный";
	}
	std::cout << "." << std::endl;
}

double max(double a, double b) {
	if (a < b) {
		return b;
	} else {
		return a;
	}
}

double min(double a, double b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}
