#include <stdio.h>


int main() {
	int x = 5;
	// int x = 5;  // error
	printf("%d\n", x); // fine

	if (x > 7) {
		printf("%d\n", x); // fine
		int y = 6;
		printf("%d\n", y); // fine
	} else {
		// printf("%d\n", y); // error
		int x = 7;
		printf("%d\n", x);
	}
	printf("%d\n", x);

	{
		int age = 5;
		// ....
		{
			// int asd
		}
		// asd is not valid here
	}

	// age is not valid here

	// printf("%d\n", y); // error

	return 0;
}
