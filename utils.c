#include <stdio.h>

void print_arr(int *arr, int len) {
	int i;
	printf("[");
	for (i = 0; i < len; i++) {
		printf("%i", arr[i]);
		if (i + 1 < len) {
			printf(",");
		}
	}
	printf("]");
};
