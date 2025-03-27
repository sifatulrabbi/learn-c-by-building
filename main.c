#include "list_sorting.h"
#include "utils.h"
#include "working_with_files.h"
#include <stdio.h>

int main() {
	printf("sorting an array in C\n");
	int myarr[7] = {7, 5, 6, 3, 4, 1, 2};
	int myarr_size = sizeof(myarr) / sizeof(myarr[0]);

	printf("before sort:");
	print_arr(myarr, myarr_size);
	printf("\n");

	quicksortarr(myarr, myarr_size);

	printf("after:");
	print_arr(myarr, myarr_size);
	printf("\n");
	print_line_break();

	open_read_print("input.txt");

	return 0;
};
