#include <stdio.h>
#include <string.h>

int main() {
	printf("text searching cli in C\n");

	int max_user_in_lim = 500;
	char user_input[max_user_in_lim];
	fgets(user_input, max_user_in_lim, stdin);
	printf("User input: %s", user_input);

	if (strcmp(user_input, "")) {
		fprintf(stderr, "ERROR: You must input something!\n");
		return 1;
	}

	return 0;
}
