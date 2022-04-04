#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 51

	typedef char element;
	typedef struct {
		element data[MAX];
		int top;
	}stacktype;

	void init_stack(stacktype * s) {
		s->top = -1;
	}

	void push(stacktype * s) {
		++(s->top);
	}

	void pop(stacktype * s) {
		--s->top;
	}

	int main(void) {
		int num;
		scanf("%d", &num);
		stacktype str_arr;

		for (int i = 0; i < num; i++) {
			scanf("%s", str_arr.data);	
			init_stack(&str_arr);
			for (int j = 0; j < strlen(str_arr.data); j++) {
				if (str_arr.data[j] == '(')
					push(str_arr.data);
				else if (str_arr.data[j] == ')' && str_arr.top == -1) {
					str_arr.top = 0;
					break;
				}
				else if (str_arr.data[j] == ')')
					pop(str_arr.data);
			}
			if (str_arr.top == -1)
				printf("YES\n");
			else
				printf("NO\n");
		}
		return 0;
	}