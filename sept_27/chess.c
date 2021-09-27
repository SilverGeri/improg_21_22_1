#include <stdio.h>

int main() {
	printf("  ");
	for (int i=0; i < 8; ++i) {
		printf("%c ", i + 'A');
	}
	printf("\n");

	for (int i = 0; i < 8; ++i) {
		printf("%d", i+1);
		for (int j = 0; j < 8; ++j) {
			if((i+j) % 2 == 0) {
				printf("[]");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}
