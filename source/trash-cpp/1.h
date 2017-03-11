
#include "stdafx.h"

#include <iostream>
#include <locale>

float sum(float a, float b);
float dif(float a, float b);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите 2 числа" << std::endl;
	float a, b;
	std::cin >> a >> b;
	if (b < a) {
		std::cout << "первое число больше второго, их сумма равна" << std::endl;
		std::cout << sum(a, b) << std::endl;
	} else {
		std::cout << "первое число больше второго, их разность равна" << std::endl;
		std::cout << dif(a, b) << std::endl;
	}
}
float sum(float a, float b) {
	return a + b;
}
float dif(float a, float b) {
	return a - b;
}
