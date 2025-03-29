#include "learning.h"
#include <stdio.h>

void reverse_strings(char *str) {
	int i, j, len = strsize(str);
	int mid = len / 2;
	for (i = 0; i < mid; i++) {
		j = len - i - 1;
		char a = str[i];
		str[i] = str[j];
		str[j] = a;
	}
};
