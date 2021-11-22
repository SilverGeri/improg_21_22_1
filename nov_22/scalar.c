#include <stdio.h>

int scalar(int* lhs, int* rhs, int length) {
	int result = 0;
	for (int i = 0; i < length; ++i) {
		result += lhs[i] * rhs[i];
	}

	return result;
}

int main() {
	int left[3] = {1, 2, 3};
	int right[3] = {4, 5, 6};

	printf("scalar: %d\n", scalar(left, right, 3));

	return 0;
}
