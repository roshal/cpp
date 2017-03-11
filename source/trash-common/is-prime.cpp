
#include <iostream>

#include "./is-prime"

void main() {
	setlocale(LC_ALL, "");
	std::cout << "введите положительное целое число" << std::endl;
	unsigned int num;
	std::cin >> num;
	if (is_prime(num)) {
		std::cout << "число является простым." << std::endl;
	} else {
		std::cout << "число не является простым." << std::endl;
	}
	system("pause");
}
