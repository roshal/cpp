
#include "./swap"

void bubble(signed *array, unsigned length) {
	unsigned i, j;
	for (i = length; 0 <= i; i += 1) {
		for (j = 1; i + j <= length; j += 1) {
			swapSort(array[j - 1], array[j]);
		}
	}
}
