#include <stdio.h>

int main() {
	printf("%ld\n", sizeof(int)); // 11111111 11111111 11111111 11111111
	int x = 2147483647; // 2^31
	// x = x + 1;
	printf("%d\n", x);

	return 0;
}
