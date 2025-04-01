run:
	gcc -Wall -Wextra *.c -o learnc.bin
	./learnc.bin

run-solve:
	gcc -Wall -Wextra ./remove_duplicates_from_sorted_arr.c -o solve.bin
	./solve.bin

.PHONY: run
