#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int element;

typedef struct {
	element * data;
	int capacity;
	int topn;
}stacktype;

void init_stack(stacktype * s, int num) {
	s->topn = -1;
	s->capacity = num;
	s->data = (element*)malloc(sizeof(element) * num);
}

void push(stacktype * s, int sw){
	s->data[++s->topn] = sw;
	
}

void pop(stacktype* s) {
	if (s->topn == -1)
		printf("-1\n");
		
	else
		printf("%d\n", s->data[s->topn--]);
}

void empty(stacktype* s) {
	if (s->topn == -1)
		printf("1\n");
	else
		printf("0\n");
}

void top(stacktype* s) {
	if (s->topn == -1)
		printf("-1\n");

	else
		printf("%d\n", s->data[s->topn]);
}

int main(void) {
	int num;
	scanf("%d", &num);
	stacktype s;
	init_stack(&s, num);

	for (int i = 0; i < num; i++) {
		char str[8];
		scanf("%s", str);
		int n;
		if (!(strcmp(str, "push"))) {
			scanf("%d", &n);
			push(&s, n);
		}

		else if (!(strcmp(str, "pop")))
			pop(&s);

		else if (!(strcmp(str, "size")))
			printf("%d\n", s.topn + 1);

		else if (!(strcmp(str, "empty")))
			empty(&s);

		else if (!(strcmp(str, "top")))
			top(&s);
	}

	return 0;
}