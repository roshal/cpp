
#include "stdafx.h"

#include <iostream>
#include <locale>

float f(float k, float m);

void main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "f(k, m) = {" << std::endl;
	std::cout << "\tkm - 4, если k > m / 2" << std::endl;
	std::cout << "\tk - 4m, если m > k / 2" << std::endl;
	std::cout << "\tm - 4, в остальных случаях" << std::endl;
	std::cout << "}" << std::endl;
	std::cout << "введите k" << std::endl;
	float k;
	std::cin >> k;
	std::cout << "введите m" << std::endl;
	float m;
	std::cin >> m;
	std::cout << "f(k, m) = " << f(k, m) << std::endl;
}

float f(float k, float m) {
	if (m / 2 < k) {
		return k * m - 4;
	} else if (k / 2 < m) {
		return k  - 4 * m;
	} else {
		return m - 4;
	}
}
