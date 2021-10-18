#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		printf("provide a source file path!\n");
		return 1;
	}

	FILE* input = fopen(argv[1], "r");
	if (input == NULL) {
		printf("File does not exist\n");
		return 2;
	}

	int temp;
	int result = 0;
	while (fscanf(input, "%d\n", &temp) != EOF) {
		result += temp;
	}

	printf("sum is %d\n", result);

	return 0;
}
