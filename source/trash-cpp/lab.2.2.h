
#include "stdafx.h"

#include <iostream>
#include <locale>

float f(float x, float y);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "f(x, y) = {" << std::endl;
	std::cout << "\tx + y, если x > 0" << std::endl;
	std::cout << "\txy, если x <= 0, y < 0" << std::endl;
	std::cout << "\t5x, в остальных случаях" << std::endl;
	std::cout << "}" << std::endl;
	std::cout << "введите x и y" << std::endl;
	float x, y;
	std::cin >> x >> y;
	std::cout << "f(x, y) = " << f(x, y) << std::endl;
}

float f(float x, float y) {
	if (0 < x) {
		return x + y;
	} else if (x <= 0 && y < 0) {
		return x * y;
	} else {
		return 5 * x;
	}
}

// f(x, y) = {
// x + y, если x > 0
// xy, если x <= 0, y < 0
// 5x, в остальных случаях
// }
