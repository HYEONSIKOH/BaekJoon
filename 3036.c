#include <stdio.h>
#include <stdlib.h>
int max_div(int x, int y) {
	while (y != 0) {
		int r = x % y;
		x = y;
		y = r;
	}

	return x;
}

int main(void) {
	int num;
	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
		if (i != 0) {
			int terms = max_div(arr[0], arr[i]);
			int a = arr[0] / terms; //분자
			int b = arr[i] / terms; //분모

			printf("%d/%d\n", a ,b);
		}
	}

	free(arr);
	return 0;
}