
#include <iostream>

#include "./common"

int * array_flat_bothMinMax(int * array, int size) {
	int min, max, i;
	int * result = new int [2];
	min = array[0];
	max = array[0];
	for (i = 1; i < size; i += 1) {
		if (array[i] < min) {
			min = array[i];
		}
		if (max < array[i]) {
			max = array[i];
		}
	}
	result[0] = min;
	result[1] = max;
	std::cout << "адреса значений результирующего массива внутри функции" << std::endl;
	std::cout << &result[0] << std::endl;
	std::cout << &result[1] << std::endl;
	std::cout << std::endl;
	return result;
}

int main() {
	const int size = 10;
	int flat[size];
	int * result;
	//
	array::flat::fill(flat, size);
	std::cout << std::endl;
	//
	std::cout << "элементы числового массива" << std::endl;
	array::flat::print(flat, size);
	std::cout << std::endl;
	//
	result = array_flat_bothMinMax(flat, size);
	//
	std::cout << "адреса значений результирующего массива вне функции" << std::endl;
	std::cout << &result[0] << std::endl;
	std::cout << &result[1] << std::endl;
	std::cout << std::endl;
	//
	std::cout << "значения наименьших и наибольших значений массива" << std::endl;
	std::cout << result[0] << std::endl;
	std::cout << result[1] << std::endl;
	std::cout << std::endl;
}
