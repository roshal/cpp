
void sort_fast(int *array, int length) {
	int i, j, temp;
	for (i = 0; i < length; i += 1) {
		for (j = i; j < length; j += 1) {
			if (array[i] < array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
