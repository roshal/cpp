
#include <stdlib.h>

namespace sort {
	// Общее
	// Проверка сортировки
	unsigned test(signed *array, unsigned length) {
		unsigned i;
		for (i = 1; i < length; i += 1) {
			if (array[i] < array[i - 1]) {
				return i;
			}
		}
		return length;
	}
	// Обмен двух переменных
	void swap(signed &a, signed &b) {
		signed c;
		c = a;
		a = b;
		b = c;
	}
	// Обмен двух переменных в порядке
	void swapSort(signed &a, signed &b) {
		if (b < a) {
			swap(a, b);
		}
	}
	// Алгоритмы устойчивой сортировки
	// Сортировка пузырьком
	void bubble(signed *array, unsigned length) {
		unsigned i, j;
		for (i = 1; i < length; i += 1) {
			for (j = 1; i + j <= length; j += 1) {
				swapSort(array[j - 1], array[j]);
			}
		}
	}
	// Сортировка перемешиванием
	void shaker(signed *array, unsigned length) {
		unsigned i, left = 1, right = length;
		while (left < right) {
			for (i = left; i < right; i += 1) {
				swapSort(array[i - 1], array[i]);
			}
			right -= 1;
			for (i = right; left <= i; i -= 1) {
				swapSort(array[i - 1], array[i]);
			}
			left += 1;
		}
	}
	// Гномья сортировка
	void gnome(signed *array, unsigned length) {
		unsigned i = 1;
		while (i < length) {
			if (0 < i && array[i] < array[i - 1]) {
				swap(array[i - 1], array[i]);
				i -= 1;
			} else {
				i += 1;
			}
		}
	}
	// Сортировка вставками
	void insertion(signed *array, unsigned length) {
		unsigned i, j;
		for (i = 1; i < length; i += 1) {
			for (j = i; 0 < j; j -= 1) {
				if (array[j] < array[j - 1]) {
					swap(array[j - 1], array[j]);
				} else {
					break;
				}
			}
		}
	}
	// Сортировка слиянием
	/**
	 * Сортирует массив, используя рекурсивную сортировку слиянием
	 * up - указатель на массив, который нужно сортировать
	 * down - указатель на массив с, как минимум, таким же размером как у 'up', используется как буфер
	 * left - левая граница массива, передайте 0, чтобы сортировать массив с начала
	 * right - правая граница массива, передайте длину массива - 1, чтобы сортировать массив до последнего элемента
	 * возвращает: указатель на отсортированный массив. Из-за особенностей работы данной реализации
	 * отсортированная версия массива может оказаться либо в 'up', либо в 'down'
	 **/
	int *merge_sort(int *up, int *down, unsigned int left, unsigned int right) {
		if (left == right) {
			down[left] = up[left];
			return down;
		}
		unsigned int middle = (unsigned int) ((left + right) * 0.5);
		// разделяй и сортируй
		int *l_buff = merge_sort(up, down, left, middle);
		int *r_buff = merge_sort(up, down, middle + 1, right);
		// слияние двух отсортированных половин
		int *target = l_buff == up ? down : up;
		unsigned int width = right - left, l_cur = left, r_cur = middle + 1;
		for (unsigned int i = left; i <= right; i += 1) {
			if (l_cur <= middle && r_cur <= right) {
				if (l_buff[l_cur] < r_buff[r_cur]) {
					target[i] = l_buff[l_cur];
					l_cur += 1;
				} else {
					target[i] = r_buff[r_cur];
					r_cur += 1;
				}
			} else if (l_cur <= middle) {
				target[i] = l_buff[l_cur];
				l_cur += 1;
			} else {
				target[i] = r_buff[r_cur];
				r_cur += 1;
			}
		}
		return target;
	}
	// Алгоритмы неустойчивой сортировки
	// Сортировка выбором
	void select(signed *array, unsigned length){
		unsigned i, j, index;
		for (i = 0; i + 1 < length; i += 1) {
			index = i;
			for (j = i + 1; j < length; j += 1) {
				if (array[j] < array[index]) {
					index = j;
				}
			}
			if (i < index) {
				std::swap(array[i], array[index]);
			}
		}
	}
	// Сортировка Шелла
	void shells(signed *array, unsigned length) {
		unsigned i, j, k;
		signed value;
		for (k = length / 2; 0 < k; k /= 2) {
			for (i = k; i < length; i += 1) {
				value = array[i];
				for (j = i; k <= j; j -= k) {
					if (value < array[j - k]) {
						array[j] = array[j - k];
					} else {
						break;
					}
				}
				array[j] = value;
			}
		}
	}
	// Быстрая сортировка
	void quick(signed *array, int last, int first = 0) {
		unsigned i, j;
		signed value;
		i = first;
		j = last;
		value = array[(first + last) / 2];
		do {
			while (array[i] < value) {
				i += 1;
			}
			while (value < array[j]) {
				j -= 1;
			}
			if (i <= j) {
				std::swap(array[i], array[j]);
				i += 1;
				j -= 1;
			}
		} while (i <= j);
		if (i < last) {
			quick(array, last, i);
		}
		if (first < j) {
			quick(array, j, first);
		}
	}
	// сортировка расческой
	template <typename T, typename Comp>
	void combsort(T array[ ], std::size_t size, Comp cmp) {
		if (array && size) {
			std::size_t jump = size;
			bool swapped = true;
			while (jump > 1 || swapped) {
				if (jump > 1)
					jump /= 1.24733;
				swapped = false;
				for (std::size_t i = 0; i + jump < size; i += 1)
					if (cmp(array[i + jump], array[i])) {
						std::swap(array[i], array[i + jump]);
						swapped = true;
					}
			}
		}
	}
	// Stooge сортировка
	void stooge(signed *item, unsigned right, unsigned left = 0) {
		int tmp, k;
		swapSort(item[left], item[right]);
		if (right - left < 2) {
			return;
		}
		k = (int) ((right - left + 1) / 3);
		stooge(item, right - k, left);
		stooge(item, right, left + k);
		stooge(item, right - k, left);
	}
	// Непрактичные алгоритмы сортировки
	// Случайная сортировка
	void bogosort(signed *array, unsigned length) {
		while (! test(array, length)) {
			swap(array[rand() % length], array[rand() % length]);
		}
	}
	// Сортировка перестановкой
	void shift(signed *array, unsigned length) {
		unsigned i, j;
		for (i = 0; i < length; i += 1) {
			for (j = 0; j < length; j += 1) {
				if (i != j) {
					swapSort(array[j], array[i]);
				}
			}
		}
	}
	// Глупая сортировка
	void stupid(signed *array, unsigned length) {
		unsigned i = 1;
		while (i < length) {
			if (array[i] < array[i - 1]) {
				swap(array[i - 1], array[i]);
				i = 0;
			} else {
				i += 1;
			}
		}
	}
}
