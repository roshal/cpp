
#include "stdafx.h"

#include <iostream>
#include <locale>

int function(int n);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите число" << std::endl;
	int a;
	std::cin >> a;
	std::cout << "число" << std::endl;
	std::cout << function(a) << std::endl;
}
int function(int n) {
	return n;
}
