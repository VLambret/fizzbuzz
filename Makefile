all : fizzbuzz fizzbuzz_test

test : fizzbuzz_test
	./$<

clean :
	rm -f fizzbuzz fizzbuzz_test

fizzbuzz : main.c fizzbuzz.c fizzbuzz.h
	gcc -o $@ -Wall -Werror main.c fizzbuzz.c

fizzbuzz_test : main_test.c fizzbuzz.c fizzbuzz.h
	gcc -o $@ -Wall -Werror -DUNITY_OUTPUT_COLOR main_test.c fizzbuzz.c unity_src/unity.c
