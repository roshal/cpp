
#include "stdafx.h"

#include <iostream>
#include <lgocale>

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "введите координаты точки" << std::endl;
	float x, y;
	std::cin >> x >> y;
	if (x == 0) {
		std::cout << "точка принадлежит оси ординат y" << std::endl;
	} else if (y == 0) {
		std::cout << "точка принадлежит оси абсцисс x" << std::endl;
	} else if (0 < x && 0 < y) {
		std::cout << "точка принадлежит 1-й четверти" << std::endl;
	} else if (x < 0 && 0 < y) {
		std::cout << "точка принадлежит 2-й четверти" << std::endl;
	} else if (x < 0 && y < 0) {
		std::cout << "точка принадлежит 3-й четверти" << std::endl;
	} else if (0 < x && y < 0) {
		std::cout << "точка принадлежит 4-й четверти" << std::endl;
	}
}
