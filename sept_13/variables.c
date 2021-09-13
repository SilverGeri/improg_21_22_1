#include <stdio.h>

void foo() {
	int x = 0;
	printf("%d\n", x);

	if (x % 2 == 0) {
		printf("x paros\n");
	} else {
		printf("x paratlan\n");
	}

	if (x > 0) {
		printf("x pozitiv\n");
	} else if (x < 0) {
		printf("x negativ\n");
	} else {
		printf("x nulla\n");
	}
}

int main() {
	//int x;
	//printf("%d\n", x);
	foo();

	return 0;
}

