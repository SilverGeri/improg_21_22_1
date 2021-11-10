#include "my_utils.h"
#include "my_utils.h"
#include <stdio.h>

int bar();

int main() {
	int foo() { return 5; }
	printf("%d\n", foo());

	int x = 5;
	int y = 7;

	printf("x: %p\ny: %p\nbigger: %p\n", &x, &y, bigger(&x, &y));

	return 0;
}

void asdf(int a, int a) {

}

int bar() {
	return 5;// foo(); // error, not visible here
}
