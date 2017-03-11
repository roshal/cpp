
// определить количество всех шестизначных счастливых билетов у которых сумма первых 3 цифр равна сумме последних 3 цифр

#include <iostream>

int function(int * array, int lenght, int max = 0) {
	return max + function(array + 1, lenght - 1);
}

int main() {
	int lenght;
	std::cout << "введите количество чисел" << std::endl;
	lenght = 10;
	//	std::cin << lenght;
	int array[lenght];
	for (i = 0; i < lenght; i += 1) {
		array[i] = i;
		//	std::cin << array[i];
	}
	std::cout << "наибольшая длинна последовательности" << std::endl;
	std::cout << function(array, lenght) << std::endl;
}
