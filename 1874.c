#include <stdio.h>
#include <string.h>
typedef int element;

typedef struct {
	element * data;
	int capacity;
	int top;
}stacktype;

void init_stack(stacktype* s, int num) {
	s->capacity = num;
	s->top = -1;
	s->data = (element *)malloc(sizeof(element) * s->capacity);
}

char push(stacktype* s, int n) {
	s->data[++s->top] = n;
	return '+';
}

char pop(stacktype* s) {
	--s->top;
	return '-';
}

int peak(stacktype* s) {
	return s->data[s->top];
}

int main(void) {
	stacktype s;
	int num;
	scanf("%d", &num);
	init_stack(&s, num);
	int sw;
	int k = 1;
	char * str = malloc(sizeof(char)*200000);
	int n = 0;
	int* arr = malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++)
		scanf("%d", &arr[i]);
		

	for (int i = 0; i < num; i++) {
		sw = arr[i];
		if (i == 0) for (; k <= sw; k++) str[n++] = push(&s, k);
		
		if (peak(&s) < sw){
			for (; k <= sw; k++) 
				str[n++] = push(&s, k);

			if (sw == peak(&s))
				str[n++]=pop(&s);
		}

		else if (sw == peak(&s))
			str[n++] = pop(&s);

		else if (sw < peak(&s)) {
			printf("NO");
			return 0;
		}
	}

	for (int i = 0; i < n; i++)
		printf("%c\n", str[i]);

	free(s.data);
	free(str);
	return 0;
}