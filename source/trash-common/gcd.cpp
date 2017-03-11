
#include <iostream>

#include "./gcd"

void main() {
	setlocale(LC_ALL, "");
	std::cout << "введите два целых числа" << std::endl;
	int a, b;
	std::cin >> a >> b;
	std::cout << "наибольший общий делитель" << std::endl;
	std::cout << gcd(a, b) << std::endl;
	system("pause");
}
