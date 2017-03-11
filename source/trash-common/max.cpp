
#include <iostream>

#include "./max"

int main() {
	setlocale(LC_ALL, "");
	std::cout << "введите два числа" << std::endl;
	double a, b;
	std::cin >> a >> b;
	std::cout << "наибольшее число" << std::endl;
	std::cout << max(a, b) << std::endl;
	return 0;
}
