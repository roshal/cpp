
#include <iostream>

#include "./gcd"
#include "./lcm"

void main() {
	setlocale(LC_ALL, "");
	std::cout << "введите два целых числа" << std::endl;
	int a, b;
	std::cin >> a >> b;
	std::cout << "наименьшее общее кратное" << std::endl;
	std::cout << lcm(a, b) << std::endl;
	system("pause");
}
