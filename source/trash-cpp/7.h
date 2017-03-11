
#include "stdafx.h"

#include <cmath>
#include <iostream>
#include <locale>

void calc();
void print(float f);

void main() {
	setlocale(LC_ALL, "Russian");
	calc();
}
void calc() {
	std::cout << "введите команду и значения x и y" << std::endl;
	char c;
	float x, y;
	std::cin >> c >> x >> y;
	switch (c) {
		case '+':
			std::cout << x + y << std::endl;
			break;
		case '-':
			std::cout << x - y << std::endl;
			break;
		case '*':
			std::cout << x * y << std::endl;
			break;
		case '/':
			std::cout << x / y << std::endl;
			break;
		case 'ln':
			std::cout << log(y) / log(x) << std::endl;
			break;
		default:
			std::cout << "ощибка - команада не найдена" << std::endl;
			std::cout << "попытаться снова ? - yes / no" << std::endl;
			std::cin >> c;
			if (c == 'y') calc();
	}
}
void print(float f) {
	std::cout << f << std::endl;
}
