
// составить все возможные слова их n заданных букв
// слова не обязательно должны быть осмысленными словами русского языка

#include <iostream>

int factorial(int num) {
	return num < 2 ? 1 : num * factorial(num - 1);
}

int main() {
	int n, n_factorial, i, j, k;
	std::cout << "введите количество букв" << std::endl;
	std::cin >> n;
	n_factorial = factorial(n);
	char characters[n];
	char strings[n_factorial][n];
	std::cout << "введите набор букв" << std::endl;
	std::cin >> characters;
	for (i = 0; i < n_factorial; i += 1) {
		for (j = 0; j < n; j += 1) {
			for (k = j; k < n; k += 1) {
				strings[i][(j + k) % n] = characters[k];
			}
		}
	}
	std::cout << "слова" << std::endl;
	for (i = 0; i < n_factorial; i += 1) {
		for (j = 0; j < i; j += 1) {
			if (strings[i] == strings[j]) {
				break;
			}
		}
		if (i == j) {
			std::cout << strings[i] << std::endl;
		}
	}
}
