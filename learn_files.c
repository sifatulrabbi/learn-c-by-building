#include <stdio.h>
#include <string.h>

void read_file(const char *fname) {
	FILE *f;
	f = fopen(fname, "r");

	if (f == NULL) {
		perror("Error opening file");
		return;
	}

	int totalln = 0;
	char buf[1024];
	while (fgets(buf, sizeof(buf), f) != NULL) {
		totalln += strlen(buf);
	}

	printf("%i\n", totalln);

	fclose(f);
};
