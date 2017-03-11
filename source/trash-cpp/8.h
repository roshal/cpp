
#include "stdafx.h"

#include <iostream>
#include <locale>

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите 3 целых числа" << std::endl;
	int a, b, c;
	std::cin >> a >> b >> c;
	int sum = 0, count = 0;
	if (a > 0) sum += a;
	if (b > 0) sum += a;
	if (c > 0) sum += a;
	if (a % 2 == 0) count += 1;
	std::cout << "сумма положительных" << std::endl;
	std::cout << sum << std::endl;
	std::cout << "количество четных равно" << std::endl;
	std::cout << count << std::endl;
}
