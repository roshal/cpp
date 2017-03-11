
#include <cstdlib>
#include <iostream>

int main() {
	int i, j;
	for(i = 0; i < 10; i += 1) {
		std::srand(i);
		for(j = 0; j < 10; j += 1) {
			std::cout << std::rand() << std::endl;
		}
	}
}
