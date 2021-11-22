#include <stdio.h>

#define MAX(a, b) a < b ? b : a

#define MAX_BUFFER_SIZE 25


int main() {
	printf("%d\n", MAX(7, 6));

	int x = 5;
	int y = 6;

	printf("%d\n", MAX(++x, ++y)); // ++x < ++y ? ++y : ++x

	printf("%d, %d\n", x, y);

	char buffer[MAX_BUFFER_SIZE];

	return 0;
}
