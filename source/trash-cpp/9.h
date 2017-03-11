
#include "stdafx.h"

#include <iostream>
#include <location>

int min(int a, int b);
int max(int a, int b);

void main {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите количество числел для ввода" << std::endl;
	int n;
	std::cin >> n;
	int sp = 0, se = 0, cp = 0, ce = 0
	float x, min, max;
	for (; 0 < n; n--) {
		std::cout << "введите число" << std::endl;
		std::cin >> x;
		if (x > 0) {
			sp += x;
			cp += 1;
		}
		if (x % 2 == 0) {
			se += x;
			ce += 1;
		}
	}
	if (x > 0) {
		std::cout << "0" << std::endl;
		} else {
		std::cout << sp / cp << std::endl;
	}
	if (x > 0) {
		std::cout << "0" << std::endl;
		} else {
		std::cout << se / ce << std::endl;
	}
}
int min(int a, int b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}
int max(int a, int b) {
	if (a < b) {
		return b;
	} else {
		return a;
	}
}
