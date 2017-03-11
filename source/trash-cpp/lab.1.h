
#include "stdafx.h"

#include <cmath>
#include <iostream>
#include <locale>

void show(char str[], float a, float b, int c, int d);

void main() {
	setlocale(LC_ALL, "Russian");
	float a, b;
	int c, d;
	std::cout << "введите целое число и вещественное число" << std::endl;
	std::cin >> b >> d;
	a = 5;
	c = 5;
	show("a = 5, c = 5", a, b, c, d);
	a = a + b - 2;
	show("a = a + b - 2", a, b, c, d);
	c = c + 1;
	d = c - a + d;
	show("c = c + 1, d = c - a + d", a, b, c, d);
	a = a * c;
	c = c - 1;
	show("a = a * c, c = c - 1", a, b, c, d);
	a = a / 10;
	c = c / 2;
	b = b - 1;
	d = d * (c + b + a);
	show("a = a / 10, c = c / 2, b = b - 1, d = d * (c + b + a)", a, b, c, d);
}

void show(char str[], float a, float b, int c, int d) {
	std::cout << str << "" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
}

// написать программу для вычисления следующих выражений
// a = 5, c = 5
// a = a + b - 2
// c = c + 1, d = c - a + d
// a = a * c, c = c - 1
// a = a / 10, c = c / 2, b = b - 1, d = d * (c + b + a)
// выражения которые записанны в одной строке надо записывать одним оператором-выражением
// переменные a и b объявить как вещественные
// переменные c и d объявить как целые
// значения переменных b и d вводить с клавиатуры
// после вычисления каждого выражения выводить на экран значения всех переменных
