
#include "stdafx.h"

#include <iostream>
#include <locale>

float max(float x, float y);
float min(float x, float y);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите a, b и c" << std::endl;
	float a, b, c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	float m = max(max(a, b), c);
	float n = min(min(a, b), c);
	std::cout << "max = " << m << std::endl;
	std::cout << "min = " << n << std::endl;
}
float max(float x, float y) {
	return y < x ? x : y;
}
float min(float x, float y) {
	return x < y ? x : y;
}
