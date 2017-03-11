
#include <iostream>

#include "./gcd"
#include "./gcd-odd"

void main() {
	setlocale(LC_ALL, "");
	std::cout << "введите два целых числа" << std::endl;
	int a, b;
	std::cin >> a >> b;
	std::cout << "наибольший нечетный общий делитель" << std::endl;
	std::cout << gcd_odd(a, b) << std::endl;
	system("pause");
}
