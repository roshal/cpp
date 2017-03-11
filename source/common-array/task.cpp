
#include <iostream>

#include "./common"

int main() {
	const int rows = 10;
	const int cols = 10;
	const int size = rows * cols;
	int ** rect;
	int arrayAvg[rows];
	int arrayMax[rows];
	int r, c, max, min, sum, avg, dif;
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
	std::cout << "взаимозамена максимальных и минимальных значений массива" << std::endl;
	array::rect::swapMaxMin(rect, rows, cols);
	array::rect::printTable(rect, rows, cols);
	std::cout << std::endl;
	//
	std::cout << "наибольшее значение массива" << std::endl;
	max = array::rect::max(rect, rows, cols);
	std::cout << max << std::endl;
	std::cout << std::endl;
	//
	std::cout << "наименьшее значение массива" << std::endl;
	min = array::rect::min(rect, rows, cols);
	std::cout << min << std::endl;
	std::cout << std::endl;
	//
	std::cout << "разница наибольшего и наименьшего значений массива" << std::endl;
	dif = array::rect::difMaxMin(rect, rows, cols);
	std::cout << dif << std::endl;
	std::cout << std::endl;
	//
	std::cout << "сумма значений над главной диогональю массива" << std::endl;
	sum = array::rect::sumSup(rect, rows, cols);
	std::cout << sum << std::endl;
	std::cout << std::endl;
	//
	std::cout << "среднее значение массива" << std::endl;
	avg = array::rect::avg(rect, rows, cols);
	std::cout << avg << std::endl;
	std::cout << std::endl;
	//
	std::cout << "элементы нового массива со средними значениями строк массива" << std::endl;
	for (r = 0; r < rows; r += 1) {
		arrayAvg[r] = 0;
		for (c = 0; c < cols; c += 1) {
			arrayAvg[r] += rect[r][c];
		}
		arrayAvg[r] /= cols;
	}
	array::flat::print(arrayAvg, rows);
	std::cout << std::endl;
	//
	std::cout << "элементы нового массива с наибольшими значениями строк массива" << std::endl;
	for (r = 0; r < rows; r += 1) {
		arrayMax[r] = rect[r][0];
		for (c = 1; c < cols; c += 1) {
			if (arrayMax[r] < rect[r][c]) {
				arrayMax[r] = rect[r][c];
			}
		}
	}
	array::flat::print(arrayMax, rows);
	std::cout << std::endl;
}
