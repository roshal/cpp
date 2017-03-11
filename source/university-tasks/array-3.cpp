
#include <cstdlib>
#include <iostream>

int ** new_array(int rows, int cols) {
	int r, c;
	int ** array;
	array = new int * [rows];
	for (r = 0; r < rows; r += 1) {
		array[r] = new int[cols];
		for (c = 0; c < cols; c += 1) {
			array[r][c] = std::rand();
		}
	}
	return array;
}

void print_array(int ** array, int rows, int cols) {
	int r, c;
	for (r = 0; r < rows; r += 1) {
		for (c = 0; c < cols; c += 1) {
			std::cout << "[" << r << "][" << c << "] = " << array[r][c] << std::endl;
		}
	}
}

void transpose_array(int ** array, int rows, int cols) {
	int r, c;
	for (r = 0; r < rows; r += 1) {
		for (c = 0; c < cols; c += 1) {
			std::swap(array[r][c], array[c][r]);
		}
	}
}

long sum_under_secondary_diagonal(int ** array, int rows, int cols) {
	long sum;
	int r, c;
	sum = 0;
	for (r = 0; r < rows; r += 1) {
		for (c = cols - r; c < cols; c += 1) {
			sum += array[r][c];
		}
	}
	return sum;
}

int main() {
	const int rows = 9;
	const int cols = 9;
	int ** array;
	long sum;
	//
	array = new_array(rows, cols);
	std::cout << std::endl;
	//
	std::cout << "исходный массив" << std::endl;
	print_array(array, rows, cols);
	std::cout << std::endl;
	//
	std::cout << "транспонированый массив" << std::endl;
	transpose_array(array, rows, cols);
	print_array(array, rows, cols);
	std::cout << std::endl;
	//
	std::cout << "сумма элементовв под побочной диагональю" << std::endl;
	sum = sum_under_secondary_diagonal(array, rows, cols);
	std::cout << sum << std::endl;
	std::cout << std::endl;
}
