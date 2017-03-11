
#include <iostream>

#include "../array/common"

int main() {
	const int rows = 7;
	const int cols = 9;
	const int size = 70;
	int * flat;
	int ** rect;
	int flat_sum, rect_sum;
	float value;
	//
	flat = array::flat::getNew(size);
	array::flat::fill(flat, size);
	array::flat::clip(flat, size);
	array::flat::increase(flat, size, -500);
	rect = array::rect::getNew(rows, cols);
	array::rect::fill(rect, rows, cols);
	array::rect::clip(rect, rows, cols);
	array::rect::increase(rect, rows, cols, -500);
	std::cout << std::endl;
	//
	std::cout << "элементы одномерного массива" << std::endl;
	array::flat::print(flat, size);
	std::cout << std::endl;
	//
	std::cout << "элементы двумерного массива" << std::endl;
	array::rect::print(rect, rows, cols);
	std::cout << std::endl;
	//
	std::cout << "сумма отрицательных элементов одномерного массива" << std::endl;
	flat_sum = array::flat::sum_negative(flat, size);
	std::cout << flat_sum << std::endl;
	std::cout << std::endl;
	//
	std::cout << "сумма положительных элементов двумерного массива" << std::endl;
	rect_sum = array::rect::sum_positive(rect, rows, cols);
	std::cout << rect_sum << std::endl;
	std::cout << std::endl;
	//
	std::cout << "значение выражения" << std::endl;
	value = float(rect_sum + flat_sum) / (rect_sum - flat_sum);
	std::cout << value << std::endl;
	std::cout << std::endl;
}
