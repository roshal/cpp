
#include <iostream>

#include "./is-pythagorean-prime"

void main() {
	setlocale(LC_ALL, "");
	std::cout << "введите целое число" << std::endl;
	int num;
	std::cin >> num;
	if (is_pythagorean_prime(num)) {
		std::cout << "число является простым числом Пифагора." << std::endl;
	} else {
		std::cout << "число не является простым числом Пифагора." << std::endl;
	}
	system("pause");
}
