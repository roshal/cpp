
void merge_sort(int low, int high) {
	int mid;
	if (low < high) {
		mid = low + (high - low) / 2;
		merge_sort(low, mid);
		merge_sort(mid + 1, high);
		merge(low, mid, high);
	}
}

void merge(int low, int mid, int high) {
	int h, i, j, b[50], k;
	h = low;
	i = low;
	j = mid + 1;
	while ((h <= mid) && (j <= high)) {
		if(a[h] <= a[j]) {
			b[i] = a[h];
			h += 1;
		} else {
			b[i] = a[j];
			j += 1;
		}
		i += 1;
	}
	if (mid < h) {
		for(k = j; k <= high; k += 1) {
			b[i] = a[k];
			i += 1;
		}
	} else {
		for(k = h; k <= mid; k += 1) {
			b[i] = a[k];
			i += 1;
		}
	}
	for (k = low; k <= high; k += 1) {
		a[k] = b[k];
	}
}
