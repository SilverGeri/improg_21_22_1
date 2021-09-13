#include <stdio.h>

int main() {
	// printf("\"Hello\"\n\"world!\"\n");


	int x = 0;
	printf("Adj meg egy egesz szamot: ");
	scanf("%d", &x);
	for (int i = 1; i <= x; ++i) {
		if (x % i == 0) {
			printf("%d osztja %d-t\n", i, x);
		}
	}

	return 0;
}
