
void sort_insert(int *array, int length) {
	int i, j, k, temp;
	for (i = 0; i < length; i += 1) {
		temp = array[i];
		for (j = i; 0 < j && temp < array[j - 1]; --j) {
			array[j] = array[j - 1];
		}
		array[j] = temp;
	}
}
