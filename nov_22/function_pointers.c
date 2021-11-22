#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int multiply(int a, int b) {
	return a * b;
}

int max(int a, int b) {
	return a < b ? b : a;
}

int execute(int* arr, int length, int (*f)(int, int), int value) {
	for (int i = 0; i < length; ++i) {
		value = (*f)(value, arr[i]);
	}

	return value;
}

int main() {
	int arr[] = {2, 4, 5};
	
	// int sum = 0;
	// for(int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
	// 	sum += arr[i];
	// }
	
	int (*f)(int, int) = multiply;

	printf("%d\n", (*f)(5, 6));

	int sum = execute(arr, sizeof(arr) / sizeof(int), add, 0);
	printf("sum: %d\n", sum);
	
	int product = execute(arr, sizeof(arr) / sizeof(int), multiply, 1);
	printf("product: %d\n", product);

	// works only for not empty arrays
	printf("max: %d\n", execute(arr, sizeof(arr) / sizeof(int), max, arr[0]));

	// C++ lambda
	// int sum = execute(arr, sizeof(arr) / sizeof(int), [](int a, int b) {return a + b;}, 0);

	return 0;
}
