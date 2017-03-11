
#include <iostream>

int main() {
	setlocale(LC_ALL, "");
	std::cout << "введите целое число" << std::endl;
	int num;
	std::cin >> num;
	std::cout << "сумма цифр" << std::endl;
	std::cout << sum_digits(num) << std::endl;
	return 0;
}
