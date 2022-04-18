/*
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int element;
int MAX;

typedef struct { //큐 타입
	element * data;
	int front, rear;
}QueueType;

//초기화
void init_queue(QueueType* q) {
	q->front = q->rear = -1;
	q->data = (element*)malloc(sizeof(element) * MAX);
}

// 공백 상태 검출 함수
int is_empty(QueueType* q) {
	return(q->front == q->rear);
}

//삽입 함수
void push(QueueType* q, element item) {
	q->data[++(q->rear)] = item;
}

//삭제함수
element pop(QueueType* q) {
	if (is_empty(q))
		return -1;

	else {
		return q->data[++(q->front)];
	}
}

// 참조함수
element front(QueueType* q) {
	if (is_empty(q))
		return -1;
	else
		return q->data[q->front+1];
}

// 참조함수
element back(QueueType* q) {
	if (is_empty(q))
		return -1;
	else
		return q->data[q->rear];
}

// 참조함수
void size(QueueType* q) {
	printf("%d\n", q->rear - q->front);
}

int main(void) {
	scanf("%d", &MAX);
	QueueType s;
	init_queue(&s);

	for (int i = 0; i < MAX; i++) {
		char str[8];
		scanf("%s", str);
		int n;
		if (!(strcmp(str, "push"))) {
			scanf("%d", &n);
			push(&s, n);
		}

		else if (!(strcmp(str, "pop")))
			printf("%d\n",pop(&s));

		else if (!(strcmp(str, "size")))
			size(&s);

		else if (!(strcmp(str, "empty")))
			printf("%d\n",is_empty(&s));

		else if (!(strcmp(str, "front")))
			printf("%d\n",front(&s));

		else if (!(strcmp(str, "back")))
			printf("%d\n",back(&s));
	}

	free(s.data);
	return 0;
}