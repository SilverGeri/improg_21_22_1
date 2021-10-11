#include <stdio.h>

void swap(int* first, int* second) {
	int temp = *first;
	*first = *second;
	*second = temp;
}

int* undef() {
	int x = 5;
	return &x;
}


int main() {
	int x = 1;
	int y = 2;

	printf("x: %d, y: %d\n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d\n", x, y);

	int arr[2] = {1, 2};
	printf("array: %p, %p, %p\n", arr, &arr[0], &arr[1]);
	swap(&arr[0], &arr[1]);
	printf("first: %d, second: %d\n", arr[0], arr[1]);

	int *p = &x;
	int **p2 = &p;
	int ***p3 = &p2;

	printf("x: %d\n", x);
	***p3 = 5;
	printf("x: %d\n", x);


	// printf("%d\n", *undef()); // undefined behaviour, undef's x does not exist here
	return 0;
}
