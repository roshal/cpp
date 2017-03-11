
#include "stdafx.h"

#include <cmath>
#include <iostream>
#include <locale>

float q(float x);

void main() {
	setlocale(LC_ALL, "Russian");
	float x;
	std::cout << "q = tg(x) - ln(|sin(x / 12) + e ^ (x ^ 2 - 5)|)" << std::endl;
	std::cout << "ведите число x" << std::endl;
	std::cin >> x;
	std::cout << "q = " << q(x) << std::endl;
}

float q(float x) {
	return tan(x) - log(abs(sin(x / 12) + exp(pow(x, 2) - 5)));
}

// q = tg(x) - ln(|sin(x / 12) + e ^ (x ^ 2 - 5)|)
