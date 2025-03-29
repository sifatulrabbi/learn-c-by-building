#include "learning.h"
#include <stdio.h>

void reverse_strings(char *str) {
	printf("reversing %s\n", str);
	int i, j, len = strsize(str);
	int mid = len / 2;
	for (i = 0; i < mid; i++) {
		j = len - i - 1;
		char a = str[i];
		str[i] = str[j];
		str[j] = a;
	}
	printf("reversed: %s\n", str);
};

void test_reversing_strings() {
	char t1[] = "1234567890";
	char t2[] = "1";
	char t3[] = "";
	reverse_strings(t1);
	reverse_strings(t2);
	reverse_strings(t3);
};
