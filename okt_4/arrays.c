#include <stdio.h>

// how arrays are represented in memory
// [1,354,6546,54,23,32,2332]
// arr[n] = address of first element + n * sizeof(type)

// end of string is always \0
// called nullterminated string

int sum(int* arr, int size) {
	// printf("%ld\n", sizeof(arr));
	// printf("%p\n", arr);
	int retval = 0;
	for (int i = 0; i < size; ++i) {
		retval += arr[i];
	}

	return retval;
}

int strlen2(char* str) {
	int retval = 0;
	while(str[retval] != '\0') {
		++retval;
	}

	return retval;
}

// case insensitive
int strcmp2(char* str1, char* str2) {
	int size1 = strlen2(str1);
	int size2 = strlen2(str2);
	int i = 0;
	while (i < size1 && i < size2) {
		if (str1[i] < str2[i]) return -1;
		else if (str1[i] > str2[i]) return 1;
		else ++i;
	}
	if (size1 == size2) return 0; // same
	if (size1 < size2) return -1; // str1 is prefix of str2
	return 1;                     // str2 is prefix of str1
}


int main() {
	int arr[4] = {1,2,2,3};
	printf("sum is %d\n", sum(arr, sizeof(arr) / sizeof(int)));

	char str[] = "sadfsafdw sadf";
	char str2[] = "aasda";
	// char sdaf[]; // error
	printf("stlen of '%s' is %d\n", str, strlen2(str));

	printf("compare where second is before first: %d\n", strcmp2(str, str2));
	printf("compare where first is before second: %d\n", strcmp2(str2, str));
	printf("compare same strings: %d\n", strcmp2(str, str));

	return 0;
}

