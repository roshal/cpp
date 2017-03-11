
#include <cstdlib>
#include <iomanip>
#include <iostream>

// количество делителей
int div_count(int number) {
	int count, i;
	count = 0;
	for (i = 1; i < number; i += 1) {
		if (number % i == 0) {
			count += 1;
		}
	}
	return count;
}

// среднее арифметическое
int array_avg_div_count(int * array, int size) {
	int value, i;
	value = 0;
	for (i = 0; i < size; i += 1) {
		value += div_count(array[i]);
	}
	return value / size;
}

// Вывод
void arrayPrint(int * array, int size) {
	int width, i;
	width = 12;
	std::cout << std::setw(width) << "index";
	std::cout << std::setw(width) << "value";
	std::cout << std::setw(width) << "count";
	std::cout << std::endl;
	for (i = 0; i < size; i += 1) {
		std::cout << std::setw(width) i;
		<< std::setw(width) << array[i] << std::setw(width) << div_count(array[i]) << std::endl;
	}
}

// Заполнение
void arrayFill(int * array, int size) {
	int i;
	for (i = 0; i < size; i += 1) {
		array[i] = std::rand() % 1000;
	}
}
// Проверка сортировки
bool testSortByDivCount(int * array, int size) {
	int i;
	for (i = 1; i < size; i += 1) {
		if (div_count(array[i]) < div_count(array[i - 1])) {
			return false;
		}
	}
	return true;
}

// Быстрая сортировка по возрастанию количества делителей
void sortQuickByDivCount(int * array, int size) {
	int l, r, value;
	l = 0;
	r = size - 1;
	value = div_count(array[std::rand() % (size - 1)]);
	//	value = array_avg_div_count(array, size);
	while (l <= r) {
		while (div_count(array[l]) < value) {
			l += 1;
		}
		while (value < div_count(array[r])) {
			r -= 1;
		}
		if (l <= r) {
			std::swap(array[l], array[r]);
			l += 1;
			r -= 1;
		}
	}
	if (1 < l) {
		sortQuickByDivCount(array, l);
	}
	if (1 < size - l) {
		sortQuickByDivCount(array + l, size - l);
	}
}

int main() {
	const int size = 10;
	int array[size];
	//
	arrayFill(array, size);
	std::cout << std::endl;
	//
	std::cout << "исходный массив" << std::endl;
	arrayPrint(array, size);
	std::cout << std::endl;
	//
	std::cout << "отсортированный массив" << std::endl;
	sortQuickByDivCount(array, size);
	arrayPrint(array, size);
	std::cout << std::endl;
	//
	if (testSortByDivCount(array, size) == true) {
		std::cout << "прошел проверку" << std::endl;
	} else {
		std::cout << "не прошел проверку" << std::endl;
	}
	std::cout << std::endl;
}
