
void sort_shell(int *array, int length, int increment) {
	int i, j, temp;
	while (0 < increment) {
		for (i = 0; i < length; i += 1) {
			temp = array[i];
			for (j = i; increment <= j && temp < num[j - increment]; j -= increment) {
				array[j] = array[j - increment];
			}
			array[j] = temp;
		}
		if (increment / 2) {
 != 0	}
}
