#include <stdio.h>


int main() {
	int x = 5;

	if (x == 2) {
		printf("sadf");
	} else if (x == 5) {
		printf("fdsa");
	} else if (x == 6) {
		printf("2wqre");
	} else {
		printf("gfh");
	}
	
	switch(x) {
		case 1: printf("rete");
		case 2: printf("sadf"); break;
		case 5: printf("fsdafsa"); break;
		default: printf("tert"); break;
	}

	for (int i = 0; i < 10; ++i) {
		if (i == 3) continue;
		printf("%d\n", i);
		if (i == 5) break;
	}


}
