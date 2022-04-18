/*
empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int element;
int MAX;

typedef struct { //ť Ÿ��
	element * data;
	int front, rear;
}QueueType;

//�ʱ�ȭ
void init_queue(QueueType* q) {
	q->front = q->rear = -1;
	q->data = (element*)malloc(sizeof(element) * MAX);
}

// ���� ���� ���� �Լ�
int is_empty(QueueType* q) {
	return(q->front == q->rear);
}

//���� �Լ�
void push(QueueType* q, element item) {
	q->data[++(q->rear)] = item;
}

//�����Լ�
element pop(QueueType* q) {
	if (is_empty(q))
		return -1;

	else {
		return q->data[++(q->front)];
	}
}

// �����Լ�
element front(QueueType* q) {
	if (is_empty(q))
		return -1;
	else
		return q->data[q->front+1];
}

// �����Լ�
element back(QueueType* q) {
	if (is_empty(q))
		return -1;
	else
		return q->data[q->rear];
}

// �����Լ�
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