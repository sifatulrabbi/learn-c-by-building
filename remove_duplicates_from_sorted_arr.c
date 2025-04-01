#include <stdio.h>

void printarr(int *arr, int s) {
	for (int i = 0; i < s; i++) {
		printf("%i, ", arr[i]);
	}
	printf("\n");
}

int removeDuplicates(int *nums, int s) {
	int i = 0, occur = 1;
	for (int j = 1; j < s; j++) {
		if (nums[i] != nums[j]) {
			i++;
			occur = 1;
			continue;
		}

		occur++;
		if (occur > 2) {
			occur = 1;
			printf("More than 2 occurrences found at %d for %d\n", j, nums[j]);
			printf("before: ");
			printarr(nums, s);
			int curridx = j, k;
			for (k = j + 1; k < s; k++) {
				if (nums[k] == nums[j]) {
					continue;
				}
				nums[curridx] = nums[k];
				curridx++;
			}
			printf("after: ");
			printarr(nums, s);
		} else {
			i++;
		}
	}
	return i + 1;
};

int main() {
	int t3[6] = {1, 1, 1, 2, 2, 3};
	printf("testing: ");
	printarr(t3, 6);
	printf("k=%i\n", removeDuplicates(t3, 6));
	printf("solved: ");
	printarr(t3, 6);
	printf("\n");

	int t4[9] = {0, 0, 1, 1, 1, 1, 2, 3, 3};
	printf("testing: ");
	printarr(t4, 9);
	printf("k=%i\n", removeDuplicates(t4, 9));
	printf("solved: ");
	printarr(t4, 9);
	printf("\n");

	return 0;
}
