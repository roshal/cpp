
#include "stdafx.h"

#include <iostream>
#include <locale>

float f(float a, float b);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "ax + b = 0" << std::endl;
	std::cout << "введите коэффициенты a и b" << std::endl;
	float a, b;
	std::cin >> a >> b;
	if (a == 0) {
		if (b == 0) {
			std::cout << "корень любой." << std::endl;
		} else {
			std::cout << "корня не существует." << std::endl;
		}
	} else {
		std::cout << "корень уравнения" << std::endl;
		std::cout << f(a, b) << std::endl;
	}
}
float f(float a, float b) {
	return -b / a;
}
