#include <stdio.h>

// int swap_counter = 0;

void swap(int* left, int* right) {
	int temp = *left;
	*left = *right;
	*right = temp;

	static int swap_counter = 0;
	++swap_counter;
	printf("%d\n", swap_counter);
}

int main() {
	int x = 6, y = 7;
	swap(&x, &y);
	swap(&x, &y);
	swap(&x, &y);
	swap(&x, &y);
	swap(&x, &y);
	swap(&x, &y);

	return 0;
}
