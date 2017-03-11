
#include "stdafx.h"

#include <iostream>
#include <locale>

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите номер месяца" << std::endl;
	int n;
	std::cin >> n;
	//*/
	switch (n) {
		case 1:
		case 2:
		case 3:
			std::cout << "1-й квартал" << std::endl;
			break;
		case 4:
		case 5:
		case 6:
			std::cout << "2-й квартал" << std::endl;
			break;
		case 7:
		case 8:
		case 9:
			std::cout << "3-й квартал" << std::endl;
			break;
		case 10:
		case 11:
		case 12:
			std::cout << "4-й квартал" << std::endl;
			break;
		default:
			std::cout << "ошибка ввода" << std::endl;
	}
	// if (!(0 < n < 13)) {
	// 	std::cout << "ошибка ввода" << std::endl;
	// } else if (0 < n < 4) {
	// 	std::cout << "1-й квартал" << std::endl;
	// } else if (3 < n < 7) {
	// 	std::cout << "1-й квартал" << std::endl;
	// } else if (6 < n < 10) {
	// 	std::cout << "1-й квартал" << std::endl;
	// } else if (9 < n < 13) {
	// 	std::cout << "1-й квартал" << std::endl;
	// }
}
