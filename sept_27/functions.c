#include <stdio.h>

int a(int value, int count);
int b(int value, int count);

int a(int value, int count) {
	value /= 2;
	if (value > 0) {
		return b(value, ++count);
	}
	return ++count;
}

int b(int value, int count) {
	value -= 1;
	if (value > 0) {
		return a(value, ++count);
	}
	return ++count;
}

int main() {
	int start = 0;
	scanf("%d", &start);
	printf("%d iteraciobol ertuk el a 0-t\n", a(start, 0));

	return 0;
}
