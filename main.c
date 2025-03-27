// #include "modules.h"
#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>

struct MyArr {
	int v[];
	int len;
};

void calc_arr_len(int *arr) {
	int i;
	printf("accessing the actual value\n");
	for (i = 0; i < sizeof(*arr); i++) {
		printf("%i\n", arr[i]);
	};

	printf("accessing the pointer only\n");
	for (i = 0; i < sizeof(arr); i++) {
		printf("%i\n", arr[i]);
	};

	int *arr_ptr = arr;
	int the_arr = *arr;
}

int main() {
	printf("Learning C\n");

	int mylist[] = {1, 2, 3, 4, 5, 6};
	printf("Number of items in the list: %lu\n",
		   sizeof(mylist) / sizeof(mylist[0]));

	// printf("%lu\n", sizeof(int *));
	// printf("%lu\n", sizeof(int));
	calc_arr_len(mylist);
	return 0;
};
