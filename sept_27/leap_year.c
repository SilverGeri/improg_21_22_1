#include <stdio.h>

int is_leap_year(int year){
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return 1;
			}
			return 0;
		}
		return 1;
	}

	return 0;
}

int main() {
	int year = 0;
	scanf("%d", &year);
	if (is_leap_year(year)) {
		printf("szokoev\n");
	} else {
		printf("nem szokoev\n");
	}

	return 0;
}

