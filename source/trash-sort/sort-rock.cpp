
void sort_rock(int *A, int length) {
	int *P[length];
	int i, j, k, temp;
	for (i = 0; i < length; i += 1) {
		temp = A[i];
		for (j = i; 0 < j && temp < A[j - 1]; --j) {
			A[j] = A[j - 1];
		}
		A[j] = temp;
	}
	for (i = 0; i < length; i += 1) {
		;
	}
}
