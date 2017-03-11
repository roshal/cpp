
// дана последовательность целых чисел
// найти сумму максимальной по длине подпоследовательности этих чисел в которой каждый следующий элемент делится нацело на предыдущий

#include <cstdlib>
#include <iostream>

int function(int * array, int lenght, int max = 0) {
	if (1 < lenght) {
		if (array[1] % array[0] == 0) {
			return 1 + function(array + 1, lenght - 1);
		}
	} else {
		return 1;
	}
}

int main() {
	int lenght, i;
	std::cout << "введите количество целых чисел" << std::endl;
	//	std::cin << lenght;
	lenght = 10;
	int array[lenght];
	for (i = 0; i < lenght; i += 1) {
		std::cout << i << ". введите целое число" << std::endl;
		//	std::cin << array[i];
		array[i] = std::rand() % 100;
	}
	std::cout << "наибольшая длинна последовательности" << std::endl;
	std::cout << function(array, lenght) << std::endl;
}
