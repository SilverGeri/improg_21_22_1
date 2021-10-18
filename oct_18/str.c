#include <stdio.h>
#include <string.h>

int main() {
	char buffer[20] = {'\0'};
	while (strcmp("end", buffer) != 0) {
		scanf("%s", buffer);
		// scanf("% [^\n]", buffer);
		if (strlen(buffer) > 5) {
			printf("long: %s\n", buffer);
		}
		if (strchr(buffer, 'x')) {
			printf("contains x: %s\n", buffer);
		}
	}

	return 0;
}
