#include <stdio.h>
#include <stdlib.h> // atoi

// ./a.out 12 122 43
// ["12", "122", "43"]
int main(int argc, char* argv[]) {
	FILE* file = fopen("even_numbers.txt", "w");

	for (int i = 0; i < argc; ++i) {
	        // printf("%s\n", argv[i]);
		int val = atoi(argv[i]);
		if (val % 2 == 0) {
			fprintf(file, "%d\n", val);
		}
	}

	fclose(file);
	return 0;
}
