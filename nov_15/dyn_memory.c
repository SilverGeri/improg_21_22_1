#include <stdio.h>
#include <stdlib.h> // malloc, free
#include <string.h>


char* copy_str(char* original) {
	char* result = (char*)malloc((strlen(original) + 1) * sizeof(char));
	strcpy(result, original);

	return result;
}

char* reverse(char* original) {
	unsigned length = strlen(original);
	char* result = (char*)malloc((length + 1) * sizeof(char));
	
	for (unsigned i = 0; i < length; ++i) {
		result[length-i-1] = original[i];
	}
	result[length] = '\0';

	return result;
}

int main(int argc, char* argv[]) {
	char buffer[20];
	scanf("%s", buffer);

	char* copy = copy_str(buffer);
	char* reversed_copy = reverse(buffer);
	printf("copy is: %s\n", copy);
	printf("reverse is: %s\n", reversed_copy);

	printf("give me 5 words!\n");
	char* words[5];
	for (int i = 0; i < 5; ++i) {
		scanf("%s", buffer);
		words[i] = copy_str(buffer);
	}


	for (int i = 4; i >= 0; --i) {
		printf("%s\n", words[i]);
	}

	free(copy);
	free(reversed_copy);

	for (int i = 0; i < 5; ++i) {
		free(words[i]);
	}

	printf("dynamic sized words\n");
	int count = atoi(argv[1]);
	// char* dyn_words[count]; // we don't know count in compile time
	char** dyn_words = (char**)malloc(count * sizeof(char*));
	for (int i = 0; i < count; ++i) {
		scanf("%s", buffer);
		dyn_words[i] = copy_str(buffer);
	}

	printf("reversed order:\n");

	for (int i = count-1; i >= 0; --i) {
		printf("%s\n", dyn_words[i]);
		free(dyn_words[i]);
	}
	free(dyn_words);

	
	scanf("%s", buffer);
	int current_count = 0;
	char** dyn_words_till_end = NULL;
	while (strcmp(buffer, "END") != 0) {
		++current_count;
		dyn_words_till_end = realloc(dyn_words_till_end, current_count * sizeof(char*));
		dyn_words_till_end[current_count-1] = copy_str(buffer);
		scanf("%s", buffer);
	}

	// same as before
	// todo: free
	for (int i = current_count-1; i >= 0; --i) {
		printf("%s\n", dyn_words_till_end[i]);
		free(dyn_words_till_end[i]);
	}
	free(dyn_words_till_end);


	return 0;
}

