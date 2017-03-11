
void sort_bin(int *array, int length) {
	int i, j, k, temp, increment = 0;
	for (i = 0; i < length; increment += 1, i += increment) {
		for (j = i; j < i + increment; j += 1) {
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
}
