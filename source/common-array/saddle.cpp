
#include <iostream>

#include "./common"

int main() {
	const int rows = 3;
	const int cols = 3;
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
	std::cout << "количество седловых точек" << std::endl;
	count = 0;
	int max_r, max_c;
	for (r = 0; r < rows; r += 1) {
		max_c = 0;
		for (c = 1; c < cols; c += 1) {
			if (rect[r][c - 1] < rect[r][c]) {
				max_c = c;
			}
		}
		max_r = 0;
		for (c = 1; c < cols; c += 1) {
			if (rect[c - 1][max_c] < rect[c][max_c]) {
				max_r = c;
			}
		}
		if (max_r == r) {
			count += 1;
		}
	}
	std::cout << count << std::endl;
	std::cout << std::endl;
}
`
