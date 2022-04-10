#include <stdio.h>
#include <string.h>
#define MAX 100
typedef char element;

typedef struct {
	char data[100];
	int top;
}stacktype;

void init_stack(stacktype* s) {
	s->top = -1;
}

int is_full(stacktype* s) {
	return (s->top == 99);
}

int is_empty(stacktype* s) {
	return (s->top == -1);
}

void push(stacktype* s, char n) {
	s->data[++s->top] = n;
}

element pop(stacktype* s) {
		return s->data[(s->top)--];
}

char peak(stacktype* s) {
	return s->data[s->top];
}

int check_matching(char* in,int top) { //오류 체크하는 함수
	stacktype s;
	char ch, open_ch;
	init_stack(&s);

	for (int i = 0; i <= top; i++) {
		ch = in[i];
		switch (ch) {
		case '(': case'[':case'{':
			push(&s, ch);
			break;

		case ')': case']':case'}':
			if (is_empty(&s)) return 0;
			else {
				open_ch = pop(&s);
				if ((open_ch == '(' && ch != ')') || (open_ch == '[' && ch != ']'))
					return 0;
			}
			break;
		}
	}

	if (!is_empty(&s)) return 0;

	return 1;
}

int main(void) {
	char str[MAX];

	stacktype s;
	gets(str);
	while (str[0] != '.') {
		init_stack(&s);
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == '(' || str[i] == '[' || str[i] == ')' || str[i] == ']') push(&s, str[i]);
		}

		if (check_matching(s.data,s.top) == 1)
			printf("yes\n");
		else {
			printf("no\n");;
		}
		
		gets(str);
	}
	return 0;
}