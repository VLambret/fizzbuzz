#include <stdio.h>
#include "fizzbuzz.h"

int main() {
	int i;
	char buffer[128];
	for (i = 1; i <= 100 ; i++) {
		fizzbuzz(i, buffer);
		printf("%s\n", buffer);

	}

	return 0;
}
