
#include "./min"

double min(double a, double b) {
	return a < b ? a : b;
}#include <iostream>

int main() {
	setlocale(LC_ALL, "");
	std::cout << "введите два числа" << std::endl;
	double a, b;
	std::cin >> a >> b;
	std::cout << "наименьшее число" << std::endl;
	std::cout << min(a, b) << std::endl;
	return 0;
}
