
#include "stdafx.h"

#include <iostream>
#include <locale>

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите целое число" << std::endl;
	int n;
	std::cin >> n;
	int count = 0;
	for (int a = 1; a <= 9; a += 1) {
		for (int b = 0; b <= 9; b += 1) {
			for (int c = 0; c <= 9; c += 1) {
				if (a + b + c == n) {
					count += 1;
				}
			}
		}
	}
	std::cout << "количество натуральных трехзначных чисел, сумма цифр которых равна " << n << ":"<< std::endl;
	std::cout << count << std::endl;
}

// определить количество натуральных трехзначных чисел которых сумма цифр равна заданному числу n
