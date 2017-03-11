
#include <iostream>

#include "./common"

int main() {
	const int rows = 10;
	const int cols = 10;
	const int size = rows * cols;
	int ** rect;
	int r, c, count;
	//
	rect = array::rect::getNew(cols, rows);
	array::rect::fill(rect, cols, rows);
	array::rect::clip(rect, cols, rows);
	std::cout << std::endl;
	//
	std::cout << "таблица элементов двумерного массива" << std::endl;
	array::rect::printTable(rect, rows, cols);
	std::cout << std::endl;
	//
	std::cout << "таблица элементов двумерного массива после сортировки строк по убыванию значений в первом столбце" << std::endl;
	for (c = 1; c < rows; c += 1) {
		for (r = 1; r < rows; r += 1) {
			if (rect[r - 1][0] < rect[r][0]) {
				std::swap(rect[r - 1], rect[r]);
			}
		}
	}
	array::rect::printTable(rect, rows, cols);
	std::cout << std::endl;
}
