
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

// массив
namespace array {
	// одномерный
	namespace flat {
		// получение нового
		int * getNew(int size) {
			int * array;
			array = new int[size];
			return array;
		}
		// удаление
		void del(int * array, int size) {
			delete[] array;
		}
		// заполнение
		void fill(int * array, int size) {
			int i;
			for (i = 0; i < size; i += 1) {
				array[i] = std::rand();
			}
		}
		// увеличение
		void increase(int * array, int size, int value) {
			int i;
			for (i = 0; i < size; i += 1) {
				array[i] += value;
			}
		}
		// обрезание
		void clip(int * array, int size, int length = 1000) {
			int i;
			for (i = 0; i < size; i += 1) {
				array[i] %= length;
			}
		}
		// вывод
		void print(int * array, int size) {
			int i;
			for (i = 0; i < size; i += 1) {
				std::cout << "[" << i << "] = " << array[i] << std::endl;
			}
		}
		// замена значений
		void replace(int * array, int size, int replace, int value) {
			int i;
			for (i = 1; i < size; i += 1) {
				if (array[i] == replace) {
					array[i] = value;
				}
			}
		}
		// взаимозамена значений
		void interchange(int * array, int size, int a, int b) {
			int i;
			for (i = 1; i < size; i += 1) {
				if (array[i] == a) {
					array[i] = b;
				} else
				if (array[i] == b) {
					array[i] = a;
				}
			}
		}
		// взаимозамена наибольших и наименьших значений
		void swapMaxMin(int * array, int size) {
			int max, min, i;
			max = array[0];
			min = array[0];
			for (i = 1; i < size; i += 1) {
				if (max < array[i]) {
					max = array[i];
				} else if (array[i] < min) {
					min = array[i];
				}
			}
			for (i = 0; i < size; i += 1) {
				if (array[i] == min) {
					array[i] = max;
				} else if (array[i] == max) {
					array[i] = min;
				}
			}
		}
		// сумма отрицательных
		long sumNegative(int * array, int size) {
			int sum;
			int i;
			sum = 0;
			for (i = 1; i < size; i += 1) {
				if (array[i] < 0) {
					sum += array[i];
				}
			}
			return sum;
		}
		// сумма положительных
		long sumPositive(int * array, int size) {
			long sum;
			int i;
			sum = 0;
			for (i = 1; i < size; i += 1) {
				if (0 < array[i]) {
					sum += array[i];
				}
			}
			return sum;
		}
		// наибольшее значение
		int max(int * array, int size) {
			int max, i;
			max = array[0];
			for (i = 1; i < size; i += 1) {
				if (max < array[i]) {
					max = array[i];
				}
			}
			return max;
		}
		// наименьшее значение
		int min(int * array, int size) {
			int min, i;
			min = array[0];
			for (i = 1; i < size; i += 1) {
				if (array[i] < min) {
					min = array[i];
				}
			}
			return min;
		}
		// разность наибольшего и наименьшего значений
		int difMaxMin(int * array, int size) {
			int max, min, i, dif;
			max = array[0];
			min = array[0];
			for (i = 1; i < size; i += 1) {
				if (max < array[i]) {
					max = array[i];
				}
				if (array[i] < min) {
					min = array[i];
				}
			}
			dif = max - min;
			return dif;
		}
		// сумма значений
		int sum(int * array, int size) {
			int sum, i;
			sum = 0;
			for (i = 0; i < size; i += 1) {
				sum += array[i];
			}
			return sum;
		}
		// седнее значение
		int avg(int * array, int size) {
			int sum, i;
			sum = 0;
			for (i = 0; i < size; i += 1) {
				sum += array[i];
			}
			sum /= size;
			return sum;
		}
		// поиск
		bool search(int value, int * array, int size) {
			int i;
			for (i = 0; i < size; i += 1) {
				if (array[i] == value) {
					return true;
				}
			}
			return false;
		}
	}
	// двумерный
	namespace rect {
		// получение нового
		int ** getNew(int rows, int cols) {
			int r;
			int ** array;
			array = new int * [rows];
			for (r = 0; r < rows; r += 1) {
				array[r] = new int[cols];
			}
			return array;
		}
		// удаление
		void del(int ** array, int rows, int cols) {
			int r;
			for (r = 0; r < rows; r += 1) {
				delete[] array[cols];
			}
			delete[] array;
		}
		// заполнение
		void fill(int ** array, int rows, int cols) {
			int r, c;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					array[r][c] = std::rand();
				}
			}
		}
		// увеличение
		void increase(int ** array, int rows, int cols, int value) {
			int r, c;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					array[r][c] += value;
				}
			}
		}
		// обрезание
		void clip(int ** array, int rows, int cols, int length = 1000) {
			int r, c;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					array[r][c] %= length;
				}
			}
		}
		// вывод
		void print(int ** array, int rows, int cols) {
			int r, c;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					std::cout << "[" << r << "][" << c << "] = " << array[r][c] << std::endl;
				}
			}
		}
		// замена значений
		void replace(int ** array, int rows, int cols, int replace, int value) {
			int r, c;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					if (array[r][c] == replace) {
						array[r][c] = value;
					}
				}
			}
		}
		// взаимозамена значений
		void interchange(int ** array, int rows, int cols, int a, int b) {
			int r, c;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					if (array[r][c] == a) {
						array[r][c] = b;
					} else
					if (array[r][c] == b) {
						array[r][c] = a;
					}
				}
			}
		}
		// взамозамена наибольших и наименьших значений
		void swapMaxMin(int ** array, int rows, int cols) {
			int max, min, r, c;
			max = array[0][0];
			min = array[0][0];
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					if (max < array[r][c]) {
						max = array[r][c];
					} else if (array[r][c] < min) {
						min = array[r][c];
					}
				}
			}
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					if (array[r][c] == min) {
						array[r][c] = max;
					} else if (array[r][c] == max) {
						array[r][c] = min;
					}
				}
			}
		}
		// сумма отрицательных
		long sumNegative(int ** array, int rows, int cols) {
			long long sum;
			int r, c;
			sum = 0;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					if (array[r][c] < 0) {
						sum += array[r][c];
					}
				}
			}
			return sum;
		}
		// сумма положительных
		long sumPositive(int ** array, int rows, int cols) {
			long long sum;
			int r, c;
			sum = 0;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					if (0 < array[r][c]) {
						sum += array[r][c];
					}
				}
			}
			return sum;
		}
		// наибольшее значение
		int max(int ** array, int rows, int cols) {
			int max, r, c;
			max = array[0][0];
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					if (max < array[r][c]) {
						max = array[r][c];
					}
				}
			}
			return max;
		}
		// наименьшее значение
		int min(int ** array, int rows, int cols) {
			int min, r, c;
			min = array[0][0];
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					if (array[r][c] < min) {
						min = array[r][c];
					}
				}
			}
			return min;
		}
		// разность наибольшего и наименьшего значений
		int difMaxMin(int ** array, int rows, int cols) {
			int max, min, r, c, dif;
			max = array[0][0];
			min = array[0][0];
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					if (max < array[r][c]) {
						max = array[r][c];
					} else if (array[r][c] < min) {
						min = array[r][c];
					}
				}
			}
			dif = max - min;
			return dif;
		}
		// сумма значений
		int sum(int ** array, int rows, int cols) {
			int sum, r, c;
			sum = 0;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					sum += array[r][c];
				}
			}
			return sum;
		}
		// седнее значение
		int avg(int ** array, int rows, int cols) {
			int sum, r, c;
			sum = 0;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					sum += array[r][c];
				}
			}
			sum /= rows * cols;
			return sum;
		}
		// поиск
		bool search(int value, int ** array, int rows, int cols) {
			int r, c;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; c < cols; c += 1) {
					if (array[r][c] == value) {
						return true;
					}
				}
			}
			return false;
		}
		// вывод таблицы
		void printTable(int ** array, int rows, int cols, int length = 3) {
			int r, c;
			std::cout << std::setw(length + 2) << "R C ";
			std::cout << std::setfill('0');
			for (c = 0; c < cols; c += 1) {
				std::cout << "[" << std::setw(length) << c << "]";
			}
			std::cout << std::endl;
			for (r = 0; r < rows; r += 1) {
				std::cout << "[" << std::setw(length) << r << "]";
				for (c = 0; c < cols; c += 1) {
					std::cout << " " << std::setw(length) << array[r][c] << " ";
				}
				std::cout << std::endl;
			}
			std::cout << std::setfill(' ');
		}
		// сумма значений над главной диогональю
		int sumSup(int ** array, int rows, int cols) {
			int sum, r, c;
			sum = 0;
			for (r = 0; r < rows; r += 1) {
				for (c = r + 1; c < cols; c += 1) {
					sum += array[r][c];
				}
			}
			return sum;
		}
		// сумма значений под главной диогональю
		int sumSub(int ** array, int rows, int cols) {
			int sum, r, c;
			sum = 0;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; r + c + 1 < cols; c += 1) {
					sum += array[r][c];
				}
			}
			return sum;
		}
		// количество седловых элементов
		int countABC(int ** array, int rows, int cols) {
			int sum, r, c;
			sum = 0;
			for (r = 0; r < rows; r += 1) {
				for (c = 0; r + c + 1 < cols; c += 1) {
					sum += array[r][c];
				}
			}
			return sum;
		}
	}
}
