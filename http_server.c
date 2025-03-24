#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int recur_till_you_die(int *m1, int i) {
	*m1 = *m1 + i;
	// printf("size of m1: %ld\n", sizeof(m1));
	if (*m1 > 1e2) {
		return *m1;
	}
	return recur_till_you_die(m1, *m1);
};
