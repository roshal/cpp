
#include <iostream>

#include "./gcd"
#include "./gcd-even"

void main() {
	setlocale(LC_ALL, "");
	std::cout << "введите два целых числа" << std::endl;
	int a, b;
	std::cin >> a >> b;
	int div_even = gcd_even(a, b);
	if (div_even) {
		std::cout << "наибольший четный общий делитель" << std::endl;
		std::cout << div_even << std::endl;
	} else {
		std::cout << "наибольшего четного общего делителя нет." << std::endl;
	}
	std::cout << gcd_even(a, b) << std::endl;
	system("pause");
}
