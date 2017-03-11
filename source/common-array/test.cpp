
#include <iostream>

#include "./common"

// заполнение
void arrayRectFill(int ** array, int rows, int cols) {
	int r, c;
	for (r = 0; r < rows; r += 1) {
		for (c = 0; c < cols; c += 1) {
			array[r][c] = 999;
		}
	}
}

int main() {
	const int rows = 3;
	const int cols = 3;
	int r, c;
	int ** rect;
	int array[rows][cols];
	std::cout << std::endl;
	//
	rect = new int * [rows];
	for (r = 0; r < rows; r += 1) {
		rect[r] = new int [cols];
		for (c = 0; c < cols; c += 1) {
			rect[r][c] = std::rand() % 1000;
		}
	}
	arrayRectFill(rect, cols, rows);
	for (r = 0; r < rows; r += 1) {
		for (c = 0; c < cols; c += 1) {
			std::cout << "[" << r << "][" << c << "] = " << rect[r][c] << std::endl;
		}
	}
	std::cout << std::endl;
	//
	for (r = 0; r < rows; r += 1) {
		for (c = 0; c < cols; c += 1) {
			array[r][c] = std::rand() % 1000;
		}
	}
	arrayRectFill(rect, cols, rows);
	for (r = 0; r < rows; r += 1) {
		for (c = 0; c < cols; c += 1) {
			std::cout << "[" << r << "][" << c << "] = " << array[r][c] << std::endl;
		}
	}
	std::cout << std::endl;
}
