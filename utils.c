#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

char END[2] = "\0";

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

void swapints(int *a, int *b) {
	int c = *a;
	*a = *b, *b = c;
};

void print_line_break() {
	printf("-------------------------------------------------\n");
};

void printnclear() {
	system("clear");
	print_line_break();
};

int strsize(char *str) {
	int i = 0;
	while (str[i] != *END) {
		i++;
		if (i > INT_MAX) {
			printf("Max allowed text size: %d\n", INT_MAX);
			perror("ERROR: your text is too long!");
		}
	}
	return i;
}
