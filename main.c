#include "learning.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	// printf("sorting an array in C\n");
	// int myarr[7] = {7, 5, 6, 3, 4, 1, 2};
	// int myarr_size = sizeof(myarr) / sizeof(myarr[0]);
	//
	// printf("before sort:");
	// print_arr(myarr, myarr_size);
	// printf("\n");
	//
	// quicksortarr(myarr, myarr_size);
	//
	// printf("after:");
	// print_arr(myarr, myarr_size);
	// printf("\n");
	// print_line_break();
	//
	// open_read_print("input.txt");
	//
	// printnclear();
	//
	// system("git status");
	//
	// // void get_min_max_int_from_inputs();
	// // get_min_max_int_from_inputs();
	//
	// // void simple_guess_game();
	// // simple_guess_game();
	//
	// printnclear();

	test_reversing_strings();

	return 0;
};

void get_min_max_int_from_inputs() {
	int first = 1, min, max, val;
	printf("Enter numbers then use ctrl+D to stop\n");
	printf(": ");
	while (scanf("%d", &val) != EOF) {
		if (first || val < min) {
			min = val;
		} else if (first || val > max) {
			max = val;
		}
		first = 0;
	}
	printf("min: %i, max: %i\n", min, max);
};

void simple_guess_game() {
	int guess, val = 54;
	printf("Enter your guess\n");
	while (scanf("%d", &guess) != EOF) {
		if (guess > val) {
			printf("Your guess is too high!\n");
		} else if (guess < val) {
			printf("Your guess is too low!\n");
		} else {
			printf("You've guess successfully! \n");
			break;
		}
	}
};
