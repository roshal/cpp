
#include <iostream>

int * array_flat_getNew(int size) {
	int * array;
	array = new int [size];
	return array;
}

void array_flat_del(int * array, int size) {
	delete [] array;
}

void array_flat_fill(int * array, int size) {
	int i;
	for (i = 0; i < size; i += 1) {
		array[i] = (long) &array[i];
	}
}

void array_flat_print(int * array, int size) {
	int i;
	for (i = 0; i < size; i += 1) {
		std::cout << "[" << i << "] = " << array[i] << std::endl;
	}
}

int ** array_rect_getNew(int rows, int cols) {
	int r, c;
	int ** array;
	array = new int * [rows];
	for (r = 0; r < rows; r += 1) {
		array[r] = new int [cols];
	}
	return array;
}

void array_rect_del(int ** array, int rows, int cols) {
	int r;
	for (r = 0; r < rows; r += 1) {
		delete [] array[cols];
	}
	delete [] array;
}

void array_rect_fill(int ** array, int rows, int cols) {
	int r, c;
	for (r = 0; r < rows; r += 1) {
		for (c = 0; c < cols; c += 1) {
			array[r][c] = (long) &array[r][c];
		}
	}
}

void array_rect_print(int ** array, int rows, int cols, int size = 3) {
	int r, c;
	for (r = 0; r < rows; r += 1) {
		for (c = 0; c < cols; c += 1) {
			std::cout<< "[" << r << "][" << c << "] = " << array[r][c] << std::endl;
		}
	}
}

int main() {
	const int rows = 3;
	const int cols = 3;
	const int size = rows * cols;
	int * flat;
	int ** rect;
	//
	flat = array_flat_getNew(size);
	rect = array_rect_getNew(rows, cols);
	std::cout << std::endl;
	//
	array_flat_fill(flat, size);
	array_flat_print(flat, size);
	std::cout << std::endl;
	//
	array_rect_fill(rect, rows, cols);
	array_rect_print(rect, rows, cols);
	std::cout << std::endl;
}
