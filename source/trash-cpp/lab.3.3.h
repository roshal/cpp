
#include "stdafx.h"

#include <cmath>
#include <iostream>
#include <locale>

double f(int n, double x);
int factorial(int n);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите число" << std::endl;
	double x;
	std::cin >> x;
	double sum = 0;
	for (int n = 1; -1 <= x && x <= 1; n += 1) {
		sum += f(n, x);
		x += pow(10, -4);
	}
	std::cout << "сумма ряда" << std::endl;
	std::cout << sum << std::endl;
}

double f(int n, double x) {
	return pow(-1, n - 1) * pow(x, n) / factorial(n + 1);
}

int factorial(int  n) {
	return (n < 2) ? 1 : n * factorial(n - 1);
}

// sum(n = 1, infinity, (-1) ^ (n - 1) * x ^ n / !(n + 1)), e = 10 ^ -4, -1 <= x <= 1
