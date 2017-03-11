
#include "stdafx.h"

#include <iostream>
#include <locale>

int msb(int n);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите натуральное число" << std::endl;
	int n, dif;
	std::cin >> n;
	dif = msb(n) - n % 10;
	if (dif < 0) {
		std::cout << "цифра первого разряда меньше цифры второго" << std::endl;
	} else
	if (dif == 0) {
		std::cout << "цифра первого разряда равна цифре второго" << std::endl;
	} else
	if (dif > 0) {
		std::cout << "цифра первого разряда больше цифры второго" << std::endl;
	}
	else {
		std::cout << "ошибка" << std::endl;
	}
}

int msb(int n) {
	while (n > 10) n /= 10;
	return n;
}

// дано натуральное число n
// составить программу для сравнения цифр старшего и младшего разрядов этого числа
