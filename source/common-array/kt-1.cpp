
#include <iostream>

#include "./common"

int main() {
	const int rows = 7;
	const int cols = 11;
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
	std::cout << "количество пар соседних одинаковых элементов" << std::endl;
	count = 0;
	for (r = 1; r < rows; r += 1) {
		for (c = 1; c < cols; c += 1) {
			if (rect[r - 1][c] == rect[r][c]) {
				count += 1;
			}
			if (rect[r][c - 1] == rect[r][c]) {
				count += 1;
			}
		}
	}
	std::cout << count << std::endl;
	std::cout << std::endl;
}
