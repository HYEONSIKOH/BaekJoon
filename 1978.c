#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	scanf("%d",&num);
	int* arr = (int*)malloc(sizeof(int) * num);
	int count;
	int a = 0;

	for (int i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < num; i++) {
		count = 0;
		for (int j = 1; j <= arr[i]; j++) {
			if (arr[i] % j == 0)
				count++;
		}
		if (count == 2)
			a++;
	}

	free(arr);
	printf("%d", a);
	return 0;
}