#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int* arr = malloc(sizeof(int) * num);
	int max = 0, min = 1000001;

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);

		if (min > arr[i])
			min = arr[i];

		if (max < arr[i])
			max = arr[i];
	}

	printf("%d", min * max);
	free(arr);
	return 0;
}