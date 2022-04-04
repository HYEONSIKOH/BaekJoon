#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct {
	element * data;
	int capacity;
	int top;
}stacktype;

void init_stack(stacktype * s, int num) {
	s->top = -1;
	s->capacity = num;
	s->data = (element*)malloc(sizeof(element) * num);
}

void push(stacktype * s, int sw){
	s->data[++s->top] = sw;
}

void pop(stacktype* s) {
	--s->top;
}

int main(void) {
	int num;
	scanf("%d", &num);
	int sw;
	stacktype arr;
	init_stack(&arr, num);
	
	for (int i = 0; i < num; i++) {
		scanf("%d", &sw);
		if (sw != 0)
			push(&arr, sw);
		else
			pop(&arr);
	}
	int sum = 0;
	for (int i = 0; i <= arr.top; i++)
		sum += arr.data[i];
	
	printf("%d", sum);
	free(arr.data);
	return 0;
}