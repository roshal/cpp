
#include <iostream>

#include "./is-palindrome"

void main() {
	setlocale(LC_ALL, "");
	std::cout << "введите положительное целое число" << std::endl;
	unsigned int num;
	std::cin >> num;
	if (is_palindrome(num)) {
		std::cout << "число является палиндромом." << std::endl;
	} else {
		std::cout << "число не является палиндромом." << std::endl;
	}
	system("pause");
}
