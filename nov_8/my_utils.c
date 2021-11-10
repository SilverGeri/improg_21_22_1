#include "my_utils.h"

int* bigger(int* left, int* right) {
	if (*right > *left) {
		return right;
	}

	return left;
}

// error
// int main() {
// 	return 0;
// }
