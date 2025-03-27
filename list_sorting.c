#include <stdio.h>

void quicksortarr(int *arr, int len) {
	int i, j;
	for (i = 0; i < len + 1; i++) {
		for (j = i; j < len; j++) {
			if (arr[i] > arr[j]) {
				int iv = arr[i], jv = arr[j];
				arr[i] = jv, arr[j] = iv;
			}
		}
	}
};
