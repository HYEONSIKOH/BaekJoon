#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 52
typedef struct {
	double sum[MAX];
	int top;
}stacktype;

void init_stack(stacktype* s) {
	s->top = -1;
}

void push_f(stacktype* s, double c) {
	s->sum[++s->top] = c;
}
double pop_f(stacktype* s) {
	return s->sum[(s->top)--];
}

double peak_f(stacktype* s) {
	return s->sum[s->top];
}

double eval(char* s,int *arr) { // 후위연산을 계산하는 함수
	double op1, op2, value = 0;
	int len = strlen(s);

	stacktype k;
	init_stack(&k);

	for (int i = 0; i < len; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			value = (double)(arr[s[i] - 'A']);
			push_f(&k, value);
		}

		else {
			op2 = pop_f(&k);
			op1 = pop_f(&k);

			switch (s[i]) {
			case '+': push_f(&k, op1 + op2); break;
			case '-': push_f(&k, op1 - op2); break;
			case '*': push_f(&k, op1 * op2); break;
			case '/': push_f(&k, op1 / op2); break;
			}
		}
	}
	return pop_f(&k);
}

int main(void) {
	double result;

	int num;
	scanf("%d", &num);
	int* arr = malloc(sizeof(int) * num);

	char str[MAX];
	scanf("%s", str);

	for (int i = 0; i < num; i++) scanf("%d", &arr[i]);
	
	result = eval(str, arr);

	printf("%0.2lf", result);

	free(arr);
	return 0;
}