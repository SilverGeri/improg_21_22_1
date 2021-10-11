#include <stdio.h>

void inc_bad(int x) {
	++x;
	printf("incremented value: %d\n", x);
}

void inc(int* ptr) {
	++*ptr;
}

int main() {
	int x = 5; // creates sizeof(int) variable on stack
	int *ptr = &x; // creates pointer sized variable that contains a memory address (address of x)

	printf("x: %d, ptr: %d\n", x, *ptr);

	x = 6;
	printf("x: %d, ptr: %d\n", x, *ptr);

	*ptr = 7;
	printf("x: %d, ptr: %d\n", x, *ptr);
	printf("address of x: %p, value of ptr: %p\n", &x, ptr);

	int y = 1;
	ptr = &y;
	printf("x: %d, ptr: %d\n", x, *ptr);
	printf("address of x: %p, address of y: %p, value of ptr: %p\n", &x, &y, ptr);

	printf("value of y: %d\n", y);
	inc_bad(y);
	printf("value of y: %d\n", y);
	inc(&y);
	printf("value of y: %d\n", y);

	return 0;
}
