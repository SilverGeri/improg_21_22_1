#include <stdio.h>


int main() {
	int x = 5;
	int* ptr = &x;

	printf("%p\n", ptr);
	int* ptr2 = ptr + 1;
	printf("%p\n", ptr2);
	// printf("%d\n", *ptr2); // undefined behaviour

	printf("difference: %ld\n", ptr2 - ptr);

	return 0;
}
