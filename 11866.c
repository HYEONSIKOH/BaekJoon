#include <stdio.h>
#include <stdlib.h>

int size;
typedef int element;

// ť Ÿ��
typedef struct {
	element* data;
	int  front, rear;
} QueueType;

// �ʱ�ȭ �Լ�
void init_queue(QueueType* q) {
	q->front = q->rear = 0;
	q->data = (element*)malloc(sizeof(element) * size + 1);
}

// ���� �Լ�
void enqueue(QueueType* q, element item) {
	q->rear = (q->rear + 1) % size;
	q->data[q->rear] = item;
}

// ���� �Լ�
element dequeue(QueueType* q) {
	q->front = (q->front + 1) % size;
	return q->data[q->front];
}

// ���� �Լ�
element peak(QueueType* q) {
	return q->data[q->front];
}

int main(void) {
	scanf("%d", &size);
	int count;
	scanf("%d", &count);
	int num = 1;
	
	QueueType q;
	init_queue(&q);

	for (int i = 1; i <= size; i++) enqueue(&q, i);
	printf("<");
	while (num++ <= size) {
		for (int i = 1; i <= count; i++) {
			if (i == count)
				printf("%d", dequeue(&q));
			else
				enqueue(&q, dequeue(&q));
		}
		if (num == size+1)
			break;
		else
			printf(", ");
	}
	printf(">");
	free(q.data);
	return 0;
}