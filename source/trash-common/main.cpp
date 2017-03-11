
#include <iostream>

void main() {
	setlocale(LC_ALL, "");
	std::cout << "введите положительное целое число" << std::endl;
	unsigned int num;
	std::cin >> num;
	if (num) {
		std::cout << "список простых чисел" << std::endl;
		bool found;
		for (unsigned int i = 2; i < num; i += 1) {
			found = false;
			for (unsigned int j = 2; j < i; j += 1) {
				if (i % j == 0) {
					found = true;
					break;
				}
			}
			if (! found) {
				std::cout << i << std::endl;
			}
		}
	}
	system("pause");
}
