#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	if (num2 == 1)
		return 0;

	if (num1 == 1)
		num1++;
	int* arr = (int*)malloc(sizeof(int) * num2 - num1 + 1);
	int count;
	int k = 0;
	int pnum1 = num1;
	int num2_sqrt = sqrt(num2);
	int* sqrt_arr = (int*)malloc(sizeof(int) * num2_sqrt);

	for (int i = 0; i < num2 - num1 + 1; i++)
		arr[i] = pnum1++;

	for (int i = 2; i <= num2_sqrt; i++) {
		count = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				count++;
		}
		if (count == 2)
			sqrt_arr[k++] = i;
	}

	for (int i = 0; i < k; i++) {
		if (sqrt_arr[i] >= num1) printf("%d\n", sqrt_arr[i]);
	}

	for (int i = 0; i < num2 - num1 + 1; i++) {
		int index = 0;
		while (1) {
			if (index >= k) {
				printf("%d\n", arr[i]);
				break;
			}
			if (arr[i] % sqrt_arr[index] == 0)
				break;
			else
				index++;
		}
	}
	free(arr);
	free(sqrt_arr);
	return 0;
}