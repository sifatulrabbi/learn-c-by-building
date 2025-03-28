#include <stdio.h>

void open_read_print(char *filename) {
	printf("Opening file '%s' in read mode\n", filename);

	int readlen = 10;
	char buf[readlen];
	FILE *f;
	f = fopen(filename, "r");
	while (fgets(buf, readlen, f) != NULL) {
		printf("%s", buf);
	}
};

/* void write_file(char *filename, char *content) {
	int readlen = 10;
	char buf[readlen];
}; */
