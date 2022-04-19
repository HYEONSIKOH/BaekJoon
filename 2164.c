#include <stdio.h>
#include <stdlib.h>

typedef int element;

int size;

// 큐 타입
typedef struct {
	element* data;
	int  front, rear;
} QueueType;

// 초기화 함수
void init_queue(QueueType* q) {
	q->front = q->rear = 0;
	q->data = (element*)malloc(sizeof(element) * size + 1);
}

// 삽입 함수
void enqueue(QueueType* q, element item) {
	q->rear = (q->rear + 1) % size;
	q->data[q->rear] = item;
}

// 삭제 함수
element dequeue(QueueType* q) {
	q->front = (q->front + 1) % size;
	return q->data[q->front];
}

// 참조 함수
element peak(QueueType* q) {
	return q->data[q->front];
}

int main(void) {
	scanf("%d", &size);
	QueueType q;
	init_queue(&q);

	if (size == 1) {
		printf("1");
		return 0;
	}

	for (int i = 1; i <= size; i++)
		enqueue(&q, i);

	while (q.rear - q.front != 1) {
		dequeue(&q);
		enqueue(&q, dequeue(&q));
	}

	printf("%d", peak(&q));

	free(q.data);
	return 0;
}


