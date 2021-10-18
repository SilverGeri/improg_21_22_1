#include <stdio.h>

int main() {
	int x = 5;
	int y = 6;
	int *p;

	*p = 6; // change value that's stored at the pointed memory adress

	p = &y; // setting the pointer to another memory address
	return 0;
}
