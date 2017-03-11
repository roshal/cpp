
#include "./swap"

void sort(signed *array, unsigned length) {
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
