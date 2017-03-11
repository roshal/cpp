
#include "stdafx.h"

#include <cmath>
#include <iostream>
#include <locale>

float q(float x);

void main() {
	setlocale(LC_ALL, "Russian");
	float x;
	std::cout << "q = sqrt((sin(x) + cos(x)) / log(x ^ 2 + e ^ -x)" << std::endl;
	std::cout << "ведите число x" << std::endl;
	std::cin >> x;
	std::cout << "q = " << q(x) << std::endl;
}

float q(float x) {
	return sqrt((sin(x) + cos(x)) / log(pow(x, 2) + exp(-x)));
}
