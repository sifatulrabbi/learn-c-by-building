#include <stdio.h>
#include <string.h>

int main() {
	FILE *fptr;
	fptr = fopen("input.txt", "r");

	if (fptr == NULL) {
		printf("file not found\n");
		return 1;
	};

	const char delim[3] = "   ";
	char buf[100];
	while (!feof(fptr)) {
		fgets(buf, 100, fptr);
		if (strcmp(buf, "---\n") == 0) {
			printf("stop sing found\n");
			break;
		}
		char *tokens = strtok(buf, delim);
		printf("buf: %s", buf);
		printf("tokens: %s\n", tokens);
	}

	return 0;
};

// int main() {
// 	for (int i = 0; i < 5; i++) {
// 		if (i == 4) {
// 			printf("%d\n", i);
// 		} else {
// 			printf("%d", i);
// 		}
// 	}
//
// 	char a = 65, b = 66, c = 67;
// 	printf("%c ", a);
// 	printf("%c ", b);
// 	printf("%c\n", c);
//
// 	char msg[12] = "hello world!";
// 	char m2 = *(msg + 12);
// 	printf("msg: %s\n", msg);
// 	printf("m2: %c\n", m2);
// 	printf("msg[10]: %c\n", msg[11]);
//
// 	return 0;
// }
