#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Box {
	int weight;
	struct Box* next;
};

typedef struct Box Box;

Box* top;

void initialize() {
	top = NULL;
}

bool isEmpty() {
	if (top == NULL) return true;

	return false;
}

int peek() {
	if (isEmpty()) return 0;

	return top->weight;
}

void push(int weight) {
	Box* new_box = (Box*)malloc(sizeof(Box));
	// if (new_box == NULL)  // nem sikerult lefoglalni a memoriat
	new_box->weight = weight;
	new_box->next = top;
	top = new_box;
}

int pop() {
	if (isEmpty()) {
		return 0;
	}
	int retval = top->weight;
	Box* to_remove = top;
	top = top->next;
	free(to_remove);

	return retval;
}

void copyTop() {
	if (isEmpty()) return;
	push(peek());
}

void copyTopByPieces() {
	if (isEmpty()) return;

	Box* newBox = (Box*)malloc(sizeof(Box));
	//newBox->weight = top->weight;
	newBox->weight = peek();
	newBox->next = top;
	top = newBox;
}


void printList() {
	Box* current = top;
	while (current != NULL) {
		printf("%d -> ", current->weight);
		current = current->next;
	}

	printf("NULL\n");
}


void printListWithAddress(Box* box) {
	Box* current = box;
	while (current != NULL) {
		printf("%d %p -> ", current->weight, current);
		current = current->next;
	}

	printf("NULL\n");
}

Box* deep_copy(Box* box) {
	if (box == NULL) return NULL;
	Box* retval = (Box*)malloc(sizeof(Box));
	retval->weight = box->weight;
	retval->next = deep_copy(box->next);
	return retval;
}


int main() {
	initialize();
	push(5);
	push(3);
	push(23);
	push(4);
	push(5);
	push(23);
	push(1);
	copyTop();
	copyTopByPieces();

	printList();

	printf("top: %p\n", top);
	Box* copy = top;
	printf("copy: %p\n", copy);

	printListWithAddress(top);
	printListWithAddress(copy);
	copy = deep_copy(top);
	printListWithAddress(copy);


	return 0;
}
