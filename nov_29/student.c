#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Type {BSc, MSc, PhD}; // BSc = 0, MSc = 1, PhD = 2
typedef enum Type Type;

struct Student {
	int id;
	int age;
	double avg;
	Type type;
	union data {
		int lecture_count;
		double kredit_index;
		char favourite_char;
	} data;
};
typedef struct Student Student;

Student* student_init(Type t) {
	Student* s = (Student*)malloc(sizeof(Student));
	s->id = rand() % 10000;
	s->age = rand() % 15 + 10;
	s->avg = rand() % 500 / 100.0;
	s->type = t;
	if (t == BSc) {
		s->data.lecture_count = 5;
	} else if (t == MSc) {
		s->data.kredit_index = 3.24;
	} else if (t == PhD) {
		s->data.favourite_char = 'x';
	}
	return s;
}

void print_student(const Student* const s) {
	printf("student id: %d, avg: %f, age: %d\n", s->id, s->avg, s->age);
}

Student* max_avg(Student** arr, unsigned length) {
	if (length == 0) return NULL;
	Student* retval = arr[0];
	for (unsigned i = 1; i < length; ++i) {
		if (arr[i]->avg > retval->avg) {
			retval = arr[i];
		}
	}

	return retval;
}

int main() {
	srand(time(NULL));
	Student s;
	s.id = 5;
	s.avg = 4.3;
	s.age = 25;

	printf("student id: %d, avg: %f, age: %d\n", s.id, s.avg, s.age);
	printf("student %ld, int %ld, double %ld\n", sizeof(Student), sizeof(int), sizeof(double));

	Student* arr[10];
	for (int i = 0; i < 10; ++i) {
		arr[i] = student_init(BSc);
		print_student(arr[i]);
	}

	Student* max_avg_student = max_avg(arr, 10);
	printf("max: %f\n", max_avg_student->avg);
	printf("data: %f\n", max_avg_student->data.kredit_index);

	for (int i = 0; i < 10; ++i) {
		free(arr[i]);
		printf("%p\n", arr[i]);
		arr[i] = NULL;
		// free(arr[i]);
	}

	/// unnecessary
	Student* x;
	if (x != NULL) {
		free(x);
	}
	////

	// Student** arr2 = (Student**)malloc(10 * sizeof(Student*));

	return 0;
}
