dev:
	gcc -Wall *.c -o learnc
	./learnc

text_search:
	gcc -Wall ./projects/cli_text_search/*.c -o text_search
	./text_search

.PHONY: dev, text_search
