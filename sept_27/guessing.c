#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define TARGET 42

int main() {
	srand(time(NULL));
	int TARGET = rand() % 100 + 1;
	int guess = 0;
	int tries = 0;
	
	while (guess != TARGET) {
		++tries;
		printf("Tippelj egy szamot: ");
		scanf("%d", &guess);
		if (guess < TARGET) {
			printf("Tul kicsi\n");
		} else if(guess > TARGET) {
			printf("Tul nagy\n");
		} else {
			printf("Eltalaltad %d probalkozasbol!\n", tries);
		}
	}

	return 0;
}

